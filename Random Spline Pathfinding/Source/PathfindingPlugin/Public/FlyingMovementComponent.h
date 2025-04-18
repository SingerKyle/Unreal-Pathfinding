// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "SplineManager.h"
#include "FlyingMovementComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PATHFINDINGPLUGIN_API UFlyingMovementComponent : public UActorComponent
{
	GENERATED_BODY()

	UFlyingMovementComponent();

	virtual void BeginPlay() override;

	void FindSplineInManager();
	
public:

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void RegenerateSplineAndContinue();
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true), Category = "flight settings") bool ShouldMove;
	
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true), Category = "flight settings") float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true), Category = "flight settings") AActor* SplineManager;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true), Category = "flight settings") USplineComponent* FlightSpline;

	UPROPERTY() float SplineDistance = 0.0f;

	// Blending
	bool bIsBlending = false;
	float BlendTimer = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true), Category = "flight settings") float BlendDuration = 1.5f; // How long the blend takes, in seconds

	FVector BlendStartLocation;
	FVector BlendTargetLocation;

	FRotator BlendStartRotation;
	FRotator BlendTargetRotation;
};
