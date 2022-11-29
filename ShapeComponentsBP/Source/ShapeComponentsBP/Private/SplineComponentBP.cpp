// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SplineComponentBP.h"

USplineComponentBP::USplineComponentBP(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USplineComponentBP::BeginPlay()
{
	Super::BeginPlay();
}

void USplineComponentBP::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void USplineComponentBP::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}