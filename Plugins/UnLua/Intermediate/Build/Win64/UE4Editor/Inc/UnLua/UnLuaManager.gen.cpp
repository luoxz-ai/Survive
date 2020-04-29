// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLua/Private/UnLuaManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaManager() {}
// Cross Module References
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaManager_NoRegister();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnLua();
	UNLUA_API UFunction* Z_Construct_UFunction_UUnLuaManager_InputAction();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UNLUA_API UFunction* Z_Construct_UFunction_UUnLuaManager_InputAxis();
	UNLUA_API UFunction* Z_Construct_UFunction_UUnLuaManager_InputGesture();
	UNLUA_API UFunction* Z_Construct_UFunction_UUnLuaManager_InputTouch();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	UNLUA_API UFunction* Z_Construct_UFunction_UUnLuaManager_InputVectorAxis();
	UNLUA_API UFunction* Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNLUA_API UFunction* Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted();
	UNLUA_API UFunction* Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify();
// End Cross Module References
	static FName NAME_UUnLuaManager_InputAction = FName(TEXT("InputAction"));
	void UUnLuaManager::InputAction(FKey Key)
	{
		UnLuaManager_eventInputAction_Parms Parms;
		Parms.Key=Key;
		ProcessEvent(FindFunctionChecked(NAME_UUnLuaManager_InputAction),&Parms);
	}
	static FName NAME_UUnLuaManager_InputAxis = FName(TEXT("InputAxis"));
	void UUnLuaManager::InputAxis(float AxisValue)
	{
		UnLuaManager_eventInputAxis_Parms Parms;
		Parms.AxisValue=AxisValue;
		ProcessEvent(FindFunctionChecked(NAME_UUnLuaManager_InputAxis),&Parms);
	}
	static FName NAME_UUnLuaManager_InputGesture = FName(TEXT("InputGesture"));
	void UUnLuaManager::InputGesture(float Value)
	{
		UnLuaManager_eventInputGesture_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UUnLuaManager_InputGesture),&Parms);
	}
	static FName NAME_UUnLuaManager_InputTouch = FName(TEXT("InputTouch"));
	void UUnLuaManager::InputTouch(ETouchIndex::Type FingerIndex, FVector const& Location)
	{
		UnLuaManager_eventInputTouch_Parms Parms;
		Parms.FingerIndex=FingerIndex;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_UUnLuaManager_InputTouch),&Parms);
	}
	static FName NAME_UUnLuaManager_InputVectorAxis = FName(TEXT("InputVectorAxis"));
	void UUnLuaManager::InputVectorAxis(FVector const& AxisValue)
	{
		UnLuaManager_eventInputVectorAxis_Parms Parms;
		Parms.AxisValue=AxisValue;
		ProcessEvent(FindFunctionChecked(NAME_UUnLuaManager_InputVectorAxis),&Parms);
	}
	static FName NAME_UUnLuaManager_TriggerAnimNotify = FName(TEXT("TriggerAnimNotify"));
	void UUnLuaManager::TriggerAnimNotify()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUnLuaManager_TriggerAnimNotify),NULL);
	}
	void UUnLuaManager::StaticRegisterNativesUUnLuaManager()
	{
		UClass* Class = UUnLuaManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorDestroyed", &UUnLuaManager::execOnActorDestroyed },
			{ "OnLatentActionCompleted", &UUnLuaManager::execOnLatentActionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnLuaManager_InputAction_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaManager_eventInputAction_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnLuaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputAction", nullptr, nullptr, sizeof(UnLuaManager_eventInputAction_Parms), Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaManager_InputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaManager_eventInputAxis_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnLuaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputAxis", nullptr, nullptr, sizeof(UnLuaManager_eventInputAxis_Parms), Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaManager_InputAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaManager_eventInputGesture_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnLuaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputGesture", nullptr, nullptr, sizeof(UnLuaManager_eventInputGesture_Parms), Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaManager_InputGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaManager_eventInputTouch_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaManager_eventInputTouch_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnLuaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputTouch", nullptr, nullptr, sizeof(UnLuaManager_eventInputTouch_Parms), Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaManager_InputTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaManager_eventInputVectorAxis_Parms, AxisValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::NewProp_AxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::NewProp_AxisValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnLuaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "InputVectorAxis", nullptr, nullptr, sizeof(UnLuaManager_eventInputVectorAxis_Parms), Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaManager_InputVectorAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnLuaManager_InputVectorAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics
	{
		struct UnLuaManager_eventOnActorDestroyed_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaManager_eventOnActorDestroyed_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnLuaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "OnActorDestroyed", nullptr, nullptr, sizeof(UnLuaManager_eventOnActorDestroyed_Parms), Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics
	{
		struct UnLuaManager_eventOnLatentActionCompleted_Parms
		{
			int32 LinkID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LinkID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::NewProp_LinkID = { "LinkID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaManager_eventOnLatentActionCompleted_Parms, LinkID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::NewProp_LinkID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnLuaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "OnLatentActionCompleted", nullptr, nullptr, sizeof(UnLuaManager_eventOnLatentActionCompleted_Parms), Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UnLuaManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaManager, nullptr, "TriggerAnimNotify", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnLuaManager_NoRegister()
	{
		return UUnLuaManager::StaticClass();
	}
	struct Z_Construct_UClass_UUnLuaManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnLuaManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnLuaManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaManager_InputAction, "InputAction" }, // 2015304411
		{ &Z_Construct_UFunction_UUnLuaManager_InputAxis, "InputAxis" }, // 650467035
		{ &Z_Construct_UFunction_UUnLuaManager_InputGesture, "InputGesture" }, // 2246616889
		{ &Z_Construct_UFunction_UUnLuaManager_InputTouch, "InputTouch" }, // 2700336999
		{ &Z_Construct_UFunction_UUnLuaManager_InputVectorAxis, "InputVectorAxis" }, // 1485313696
		{ &Z_Construct_UFunction_UUnLuaManager_OnActorDestroyed, "OnActorDestroyed" }, // 3519317937
		{ &Z_Construct_UFunction_UUnLuaManager_OnLatentActionCompleted, "OnLatentActionCompleted" }, // 2435709820
		{ &Z_Construct_UFunction_UUnLuaManager_TriggerAnimNotify, "TriggerAnimNotify" }, // 3877434631
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnLuaManager.h" },
		{ "ModuleRelativePath", "Private/UnLuaManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnLuaManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaManager_Statics::ClassParams = {
		&UUnLuaManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnLuaManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnLuaManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnLuaManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnLuaManager, 4077151034);
	template<> UNLUA_API UClass* StaticClass<UUnLuaManager>()
	{
		return UUnLuaManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnLuaManager(Z_Construct_UClass_UUnLuaManager, &UUnLuaManager::StaticClass, TEXT("/Script/UnLua"), TEXT("UUnLuaManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
