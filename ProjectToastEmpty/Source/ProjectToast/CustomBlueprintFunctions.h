// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomBlueprintFunctions.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTTOAST_API UCustomBlueprintFunctions : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

    UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
    static void SortByDistance(AActor* SourceActor, bool Descending, TArray<AActor*> inArray, TArray<AActor*> &outArray);
	
};
