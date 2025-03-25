// Fill out your copyright notice in the Description page of Project Settings.

#include "PointSceneComponent.h"
#include "PathfindingPlugin.h"
#include "SplineManager.h"

// Sets default values for this component's properties
UPointSceneComponent::UPointSceneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UPointSceneComponent::DestroyPoint()
{
	if (ASplineManager* Owner = Cast<ASplineManager>(GetOwner()))
	{
		Owner->RemoveSplinePoint(this);
	}
}

void UPointSceneComponent::PostEditComponentMove(bool bFinished)
{
	Super::PostEditComponentMove(bFinished);

	if(bFinished)
	{
		if (ASplineManager* Owner = Cast<ASplineManager>(GetOwner()))
		{
			Owner->UpdateSplinePointForComponent(this);
		}
	}
}


// Called when the game starts
void UPointSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPointSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

