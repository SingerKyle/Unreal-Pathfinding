#pragma once

#include "Components/SplineComponent.h"
#include "GameFramework/Actor.h"
#include "SplineManager.generated.h"

UCLASS()
class  ASplineManager : public AActor
{
	GENERATED_UCLASS_BODY()

	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Spline Generator") void CreateNewSplinePoint();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Spline Generator") void RemoveLastSplinePoint();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Spline Generator") void SetupSplineUsingPoints();

	void RemoveSplinePoint(USceneComponent* Point);
	
	void UpdateSplinePointForComponent(USceneComponent* MovedComponent);
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true)) TArray<USceneComponent*> Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true)) UStaticMesh* PointMarker = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = true)) USplineComponent* SplineComponent;
	
};