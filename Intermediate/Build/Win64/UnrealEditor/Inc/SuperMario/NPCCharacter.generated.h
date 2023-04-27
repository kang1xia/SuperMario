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
#ifdef SUPERMARIO_NPCCharacter_generated_h
#error "NPCCharacter.generated.h already included, missing '#pragma once' in NPCCharacter.h"
#endif
#define SUPERMARIO_NPCCharacter_generated_h

#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_SPARSE_DATA
#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPCCharacter(); \
	friend struct Z_Construct_UClass_ANPCCharacter_Statics; \
public: \
	DECLARE_CLASS(ANPCCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(ANPCCharacter)


#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_INCLASS \
private: \
	static void StaticRegisterNativesANPCCharacter(); \
	friend struct Z_Construct_UClass_ANPCCharacter_Statics; \
public: \
	DECLARE_CLASS(ANPCCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(ANPCCharacter)


#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPCCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPCCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCCharacter(ANPCCharacter&&); \
	NO_API ANPCCharacter(const ANPCCharacter&); \
public:


#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPCCharacter(ANPCCharacter&&); \
	NO_API ANPCCharacter(const ANPCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPCCharacter)


#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_50_PROLOG
#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_RPC_WRAPPERS \
	FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_INCLASS \
	FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_INCLASS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_NPCCharacter_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERMARIO_API UClass* StaticClass<class ANPCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperMario_Source_SuperMario_NPCCharacter_h


#define FOREACH_ENUM_ESPRITESTYLE(op) \
	op(ESpriteStyle::ESS_Mushroom) \
	op(ESpriteStyle::ESS_Flower) 
#define FOREACH_ENUM_EMOVESTYLE(op) \
	op(EMoveStyle::EMS_Left) \
	op(EMoveStyle::EMS_Right) 
#define FOREACH_ENUM_ENPCSTATE(op) \
	op(ENPCState::ENS_Wait) \
	op(ENPCState::ENS_GrowUp) \
	op(ENPCState::ENS_Idle) \
	op(ENPCState::ENS_move) \
	op(ENPCState::ENS_Dead) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
