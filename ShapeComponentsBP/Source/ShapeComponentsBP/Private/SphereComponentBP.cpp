// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SphereComponentBP.h"

USphereComponentBP::USphereComponentBP(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void USphereComponentBP::BeginPlay()
{
	Super::BeginPlay();
}

void USphereComponentBP::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void USphereComponentBP::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}