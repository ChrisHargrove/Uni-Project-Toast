// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ToastHUD.generated.h"

UCLASS()
class PROJECTTOAST_API AToastHUD : public AHUD
{
	GENERATED_BODY()

public:

    AToastHUD();

    virtual void DrawHUD() override;
    //virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gun")
        FVector2D CrossHairSize;

private:

    //Cross Hair For Gun
    class UTexture2D* CrosshairTexture;

};
