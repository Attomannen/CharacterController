// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values
ACharacterController::ACharacterController()
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

void ACharacterController::BeginPlay()
{
    Super::BeginPlay();
    playerCamera = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
}

void ACharacterController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    UpdateSpeed(DeltaTime);

    SmoothUpdateRotation(DeltaTime);

    if (bIsClimbingLedge)
    {
        SmoothMoveToLedge(DeltaTime);
    }
    else if (GetCharacterMovement()->IsFalling() && !bIsClimbingLedge)
    {
        LedgeGrab();
    }
    //DEBUG_BOOL("Is At Ledge: ", bIsAtLedge);
}


void ACharacterController::SmoothMoveToLedge(float DeltaTime)
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

void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
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
        Input->BindAction(moveAction, ETriggerEvent::Triggered, this, &ACharacterController::Move);
        Input->BindAction(lookAction, ETriggerEvent::Triggered, this, &ACharacterController::RotateCamera);
        Input->BindAction(jumpAction, ETriggerEvent::Triggered, this, &ACharacterController::Jump);
        Input->BindAction(moveAction, ETriggerEvent::Completed, this,  &ACharacterController::StopMove);
        Input->BindAction(runAction, ETriggerEvent::Started, this, &ACharacterController::StartRunning);
        Input->BindAction(runAction, ETriggerEvent::Completed, this, &ACharacterController::StopRunning);
    }
}

void ACharacterController::RotateCamera(const FInputActionValue& InputValue)
{
    FVector2D LookAxisValue = InputValue.Get<FVector2D>();

    AddControllerYawInput(LookAxisValue.X * rotationSpeed);  
    AddControllerPitchInput(-LookAxisValue.Y * rotationSpeed);
}

void ACharacterController::Move(const FInputActionValue& InputValue)
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

void ACharacterController::Jump()
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

void ACharacterController::LedgeGrab()
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
        if (HitActor && HitResult.bBlockingHit)
        {
            FVector ImpactPoint = HitResult.ImpactPoint;
            FVector WallNormal = HitResult.ImpactNormal;

            FVector OffsetFromWall = WallNormal * 2.0f;
            FVector LedgeLocation = ImpactPoint + FVector(0, 0, LedgeCheckOffset) + OffsetFromWall;

            ledgeTargetLocation = LedgeLocation;

            bIsClimbingLedge = true;
            GetCharacterMovement()->GravityScale = 0.0f;

            StartLedgeGrabCooldown();
        }
    }
}

void ACharacterController::StartLedgeGrabCooldown()
{
    bCanGrabLedge = false; 

    GetWorldTimerManager().SetTimer(LedgeGrabCooldownTimer, this, &ACharacterController::ResetLedgeGrabCooldown, LedgeGrabCooldown, false);
}

void ACharacterController::ResetLedgeGrabCooldown()
{
    bCanGrabLedge = true;
    bIsAtLedge = false;
}

void ACharacterController::UpdateSpeed(float DeltaTime)
{
    float targetSpeed = bIsRunning ? runSpeed : normalSpeed;

    if (MovementDirection.SizeSquared() > 0.0f && !bIsClimbingLedge) 
        currentSpeed = FMath::FInterpTo(currentSpeed, targetSpeed, DeltaTime, accelerationRate);
    else
        currentSpeed = FMath::FInterpTo(currentSpeed, 0.0f, DeltaTime, decelerationRate);
    
}
void ACharacterController::SmoothUpdateRotation(float DeltaTime)
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

void ACharacterController::StopMove()
{
    MoveAxisValue = FVector2D::ZeroVector;
    MovementDirection = FVector::ZeroVector;
}
void ACharacterController::StartRunning()
{
    bIsRunning = true;
    GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

void ACharacterController::StopRunning()
{
    bIsRunning = false;
    GetCharacterMovement()->MaxWalkSpeed = 350.0f;
}