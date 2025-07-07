// Copyright Jon Van Dam. All Rights Reserved.

#include "LyraUnitSelectionRuntimeModule.h"
#include "GameplayTagsManager.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FLyraUnitSelectionRuntimeModule"

void FLyraUnitSelectionRuntimeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory;
	// the exact timing is specified in the .uplugin file per-module
	UGameplayTagsManager::Get().AddTagIniSearchPath(FPaths::ProjectPluginsDir() / TEXT("LyraUnitSelection/Config/Tags"));
	UGameplayTagsManager::Get().AddTagIniSearchPath(FPaths::ProjectPluginsDir() / TEXT("JonVanDam/LyraUnitSelection/Config/Tags"));
}

void FLyraUnitSelectionRuntimeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.
	// For modules that support dynamic reloading, we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FLyraUnitSelectionRuntimeModule, LyraUnitSelectionRuntime)
