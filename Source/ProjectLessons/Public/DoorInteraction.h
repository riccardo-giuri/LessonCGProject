// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorInteraction.generated.h"

class ATriggerBox;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTLESSONS_API UDoorInteraction : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorInteraction();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	FRotator DesiredRotation = FRotator::ZeroRotator;

	FRotator StartRotation = FRotator::ZeroRotator;
	FRotator FinalRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere)
	float TimeToRotate = 1.0f;

	float CurrentRotationTime = 0.0f;

	UPROPERTY(EditAnywhere)
	ATriggerBox* TriggerBox;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
