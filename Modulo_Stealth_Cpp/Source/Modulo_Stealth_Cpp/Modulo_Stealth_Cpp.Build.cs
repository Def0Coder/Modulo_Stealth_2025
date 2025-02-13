// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Modulo_Stealth_Cpp : ModuleRules
{
	public Modulo_Stealth_Cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
