// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UNREALCPP_TriggerStreamZone_generated_h
#error "TriggerStreamZone.generated.h already included, missing '#pragma once' in TriggerStreamZone.h"
#endif
#define UNREALCPP_TriggerStreamZone_generated_h

#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_SPARSE_DATA
#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlapEnds); \
	DECLARE_FUNCTION(execOverlapBegins);


#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapEnds); \
	DECLARE_FUNCTION(execOverlapBegins);


#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerStreamZone(); \
	friend struct Z_Construct_UClass_ATriggerStreamZone_Statics; \
public: \
	DECLARE_CLASS(ATriggerStreamZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ATriggerStreamZone)


#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATriggerStreamZone(); \
	friend struct Z_Construct_UClass_ATriggerStreamZone_Statics; \
public: \
	DECLARE_CLASS(ATriggerStreamZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ATriggerStreamZone)


#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerStreamZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerStreamZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerStreamZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerStreamZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerStreamZone(ATriggerStreamZone&&); \
	NO_API ATriggerStreamZone(const ATriggerStreamZone&); \
public:


#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerStreamZone(ATriggerStreamZone&&); \
	NO_API ATriggerStreamZone(const ATriggerStreamZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerStreamZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerStreamZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerStreamZone)


#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlapVolume() { return STRUCT_OFFSET(ATriggerStreamZone, OverlapVolume); } \
	FORCEINLINE static uint32 __PPO__LevelToLoad() { return STRUCT_OFFSET(ATriggerStreamZone, LevelToLoad); }


#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_11_PROLOG
#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_SPARSE_DATA \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_INCLASS \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_SPARSE_DATA \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALCPP_API UClass* StaticClass<class ATriggerStreamZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_Public_TriggerStreamZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
