// InnerLoop LLC 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ShapeComponentsBP.h"
#include "SphereComponentBP.generated.h"

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent, ChildCanTick), ClassGroup = (ShapeComponentBP))
class SHAPECOMPONENTBP_API USphereComponentBP : public USphereComponent
{
	GENERATED_BODY()

public:
	USphereComponentBP(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
};