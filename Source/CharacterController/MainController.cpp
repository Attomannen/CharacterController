#include "MainController.h"
#include "DebugMacros.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values
AMainController::AMainController()
{
    PrimaryActorTick.bCanEverTick = true;

    bIsRunning = false;
    accelerationRate = 1000.0f;
    decelerationRate = 2000.0f;

    rotationInterpSpeed = 10.0f;
    LedgeDetectionDistance = 150.0f;
    LedgeCheckOffset = 50.0f; 
    ledgeMoveSpeed = 100.0f;  
}

void AMainController::BeginPlay()
{
    Super::BeginPlay();
    playerCamera = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
}

void AMainController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UpdateSpeed(DeltaTime);

    SmoothUpdateRotation(DeltaTime);

    if (bIsClimbingLedge)
    {
        SmoothMoveToLedge(DeltaTime);
        if (bIsMovingAlongLedge)
        {
            MoveAlongLedge(DeltaTime);
        }
    }
    else if (GetCharacterMovement()->IsFalling() && !bIsClimbingLedge)
    {
        LedgeGrab();
    }
    //DEBUG_BOOL("Is At Ledge: ", bIsAtLedge);
}


void AMainController::SmoothMoveToLedge(float DeltaTime)
{
    if (bIsClimbingLedge && !bIsAtLedge)
    {
        FVector CurrentLocation = GetActorLocation();
        FVector NewLocation = FMath::VInterpTo(CurrentLocation, ledgeTargetLocation, DeltaTime, 8.0f);
        
        SetActorLocation(NewLocation);

        if (FVector::Dist(NewLocation, ledgeTargetLocation) < 10.0f)
        {
            bIsAtLedge = true;
            SetActorLocation(ledgeTargetLocation);
            GetCharacterMovement()->Velocity = FVector::ZeroVector;
            GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);

            bIsMovingAlongLedge = (MoveAxisValue.X != 0.0f);
        }
    }
}

void AMainController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerController = Cast<APlayerController>(Controller);
    if (PlayerController)
    {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
        {
            Subsystem->AddMappingContext(InputMapping, 0);
        }
    }

    if (UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
    {
        Input->BindAction(moveAction, ETriggerEvent::Triggered, this, &AMainController::Move);
        Input->BindAction(lookAction, ETriggerEvent::Triggered, this, &AMainController::RotateCamera);
        Input->BindAction(jumpAction, ETriggerEvent::Triggered, this, &AMainController::Jump);
        Input->BindAction(moveAction, ETriggerEvent::Completed, this,  &AMainController::StopMove);
        Input->BindAction(runAction, ETriggerEvent::Started, this, &AMainController::StartRunning);
        Input->BindAction(runAction, ETriggerEvent::Completed, this, &AMainController::StopRunning);
    }
}


void AMainController::MoveAlongLedge(float DeltaTime)
{
    if (!bIsMovingAlongLedge) return;

    FVector MoveDirection = GetActorRightVector() * MoveAxisValue.X;

    FVector Start = GetActorLocation();
    FVector End = Start + MoveDirection * ledgeMoveSpeed * DeltaTime;

    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);

    if (!GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, QueryParams))
    {
        SetActorLocation(End);
    }
    else
    {
        bIsMovingAlongLedge = false;
    }
}

void AMainController::Move(const FInputActionValue& InputValue)
{
    MoveAxisValue = InputValue.Get<FVector2D>();

    if (bIsClimbingLedge)
    {
        bIsMovingAlongLedge = MoveAxisValue.X != 0.0f;
    }
    else if (PlayerController)
    {
        FRotator ControlRotation = PlayerController->GetControlRotation();
        FRotator YawRotation(0, ControlRotation.Yaw, 0);

        FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        MovementDirection = (ForwardDirection * MoveAxisValue.Y) + (RightDirection * MoveAxisValue.X);
        MovementDirection = MovementDirection.GetSafeNormal();

        if (MovementDirection.SizeSquared() > 0.0f && !bIsClimbingLedge)
        {
            AddMovementInput(MovementDirection, currentSpeed * GetWorld()->GetDeltaSeconds());
        }
    }
}
void AMainController::Jump()
{
    if (bIsClimbingLedge)
    {
        bIsClimbingLedge = false;
        GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
        GetCharacterMovement()->Velocity = FVector::ZeroVector;
        GetCharacterMovement()->GravityScale = 1.0f;

        StartLedgeGrabCooldown();
    }
    else
    {
        Super::Jump();
    }
}

