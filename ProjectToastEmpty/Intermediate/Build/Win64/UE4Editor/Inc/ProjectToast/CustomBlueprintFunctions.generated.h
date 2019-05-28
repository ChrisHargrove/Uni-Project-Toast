// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTTOAST_CustomBlueprintFunctions_generated_h
#error "CustomBlueprintFunctions.generated.h already included, missing '#pragma once' in CustomBlueprintFunctions.h"
#endif
#define PROJECTTOAST_CustomBlueprintFunctions_generated_h

#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSortByDistance) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SourceActor); \
		P_GET_UBOOL(Z_Param_Descending); \
		P_GET_TARRAY(AActor*,Z_Param_inArray); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_outArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomBlueprintFunctions::SortByDistance(Z_Param_SourceActor,Z_Param_Descending,Z_Param_inArray,Z_Param_Out_outArray); \
		P_NATIVE_END; \
	}


#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSortByDistance) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_SourceActor); \
		P_GET_UBOOL(Z_Param_Descending); \
		P_GET_TARRAY(AActor*,Z_Param_inArray); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_outArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomBlueprintFunctions::SortByDistance(Z_Param_SourceActor,Z_Param_Descending,Z_Param_inArray,Z_Param_Out_outArray); \
		P_NATIVE_END; \
	}


#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomBlueprintFunctions(); \
	friend struct Z_Construct_UClass_UCustomBlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(UCustomBlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToast"), NO_API) \
	DECLARE_SERIALIZER(UCustomBlueprintFunctions)


#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCustomBlueprintFunctions(); \
	friend struct Z_Construct_UClass_UCustomBlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(UCustomBlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectToast"), NO_API) \
	DECLARE_SERIALIZER(UCustomBlueprintFunctions)


#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomBlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomBlueprintFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomBlueprintFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomBlueprintFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomBlueprintFunctions(UCustomBlueprintFunctions&&); \
	NO_API UCustomBlueprintFunctions(const UCustomBlueprintFunctions&); \
public:


#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomBlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomBlueprintFunctions(UCustomBlueprintFunctions&&); \
	NO_API UCustomBlueprintFunctions(const UCustomBlueprintFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomBlueprintFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomBlueprintFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomBlueprintFunctions)


#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_PRIVATE_PROPERTY_OFFSET
#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_14_PROLOG
#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_PRIVATE_PROPERTY_OFFSET \
	ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_RPC_WRAPPERS \
	ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_INCLASS \
	ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_PRIVATE_PROPERTY_OFFSET \
	ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_INCLASS_NO_PURE_DECLS \
	ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTTOAST_API UClass* StaticClass<class UCustomBlueprintFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectToastEmpty_4_22_Source_ProjectToast_CustomBlueprintFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
