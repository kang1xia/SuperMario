// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMario/Player/CameraManActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraManActor() {}
// Cross Module References
	SUPERMARIO_API UClass* Z_Construct_UClass_ACameraManActor_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_ACameraManActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SuperMario();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_AMarioCharacter_NoRegister();
// End Cross Module References
	void ACameraManActor::StaticRegisterNativesACameraManActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraManActor);
	UClass* Z_Construct_UClass_ACameraManActor_NoRegister()
	{
		return ACameraManActor::StaticClass();
	}
	struct Z_Construct_UClass_ACameraManActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mario_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mario;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraManActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMario,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraManActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/CameraManActor.h" },
		{ "ModuleRelativePath", "Player/CameraManActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraManActor_Statics::NewProp_MainCamera_MetaData[] = {
		{ "Category", "CameraManActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CameraManActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManActor_Statics::NewProp_MainCamera = { "MainCamera", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraManActor, MainCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraManActor_Statics::NewProp_MainCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManActor_Statics::NewProp_MainCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraManActor_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "CameraManActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/CameraManActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManActor_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraManActor, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraManActor_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManActor_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraManActor_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Player/CameraManActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManActor_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraManActor, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraManActor_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManActor_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraManActor_Statics::NewProp_Mario_MetaData[] = {
		{ "ModuleRelativePath", "Player/CameraManActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManActor_Statics::NewProp_Mario = { "Mario", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraManActor, Mario), Z_Construct_UClass_AMarioCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraManActor_Statics::NewProp_Mario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManActor_Statics::NewProp_Mario_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraManActor_Statics::NewProp_FollowOffset_MetaData[] = {
		{ "Category", "CameraManActor" },
		{ "ModuleRelativePath", "Player/CameraManActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraManActor_Statics::NewProp_FollowOffset = { "FollowOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraManActor, FollowOffset), METADATA_PARAMS(Z_Construct_UClass_ACameraManActor_Statics::NewProp_FollowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManActor_Statics::NewProp_FollowOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraManActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManActor_Statics::NewProp_MainCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManActor_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManActor_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManActor_Statics::NewProp_Mario,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManActor_Statics::NewProp_FollowOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraManActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraManActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraManActor_Statics::ClassParams = {
		&ACameraManActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraManActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraManActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraManActor()
	{
		if (!Z_Registration_Info_UClass_ACameraManActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraManActor.OuterSingleton, Z_Construct_UClass_ACameraManActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraManActor.OuterSingleton;
	}
	template<> SUPERMARIO_API UClass* StaticClass<ACameraManActor>()
	{
		return ACameraManActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraManActor);
	struct Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_CameraManActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_CameraManActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraManActor, ACameraManActor::StaticClass, TEXT("ACameraManActor"), &Z_Registration_Info_UClass_ACameraManActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraManActor), 1100521029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_CameraManActor_h_1174138089(TEXT("/Script/SuperMario"),
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_CameraManActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_Player_CameraManActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
