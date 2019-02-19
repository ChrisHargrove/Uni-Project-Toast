// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class PROJECTTOASTEMPTY_API Debug {

public:
	static void Print(const FString& message, FColor textColor = FColor::White, float timeToDisplay = 10.0f, int32 key = -1);
	
private:
	Debug();
	~Debug();
};
