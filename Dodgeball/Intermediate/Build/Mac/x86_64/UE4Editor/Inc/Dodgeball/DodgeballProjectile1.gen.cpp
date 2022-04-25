// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/DodgeballProjectile1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeballProjectile1() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballProjectile1_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballProjectile1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References
	void ADodgeballProjectile1::StaticRegisterNativesADodgeballProjectile1()
	{
	}
	UClass* Z_Construct_UClass_ADodgeballProjectile1_NoRegister()
	{
		return ADodgeballProjectile1::StaticClass();
	}
	struct Z_Construct_UClass_ADodgeballProjectile1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodgeballProjectile1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballProjectile1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DodgeballProjectile1.h" },
		{ "ModuleRelativePath", "DodgeballProjectile1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodgeballProjectile1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeballProjectile1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADodgeballProjectile1_Statics::ClassParams = {
		&ADodgeballProjectile1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADodgeballProjectile1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballProjectile1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADodgeballProjectile1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADodgeballProjectile1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADodgeballProjectile1, 1839545677);
	template<> DODGEBALL_API UClass* StaticClass<ADodgeballProjectile1>()
	{
		return ADodgeballProjectile1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADodgeballProjectile1(Z_Construct_UClass_ADodgeballProjectile1, &ADodgeballProjectile1::StaticClass, TEXT("/Script/Dodgeball"), TEXT("ADodgeballProjectile1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeballProjectile1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
