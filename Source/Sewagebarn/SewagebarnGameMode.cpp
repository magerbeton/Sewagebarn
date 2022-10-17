// Copyright Epic Games, Inc. All Rights Reserved.

#include "SewagebarnGameMode.h"
#include "SewagebarnCharacter.h"
#include "SewagebarnPlayerstate.h"
#include "UObject/ConstructorHelpers.h"

ASewagebarnGameMode::ASewagebarnGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<ASewagebarnPlayerstate> SewagebarnPlayerState(TEXT("Class'/Script/Sewagebarn.SewagebarnPlayerstate'"));
	if(SewagebarnPlayerState.Class != nullptr)
	{
		PlayerStateClass = SewagebarnPlayerState.Class;
	}
}
