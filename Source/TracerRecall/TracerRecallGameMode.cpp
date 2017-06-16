// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TracerRecallGameMode.h"
#include "TracerRecallHUD.h"
#include "TracerRecallCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATracerRecallGameMode::ATracerRecallGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATracerRecallHUD::StaticClass();
}
