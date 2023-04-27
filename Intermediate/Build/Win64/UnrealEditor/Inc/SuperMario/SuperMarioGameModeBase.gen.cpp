// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMario/SuperMarioGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperMarioGameModeBase() {}
// Cross Module References
	SUPERMARIO_API UClass* Z_Construct_UClass_ASuperMarioGameModeBase_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_ASuperMarioGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SuperMario();
// End Cross Module References
	void ASuperMarioGameModeBase::StaticRegisterNativesASuperMarioGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperMarioGameModeBase);
	UClass* Z_Construct_UClass_ASuperMarioGameModeBase_NoRegister()
	{
		return ASuperMarioGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASuperMarioGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperMarioGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMario,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperMarioGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SuperMarioGameModeBase.h" },
		{ "ModuleRelativePath", "SuperMarioGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperMarioGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperMarioGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperMarioGameModeBase_Statics::ClassParams = {
		&ASuperMarioGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASuperMarioGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperMarioGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperMarioGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASuperMarioGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperMarioGameModeBase.OuterSingleton, Z_Construct_UClass_ASuperMarioGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperMarioGameModeBase.OuterSingleton;
	}
	template<> SUPERMARIO_API UClass* StaticClass<ASuperMarioGameModeBase>()
	{
		return ASuperMarioGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperMarioGameModeBase);
	struct Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_SuperMarioGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_SuperMarioGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperMarioGameModeBase, ASuperMarioGameModeBase::StaticClass, TEXT("ASuperMarioGameModeBase"), &Z_Registration_Info_UClass_ASuperMarioGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperMarioGameModeBase), 2647385237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_SuperMarioGameModeBase_h_2647574538(TEXT("/Script/SuperMario"),
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_SuperMarioGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_SuperMarioGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
