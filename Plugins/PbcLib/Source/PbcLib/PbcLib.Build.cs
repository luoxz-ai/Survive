// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class PbcLib : ModuleRules
{
	public PbcLib(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicIncludePaths.AddRange(new string[] { Path.Combine(ModuleDirectory, "Public") } );	
		PublicDependencyModuleNames.AddRange(new string[]{"Core","UnLua","Lua"});
		PrivateDependencyModuleNames.AddRange(new string[]{"CoreUObject","Engine"});
	}
}
