// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Light_01.generated.h"

UCLASS()
class PROJECTTOAST_API ALight_01 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALight_01();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
        bool IsLightOn;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
        bool ShouldFlash;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
        float MinimumFlashTime;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controls")
        float MaximumFlashTime;

    
};
