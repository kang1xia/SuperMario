// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERMARIO_MarioCharacter_generated_h
#error "MarioCharacter.generated.h already included, missing '#pragma once' in MarioCharacter.h"
#endif
#define SUPERMARIO_MarioCharacter_generated_h

#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_SPARSE_DATA
#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_RPC_WRAPPERS
#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMarioCharacter(); \
	friend struct Z_Construct_UClass_AMarioCharacter_Statics; \
public: \
	DECLARE_CLASS(AMarioCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(AMarioCharacter)


#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAMarioCharacter(); \
	friend struct Z_Construct_UClass_AMarioCharacter_Statics; \
public: \
	DECLARE_CLASS(AMarioCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperMario"), NO_API) \
	DECLARE_SERIALIZER(AMarioCharacter)


#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMarioCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMarioCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarioCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarioCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarioCharacter(AMarioCharacter&&); \
	NO_API AMarioCharacter(const AMarioCharacter&); \
public:


#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMarioCharacter(AMarioCharacter&&); \
	NO_API AMarioCharacter(const AMarioCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarioCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarioCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMarioCharacter)


#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_37_PROLOG
#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_RPC_WRAPPERS \
	FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_INCLASS \
	FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_SPARSE_DATA \
	FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_INCLASS_NO_PURE_DECLS \
	FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERMARIO_API UClass* StaticClass<class AMarioCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h


#define FOREACH_ENUM_EMARIOANIMSTATE(op) \
	op(EMarioAnimState::EMAS_Jump) \
	op(EMarioAnimState::EMAS_Run) \
	op(EMarioAnimState::EMAS_Idle) \
	op(EMarioAnimState::EMAS_Dead) \
	op(EMarioAnimState::EMAS_Cross) 
#define FOREACH_ENUM_EMARIOSTYLE(op) \
	op(EMarioStyle::EMS_Small) \
	op(EMarioStyle::EMS_Big) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
