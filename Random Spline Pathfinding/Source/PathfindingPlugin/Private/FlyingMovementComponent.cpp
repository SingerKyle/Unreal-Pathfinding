// Fill out your copyright notice in the Description page of Project Settings.

#include "FlyingMovementComponent.h"
#include "PathfindingPlugin.h"
#include "Components/SplineComponent.h"
#include "FlyingPawn.h"

UFlyingMovementComponent::UFlyingMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true; // Enable ticking if needed
}

void UFlyingMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	FindSplineInManager();
	
	if (FlightSpline)
	{
		
		// Get the starting transform at distance 0 along the spline.
		FTransform StartTransform = FlightSpline->GetTransformAtDistanceAlongSpline(0.f, ESplineCoordinateSpace::World);
		GetOwner()->SetActorRelativeTransform(StartTransform);
	}
}

void UFlyingMovementComponent::FindSplineInManager()
{
	if (SplineManager)
	{
		FlightSpline = SplineManager->FindComponentByClass<USplineComponent>();
	}
}

void UFlyingMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                             FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsBlending)
	{
		BlendTimer += DeltaTime;

		float BlendAlpha = FMath::Clamp(BlendTimer / BlendDuration, 0.f, 1.f);

		FVector NewLocation = FMath::Lerp(BlendStartLocation, BlendTargetLocation, BlendAlpha);
		FRotator NewRotation = FMath::Lerp(BlendStartRotation, BlendTargetRotation, BlendAlpha);

		GetOwner()->SetActorLocationAndRotation(NewLocation, NewRotation);

		if (BlendAlpha >= 1.f)
		{
			bIsBlending = false;
		}
		
	}
	
	if (FlightSpline && ShouldMove && !bIsBlending)
	{
	
		SplineDistance += (Speed * DeltaTime);

		float SplineLength = FlightSpline->GetSplineLength();
		
		if(SplineDistance >= SplineLength - 50.f)
		{
			RegenerateSplineAndContinue();
			return;
		}

		FTransform SplineTransform = FlightSpline->GetTransformAtDistanceAlongSpline(SplineDistance, ESplineCoordinateSpace::World);

		FVector SplineTangent = FlightSpline->GetTangentAtDistanceAlongSpline(SplineDistance, ESplineCoordinateSpace::World);
		
		
		FRotator SplineRotation = SplineTransform.GetRotation().Rotator();

		const FVector OldLocation = GetOwner()->GetActorLocation();
		
		// Might crash
		if (AFlyingPawn* FlyingPawn = Cast<AFlyingPawn>(GetOwner()))
		{
			FlyingPawn->Velocity = (SplineTransform.GetLocation() - OldLocation) * 100.f;
		}
		GetOwner()->SetActorTransform(FTransform(SplineRotation, SplineTransform.GetLocation(), FVector(1,1,1)));
	}
}

void UFlyingMovementComponent::RegenerateSplineAndContinue()
{
	if (!FlightSpline || !SplineManager) return;

	BlendStartLocation = GetOwner()->GetActorLocation();
	BlendStartRotation = GetOwner()->GetActorRotation();
	
	// 1. Save current position
	FVector LastLocation = GetOwner()->GetActorLocation();

	// 2. Ask manager to regenerate from here
	if (ASplineManager* Manager = Cast<ASplineManager>(SplineManager))
	{
		Manager->AppendNewPoints(LastLocation);
	}

	// 3. Refresh our spline reference in case it changed
	FindSplineInManager();

	// 4. Reset our progress along the spline
	SplineDistance = 0.f;

	if (FlightSpline)
	{
		FTransform StartTransform = FlightSpline->GetTransformAtDistanceAlongSpline(SplineDistance, ESplineCoordinateSpace::World);
		BlendTargetLocation = StartTransform.GetLocation();
		BlendTargetRotation = StartTransform.GetRotation().Rotator();
	}

	// 6. Start blending
	bIsBlending = true;
	BlendTimer = 0.f;
}
