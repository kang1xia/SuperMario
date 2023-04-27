// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SUPERMARIO_CoinBoxActor_generated_h
#error "CoinBoxActor.generated.h already included, missing '#pragma once' in CoinBoxActor.h"
#endif
#define SUPERMARIO_CoinBoxActor_generated_h

#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_SPARSE_DATA
#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlapEvent);


#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlapEvent);


#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinBoxActor(); \
	friend struct Z_Construct_UClass_ACoinBoxActor_Statics; \
public: \
	DECLARE_CLASS(ACoinBoxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(ACoinBoxActor)


#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesACoinBoxActor(); \
	friend struct Z_Construct_UClass_ACoinBoxActor_Statics; \
public: \
	DECLARE_CLASS(ACoinBoxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(ACoinBoxActor)


#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoinBoxActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoinBoxActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinBoxActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinBoxActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoinBoxActor(ACoinBoxActor&&); \
	NO_API ACoinBoxActor(const ACoinBoxActor&); \
public:


#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoinBoxActor(ACoinBoxActor&&); \
	NO_API ACoinBoxActor(const ACoinBoxActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinBoxActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinBoxActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoinBoxActor)


#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_24_PROLOG
#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_RPC_WRAPPERS \
	FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_INCLASS \
	FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_INCLASS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_CoinBoxActor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERMARIO_API UClass* StaticClass<class ACoinBoxActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperMario_Source_SuperMario_CoinBoxActor_h


#define FOREACH_ENUM_ECOINBOXSTATE(op) \
	op(ECoinBoxState::ECBX_Normal) \
	op(ECoinBoxState::ECBX_Spawn) \
	op(ECoinBoxState::ECBX_Empty) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
