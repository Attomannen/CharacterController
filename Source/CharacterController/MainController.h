// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "MainController.generated.h"

UCLASS()
class CHARACTERCONTROLLER_API AMainController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainController();

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
private:	

	UFUNCTION()
	void Move(const FInputActionValue& InputValue);

	UFUNCTION()
	void StartRunning();
	
	UFUNCTION()
	void StopRunning();

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

	
	UPROPERTY();
	FVector2D MoveAxisValue = {};


	UPROPERTY()
	bool bIsRunning = false;
};
