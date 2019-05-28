// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectToast/CustomBlueprintFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomBlueprintFunctions() {}
// Cross Module References
	PROJECTTOAST_API UClass* Z_Construct_UClass_UCustomBlueprintFunctions_NoRegister();
	PROJECTTOAST_API UClass* Z_Construct_UClass_UCustomBlueprintFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ProjectToast();
	PROJECTTOAST_API UFunction* Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UCustomBlueprintFunctions::StaticRegisterNativesUCustomBlueprintFunctions()
	{
		UClass* Class = UCustomBlueprintFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SortByDistance", &UCustomBlueprintFunctions::execSortByDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics
	{
		struct CustomBlueprintFunctions_eventSortByDistance_Parms
		{
			AActor* SourceActor;
			bool Descending;
			TArray<AActor*> inArray;
			TArray<AActor*> outArray;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inArray_Inner;
		static void NewProp_Descending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Descending;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_outArray = { "outArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomBlueprintFunctions_eventSortByDistance_Parms, outArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_outArray_Inner = { "outArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_inArray = { "inArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomBlueprintFunctions_eventSortByDistance_Parms, inArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_inArray_Inner = { "inArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_Descending_SetBit(void* Obj)
	{
		((CustomBlueprintFunctions_eventSortByDistance_Parms*)Obj)->Descending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_Descending = { "Descending", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomBlueprintFunctions_eventSortByDistance_Parms), &Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_Descending_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomBlueprintFunctions_eventSortByDistance_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_outArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_outArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_inArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_inArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_Descending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::NewProp_SourceActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sorting Functions" },
		{ "ModuleRelativePath", "CustomBlueprintFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomBlueprintFunctions, nullptr, "SortByDistance", sizeof(CustomBlueprintFunctions_eventSortByDistance_Parms), Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomBlueprintFunctions_NoRegister()
	{
		return UCustomBlueprintFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UCustomBlueprintFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomBlueprintFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectToast,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomBlueprintFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomBlueprintFunctions_SortByDistance, "SortByDistance" }, // 1541784567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomBlueprintFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomBlueprintFunctions.h" },
		{ "ModuleRelativePath", "CustomBlueprintFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomBlueprintFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomBlueprintFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomBlueprintFunctions_Statics::ClassParams = {
		&UCustomBlueprintFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomBlueprintFunctions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCustomBlueprintFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomBlueprintFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomBlueprintFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomBlueprintFunctions, 937092115);
	template<> PROJECTTOAST_API UClass* StaticClass<UCustomBlueprintFunctions>()
	{
		return UCustomBlueprintFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomBlueprintFunctions(Z_Construct_UClass_UCustomBlueprintFunctions, &UCustomBlueprintFunctions::StaticClass, TEXT("/Script/ProjectToast"), TEXT("UCustomBlueprintFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomBlueprintFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
