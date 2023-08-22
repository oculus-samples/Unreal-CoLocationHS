// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class CoLocationHS : ModuleRules
{
	public CoLocationHS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"AndroidPermission",
				"UMG",
				"OculusXRHMD",
				"OculusXRAnchors"
			});

		PrivateDependencyModuleNames.AddRange(new string[]
			{
				"Slate",
				"SlateCore",
				"OnlineSubsystem",
				"OnlineSubsystemOculus"
			});

		if (Target.Platform != UnrealTargetPlatform.Android)
		{
			PrecompileForTargets = PrecompileTargetsType.None;
		}
	}
}
