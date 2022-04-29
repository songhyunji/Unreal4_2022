// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/DodgeballPlayerController1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeballPlayerController1() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballPlayerController1_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballPlayerController1();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
	DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DODGEBALL_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
// End Cross Module References
	void ADodgeballPlayerController1::StaticRegisterNativesADodgeballPlayerController1()
	{
	}
	UClass* Z_Construct_UClass_ADodgeballPlayerController1_NoRegister()
	{
		return ADodgeballPlayerController1::StaticClass();
	}
	struct Z_Construct_UClass_ADodgeballPlayerController1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_RestartWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_RestartWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BP_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BP_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodgeballPlayerController1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DodgeballPlayerController1.h" },
		{ "ModuleRelativePath", "DodgeballPlayerController1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_RestartWidget_MetaData[] = {
		{ "Category", "DodgeballPlayerController1" },
		{ "ModuleRelativePath", "DodgeballPlayerController1.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_RestartWidget = { "BP_RestartWidget", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController1, BP_RestartWidget), Z_Construct_UClass_URestartWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_RestartWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_RestartWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_HUDWidget_MetaData[] = {
		{ "Category", "DodgeballPlayerController1" },
		{ "ModuleRelativePath", "DodgeballPlayerController1.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_HUDWidget = { "BP_HUDWidget", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController1, BP_HUDWidget), Z_Construct_UClass_UHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_RestartWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeballPlayerController1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_RestartWidget = { "RestartWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController1, RestartWidget), Z_Construct_UClass_URestartWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_RestartWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_RestartWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DodgeballPlayerController1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADodgeballPlayerController1, HUDWidget), Z_Construct_UClass_UHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_HUDWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADodgeballPlayerController1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_RestartWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_BP_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_RestartWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADodgeballPlayerController1_Statics::NewProp_HUDWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodgeballPlayerController1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeballPlayerController1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADodgeballPlayerController1_Statics::ClassParams = {
		&ADodgeballPlayerController1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADodgeballPlayerController1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController1_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADodgeballPlayerController1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballPlayerController1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADodgeballPlayerController1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADodgeballPlayerController1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADodgeballPlayerController1, 426816217);
	template<> DODGEBALL_API UClass* StaticClass<ADodgeballPlayerController1>()
	{
		return ADodgeballPlayerController1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADodgeballPlayerController1(Z_Construct_UClass_ADodgeballPlayerController1, &ADodgeballPlayerController1::StaticClass, TEXT("/Script/Dodgeball"), TEXT("ADodgeballPlayerController1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeballPlayerController1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
