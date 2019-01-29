// Fill out your copyright notice in the Description page of Project Settings.

#include "ToastHUD.h"
#include "Engine/Canvas.h"
//#include "Engine/Texture2D.h"
//#include "TextureResource.h"
//#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"


AToastHUD::AToastHUD()
{
    //Set the crosshair texture
    static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTextureObject(TEXT("/Game/Textures/UI/crosshair"));
    CrosshairTexture = CrosshairTextureObject.Object;

    CrossHairSize = FVector2D(50.0f, 50.0f);
}

void AToastHUD::DrawHUD()
{
    Super::DrawHUD();

    //find center of canvas
    const FVector2D center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

    //offset by half the image size
    const FVector2D imageOffset((center.X - 100.0f), (center.Y - 100.0f));

    //draw the crosshair
    FCanvasTileItem tile(imageOffset, CrosshairTexture->Resource, CrossHairSize * 0.1f, FLinearColor::White);
    tile.BlendMode = SE_BLEND_Translucent;
    Canvas->DrawItem(tile);

}
