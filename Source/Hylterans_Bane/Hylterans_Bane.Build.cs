// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Hylterans_Bane : ModuleRules
{
	public Hylterans_Bane(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
