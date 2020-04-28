// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNLUA_UnLuaInterface_generated_h
#error "UnLuaInterface.generated.h already included, missing '#pragma once' in UnLuaInterface.h"
#endif
#define UNLUA_UnLuaInterface_generated_h

#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_SPARSE_DATA
#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_RPC_WRAPPERS \
	virtual FString GetModuleName_Implementation() const { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execGetModuleName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetModuleName_Implementation(); \
		P_NATIVE_END; \
	}


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FString GetModuleName_Implementation() const { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execGetModuleName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetModuleName_Implementation(); \
		P_NATIVE_END; \
	}


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_EVENT_PARMS \
	struct UnLuaInterface_eventGetModuleName_Parms \
	{ \
		FString ReturnValue; \
	};


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_CALLBACK_WRAPPERS
#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaInterface(UUnLuaInterface&&); \
	NO_API UUnLuaInterface(const UUnLuaInterface&); \
public:


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnLuaInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnLuaInterface(UUnLuaInterface&&); \
	NO_API UUnLuaInterface(const UUnLuaInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnLuaInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnLuaInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnLuaInterface)


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUnLuaInterface(); \
	friend struct Z_Construct_UClass_UUnLuaInterface_Statics; \
public: \
	DECLARE_CLASS(UUnLuaInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(UUnLuaInterface)


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_GENERATED_UINTERFACE_BODY() \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_GENERATED_UINTERFACE_BODY() \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUnLuaInterface() {} \
public: \
	typedef UUnLuaInterface UClassType; \
	typedef IUnLuaInterface ThisClass; \
	static FString Execute_GetModuleName(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_INCLASS_IINTERFACE \
protected: \
	virtual ~IUnLuaInterface() {} \
public: \
	typedef UUnLuaInterface UClassType; \
	typedef IUnLuaInterface ThisClass; \
	static FString Execute_GetModuleName(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_23_PROLOG \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_EVENT_PARMS


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_SPARSE_DATA \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_RPC_WRAPPERS \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_CALLBACK_WRAPPERS \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_SPARSE_DATA \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_CALLBACK_WRAPPERS \
	Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h_26_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUA_API UClass* StaticClass<class UUnLuaInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survive_Plugins_UnLua_Source_UnLua_Public_UnLuaInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
