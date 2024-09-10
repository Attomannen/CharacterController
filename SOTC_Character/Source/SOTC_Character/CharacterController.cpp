#include "CharacterController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DrawDebugHelpers.h"


ACharacterController::ACharacterController()
{
    PrimaryActorTick.bCanEverTick = true;
    ClimbComponent = CreateDefaultSubobject<UClimbComponent>(TEXT("ClimbComponent"));


    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(RootComponent);
    CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

    // Create CameraComponent and attach it to the CameraBoom
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(CameraBoom);
}

void ACharacterController::BeginPlay()
{
    Super::BeginPlay();
    
    ClimbComponent->FindClimbables();

    APlayerController* PlayerController = Cast<APlayerController>(Controller);
    if (PlayerController)
    {
        UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
        if (Subsystem)
        {
            Subsystem->AddMappingContext(InputMappingContext, 1);
        }
    }
}

void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);
    if (EnhancedInput)
    {
        EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACharacterController::Move);
        EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &ACharacterController::Look);
        EnhancedInput->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacterController::Jump);
    }
}




void ACharacterController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (ClimbComponent->isClimbing)
    {
        GetCharacterMovement()->GravityScale = 0;
    }
    else
    {
        GetCharacterMovement()->GravityScale = 1;
    }

    FRotator CameraRotation = CameraBoom->GetComponentRotation();
    
    float ClampedPitch = FMath::Clamp(CameraRotation.Pitch, -10.0f, 20.0f);
    
    CameraBoom->SetWorldRotation(FRotator(ClampedPitch, CameraRotation.Yaw, CameraRotation.Roll));
}


void ACharacterController::Move(const FInputActionValue& Value)
{
    FVector2D MovementInput = Value.Get<FVector2D>();
    
        AddMovementInput(GetActorForwardVector(), MovementInput.Y);
        AddMovementInput(GetActorRightVector(), MovementInput.X);
    
}

void ACharacterController::Look(const FInputActionValue& Value)
{
    FVector2D LookInput = Value.Get<FVector2D>();
    AddControllerYawInput(LookInput.X);
    AddControllerPitchInput(-LookInput.Y);
}

void ACharacterController::Jump()
{
    Super::Jump();
    ClimbComponent->StopClimbing();

}
