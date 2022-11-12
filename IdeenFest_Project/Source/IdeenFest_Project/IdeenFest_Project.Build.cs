// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IdeenFest_Project : ModuleRules
{
	public IdeenFest_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
