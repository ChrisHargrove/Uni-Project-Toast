// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectToast/SlidingDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlidingDoor() {}
// Cross Module References
	PROJECTTOAST_API UClass* Z_Construct_UClass_ASlidingDoor_NoRegister();
	PROJECTTOAST_API UClass* Z_Construct_UClass_ASlidingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProjectToast();
// End Cross Module References
	void ASlidingDoor::StaticRegisterNativesASlidingDoor()
	{
	}
	UClass* Z_Construct_UClass_ASlidingDoor_NoRegister()
	{
		return ASlidingDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASlidingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlideTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasKeypad_MetaData[];
#endif
		static void NewProp_HasKeypad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasKeypad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlidingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectToast,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SlidingDoor.h" },
		{ "ModuleRelativePath", "SlidingDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingDoor_Statics::NewProp_SlideTime_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "SlidingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlidingDoor_Statics::NewProp_SlideTime = { UE4CodeGen_Private::EPropertyClass::Float, "SlideTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ASlidingDoor, SlideTime), METADATA_PARAMS(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_SlideTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_SlideTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingDoor_Statics::NewProp_HasKeypad_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "SlidingDoor.h" },
	};
#endif
	void Z_Construct_UClass_ASlidingDoor_Statics::NewProp_HasKeypad_SetBit(void* Obj)
	{
		((ASlidingDoor*)Obj)->HasKeypad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASlidingDoor_Statics::NewProp_HasKeypad = { UE4CodeGen_Private::EPropertyClass::Bool, "HasKeypad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASlidingDoor), &Z_Construct_UClass_ASlidingDoor_Statics::NewProp_HasKeypad_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_HasKeypad_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_HasKeypad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "SlidingDoor.h" },
	};
#endif
	void Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((ASlidingDoor*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "IsLocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASlidingDoor), &Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsLocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsLocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlidingDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingDoor_Statics::NewProp_SlideTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingDoor_Statics::NewProp_HasKeypad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlidingDoor_Statics::NewProp_IsLocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlidingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlidingDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASlidingDoor_Statics::ClassParams = {
		&ASlidingDoor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ASlidingDoor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASlidingDoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASlidingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASlidingDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASlidingDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASlidingDoor, 3014955838);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASlidingDoor(Z_Construct_UClass_ASlidingDoor, &ASlidingDoor::StaticClass, TEXT("/Script/ProjectToast"), TEXT("ASlidingDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlidingDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
