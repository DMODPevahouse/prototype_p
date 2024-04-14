// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class prototype_p : ModuleRules
{
	public prototype_p(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
