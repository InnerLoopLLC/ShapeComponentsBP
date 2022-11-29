// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "CapsuleComponentBP.h"

UCapsuleComponentBP::UCapsuleComponentBP(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UCapsuleComponentBP::BeginPlay()
{
	Super::BeginPlay();
}

void UCapsuleComponentBP::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void UCapsuleComponentBP::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}