void AMainController::LedgeGrab()
{
    if (!bCanGrabLedge)
    {
        return;
    }

    if (!GetCharacterMovement()->IsFalling())
    {
        return; 
    }

    FVector Velocity = GetCharacterMovement()->Velocity;
    if (FMath::Abs(Velocity.Z) > 20.0f)
    {
        return; 
    }

    FVector Start = GetActorLocation();
    FVector End = Start + GetActorForwardVector() * LedgeDetectionDistance;

    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(this);

    if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, QueryParams))
    {
        AActor* HitActor = HitResult.GetActor();
        if (HitActor && HitActor->ActorHasTag("WallMesh") && HitResult.bBlockingHit)
        {
            FVector ImpactPoint = HitResult.ImpactPoint;
            FVector WallNormal = HitResult.ImpactNormal;

            FVector OffsetFromWall = WallNormal * 20.0f;
            FVector LedgeLocation = ImpactPoint + FVector(0, 0, LedgeCheckOffset) + OffsetFromWall;

            ledgeTargetLocation = LedgeLocation;

            bIsClimbingLedge = true;
            GetCharacterMovement()->GravityScale = 0.0f;

            StartLedgeGrabCooldown();
        }
    }
}

void AMainController::StartLedgeGrabCooldown()
{
    bCanGrabLedge = false; 

    GetWorldTimerManager().SetTimer(LedgeGrabCooldownTimer, this, &AMainController::ResetLedgeGrabCooldown, LedgeGrabCooldown, false);
}

void AMainController::ResetLedgeGrabCooldown()
{
    bCanGrabLedge = true;
    bIsAtLedge = false;
}

void AMainController::UpdateSpeed(float DeltaTime)
{
    float targetSpeed = bIsRunning ? runSpeed : normalSpeed;

    if (MovementDirection.SizeSquared() > 0.0f && !bIsClimbingLedge) 
        currentSpeed = FMath::FInterpTo(currentSpeed, targetSpeed, DeltaTime, accelerationRate);
    else
        currentSpeed = FMath::FInterpTo(currentSpeed, 0.0f, DeltaTime, decelerationRate);
    
}
void AMainController::SmoothUpdateRotation(float DeltaTime)
{
    if (bIsRunning && !bIsClimbingLedge)
    {
        if (MovementDirection.SizeSquared() > 0.0f)
        {
            FRotator TargetRotation = MovementDirection.Rotation();
        
            FRotator NewRotation = FMath::RInterpTo(GetActorRotation(), TargetRotation, DeltaTime, rotationInterpSpeed);
            SetActorRotation(NewRotation);
        }
    }
    else if (!bIsClimbingLedge)
    {
        if (MovementDirection.SizeSquared() > 0.1f)
        {
            FRotator NewRotation = FMath::RInterpTo(GetActorRotation(), playerCamera->GetCameraRotation(), DeltaTime, rotationInterpSpeed/1.5f);
            SetActorRotation(FRotator(0, NewRotation.Yaw, 0));
        }
    }
}

void AMainController::StopMove()
{
    MoveAxisValue = FVector2D::ZeroVector;
    MovementDirection = FVector::ZeroVector;
}
void AMainController::StartRunning()
{
    bIsRunning = true;
    GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void AMainController::StopRunning()
{
    bIsRunning = false;
    GetCharacterMovement()->MaxWalkSpeed = 350.0f;
}