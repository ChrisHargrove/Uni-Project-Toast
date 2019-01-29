// Fill out your copyright notice in the Description page of Project Settings.

#include "Light_01.h"

// Sets default values
ALight_01::ALight_01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    MinimumFlashTime = 0.5f;
    MaximumFlashTime = 1.0f;
    IsLightOn = true;
    ShouldFlash = false;
}

// Called when the game starts or when spawned
void ALight_01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALight_01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


