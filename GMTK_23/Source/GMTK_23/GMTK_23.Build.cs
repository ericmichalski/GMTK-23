// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GMTK_23 : ModuleRules
{
	public GMTK_23(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
