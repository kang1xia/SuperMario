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
#ifdef SUPERMARIO_TreasureActor_generated_h
#error "TreasureActor.generated.h already included, missing '#pragma once' in TreasureActor.h"
#endif
#define SUPERMARIO_TreasureActor_generated_h

#define FID_SuperMario_Source_SuperMario_TreasureActor_h_36_SPARSE_DATA
#define FID_SuperMario_Source_SuperMario_TreasureActor_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperMario_Source_SuperMario_TreasureActor_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperMario_Source_SuperMario_TreasureActor_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATreasureActor(); \
	friend struct Z_Construct_UClass_ATreasureActor_Statics; \
public: \
	DECLARE_CLASS(ATreasureActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(ATreasureActor)


#define FID_SuperMario_Source_SuperMario_TreasureActor_h_36_INCLASS \
private: \
	static void StaticRegisterNativesATreasureActor(); \
	friend struct Z_Construct_UClass_ATreasureActor_Statics; \
public: \
	DECLARE_CLASS(ATreasureActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(ATreasureActor)


#define FID_SuperMario_Source_SuperMario_TreasureActor_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATreasureActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATreasureActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreasureActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreasureActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreasureActor(ATreasureActor&&); \
	NO_API ATreasureActor(const ATreasureActor&); \
public:


#define FID_SuperMario_Source_SuperMario_TreasureActor_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATreasureActor(ATreasureActor&&); \
	NO_API ATreasureActor(const ATreasureActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATreasureActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATreasureActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATreasureActor)


#define FID_SuperMario_Source_SuperMario_TreasureActor_h_33_PROLOG
#define FID_SuperMario_Source_SuperMario_TreasureActor_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_TreasureActor_h_36_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_TreasureActor_h_36_RPC_WRAPPERS \
	FID_SuperMario_Source_SuperMario_TreasureActor_h_36_INCLASS \
	FID_SuperMario_Source_SuperMario_TreasureActor_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperMario_Source_SuperMario_TreasureActor_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_TreasureActor_h_36_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_TreasureActor_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_TreasureActor_h_36_INCLASS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_TreasureActor_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERMARIO_API UClass* StaticClass<class ATreasureActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperMario_Source_SuperMario_TreasureActor_h


#define FOREACH_ENUM_ETREASUREBOXCOLLISION(op) \
	op(ETreasureBoxCollision::ETBC_Top) \
	op(ETreasureBoxCollision::ETBC_Bottom) \
	op(ETreasureBoxCollision::ETBC_Left) \
	op(ETreasureBoxCollision::ETBC_Right) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
