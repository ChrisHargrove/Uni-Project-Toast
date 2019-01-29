// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectToast/Light_01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLight_01() {}
// Cross Module References
	PROJECTTOAST_API UClass* Z_Construct_UClass_ALight_01_NoRegister();
	PROJECTTOAST_API UClass* Z_Construct_UClass_ALight_01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectToast();
// End Cross Module References
	void ALight_01::StaticRegisterNativesALight_01()
	{
	}
	UClass* Z_Construct_UClass_ALight_01_NoRegister()
	{
		return ALight_01::StaticClass();
	}
	struct Z_Construct_UClass_ALight_01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumFlashTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumFlashTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumFlashTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumFlashTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldFlash_MetaData[];
#endif
		static void NewProp_ShouldFlash_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldFlash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLightOn_MetaData[];
#endif
		static void NewProp_IsLightOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLightOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALight_01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectToast,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Light_01.h" },
		{ "ModuleRelativePath", "Light_01.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_01_Statics::NewProp_MaximumFlashTime_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Light_01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALight_01_Statics::NewProp_MaximumFlashTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumFlashTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ALight_01, MaximumFlashTime), METADATA_PARAMS(Z_Construct_UClass_ALight_01_Statics::NewProp_MaximumFlashTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALight_01_Statics::NewProp_MaximumFlashTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_01_Statics::NewProp_MinimumFlashTime_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Light_01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALight_01_Statics::NewProp_MinimumFlashTime = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumFlashTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ALight_01, MinimumFlashTime), METADATA_PARAMS(Z_Construct_UClass_ALight_01_Statics::NewProp_MinimumFlashTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALight_01_Statics::NewProp_MinimumFlashTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_01_Statics::NewProp_ShouldFlash_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Light_01.h" },
	};
#endif
	void Z_Construct_UClass_ALight_01_Statics::NewProp_ShouldFlash_SetBit(void* Obj)
	{
		((ALight_01*)Obj)->ShouldFlash = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALight_01_Statics::NewProp_ShouldFlash = { UE4CodeGen_Private::EPropertyClass::Bool, "ShouldFlash", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALight_01), &Z_Construct_UClass_ALight_01_Statics::NewProp_ShouldFlash_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALight_01_Statics::NewProp_ShouldFlash_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALight_01_Statics::NewProp_ShouldFlash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALight_01_Statics::NewProp_IsLightOn_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "Light_01.h" },
	};
#endif
	void Z_Construct_UClass_ALight_01_Statics::NewProp_IsLightOn_SetBit(void* Obj)
	{
		((ALight_01*)Obj)->IsLightOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALight_01_Statics::NewProp_IsLightOn = { UE4CodeGen_Private::EPropertyClass::Bool, "IsLightOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALight_01), &Z_Construct_UClass_ALight_01_Statics::NewProp_IsLightOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALight_01_Statics::NewProp_IsLightOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALight_01_Statics::NewProp_IsLightOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALight_01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_01_Statics::NewProp_MaximumFlashTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_01_Statics::NewProp_MinimumFlashTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_01_Statics::NewProp_ShouldFlash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_01_Statics::NewProp_IsLightOn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALight_01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALight_01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALight_01_Statics::ClassParams = {
		&ALight_01::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALight_01_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALight_01_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALight_01_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALight_01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALight_01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALight_01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALight_01, 596341463);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALight_01(Z_Construct_UClass_ALight_01, &ALight_01::StaticClass, TEXT("/Script/ProjectToast"), TEXT("ALight_01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALight_01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
