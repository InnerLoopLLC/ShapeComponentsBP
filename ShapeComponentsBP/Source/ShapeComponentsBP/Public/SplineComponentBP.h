// InnerLoop LLC 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "ShapeComponentsBP.h"
#include "SplineComponentBP.generated.h"

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent, ChildCanTick), ClassGroup = (ShapeComponentBP))
class SHAPECOMPONENTBP_API USplineComponentBP : public USplineComponent
{
	GENERATED_BODY()

public:
	USplineComponentBP(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
};