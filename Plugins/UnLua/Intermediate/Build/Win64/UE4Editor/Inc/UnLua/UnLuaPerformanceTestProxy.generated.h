// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef UNLUA_UnLuaPerformanceTestProxy_generated_h
#error "UnLuaPerformanceTestProxy.generated.h already included, missing '#pragma once' in UnLuaPerformanceTestProxy.h"
#endif
#define UNLUA_UnLuaPerformanceTestProxy_generated_h

#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_SPARSE_DATA
#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMeshInfo) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutMeshID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutMeshName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCOM); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPredictedPositions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMeshInfo(Z_Param_Out_OutMeshID,Z_Param_Out_OutMeshName,Z_Param_Out_OutCOM,Z_Param_Out_OutIndices,Z_Param_Out_OutPositions,Z_Param_Out_OutPredictedPositions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPredictedPositions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPredictedPositions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePositions) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_NewPositions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePositions(Z_Param_Out_NewPositions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPositions) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPositions(Z_Param_Out_OutPositions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateIndices) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_NewIndices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateIndices(Z_Param_Out_NewIndices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIndices) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetIndices(Z_Param_Out_OutIndices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRaycast) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->UpdateMeshName(Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->UpdateMeshID(Z_Param_NewID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCOM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCOM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMeshName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMeshID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Simulate(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNOP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NOP(); \
		P_NATIVE_END; \
	}


#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMeshInfo) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutMeshID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutMeshName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCOM); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPredictedPositions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMeshInfo(Z_Param_Out_OutMeshID,Z_Param_Out_OutMeshName,Z_Param_Out_OutCOM,Z_Param_Out_OutIndices,Z_Param_Out_OutPositions,Z_Param_Out_OutPredictedPositions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPredictedPositions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPredictedPositions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePositions) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_NewPositions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePositions(Z_Param_Out_NewPositions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPositions) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPositions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPositions(Z_Param_Out_OutPositions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateIndices) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_NewIndices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateIndices(Z_Param_Out_NewIndices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIndices) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutIndices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetIndices(Z_Param_Out_OutIndices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRaycast) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Raycast(Z_Param_Out_Origin,Z_Param_Out_Direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->UpdateMeshName(Z_Param_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->UpdateMeshID(Z_Param_NewID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCOM) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCOM(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetMeshName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMeshID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMeshID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSimulate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Simulate(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNOP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NOP(); \
		P_NATIVE_END; \
	}


#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnLuaPerformanceTestProxy(); \
	friend struct Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics; \
public: \
	DECLARE_CLASS(AUnLuaPerformanceTestProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(AUnLuaPerformanceTestProxy) \
	virtual UObject* _getUObject() const override { return const_cast<AUnLuaPerformanceTestProxy*>(this); }


#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAUnLuaPerformanceTestProxy(); \
	friend struct Z_Construct_UClass_AUnLuaPerformanceTestProxy_Statics; \
public: \
	DECLARE_CLASS(AUnLuaPerformanceTestProxy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnLua"), NO_API) \
	DECLARE_SERIALIZER(AUnLuaPerformanceTestProxy) \
	virtual UObject* _getUObject() const override { return const_cast<AUnLuaPerformanceTestProxy*>(this); }


#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnLuaPerformanceTestProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnLuaPerformanceTestProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnLuaPerformanceTestProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnLuaPerformanceTestProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnLuaPerformanceTestProxy(AUnLuaPerformanceTestProxy&&); \
	NO_API AUnLuaPerformanceTestProxy(const AUnLuaPerformanceTestProxy&); \
public:


#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnLuaPerformanceTestProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnLuaPerformanceTestProxy(AUnLuaPerformanceTestProxy&&); \
	NO_API AUnLuaPerformanceTestProxy(const AUnLuaPerformanceTestProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnLuaPerformanceTestProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnLuaPerformanceTestProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnLuaPerformanceTestProxy)


#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshID() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, MeshID); } \
	FORCEINLINE static uint32 __PPO__MeshName() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, MeshName); } \
	FORCEINLINE static uint32 __PPO__COM() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, COM); } \
	FORCEINLINE static uint32 __PPO__Indices() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, Indices); } \
	FORCEINLINE static uint32 __PPO__Positions() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, Positions); } \
	FORCEINLINE static uint32 __PPO__PredictedPositions() { return STRUCT_OFFSET(AUnLuaPerformanceTestProxy, PredictedPositions); }


#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_21_PROLOG
#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_PRIVATE_PROPERTY_OFFSET \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_SPARSE_DATA \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_RPC_WRAPPERS \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_INCLASS \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_PRIVATE_PROPERTY_OFFSET \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_SPARSE_DATA \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_INCLASS_NO_PURE_DECLS \
	Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNLUA_API UClass* StaticClass<class AUnLuaPerformanceTestProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survive_Plugins_UnLua_Source_UnLua_Private_Tests_UnLuaPerformanceTestProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
