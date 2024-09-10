#include "ClimbComponent.h"
#include "EngineUtils.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UClimbComponent::UClimbComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UClimbComponent::BeginPlay()
{
    Super::BeginPlay();
    FindClimbables();
}

void UClimbComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (activeLedge)
    {
        FVector CurrentLedgeLocation = activeLedge->GetActorLocation();
        
        CustomWallVelocity = (CurrentLedgeLocation - PreviousLedgeLocation) / DeltaTime;

        PreviousLedgeLocation = CurrentLedgeLocation;
    }
    
    if (!isClimbing)
    {
        FindNearestLedge();
    }
}


bool UClimbComponent::FindClimbables()
{
    controller = GetWorld()->GetFirstPlayerController();
    
    auto World = GetWorld();
    if (!World) return true;

    for (TActorIterator<AActor> It(World); It; ++It)
    {
        AActor* Actor = *It;
        if (Actor && Actor->ActorHasTag(FName("Climbable")))
        {
            LedgeActors.Add(Actor);
            GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, Actor->GetName());
        }
    }
    return false;
}

void UClimbComponent::FindNearestLedge()
{
    // Ensure the player can climb and is not already climbing
    if (!bCanClimb || LedgeActors.Num() == 0 || !controller || isClimbing)
        return;

    FVector TraceStart = controller->GetPawn()->GetActorLocation() + FVector(-15.0f, 0, 45.0f);
    FVector TraceEnd = TraceStart + controller->GetPawn()->GetActorForwardVector();

    FCollisionQueryParams Params;
    Params.AddIgnoredActor(controller);
    TArray<FHitResult> HitResults;

    if (GetWorld()->SweepMultiByChannel(HitResults, TraceStart, TraceEnd, FQuat::Identity, ECC_Pawn, FCollisionShape::MakeSphere(20.0f), Params))
    {
        DrawDebugSphere(GetWorld(), TraceStart, 10.0f, 12, FColor::Green, false, 1.0f);

        for (const FHitResult& HitResult : HitResults)
        {
            if (HitResult.GetActor() && HitResult.GetComponent())
            {
                AActor* HitActor = HitResult.GetActor();

                if (HitActor->ActorHasTag("Climbable"))
                {
                    isClimbing = true;
                    activeLedge = HitActor;
                    PreviousLedgeLocation = activeLedge->GetActorLocation();

                    FVector SurfaceNormal = HitResult.Normal;
                    InitialHitLocation = HitResult.Location;

                    FVector LocalClimbOffset = SurfaceNormal * 2.0f;
                    ClimbOffset = InitialHitLocation + LocalClimbOffset;

                    // Attach the character to the ledge
                    controller->GetPawn()->AttachToActor(activeLedge, FAttachmentTransformRules::KeepWorldTransform);

                    FVector ClimbLocation = ClimbOffset;
                    controller->GetPawn()->SetActorLocation(ClimbLocation);

                    DrawDebugSphere(GetWorld(), ClimbOffset, 10.0f, 12, FColor::Red, false, 1.0f);
                }
            }
        }
    }
}

void UClimbComponent::StopClimbing()
{
    if (isClimbing)
    {
        isClimbing = false;

        // Detach the player from the ledge
        controller->GetPawn()->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

        ACharacter* Character = Cast<ACharacter>(controller->GetPawn());
        if (Character)
        {
            Character->GetCharacterMovement()->Velocity = CustomWallVelocity;
            Character->GetCharacterMovement()->Velocity.Z = CustomWallVelocity.Z;
        }

        bCanClimb = false;
        GetWorld()->GetTimerManager().SetTimer(ClimbCooldownTimerHandle, this, &UClimbComponent::ResetClimbCooldown, 0.5f, false);
    }
}



void UClimbComponent::ResetClimbCooldown()
{
    bCanClimb = true;
}

