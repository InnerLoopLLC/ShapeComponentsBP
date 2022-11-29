// InnerLoop LLC 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ShapeComponentsBP.h"
#include "BoxComponentBP.generated.h"

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent, ChildCanTick), ClassGroup = (ShapeComponentBP))
class SHAPECOMPONENTBP_API UBoxComponentBP : public UBoxComponent
{
	GENERATED_BODY()

public:
	UBoxComponentBP(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
};