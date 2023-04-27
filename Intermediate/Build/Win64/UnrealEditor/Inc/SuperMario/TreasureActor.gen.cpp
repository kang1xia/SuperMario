// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMario/TreasureActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreasureActor() {}
// Cross Module References
	SUPERMARIO_API UEnum* Z_Construct_UEnum_SuperMario_ETreasureBoxCollision();
	UPackage* Z_Construct_UPackage__Script_SuperMario();
	SUPERMARIO_API UClass* Z_Construct_UClass_ATreasureActor_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_ATreasureActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETreasureBoxCollision;
	static UEnum* ETreasureBoxCollision_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETreasureBoxCollision.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETreasureBoxCollision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperMario_ETreasureBoxCollision, Z_Construct_UPackage__Script_SuperMario(), TEXT("ETreasureBoxCollision"));
		}
		return Z_Registration_Info_UEnum_ETreasureBoxCollision.OuterSingleton;
	}
	template<> SUPERMARIO_API UEnum* StaticEnum<ETreasureBoxCollision::Type>()
	{
		return ETreasureBoxCollision_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperMario_ETreasureBoxCollision_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperMario_ETreasureBoxCollision_Statics::Enumerators[] = {
		{ "ETreasureBoxCollision::ETBC_Top", (int64)ETreasureBoxCollision::ETBC_Top },
		{ "ETreasureBoxCollision::ETBC_Bottom", (int64)ETreasureBoxCollision::ETBC_Bottom },
		{ "ETreasureBoxCollision::ETBC_Left", (int64)ETreasureBoxCollision::ETBC_Left },
		{ "ETreasureBoxCollision::ETBC_Right", (int64)ETreasureBoxCollision::ETBC_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperMario_ETreasureBoxCollision_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ??????\xd7\xb2??????\xce\xbb??\n" },
		{ "ETBC_Bottom.Name", "ETreasureBoxCollision::ETBC_Bottom" },
		{ "ETBC_Left.Name", "ETreasureBoxCollision::ETBC_Left" },
		{ "ETBC_Right.Name", "ETreasureBoxCollision::ETBC_Right" },
		{ "ETBC_Top.Name", "ETreasureBoxCollision::ETBC_Top" },
		{ "ModuleRelativePath", "TreasureActor.h" },
		{ "ToolTip", "??????\xd7\xb2??????\xce\xbb??" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperMario_ETreasureBoxCollision_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperMario,
		nullptr,
		"ETreasureBoxCollision",
		"ETreasureBoxCollision::Type",
		Z_Construct_UEnum_SuperMario_ETreasureBoxCollision_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ETreasureBoxCollision_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SuperMario_ETreasureBoxCollision_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ETreasureBoxCollision_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperMario_ETreasureBoxCollision()
	{
		if (!Z_Registration_Info_UEnum_ETreasureBoxCollision.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETreasureBoxCollision.InnerSingleton, Z_Construct_UEnum_SuperMario_ETreasureBoxCollision_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETreasureBoxCollision.InnerSingleton;
	}
	DEFINE_FUNCTION(ATreasureActor::execOnComponentBeginOverlap)
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
	void ATreasureActor::StaticRegisterNativesATreasureActor()
	{
		UClass* Class = ATreasureActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &ATreasureActor::execOnComponentBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics
	{
		struct TreasureActor_eventOnComponentBeginOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreasureActor_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreasureActor_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreasureActor_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreasureActor_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TreasureActor_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TreasureActor_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_Sweepresult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_Sweepresult = { "Sweepresult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TreasureActor_eventOnComponentBeginOverlap_Parms, Sweepresult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_Sweepresult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_Sweepresult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::NewProp_Sweepresult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xd8\xb5??\xc2\xbc?\n" },
		{ "ModuleRelativePath", "TreasureActor.h" },
		{ "ToolTip", "?\xd8\xb5??\xc2\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATreasureActor, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::TreasureActor_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATreasureActor);
	UClass* Z_Construct_UClass_ATreasureActor_NoRegister()
	{
		return ATreasureActor::StaticClass();
	}
	struct Z_Construct_UClass_ATreasureActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TreasureComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollisionPos_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoxCollisionPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyTreasure_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyTreasure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreasureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMario,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATreasureActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATreasureActor_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 3758702071
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasureActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TreasureActor.h" },
		{ "ModuleRelativePath", "TreasureActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasureActor_Statics::NewProp_TreasureComp_MetaData[] = {
		{ "Category", "TreasureActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TreasureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasureActor_Statics::NewProp_TreasureComp = { "TreasureComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreasureActor, TreasureComp), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasureActor_Statics::NewProp_TreasureComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::NewProp_TreasureComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasureActor_Statics::NewProp_OverlapBox_MetaData[] = {
		{ "Category", "TreasureActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TreasureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasureActor_Statics::NewProp_OverlapBox = { "OverlapBox", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreasureActor, OverlapBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasureActor_Statics::NewProp_OverlapBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::NewProp_OverlapBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasureActor_Statics::NewProp_BlockCollision_MetaData[] = {
		{ "Category", "TreasureActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TreasureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasureActor_Statics::NewProp_BlockCollision = { "BlockCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreasureActor, BlockCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasureActor_Statics::NewProp_BlockCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::NewProp_BlockCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasureActor_Statics::NewProp_BoxCollisionPos_MetaData[] = {
		{ "Category", "TreasureActor" },
		{ "ModuleRelativePath", "TreasureActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATreasureActor_Statics::NewProp_BoxCollisionPos = { "BoxCollisionPos", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreasureActor, BoxCollisionPos), Z_Construct_UEnum_SuperMario_ETreasureBoxCollision, METADATA_PARAMS(Z_Construct_UClass_ATreasureActor_Statics::NewProp_BoxCollisionPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::NewProp_BoxCollisionPos_MetaData)) }; // 1283437656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasureActor_Statics::NewProp_AnimationCurve_MetaData[] = {
		{ "Category", "TreasureActor" },
		{ "ModuleRelativePath", "TreasureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasureActor_Statics::NewProp_AnimationCurve = { "AnimationCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreasureActor, AnimationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasureActor_Statics::NewProp_AnimationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::NewProp_AnimationCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasureActor_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "TreasureActor" },
		{ "ModuleRelativePath", "TreasureActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATreasureActor_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreasureActor, Offset), METADATA_PARAMS(Z_Construct_UClass_ATreasureActor_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasureActor_Statics::NewProp_EmptyTreasure_MetaData[] = {
		{ "ModuleRelativePath", "TreasureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasureActor_Statics::NewProp_EmptyTreasure = { "EmptyTreasure", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreasureActor, EmptyTreasure), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasureActor_Statics::NewProp_EmptyTreasure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::NewProp_EmptyTreasure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasureActor_Statics::NewProp_NPC_MetaData[] = {
		{ "Category", "TreasureActor" },
		{ "ModuleRelativePath", "TreasureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasureActor_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATreasureActor, NPC), Z_Construct_UClass_ANPCCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasureActor_Statics::NewProp_NPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::NewProp_NPC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreasureActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasureActor_Statics::NewProp_TreasureComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasureActor_Statics::NewProp_OverlapBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasureActor_Statics::NewProp_BlockCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasureActor_Statics::NewProp_BoxCollisionPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasureActor_Statics::NewProp_AnimationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasureActor_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasureActor_Statics::NewProp_EmptyTreasure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasureActor_Statics::NewProp_NPC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreasureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreasureActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATreasureActor_Statics::ClassParams = {
		&ATreasureActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATreasureActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATreasureActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATreasureActor()
	{
		if (!Z_Registration_Info_UClass_ATreasureActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATreasureActor.OuterSingleton, Z_Construct_UClass_ATreasureActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATreasureActor.OuterSingleton;
	}
	template<> SUPERMARIO_API UClass* StaticClass<ATreasureActor>()
	{
		return ATreasureActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreasureActor);
	struct Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_TreasureActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_TreasureActor_h_Statics::EnumInfo[] = {
		{ ETreasureBoxCollision_StaticEnum, TEXT("ETreasureBoxCollision"), &Z_Registration_Info_UEnum_ETreasureBoxCollision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1283437656U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_TreasureActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATreasureActor, ATreasureActor::StaticClass, TEXT("ATreasureActor"), &Z_Registration_Info_UClass_ATreasureActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATreasureActor), 1233469216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_TreasureActor_h_2103553066(TEXT("/Script/SuperMario"),
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_TreasureActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_TreasureActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_TreasureActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_TreasureActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
