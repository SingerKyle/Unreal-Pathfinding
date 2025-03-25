#include "PathfindingPlugin.h"
#include "SplineManager.h"

#include "PointSceneComponent.h"
#include "Engine/StaticMeshActor.h"

ASplineManager::ASplineManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = false;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	SplineComponent = CreateDefaultSubobject<USplineComponent>("Spline");
	SplineComponent->SetupAttachment(RootComponent);
	
}

void ASplineManager::BeginPlay()
{
	Super::BeginPlay();

	SetupSplineUsingPoints();
}

void ASplineManager::CreateNewSplinePoint()
{
	UPointSceneComponent* NewPoint = NewObject<UPointSceneComponent>(this, UPointSceneComponent::StaticClass(), FName(*FString::Printf(TEXT("Spline Point %i"), Points.Num())));

	if (NewPoint && PointMarker)
	{
		NewPoint->SetupAttachment(RootComponent);
		NewPoint->RegisterComponent();
		
		UE_LOG(LogTemp, Warning, TEXT("First if statement"));
		
		UStaticMeshComponent* SMC = NewObject<UStaticMeshComponent>(NewPoint);
		if(SMC)
		{
			UE_LOG(LogTemp, Warning, TEXT("Second if statement"));
			
			SMC->SetMobility(EComponentMobility::Movable);
			SMC->SetupAttachment(NewPoint);
			SMC->RegisterComponent();
			SMC->SetStaticMesh(PointMarker);
			SMC->SetWorldScale3D(FVector(.2,.2,.2));
			SMC->SetFlags(RF_Transactional);
		}
		
		Points.Push(NewPoint);

		MarkPackageDirty();
		
		PostEditChange();
	}

	
}

void ASplineManager::RemoveLastSplinePoint()
{
	if (Points.IsEmpty()) return;

	Points.Pop();
}

void ASplineManager::SetupSplineUsingPoints()
{
	SplineComponent->ClearSplinePoints();
	
	if(Points.Num() < 2) return;

	TArray<USceneComponent*> Temp = Points;

	const int32 NumShuffles = Temp.Num() - 1;
	for(int32 i = 0 ; i < NumShuffles ; ++i)
	{
		int32 SwapIdx = FMath::RandRange(i, NumShuffles);
		Temp.Swap(i, SwapIdx);
	}
	
	for(int i = 0; i < Temp.Num(); i++)
	{
		if (i == 0)
		{
			SplineComponent->SetWorldLocation(Temp[i]->GetComponentLocation());
			SplineComponent->AddSplinePoint(Temp[i]->GetComponentLocation(), ESplineCoordinateSpace::World);
		}
		else
		{
			SplineComponent->AddSplinePoint(Temp[i]->GetComponentLocation(), ESplineCoordinateSpace::World);
		}
	}

	SplineComponent->UpdateSpline(); 
	SplineComponent->bDrawDebug = true;
	SplineComponent->SetDrawDebug(true);
}

void ASplineManager::RemoveSplinePoint(USceneComponent* Point)
{
	int32 PointIndex = Points.IndexOfByKey(Point);
	if (PointIndex != INDEX_NONE)
	{
		SplineComponent->RemoveSplinePoint(PointIndex, true);

		Points.RemoveAt(PointIndex);
		
		Point->DestroyComponent();
	}
}

void ASplineManager::UpdateSplinePointForComponent(USceneComponent* MovedComponent)
{
	int32 PointIndex = Points.IndexOfByKey(MovedComponent);
	if (PointIndex != INDEX_NONE)
	{
		FVector NewLocation = MovedComponent->GetComponentLocation();
		SplineComponent->SetLocationAtSplinePoint(PointIndex, NewLocation, ESplineCoordinateSpace::World);
	}
}
