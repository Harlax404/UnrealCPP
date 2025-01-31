// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/Public/TriggerStreamZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerStreamZone() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ATriggerStreamZone_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ATriggerStreamZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerStreamZone::execOverlapEnds)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapEnds(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerStreamZone::execOverlapBegins)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapBegins(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ATriggerStreamZone::StaticRegisterNativesATriggerStreamZone()
	{
		UClass* Class = ATriggerStreamZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapBegins", &ATriggerStreamZone::execOverlapBegins },
			{ "OverlapEnds", &ATriggerStreamZone::execOverlapEnds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics
	{
		struct TriggerStreamZone_eventOverlapBegins_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStreamZone_eventOverlapBegins_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TriggerStreamZone_eventOverlapBegins_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerStreamZone_eventOverlapBegins_Parms), &Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStreamZone_eventOverlapBegins_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStreamZone_eventOverlapBegins_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStreamZone_eventOverlapBegins_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStreamZone_eventOverlapBegins_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerStreamZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerStreamZone, nullptr, "OverlapBegins", nullptr, nullptr, sizeof(TriggerStreamZone_eventOverlapBegins_Parms), Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics
	{
		struct TriggerStreamZone_eventOverlapEnds_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStreamZone_eventOverlapEnds_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStreamZone_eventOverlapEnds_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStreamZone_eventOverlapEnds_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStreamZone_eventOverlapEnds_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerStreamZone.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerStreamZone, nullptr, "OverlapEnds", nullptr, nullptr, sizeof(TriggerStreamZone_eventOverlapEnds_Parms), Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATriggerStreamZone_NoRegister()
	{
		return ATriggerStreamZone::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerStreamZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelToLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelToLoad;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelToLoad_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerStreamZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerStreamZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerStreamZone_OverlapBegins, "OverlapBegins" }, // 3049148508
		{ &Z_Construct_UFunction_ATriggerStreamZone_OverlapEnds, "OverlapEnds" }, // 3706086055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerStreamZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerStreamZone.h" },
		{ "ModuleRelativePath", "Public/TriggerStreamZone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_LevelToLoad_MetaData[] = {
		{ "Category", "TriggerStreamZone" },
		{ "ModuleRelativePath", "Public/TriggerStreamZone.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_LevelToLoad = { "LevelToLoad", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerStreamZone, LevelToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_LevelToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_LevelToLoad_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_LevelToLoad_Inner = { "LevelToLoad", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_OverlapVolume_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerStreamZone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerStreamZone.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_OverlapVolume = { "OverlapVolume", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerStreamZone, OverlapVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_OverlapVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_OverlapVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerStreamZone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_LevelToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_LevelToLoad_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerStreamZone_Statics::NewProp_OverlapVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerStreamZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerStreamZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerStreamZone_Statics::ClassParams = {
		&ATriggerStreamZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATriggerStreamZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerStreamZone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerStreamZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerStreamZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerStreamZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerStreamZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerStreamZone, 2883339540);
	template<> UNREALCPP_API UClass* StaticClass<ATriggerStreamZone>()
	{
		return ATriggerStreamZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerStreamZone(Z_Construct_UClass_ATriggerStreamZone, &ATriggerStreamZone::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ATriggerStreamZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerStreamZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
