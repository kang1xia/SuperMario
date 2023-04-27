// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMario/NPCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCCharacter() {}
// Cross Module References
	SUPERMARIO_API UEnum* Z_Construct_UEnum_SuperMario_ESpriteStyle();
	UPackage* Z_Construct_UPackage__Script_SuperMario();
	SUPERMARIO_API UEnum* Z_Construct_UEnum_SuperMario_EMoveStyle();
	SUPERMARIO_API UEnum* Z_Construct_UEnum_SuperMario_ENPCState();
	SUPERMARIO_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_ANPCCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpriteStyle;
	static UEnum* ESpriteStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpriteStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpriteStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperMario_ESpriteStyle, Z_Construct_UPackage__Script_SuperMario(), TEXT("ESpriteStyle"));
		}
		return Z_Registration_Info_UEnum_ESpriteStyle.OuterSingleton;
	}
	template<> SUPERMARIO_API UEnum* StaticEnum<ESpriteStyle::Type>()
	{
		return ESpriteStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperMario_ESpriteStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperMario_ESpriteStyle_Statics::Enumerators[] = {
		{ "ESpriteStyle::ESS_Mushroom", (int64)ESpriteStyle::ESS_Mushroom },
		{ "ESpriteStyle::ESS_Flower", (int64)ESpriteStyle::ESS_Flower },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperMario_ESpriteStyle_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// NPC?????\xe0\xa3\xac?\xc7\xbb?????\xc4\xa2????\n" },
		{ "ESS_Flower.Name", "ESpriteStyle::ESS_Flower" },
		{ "ESS_Mushroom.Name", "ESpriteStyle::ESS_Mushroom" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
		{ "ToolTip", "NPC?????\xe0\xa3\xac?\xc7\xbb?????\xc4\xa2????" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperMario_ESpriteStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperMario,
		nullptr,
		"ESpriteStyle",
		"ESpriteStyle::Type",
		Z_Construct_UEnum_SuperMario_ESpriteStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ESpriteStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SuperMario_ESpriteStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ESpriteStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperMario_ESpriteStyle()
	{
		if (!Z_Registration_Info_UEnum_ESpriteStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpriteStyle.InnerSingleton, Z_Construct_UEnum_SuperMario_ESpriteStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpriteStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoveStyle;
	static UEnum* EMoveStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMoveStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMoveStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperMario_EMoveStyle, Z_Construct_UPackage__Script_SuperMario(), TEXT("EMoveStyle"));
		}
		return Z_Registration_Info_UEnum_EMoveStyle.OuterSingleton;
	}
	template<> SUPERMARIO_API UEnum* StaticEnum<EMoveStyle::Type>()
	{
		return EMoveStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperMario_EMoveStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperMario_EMoveStyle_Statics::Enumerators[] = {
		{ "EMoveStyle::EMS_Left", (int64)EMoveStyle::EMS_Left },
		{ "EMoveStyle::EMS_Right", (int64)EMoveStyle::EMS_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperMario_EMoveStyle_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// NPC??????\n" },
		{ "EMS_Left.Name", "EMoveStyle::EMS_Left" },
		{ "EMS_Right.Comment", "// ????\n" },
		{ "EMS_Right.Name", "EMoveStyle::EMS_Right" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
		{ "ToolTip", "NPC??????" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperMario_EMoveStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperMario,
		nullptr,
		"EMoveStyle",
		"EMoveStyle::Type",
		Z_Construct_UEnum_SuperMario_EMoveStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_EMoveStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SuperMario_EMoveStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_EMoveStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperMario_EMoveStyle()
	{
		if (!Z_Registration_Info_UEnum_EMoveStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoveStyle.InnerSingleton, Z_Construct_UEnum_SuperMario_EMoveStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMoveStyle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENPCState;
	static UEnum* ENPCState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENPCState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENPCState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperMario_ENPCState, Z_Construct_UPackage__Script_SuperMario(), TEXT("ENPCState"));
		}
		return Z_Registration_Info_UEnum_ENPCState.OuterSingleton;
	}
	template<> SUPERMARIO_API UEnum* StaticEnum<ENPCState::Type>()
	{
		return ENPCState_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperMario_ENPCState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperMario_ENPCState_Statics::Enumerators[] = {
		{ "ENPCState::ENS_Wait", (int64)ENPCState::ENS_Wait },
		{ "ENPCState::ENS_GrowUp", (int64)ENPCState::ENS_GrowUp },
		{ "ENPCState::ENS_Idle", (int64)ENPCState::ENS_Idle },
		{ "ENPCState::ENS_move", (int64)ENPCState::ENS_move },
		{ "ENPCState::ENS_Dead", (int64)ENPCState::ENS_Dead },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperMario_ENPCState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// NPC??\xd7\xb4\xcc\xac\n" },
		{ "ENS_Dead.Comment", "// ??????\n" },
		{ "ENS_Dead.Name", "ENPCState::ENS_Dead" },
		{ "ENS_GrowUp.Comment", "// ??????\n" },
		{ "ENS_GrowUp.Name", "ENPCState::ENS_GrowUp" },
		{ "ENS_Idle.Comment", "// ??????\n// ??????\n" },
		{ "ENS_Idle.Name", "ENPCState::ENS_Idle" },
		{ "ENS_move.Comment", "// ??????\n// ??????\n// ?????\xcf\xb5?\n" },
		{ "ENS_move.Name", "ENPCState::ENS_move" },
		{ "ENS_move.ToolTip", "??????\n??????\n?????\xcf\xb5?" },
		{ "ENS_Wait.Name", "ENPCState::ENS_Wait" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
		{ "ToolTip", "NPC??\xd7\xb4\xcc\xac" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperMario_ENPCState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperMario,
		nullptr,
		"ENPCState",
		"ENPCState::Type",
		Z_Construct_UEnum_SuperMario_ENPCState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ENPCState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SuperMario_ENPCState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ENPCState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperMario_ENPCState()
	{
		if (!Z_Registration_Info_UEnum_ENPCState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENPCState.InnerSingleton, Z_Construct_UEnum_SuperMario_ENPCState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENPCState.InnerSingleton;
	}
	DEFINE_FUNCTION(ANPCCharacter::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Sweepresult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_Sweepresult);
		P_NATIVE_END;
	}
	void ANPCCharacter::StaticRegisterNativesANPCCharacter()
	{
		UClass* Class = ANPCCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &ANPCCharacter::execOnComponentBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics
	{
		struct NPCCharacter_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult Sweepresult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sweepresult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sweepresult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCCharacter_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCCharacter_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCCharacter_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCCharacter_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((NPCCharacter_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NPCCharacter_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_Sweepresult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_Sweepresult = { "Sweepresult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCCharacter_eventOnComponentBeginOverlap_Parms, Sweepresult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_Sweepresult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_Sweepresult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NewProp_Sweepresult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xd8\xb5??\xc2\xbc?\n" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
		{ "ToolTip", "?\xd8\xb5??\xc2\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::NPCCharacter_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCCharacter);
	UClass* Z_Construct_UClass_ANPCCharacter_NoRegister()
	{
		return ANPCCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANPCCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteStyle_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpriteStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveStyle_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlickerCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FlickerCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flower_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Flower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mushroom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mushroom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMario,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPCCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCCharacter_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 1631192074
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPCCharacter.h" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_BoxComp_MetaData[] = {
		{ "Category", "NPCCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_BoxComp = { "BoxComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_BoxComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_BoxComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SpriteStyle_MetaData[] = {
		{ "Category", "NPCCharacter" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SpriteStyle = { "SpriteStyle", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SpriteStyle), Z_Construct_UEnum_SuperMario_ESpriteStyle, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SpriteStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SpriteStyle_MetaData)) }; // 2183630893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveStyle_MetaData[] = {
		{ "Category", "NPCCharacter" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveStyle = { "MoveStyle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MoveStyle), Z_Construct_UEnum_SuperMario_EMoveStyle, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveStyle_MetaData)) }; // 2762450901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "NPCCharacter" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "NPCCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, RootComp), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_FlickerCount_MetaData[] = {
		{ "Category", "Flicker" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_FlickerCount = { "FlickerCount", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, FlickerCount), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_FlickerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_FlickerCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Flower_MetaData[] = {
		{ "Comment", "// ??\xcb\xb8????\n" },
		{ "ModuleRelativePath", "NPCCharacter.h" },
		{ "ToolTip", "??\xcb\xb8????" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Flower = { "Flower", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, Flower), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Flower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Flower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Mushroom_MetaData[] = {
		{ "ModuleRelativePath", "NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Mushroom = { "Mushroom", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, Mushroom), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Mushroom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Mushroom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_BoxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SpriteStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_RootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_FlickerCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Flower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_Mushroom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCCharacter_Statics::ClassParams = {
		&ANPCCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPCCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCCharacter()
	{
		if (!Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton, Z_Construct_UClass_ANPCCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton;
	}
	template<> SUPERMARIO_API UClass* StaticClass<ANPCCharacter>()
	{
		return ANPCCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCCharacter);
	struct Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_NPCCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_NPCCharacter_h_Statics::EnumInfo[] = {
		{ ESpriteStyle_StaticEnum, TEXT("ESpriteStyle"), &Z_Registration_Info_UEnum_ESpriteStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2183630893U) },
		{ EMoveStyle_StaticEnum, TEXT("EMoveStyle"), &Z_Registration_Info_UEnum_EMoveStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2762450901U) },
		{ ENPCState_StaticEnum, TEXT("ENPCState"), &Z_Registration_Info_UEnum_ENPCState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1382036832U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_NPCCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCCharacter, ANPCCharacter::StaticClass, TEXT("ANPCCharacter"), &Z_Registration_Info_UClass_ANPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCCharacter), 368213941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_NPCCharacter_h_1482427523(TEXT("/Script/SuperMario"),
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_NPCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_NPCCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_NPCCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_NPCCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
