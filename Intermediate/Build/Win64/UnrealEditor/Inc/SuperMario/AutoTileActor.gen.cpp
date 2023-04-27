// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperMario/AutoTileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoTileActor() {}
// Cross Module References
	SUPERMARIO_API UEnum* Z_Construct_UEnum_SuperMario_ETileLayout();
	UPackage* Z_Construct_UPackage__Script_SuperMario();
	SUPERMARIO_API UEnum* Z_Construct_UEnum_SuperMario_ELadderLayout();
	SUPERMARIO_API UClass* Z_Construct_UClass_AAutoTileActor_NoRegister();
	SUPERMARIO_API UClass* Z_Construct_UClass_AAutoTileActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETileLayout;
	static UEnum* ETileLayout_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETileLayout.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETileLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperMario_ETileLayout, Z_Construct_UPackage__Script_SuperMario(), TEXT("ETileLayout"));
		}
		return Z_Registration_Info_UEnum_ETileLayout.OuterSingleton;
	}
	template<> SUPERMARIO_API UEnum* StaticEnum<ETileLayout::Type>()
	{
		return ETileLayout_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperMario_ETileLayout_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperMario_ETileLayout_Statics::Enumerators[] = {
		{ "ETileLayout::ETL_Vertical", (int64)ETileLayout::ETL_Vertical },
		{ "ETileLayout::ETL_Horizontal", (int64)ETileLayout::ETL_Horizontal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperMario_ETileLayout_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ??\xc6\xac???\xcc\xbb???????\n" },
		{ "ETL_Horizontal.Comment", "// ????\n" },
		{ "ETL_Horizontal.Name", "ETileLayout::ETL_Horizontal" },
		{ "ETL_Vertical.Name", "ETileLayout::ETL_Vertical" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
		{ "ToolTip", "??\xc6\xac???\xcc\xbb???????" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperMario_ETileLayout_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperMario,
		nullptr,
		"ETileLayout",
		"ETileLayout::Type",
		Z_Construct_UEnum_SuperMario_ETileLayout_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ETileLayout_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SuperMario_ETileLayout_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ETileLayout_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperMario_ETileLayout()
	{
		if (!Z_Registration_Info_UEnum_ETileLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETileLayout.InnerSingleton, Z_Construct_UEnum_SuperMario_ETileLayout_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETileLayout.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELadderLayout;
	static UEnum* ELadderLayout_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELadderLayout.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELadderLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SuperMario_ELadderLayout, Z_Construct_UPackage__Script_SuperMario(), TEXT("ELadderLayout"));
		}
		return Z_Registration_Info_UEnum_ELadderLayout.OuterSingleton;
	}
	template<> SUPERMARIO_API UEnum* StaticEnum<ELadderLayout::Type>()
	{
		return ELadderLayout_StaticEnum();
	}
	struct Z_Construct_UEnum_SuperMario_ELadderLayout_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SuperMario_ELadderLayout_Statics::Enumerators[] = {
		{ "ELadderLayout::ELL_Tile", (int64)ELadderLayout::ELL_Tile },
		{ "ELadderLayout::ELL_Ladder", (int64)ELadderLayout::ELL_Ladder },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SuperMario_ELadderLayout_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ELL_Ladder.Name", "ELadderLayout::ELL_Ladder" },
		{ "ELL_Tile.Name", "ELadderLayout::ELL_Tile" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SuperMario_ELadderLayout_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SuperMario,
		nullptr,
		"ELadderLayout",
		"ELadderLayout::Type",
		Z_Construct_UEnum_SuperMario_ELadderLayout_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ELadderLayout_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SuperMario_ELadderLayout_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SuperMario_ELadderLayout_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SuperMario_ELadderLayout()
	{
		if (!Z_Registration_Info_UEnum_ELadderLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELadderLayout.InnerSingleton, Z_Construct_UEnum_SuperMario_ELadderLayout_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELadderLayout.InnerSingleton;
	}
	DEFINE_FUNCTION(AAutoTileActor::execOnComponentEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAutoTileActor::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AAutoTileActor::StaticRegisterNativesAAutoTileActor()
	{
		UClass* Class = AAutoTileActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &AAutoTileActor::execOnComponentBeginOverlap },
			{ "OnComponentEndOverlap", &AAutoTileActor::execOnComponentEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics
	{
		struct AutoTileActor_eventOnComponentBeginOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoTileActor_eventOnComponentBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoTileActor_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoTileActor_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoTileActor_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((AutoTileActor_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutoTileActor_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoTileActor_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ??\xca\xbc?\xd8\xb5??\xc2\xbc?\n" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
		{ "ToolTip", "??\xca\xbc?\xd8\xb5??\xc2\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoTileActor, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::AutoTileActor_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics
	{
		struct AutoTileActor_eventOnComponentEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoTileActor_eventOnComponentEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoTileActor_eventOnComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoTileActor_eventOnComponentEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoTileActor_eventOnComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?????\xd8\xb5??\xc2\xbc?\n" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
		{ "ToolTip", "?????\xd8\xb5??\xc2\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAutoTileActor, nullptr, "OnComponentEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::AutoTileActor_eventOnComponentEndOverlap_Parms), Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAutoTileActor);
	UClass* Z_Construct_UClass_AAutoTileActor_NoRegister()
	{
		return AAutoTileActor::StaticClass();
	}
	struct Z_Construct_UClass_AAutoTileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EndComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutoTileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperMario,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAutoTileActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAutoTileActor_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 598298116
		{ &Z_Construct_UFunction_AAutoTileActor_OnComponentEndOverlap, "OnComponentEndOverlap" }, // 1449889094
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoTileActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoTileActor.h" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoTileActor_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "AutoTileActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoTileActor_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoTileActor, RootComp), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoTileActor_Statics::NewProp_HeadComponent_MetaData[] = {
		{ "Category", "AutoTileActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoTileActor_Statics::NewProp_HeadComponent = { "HeadComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoTileActor, HeadComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_HeadComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_HeadComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoTileActor_Statics::NewProp_EndComponent_MetaData[] = {
		{ "Category", "AutoTileActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoTileActor_Statics::NewProp_EndComponent = { "EndComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoTileActor, EndComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_EndComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_EndComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TileSprite_MetaData[] = {
		{ "Category", "AutoTileActor" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TileSprite = { "TileSprite", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoTileActor, TileSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TileSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TileSprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoTileActor_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "AutoTileActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAutoTileActor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoTileActor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TargetPointer_MetaData[] = {
		{ "Category", "AutoTileActor" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TargetPointer = { "TargetPointer", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoTileActor, TargetPointer), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TargetPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TargetPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoTileActor_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "AutoTileActor" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAutoTileActor_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoTileActor, Shape), Z_Construct_UEnum_SuperMario_ETileLayout, METADATA_PARAMS(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_Shape_MetaData)) }; // 2526729590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoTileActor_Statics::NewProp_CurrentMesh_MetaData[] = {
		{ "Category", "AutoTileActor" },
		{ "ModuleRelativePath", "AutoTileActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAutoTileActor_Statics::NewProp_CurrentMesh = { "CurrentMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoTileActor, CurrentMesh), Z_Construct_UEnum_SuperMario_ELadderLayout, METADATA_PARAMS(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_CurrentMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::NewProp_CurrentMesh_MetaData)) }; // 3280247275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoTileActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoTileActor_Statics::NewProp_RootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoTileActor_Statics::NewProp_HeadComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoTileActor_Statics::NewProp_EndComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TileSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoTileActor_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoTileActor_Statics::NewProp_TargetPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoTileActor_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoTileActor_Statics::NewProp_CurrentMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutoTileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoTileActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAutoTileActor_Statics::ClassParams = {
		&AAutoTileActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAutoTileActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAutoTileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoTileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAutoTileActor()
	{
		if (!Z_Registration_Info_UClass_AAutoTileActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAutoTileActor.OuterSingleton, Z_Construct_UClass_AAutoTileActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAutoTileActor.OuterSingleton;
	}
	template<> SUPERMARIO_API UClass* StaticClass<AAutoTileActor>()
	{
		return AAutoTileActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoTileActor);
	struct Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_AutoTileActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_AutoTileActor_h_Statics::EnumInfo[] = {
		{ ETileLayout_StaticEnum, TEXT("ETileLayout"), &Z_Registration_Info_UEnum_ETileLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2526729590U) },
		{ ELadderLayout_StaticEnum, TEXT("ELadderLayout"), &Z_Registration_Info_UEnum_ELadderLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3280247275U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_AutoTileActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAutoTileActor, AAutoTileActor::StaticClass, TEXT("AAutoTileActor"), &Z_Registration_Info_UClass_AAutoTileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAutoTileActor), 3608669557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_AutoTileActor_h_1541221239(TEXT("/Script/SuperMario"),
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_AutoTileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_AutoTileActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_AutoTileActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperMario_Source_SuperMario_AutoTileActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
