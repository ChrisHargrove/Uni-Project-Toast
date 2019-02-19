// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectToastEmptyGameModeBase.h"
#include "Debug.h"

void AProjectToastEmptyGameModeBase::StartPlay()
{
	Super::StartPlay();

	Debug::Print("Welcome to Project Space! This is a logging message");
}

