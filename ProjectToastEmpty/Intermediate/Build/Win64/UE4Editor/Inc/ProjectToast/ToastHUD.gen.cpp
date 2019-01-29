// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectToast/ToastHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToastHUD() {}
// Cross Module References
	PROJECTTOAST_API UClass* Z_Construct_UClass_AToastHUD_NoRegister();
	PROJECTTOAST_API UClass* Z_Construct_UClass_AToastHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ProjectToast();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void AToastHUD::StaticRegisterNativesAToastHUD()
	{
	}
	UClass* Z_Construct_UClass_AToastHUD_NoRegister()
	{
		return AToastHUD::StaticClass();
	}
	struct Z_Construct_UClass_AToastHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossHairSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrossHairSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToastHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectToast,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToastHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ToastHUD.h" },
		{ "ModuleRelativePath", "ToastHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToastHUD_Statics::NewProp_CrossHairSize_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "ToastHUD.h" },
		{ "ToolTip", "virtual void BeginPlay() override;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AToastHUD_Statics::NewProp_CrossHairSize = { UE4CodeGen_Private::EPropertyClass::Struct, "CrossHairSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AToastHUD, CrossHairSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AToastHUD_Statics::NewProp_CrossHairSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AToastHUD_Statics::NewProp_CrossHairSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AToastHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AToastHUD_Statics::NewProp_CrossHairSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToastHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToastHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AToastHUD_Statics::ClassParams = {
		&AToastHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002ACu,
		nullptr, 0,
		Z_Construct_UClass_AToastHUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AToastHUD_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AToastHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AToastHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToastHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AToastHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AToastHUD, 2019001122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AToastHUD(Z_Construct_UClass_AToastHUD, &AToastHUD::StaticClass, TEXT("/Script/ProjectToast"), TEXT("AToastHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToastHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
