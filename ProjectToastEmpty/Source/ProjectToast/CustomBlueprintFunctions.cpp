// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomBlueprintFunctions.h"
#include "GameFramework/Actor.h"


void UCustomBlueprintFunctions::SortByDistance(AActor* SourceActor, bool Descending, TArray<AActor*> inArray, TArray<AActor*>& outArray)
{
    inArray.Sort([SourceActor](const AActor& actorA, const AActor& actorB)
    {
        float distanceA = actorA.GetDistanceTo(SourceActor);
        float distanceB = actorB.GetDistanceTo(SourceActor);

        return distanceA > distanceB;
    });

    outArray = inArray;
}
    

    
