// Fill out your copyright notice in the Description page of Project Settings.

#include "Debug.h"
#include "ProjectToast.h"
#include "EngineGlobals.h"
#include "Engine/Engine.h"

void Debug::Print(const FString& message, FColor textColor, float timeToDisplay, int32 key)
{	
	// Display a debug message for 10 seconds (default). 
	// The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
	// Make sure to wrap inside the UE_BUILD_SHIPPING macro so we don't compile on Release versions
#if !UE_BUILD_SHIPPING
	GEngine->AddOnScreenDebugMessage(key, timeToDisplay, textColor, message);
	UE_LOG(ProjectSpace, Log, TEXT("%s"), *message);
#endif
}


Debug::Debug()
{
}

Debug::~Debug()
{
}
