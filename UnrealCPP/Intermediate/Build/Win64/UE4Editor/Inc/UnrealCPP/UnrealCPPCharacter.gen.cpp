// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/UnrealCPPCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealCPPCharacter() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPCharacter_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AUnrealCPPCharacter::StaticRegisterNativesAUnrealCPPCharacter()
	{
	}
	UClass* Z_Construct_UClass_AUnrealCPPCharacter_NoRegister()
	{
		return AUnrealCPPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealCPPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStrafing_MetaData[];
#endif
		static void NewProp_isStrafing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStrafing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blabla_MetaData[];
#endif
		static void NewProp_blabla_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_blabla;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FireEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PaintBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxDistanceToGrab_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxDistanceToGrab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealCPPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealCPPCharacter.h" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_isStrafing_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealCPPCharacter" },
		{ "Comment", "// Strafe\n" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
		{ "ToolTip", "Strafe" },
	};
#endif
	void Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_isStrafing_SetBit(void* Obj)
	{
		((AUnrealCPPCharacter*)Obj)->isStrafing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_isStrafing = { "isStrafing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnrealCPPCharacter), &Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_isStrafing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_isStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_isStrafing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_blabla_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealCPPCharacter" },
		{ "Comment", "// Crouch\n" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
		{ "ToolTip", "Crouch" },
	};
#endif
	void Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_blabla_SetBit(void* Obj)
	{
		((AUnrealCPPCharacter*)Obj)->blabla = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_blabla = { "blabla", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUnrealCPPCharacter), &Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_blabla_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_blabla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_blabla_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealCPPCharacter" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnRotation = { "spawnRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, spawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealCPPCharacter" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnLocation = { "spawnLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, spawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FireEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealCPPCharacter" },
		{ "Comment", "// Death ad Respawn\n" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
		{ "ToolTip", "Death ad Respawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FireEffect = { "FireEffect", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, FireEffect), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FireEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FireEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PaintBullet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealCPPCharacter" },
		{ "Comment", "// Shoot\n" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
		{ "ToolTip", "Shoot" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PaintBullet = { "PaintBullet", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, PaintBullet), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PaintBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PaintBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_maxDistanceToGrab_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealCPPCharacter" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_maxDistanceToGrab = { "maxDistanceToGrab", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, maxDistanceToGrab), METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_maxDistanceToGrab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_maxDistanceToGrab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_GrabLocation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealCPPCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_GrabLocation = { "GrabLocation", nullptr, (EPropertyFlags)0x00400000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, GrabLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_GrabLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_GrabLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PhysicsHandle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UnrealCPPCharacter" },
		{ "Comment", "//virtual void BeginPlay() override;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
		{ "ToolTip", "virtual void BeginPlay() override;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PhysicsHandle = { "PhysicsHandle", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, PhysicsHandle), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PhysicsHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PhysicsHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealCPPCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnrealCPPCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_isStrafing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_blabla,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_spawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FireEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PaintBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_maxDistanceToGrab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_GrabLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_PhysicsHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealCPPCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealCPPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealCPPCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealCPPCharacter_Statics::ClassParams = {
		&AUnrealCPPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnrealCPPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealCPPCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealCPPCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealCPPCharacter, 3059300270);
	template<> UNREALCPP_API UClass* StaticClass<AUnrealCPPCharacter>()
	{
		return AUnrealCPPCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealCPPCharacter(Z_Construct_UClass_AUnrealCPPCharacter, &AUnrealCPPCharacter::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AUnrealCPPCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealCPPCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
