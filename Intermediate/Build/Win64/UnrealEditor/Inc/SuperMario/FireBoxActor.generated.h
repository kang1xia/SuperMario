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
#ifdef SUPERMARIO_FireBoxActor_generated_h
#error "FireBoxActor.generated.h already included, missing '#pragma once' in FireBoxActor.h"
#endif
#define SUPERMARIO_FireBoxActor_generated_h

#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_SPARSE_DATA
#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFireBoxActor(); \
	friend struct Z_Construct_UClass_AFireBoxActor_Statics; \
public: \
	DECLARE_CLASS(AFireBoxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(AFireBoxActor)


#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFireBoxActor(); \
	friend struct Z_Construct_UClass_AFireBoxActor_Statics; \
public: \
	DECLARE_CLASS(AFireBoxActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(AFireBoxActor)


#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFireBoxActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFireBoxActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireBoxActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireBoxActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireBoxActor(AFireBoxActor&&); \
	NO_API AFireBoxActor(const AFireBoxActor&); \
public:


#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFireBoxActor(AFireBoxActor&&); \
	NO_API AFireBoxActor(const AFireBoxActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireBoxActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireBoxActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFireBoxActor)


#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_9_PROLOG
#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_RPC_WRAPPERS \
	FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_INCLASS \
	FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_FireBoxActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERMARIO_API UClass* StaticClass<class AFireBoxActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperMario_Source_SuperMario_FireBoxActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
