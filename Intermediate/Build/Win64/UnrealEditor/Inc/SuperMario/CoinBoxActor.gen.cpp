// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMario/CoinBoxActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinBoxActor() {}
// Cross Module References
	SUPERMARIO_API UEnum* Z_Construct_UEnum_SuperMario_ECoinBoxState();
	UPackage* Z_Construct_UPackage__Script_SuperMario();
	SUPERMARIO_API UClass* Z_Construct_UClass_ACoinBoxActor_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_ACoinBoxActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoinBoxState;
	static UEnum* ECoinBoxState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECoinBoxState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECoinBoxState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperMario_ECoinBoxState, Z_Construct_UPackage__Script_SuperMario(), TEXT("ECoinBoxState"));
		}
		return Z_Registration_Info_UEnum_ECoinBoxState.OuterSingleton;
	}
	template<> SUPERMARIO_API UEnum* StaticEnum<ECoinBoxState::Type>()
	{
		return ECoinBoxState_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperMario_ECoinBoxState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperMario_ECoinBoxState_Statics::Enumerators[] = {
		{ "ECoinBoxState::ECBX_Normal", (int64)ECoinBoxState::ECBX_Normal },
		{ "ECoinBoxState::ECBX_Spawn", (int64)ECoinBoxState::ECBX_Spawn },
		{ "ECoinBoxState::ECBX_Empty", (int64)ECoinBoxState::ECBX_Empty },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperMario_ECoinBoxState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ???\xd2\xba??\xd3\xb5?\xd7\xb4\xcc\xac\n" },
		{ "ECBX_Empty.Name", "ECoinBoxState::ECBX_Empty" },
		{ "ECBX_Normal.Name", "ECoinBoxState::ECBX_Normal" },
		{ "ECBX_Spawn.Name", "ECoinBoxState::ECBX_Spawn" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
		{ "ToolTip", "???\xd2\xba??\xd3\xb5?\xd7\xb4\xcc\xac" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperMario_ECoinBoxState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperMario,
		nullptr,
		"ECoinBoxState",
		"ECoinBoxState::Type",
		Z_Construct_UEnum_SuperMario_ECoinBoxState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ECoinBoxState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SuperMario_ECoinBoxState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ECoinBoxState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperMario_ECoinBoxState()
	{
		if (!Z_Registration_Info_UEnum_ECoinBoxState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoinBoxState.InnerSingleton, Z_Construct_UEnum_SuperMario_ECoinBoxState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECoinBoxState.InnerSingleton;
	}
	DEFINE_FUNCTION(ACoinBoxActor::execOnComponentBeginOverlapEvent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlapEvent(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ACoinBoxActor::StaticRegisterNativesACoinBoxActor()
	{
		UClass* Class = ACoinBoxActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlapEvent", &ACoinBoxActor::execOnComponentBeginOverlapEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics
	{
		struct CoinBoxActor_eventOnComponentBeginOverlapEvent_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoinBoxActor_eventOnComponentBeginOverlapEvent_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoinBoxActor_eventOnComponentBeginOverlapEvent_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoinBoxActor_eventOnComponentBeginOverlapEvent_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoinBoxActor_eventOnComponentBeginOverlapEvent_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CoinBoxActor_eventOnComponentBeginOverlapEvent_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoinBoxActor_eventOnComponentBeginOverlapEvent_Parms), &Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoinBoxActor_eventOnComponentBeginOverlapEvent_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xd8\xb5??\xc2\xbc?\n" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
		{ "ToolTip", "?\xd8\xb5??\xc2\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoinBoxActor, nullptr, "OnComponentBeginOverlapEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::CoinBoxActor_eventOnComponentBeginOverlapEvent_Parms), Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoinBoxActor);
	UClass* Z_Construct_UClass_ACoinBoxActor_NoRegister()
	{
		return ACoinBoxActor::StaticClass();
	}
	struct Z_Construct_UClass_ACoinBoxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptySprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptySprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCoinPos_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnCoinPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoinBoxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMario,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoinBoxActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoinBoxActor_OnComponentBeginOverlapEvent, "OnComponentBeginOverlapEvent" }, // 1221045196
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinBoxActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoinBoxActor.h" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_RenderComp_MetaData[] = {
		{ "Category", "CoinBoxActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_RenderComp = { "RenderComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinBoxActor, RenderComp), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_RenderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_RenderComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "CoinBoxActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinBoxActor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_NormalSprite_MetaData[] = {
		{ "Category", "AMrio" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_NormalSprite = { "NormalSprite", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinBoxActor, NormalSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_NormalSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_NormalSprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_EmptySprite_MetaData[] = {
		{ "Category", "AMrio" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_EmptySprite = { "EmptySprite", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinBoxActor, EmptySprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_EmptySprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_EmptySprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_CurveAnimation_MetaData[] = {
		{ "Category", "AMrio" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_CurveAnimation = { "CurveAnimation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinBoxActor, CurveAnimation), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_CurveAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_CurveAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_AnimSpeed_MetaData[] = {
		{ "Category", "CoinBoxActor" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_AnimSpeed = { "AnimSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinBoxActor, AnimSpeed), METADATA_PARAMS(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_AnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_AnimSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_SpawnCoinPos_MetaData[] = {
		{ "Category", "CoinBoxActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_SpawnCoinPos = { "SpawnCoinPos", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinBoxActor, SpawnCoinPos), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_SpawnCoinPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_SpawnCoinPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BlockCollision_MetaData[] = {
		{ "Category", "CoinBoxActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CoinBoxActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BlockCollision = { "BlockCollision", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACoinBoxActor, BlockCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BlockCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BlockCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoinBoxActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_RenderComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_NormalSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_EmptySprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_CurveAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_AnimSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_SpawnCoinPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoinBoxActor_Statics::NewProp_BlockCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoinBoxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinBoxActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinBoxActor_Statics::ClassParams = {
		&ACoinBoxActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoinBoxActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoinBoxActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoinBoxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoinBoxActor()
	{
		if (!Z_Registration_Info_UClass_ACoinBoxActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinBoxActor.OuterSingleton, Z_Construct_UClass_ACoinBoxActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoinBoxActor.OuterSingleton;
	}
	template<> SUPERMARIO_API UClass* StaticClass<ACoinBoxActor>()
	{
		return ACoinBoxActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinBoxActor);
	struct Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinBoxActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinBoxActor_h_Statics::EnumInfo[] = {
		{ ECoinBoxState_StaticEnum, TEXT("ECoinBoxState"), &Z_Registration_Info_UEnum_ECoinBoxState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1810580147U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinBoxActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoinBoxActor, ACoinBoxActor::StaticClass, TEXT("ACoinBoxActor"), &Z_Registration_Info_UClass_ACoinBoxActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinBoxActor), 4024652437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinBoxActor_h_3993926339(TEXT("/Script/SuperMario"),
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinBoxActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinBoxActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinBoxActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_CoinBoxActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
