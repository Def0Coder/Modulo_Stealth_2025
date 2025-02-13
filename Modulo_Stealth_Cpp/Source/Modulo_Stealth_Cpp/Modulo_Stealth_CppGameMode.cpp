// Copyright Epic Games, Inc. All Rights Reserved.

#include "Modulo_Stealth_CppGameMode.h"
#include "Modulo_Stealth_CppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AModulo_Stealth_CppGameMode::AModulo_Stealth_CppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
