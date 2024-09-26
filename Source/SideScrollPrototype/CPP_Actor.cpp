// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Actor.h"

// Sets default values
ACPP_Actor::ACPP_Actor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACPP_Actor::BeginPlay()
{
	if (WasBeganPlay) return;

	Super::BeginPlay();
}

// void ACPP_Actor::ForceBeginPlay()
// {
// 	if(!WasBeganPlay)
// 	{
// 		WasBeganPlay = true;
// 		BeginPlay();
// 	}
// }

void ACPP_Actor::ForceBeganPlay_Implementation()
{
	if (!WasBeganPlay)
	{
		WasBeganPlay = true;
		BeginPlay();
	}
}

bool ACPP_Actor::GetWasBeganPlay_Implementation() const
{
	return WasBeganPlay;
}

// Called every frame
void ACPP_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
