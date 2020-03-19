// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FPS25_PGHUD.generated.h"

UCLASS()
class AFPS25_PGHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPS25_PGHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

