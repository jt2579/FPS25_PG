// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS25_PG : ModuleRules
{
	public FPS25_PG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
