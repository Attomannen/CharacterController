// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "MainController.generated.h"

UCLASS()
class CHARACTERCONTROLLER_API AMainController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainController();
	UPROPERTY();
	TObjectPtr<APlayerCameraManager> playerCamera;
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float normalSpeed = 50.0f;
	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float runSpeed = 50.0f;

	
	UPROPERTY(EditAnywhere, Category = "Movement")
	float rotationSpeed = 50.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float strafeRatio = 1.0f;
	
protected:
	virtual void BeginPlay                () override;
	virtual void Tick                     ( float DeltaTime ) override;
	virtual void SetupPlayerInputComponent( class UInputComponent* PlayerInputComponent ) override;
	virtual void Jump() override;
private:	

	UFUNCTION()
	void Move(const FInputActionValue& InputValue);

	
	UFUNCTION()
	void StopMove();
	
	UFUNCTION()
	void StartLedgeGrabCooldown();
	
	UFUNCTION()
	void ResetLedgeGrabCooldown();
	
	UFUNCTION()
	void SmoothMoveToLedge(float DeltaTime);
	
	UFUNCTION()
	void MoveAlongLedge(float DeltaTime);

	UFUNCTION()
	void LedgeGrab();
	
	UFUNCTION()
	void StartRunning();
	
	UFUNCTION()
	void StopRunning();

	UFUNCTION()
	void UpdateSpeed(float DeltaTime);
	
	UFUNCTION()
	void SmoothUpdateRotation(float DeltaTime);

	UFUNCTION()
	void RotateCamera(const FInputActionValue& InputValue);
	
	UPROPERTY()
	TObjectPtr<APlayerController> PlayerController;

	UPROPERTY( EditAnywhere, Category = "EnhancedInput" );
	TObjectPtr<UInputMappingContext> InputMapping;

	UPROPERTY( EditAnywhere, Category = "EnhancedInput" );
	TObjectPtr<UInputAction> moveAction;

	UPROPERTY( EditAnywhere, Category = "EnhancedInput" );
	TObjectPtr<UInputAction> lookAction;

	UPROPERTY( EditAnywhere, Category = "EnhancedInput" );
	TObjectPtr<UInputAction> runAction;
	
	UPROPERTY( EditAnywhere, Category = "EnhancedInput" );
	TObjectPtr<UInputAction> jumpAction;


	
	UPROPERTY();
	FVector2D MoveAxisValue = {};
	
	UPROPERTY();
	FVector MovementDirection = {};
	
	UPROPERTY();
	bool bIsAtLedge = false;
	
	UPROPERTY();
	float currentSpeed = 50.0f;
	
	UPROPERTY();
	float LedgeCheckOffset = 50.0f;
	
	UPROPERTY();
	float LedgeDetectionDistance = 50.0f;
	
	UPROPERTY();
	float accelerationRate = 50.0f;
	
	UPROPERTY();
	float decelerationRate = 50.0f;
	
	UPROPERTY();
	float rotationInterpSpeed = 50.0f;
	
	UPROPERTY();
	bool bCanGrabLedge = true;
	
	UPROPERTY();
	float LedgeGrabCooldown = 1.0f;
	
	UPROPERTY();
	FTimerHandle LedgeGrabCooldownTimer;
	
	UPROPERTY()
	bool bIsRunning = false;
	
	UPROPERTY()
	bool bIsClimbingLedge = false;
	
	UPROPERTY()
	FVector ledgeTargetLocation;
	
	UPROPERTY()
	bool bIsMovingAlongLedge = false;
	
	UPROPERTY()
	float ledgeMoveSpeed = 200.0f;
};
