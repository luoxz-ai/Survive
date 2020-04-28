// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLua/Private/ReflectionUtils/PropertyCreator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyCreator() {}
// Cross Module References
	UNLUA_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyCollector();
	UPackage* Z_Construct_UPackage__Script_UnLua();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FPropertyCollector_Statics
	{
		struct FPropertyCollector
		{
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyCollector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ReflectionUtils/PropertyCreator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyCollector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
		nullptr,
		nullptr,
		"PropertyCollector",
		sizeof(FPropertyCollector),
		alignof(FPropertyCollector),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyCollector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyCollector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyCollector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPropertyCollector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnLua();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PropertyCollector"), sizeof(Z_Construct_UScriptStruct_FPropertyCollector_Statics::FPropertyCollector), Get_Z_Construct_UScriptStruct_FPropertyCollector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPropertyCollector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPropertyCollector_Hash() { return 3342098321U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
