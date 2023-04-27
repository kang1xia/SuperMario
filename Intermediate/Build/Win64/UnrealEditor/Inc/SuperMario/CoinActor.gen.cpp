// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMario/CoinActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinActor() {}
// Cross Module References
	SUPERMARIO_API UClass* Z_Construct_UClass_ACoinActor_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_ACoinActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SuperMario();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void ACoinActor::StaticRegisterNativesACoinActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinActor);
	UClass* Z_Construct_UClass_ACoinActor_NoRegister()
	{
		return ACoinActor::StaticClass();
	}
	struct Z_Construct_UClass_ACoinActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoinSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CoinSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoinSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CoinSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMario,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoinActor.h" },
		{ "ModuleRelativePath", "CoinActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinActor_Statics::NewProp_RenderComp_MetaData[] = {
		{ "Category", "CoinActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinActor_Statics::NewProp_RenderComp = { "RenderComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinActor, RenderComp), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinActor_Statics::NewProp_RenderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinActor_Statics::NewProp_RenderComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSprite_MetaData[] = {
		{ "ModuleRelativePath", "CoinActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSprite = { "CoinSprite", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinActor, CoinSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinActor_Statics::NewProp_CurveAnim_MetaData[] = {
		{ "ModuleRelativePath", "CoinActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinActor_Statics::NewProp_CurveAnim = { "CurveAnim", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinActor, CurveAnim), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinActor_Statics::NewProp_CurveAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinActor_Statics::NewProp_CurveAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSound_MetaData[] = {
		{ "ModuleRelativePath", "CoinActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSound = { "CoinSound", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinActor, CoinSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinActor_Statics::NewProp_RenderComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinActor_Statics::NewProp_CurveAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinActor_Statics::NewProp_CoinSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinActor_Statics::ClassParams = {
		&ACoinActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoinActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoinActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoinActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoinActor()
	{
		if (!Z_Registration_Info_UClass_ACoinActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinActor.OuterSingleton, Z_Construct_UClass_ACoinActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoinActor.OuterSingleton;
	}
	template<> SUPERMARIO_API UClass* StaticClass<ACoinActor>()
	{
		return ACoinActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinActor);
	struct Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoinActor, ACoinActor::StaticClass, TEXT("ACoinActor"), &Z_Registration_Info_UClass_ACoinActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinActor), 2855432210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinActor_h_2583450843(TEXT("/Script/SuperMario"),
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
