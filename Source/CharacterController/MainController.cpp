#include "MainController.h"
#include "DebugMacros.h"

// Sets default values
AMainController::AMainController()
{
    PrimaryActorTick.bCanEverTick = true;

    bIsRunning = false;  
    normalSpeed = 600.0f; 
    runSpeed = 900.0f;   
}

void AMainController::BeginPlay()
{
    Super::BeginPlay();
}

void AMainController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
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

        // Bind the sprint action to control running
        Input->BindAction(runAction, ETriggerEvent::Started, this, &AMainController::StartRunning);
        Input->BindAction(runAction, ETriggerEvent::Completed, this, &AMainController::StopRunning);
    }
}

void AMainController::Move(const FInputActionValue& InputValue)
{
    MoveAxisValue = InputValue.Get<FVector2D>();

    if (PlayerController)
    {
        FRotator ControlRotation = PlayerController->GetControlRotation();
        FRotator YawRotation(0, ControlRotation.Yaw, 0);

        FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        FVector MovementDirection = (ForwardDirection * MoveAxisValue.Y) + (RightDirection * MoveAxisValue.X);
        MovementDirection = MovementDirection.GetSafeNormal();

        AddMovementInput(MovementDirection, bIsRunning ? runSpeed / normalSpeed : 1.0f);

        if (bIsRunning && MovementDirection.SizeSquared() > 0.0f)
        {
            FRotator TargetRotation = MovementDirection.Rotation();
            SetActorRotation(TargetRotation);
        }

        // Debugging vector for movement feedback
        DEBUG_VECTOR("Movement Input", MovementDirection);
    }
}

void AMainController::RotateCamera(const FInputActionValue& InputValue)
{
    FVector2D LookAxisValue = InputValue.Get<FVector2D>();

    AddControllerYawInput(LookAxisValue.X * rotationSpeed);  
    AddControllerPitchInput(-LookAxisValue.Y * rotationSpeed);
}

void AMainController::StartRunning()
{
    bIsRunning = true;
}

void AMainController::StopRunning()
{
    bIsRunning = false;
}
