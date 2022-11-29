// InnerLoop LLC 2022

#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "ShapeComponentsBP.h"
#include "CapsuleComponentBP.generated.h"

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent, ChildCanTick), ClassGroup = (ShapeComponentBP))
class SHAPECOMPONENTBP_API UCapsuleComponentBP : public UCapsuleComponent
{
	GENERATED_BODY()

public:
	UCapsuleComponentBP(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;
};