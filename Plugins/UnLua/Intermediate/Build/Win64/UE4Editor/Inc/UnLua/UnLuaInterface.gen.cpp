// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLua/Public/UnLuaInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaInterface() {}
// Cross Module References
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UnLua();
	UNLUA_API UFunction* Z_Construct_UFunction_UUnLuaInterface_GetModuleName();
// End Cross Module References
	FString IUnLuaInterface::GetModuleName() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetModuleName instead.");
		UnLuaInterface_eventGetModuleName_Parms Parms;
		return Parms.ReturnValue;
	}
	void UUnLuaInterface::StaticRegisterNativesUUnLuaInterface()
	{
		UClass* Class = UUnLuaInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetModuleName", &IUnLuaInterface::execGetModuleName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnLuaInterface_eventGetModuleName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n     * return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'\n     */" },
		{ "ModuleRelativePath", "Public/UnLuaInterface.h" },
		{ "ToolTip", "return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnLuaInterface, nullptr, "GetModuleName", nullptr, nullptr, sizeof(UnLuaInterface_eventGetModuleName_Parms), Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnLuaInterface_GetModuleName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnLuaInterface_GetModuleName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnLuaInterface_NoRegister()
	{
		return UUnLuaInterface::StaticClass();
	}
	struct Z_Construct_UClass_UUnLuaInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnLuaInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnLuaInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnLuaInterface_GetModuleName, "GetModuleName" }, // 3416122293
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnLuaInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnLuaInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUnLuaInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaInterface_Statics::ClassParams = {
		&UUnLuaInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUnLuaInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnLuaInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnLuaInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnLuaInterface, 3225114210);
	template<> UNLUA_API UClass* StaticClass<UUnLuaInterface>()
	{
		return UUnLuaInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnLuaInterface(Z_Construct_UClass_UUnLuaInterface, &UUnLuaInterface::StaticClass, TEXT("/Script/UnLua"), TEXT("UUnLuaInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaInterface);
	static FName NAME_UUnLuaInterface_GetModuleName = FName(TEXT("GetModuleName"));
	FString IUnLuaInterface::Execute_GetModuleName(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UUnLuaInterface::StaticClass()));
		UnLuaInterface_eventGetModuleName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UUnLuaInterface_GetModuleName);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IUnLuaInterface*)(O->GetNativeInterfaceAddress(UUnLuaInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetModuleName_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
