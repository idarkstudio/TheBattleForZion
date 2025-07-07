// Copyright Jon Van Dam. All Rights Reserved.

using UnrealBuildTool;

public class LyraUnitSelectionRuntime : ModuleRules
{
    public LyraUnitSelectionRuntime(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
				// ... add other public dependencies that you statically link with here ...
			}
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
				// ... add private dependencies that you statically link with here ...	
				"GameplayTags",
                "GameplayAbilities",
				// ... add private dependencies that you statically link with here ...	
			}
        );

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(
                new string[] {
                    "EngineSettings",
                    "LevelEditor",
                    "UnrealEd"
            });
        }
    }
}

/*

LYRA UNIT SELECTION

	How to use:

		1. Add the LyraUnitSelectuin plugin in the plugins folder of your project, or install it from the Epic Games Launcher.

		2. Open your project and enable the plugin.

*/

// Copyright Epic Games, Inc. All Rights Reserved.


