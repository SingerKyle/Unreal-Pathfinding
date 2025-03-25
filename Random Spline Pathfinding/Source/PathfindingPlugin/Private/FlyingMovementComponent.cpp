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

	if (FlightSpline && ShouldMove)
	{
		SplineDistance += (Speed * DeltaTime);

		FTransform SplineTransform = FlightSpline->GetTransformAtDistanceAlongSpline(SplineDistance, ESplineCoordinateSpace::World);

		FVector SplineTangent = FlightSpline->GetTangentAtDistanceAlongSpline(SplineDistance, ESplineCoordinateSpace::World);
        
		
		FRotator SplineRotation = SplineTransform.GetRotation().Rotator();

		const FVector OldLocation = GetOwner()->GetActorLocation();
		// Might crash
		Cast<AFlyingPawn>(GetOwner())->Velocity = (SplineTransform.GetLocation() - OldLocation) * 100.f;
		GetOwner()->SetActorTransform(FTransform(SplineRotation, SplineTransform.GetLocation(), FVector(1,1,1)));
	}
}
