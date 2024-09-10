// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClimbComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOTC_CHARACTER_API UClimbComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UClimbComponent();

	virtual void BeginPlay() override;

	TArray<AActor*> LedgeActors;
	
	void FindNearestLedge();

	APlayerController* controller = nullptr;

	bool isClimbing = false;
	
	FVector climbLocation {};
	
	FVector InitialHitLocation;
	FVector ClimbOffset;

	FVector PreviousLedgeLocation;
	FVector CustomWallVelocity; 
	
	AActor* activeLedge = nullptr;
	void StopClimbing();
	bool bCanClimb = true; 
	FTimerHandle ClimbCooldownTimerHandle;
	void ResetClimbCooldown(); 
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	bool FindClimbables();
};
