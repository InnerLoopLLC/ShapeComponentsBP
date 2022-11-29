// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "BoxComponentBP.h"

UBoxComponentBP::UBoxComponentBP(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UBoxComponentBP::BeginPlay()
{
	Super::BeginPlay();
}

void UBoxComponentBP::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void UBoxComponentBP::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}