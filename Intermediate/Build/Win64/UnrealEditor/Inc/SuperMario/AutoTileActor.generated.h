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
#ifdef SUPERMARIO_AutoTileActor_generated_h
#error "AutoTileActor.generated.h already included, missing '#pragma once' in AutoTileActor.h"
#endif
#define SUPERMARIO_AutoTileActor_generated_h

#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_SPARSE_DATA
#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAutoTileActor(); \
	friend struct Z_Construct_UClass_AAutoTileActor_Statics; \
public: \
	DECLARE_CLASS(AAutoTileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(AAutoTileActor)


#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_INCLASS \
private: \
	static void StaticRegisterNativesAAutoTileActor(); \
	friend struct Z_Construct_UClass_AAutoTileActor_Statics; \
public: \
	DECLARE_CLASS(AAutoTileActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(AAutoTileActor)


#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAutoTileActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAutoTileActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoTileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoTileActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutoTileActor(AAutoTileActor&&); \
	NO_API AAutoTileActor(const AAutoTileActor&); \
public:


#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAutoTileActor(AAutoTileActor&&); \
	NO_API AAutoTileActor(const AAutoTileActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAutoTileActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAutoTileActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAutoTileActor)


#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_30_PROLOG
#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_RPC_WRAPPERS \
	FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_INCLASS \
	FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_INCLASS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_AutoTileActor_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERMARIO_API UClass* StaticClass<class AAutoTileActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperMario_Source_SuperMario_AutoTileActor_h


#define FOREACH_ENUM_ETILELAYOUT(op) \
	op(ETileLayout::ETL_Vertical) \
	op(ETileLayout::ETL_Horizontal) 
#define FOREACH_ENUM_ELADDERLAYOUT(op) \
	op(ELadderLayout::ELL_Tile) \
	op(ELadderLayout::ELL_Ladder) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
