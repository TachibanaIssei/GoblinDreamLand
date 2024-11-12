// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SmoothAIController.generated.h"

/**
 * 
 */
UCLASS()
class GOBLINDREAMLAND_API ASmoothAIController : public AAIController
{
	GENERATED_BODY()
	
protected:
	FRotator SmoothTargetRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SmoothFocusInterpSpeed = 30.0f;

public:
	virtual void UpdateCOntrolRotation(
		float deltaTime, bool bUpdatePawn
	)override;

};
