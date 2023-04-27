// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMario/Player/MarioCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioCharacter() {}
// Cross Module References
	SUPERMARIO_API UEnum* Z_Construct_UEnum_SuperMario_EMarioAnimState();
	UPackage* Z_Construct_UPackage__Script_SuperMario();
	SUPERMARIO_API UEnum* Z_Construct_UEnum_SuperMario_EMarioStyle();
	SUPERMARIO_API UClass* Z_Construct_UClass_AMarioCharacter_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_AMarioCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarioAnimState;
	static UEnum* EMarioAnimState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMarioAnimState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMarioAnimState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperMario_EMarioAnimState, Z_Construct_UPackage__Script_SuperMario(), TEXT("EMarioAnimState"));
		}
		return Z_Registration_Info_UEnum_EMarioAnimState.OuterSingleton;
	}
	template<> SUPERMARIO_API UEnum* StaticEnum<EMarioAnimState::Type>()
	{
		return EMarioAnimState_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperMario_EMarioAnimState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperMario_EMarioAnimState_Statics::Enumerators[] = {
		{ "EMarioAnimState::EMAS_Jump", (int64)EMarioAnimState::EMAS_Jump },
		{ "EMarioAnimState::EMAS_Run", (int64)EMarioAnimState::EMAS_Run },
		{ "EMarioAnimState::EMAS_Idle", (int64)EMarioAnimState::EMAS_Idle },
		{ "EMarioAnimState::EMAS_Dead", (int64)EMarioAnimState::EMAS_Dead },
		{ "EMarioAnimState::EMAS_Cross", (int64)EMarioAnimState::EMAS_Cross },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperMario_EMarioAnimState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Mario ??\xd7\xb4\xcc\xac\n" },
		{ "EMAS_Cross.Name", "EMarioAnimState::EMAS_Cross" },
		{ "EMAS_Dead.Name", "EMarioAnimState::EMAS_Dead" },
		{ "EMAS_Idle.Name", "EMarioAnimState::EMAS_Idle" },
		{ "EMAS_Jump.Name", "EMarioAnimState::EMAS_Jump" },
		{ "EMAS_Run.Name", "EMarioAnimState::EMAS_Run" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
		{ "ToolTip", "Mario ??\xd7\xb4\xcc\xac" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperMario_EMarioAnimState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperMario,
		nullptr,
		"EMarioAnimState",
		"EMarioAnimState::Type",
		Z_Construct_UEnum_SuperMario_EMarioAnimState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_EMarioAnimState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SuperMario_EMarioAnimState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_EMarioAnimState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperMario_EMarioAnimState()
	{
		if (!Z_Registration_Info_UEnum_EMarioAnimState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarioAnimState.InnerSingleton, Z_Construct_UEnum_SuperMario_EMarioAnimState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMarioAnimState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarioStyle;
	static UEnum* EMarioStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMarioStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMarioStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperMario_EMarioStyle, Z_Construct_UPackage__Script_SuperMario(), TEXT("EMarioStyle"));
		}
		return Z_Registration_Info_UEnum_EMarioStyle.OuterSingleton;
	}
	template<> SUPERMARIO_API UEnum* StaticEnum<EMarioStyle::Type>()
	{
		return EMarioStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperMario_EMarioStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperMario_EMarioStyle_Statics::Enumerators[] = {
		{ "EMarioStyle::EMS_Small", (int64)EMarioStyle::EMS_Small },
		{ "EMarioStyle::EMS_Big", (int64)EMarioStyle::EMS_Big },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperMario_EMarioStyle_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Mario ????\xcc\xac\n" },
		{ "EMS_Big.Name", "EMarioStyle::EMS_Big" },
		{ "EMS_Small.Name", "EMarioStyle::EMS_Small" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
		{ "ToolTip", "Mario ????\xcc\xac" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperMario_EMarioStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperMario,
		nullptr,
		"EMarioStyle",
		"EMarioStyle::Type",
		Z_Construct_UEnum_SuperMario_EMarioStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_EMarioStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SuperMario_EMarioStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_EMarioStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperMario_EMarioStyle()
	{
		if (!Z_Registration_Info_UEnum_EMarioStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarioStyle.InnerSingleton, Z_Construct_UEnum_SuperMario_EMarioStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMarioStyle.InnerSingleton;
	}
	void AMarioCharacter::StaticRegisterNativesAMarioCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioCharacter);
	UClass* Z_Construct_UClass_AMarioCharacter_NoRegister()
	{
		return AMarioCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMarioCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAnimState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAnimState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMAS_Small_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMAS_Small_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMAS_Small_Run_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMAS_Small_Run;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMAS_Small_Jump_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMAS_Small_Jump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMAS_Big_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMAS_Big_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMAS_Big_Run_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMAS_Big_Run;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EMAS_Big_Jump_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EMAS_Big_Jump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirePos_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMario,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/MarioCharacter.h" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_CurrentAnimState_MetaData[] = {
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_CurrentAnimState = { "CurrentAnimState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarioCharacter, CurrentAnimState), Z_Construct_UEnum_SuperMario_EMarioAnimState, METADATA_PARAMS(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_CurrentAnimState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_CurrentAnimState_MetaData)) }; // 63662249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Idle_MetaData[] = {
		{ "Category", "Small" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Idle = { "EMAS_Small_Idle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarioCharacter, EMAS_Small_Idle), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Idle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Run_MetaData[] = {
		{ "Category", "Small" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Run = { "EMAS_Small_Run", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarioCharacter, EMAS_Small_Run), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Run_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Run_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Jump_MetaData[] = {
		{ "Category", "Small" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Jump = { "EMAS_Small_Jump", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarioCharacter, EMAS_Small_Jump), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Jump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Jump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Idle_MetaData[] = {
		{ "Category", "Big" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Idle = { "EMAS_Big_Idle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarioCharacter, EMAS_Big_Idle), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Idle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Run_MetaData[] = {
		{ "Category", "Big" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Run = { "EMAS_Big_Run", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarioCharacter, EMAS_Big_Run), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Run_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Run_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Jump_MetaData[] = {
		{ "Category", "Big" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Jump = { "EMAS_Big_Jump", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarioCharacter, EMAS_Big_Jump), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Jump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Jump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioCharacter_Statics::NewProp_FirePos_MetaData[] = {
		{ "Category", "MarioCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/MarioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_FirePos = { "FirePos", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMarioCharacter, FirePos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_FirePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::NewProp_FirePos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_CurrentAnimState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Run,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Small_Jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Run,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_EMAS_Big_Jump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_FirePos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioCharacter_Statics::ClassParams = {
		&AMarioCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMarioCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMarioCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMarioCharacter()
	{
		if (!Z_Registration_Info_UClass_AMarioCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioCharacter.OuterSingleton, Z_Construct_UClass_AMarioCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioCharacter.OuterSingleton;
	}
	template<> SUPERMARIO_API UClass* StaticClass<AMarioCharacter>()
	{
		return AMarioCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioCharacter);
	struct Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_Statics::EnumInfo[] = {
		{ EMarioAnimState_StaticEnum, TEXT("EMarioAnimState"), &Z_Registration_Info_UEnum_EMarioAnimState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 63662249U) },
		{ EMarioStyle_StaticEnum, TEXT("EMarioStyle"), &Z_Registration_Info_UEnum_EMarioStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2504768846U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioCharacter, AMarioCharacter::StaticClass, TEXT("AMarioCharacter"), &Z_Registration_Info_UClass_AMarioCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioCharacter), 2367486260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_3703849275(TEXT("/Script/SuperMario"),
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_MarioCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
