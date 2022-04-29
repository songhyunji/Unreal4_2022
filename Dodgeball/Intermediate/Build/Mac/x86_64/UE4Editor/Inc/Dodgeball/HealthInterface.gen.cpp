// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/HealthInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthInterface() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_UHealthInterface_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_UHealthInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References
	DEFINE_FUNCTION(IHealthInterface::execOnTakeDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeDamage_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHealthInterface::execOnDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeath_Implementation();
		P_NATIVE_END;
	}
	void IHealthInterface::OnDeath()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDeath instead.");
	}
	void IHealthInterface::OnTakeDamage()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTakeDamage instead.");
	}
	void UHealthInterface::StaticRegisterNativesUHealthInterface()
	{
		UClass* Class = UHealthInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeath", &IHealthInterface::execOnDeath },
			{ "OnTakeDamage", &IHealthInterface::execOnTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthInterface_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "HealthInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthInterface, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthInterface_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthInterface_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "// \"= 0\" mean this function isn't implemented\n" },
		{ "ModuleRelativePath", "HealthInterface.h" },
		{ "ToolTip", "\"= 0\" mean this function isn't implemented" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthInterface, nullptr, "OnTakeDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthInterface_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthInterface_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealthInterface_NoRegister()
	{
		return UHealthInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHealthInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthInterface_OnDeath, "OnDeath" }, // 370571483
		{ &Z_Construct_UFunction_UHealthInterface_OnTakeDamage, "OnTakeDamage" }, // 3535436850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHealthInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealthInterface_Statics::ClassParams = {
		&UHealthInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealthInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealthInterface, 2462467365);
	template<> DODGEBALL_API UClass* StaticClass<UHealthInterface>()
	{
		return UHealthInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealthInterface(Z_Construct_UClass_UHealthInterface, &UHealthInterface::StaticClass, TEXT("/Script/Dodgeball"), TEXT("UHealthInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthInterface);
	static FName NAME_UHealthInterface_OnDeath = FName(TEXT("OnDeath"));
	void IHealthInterface::Execute_OnDeath(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHealthInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHealthInterface_OnDeath);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHealthInterface*)(O->GetNativeInterfaceAddress(UHealthInterface::StaticClass())))
		{
			I->OnDeath_Implementation();
		}
	}
	static FName NAME_UHealthInterface_OnTakeDamage = FName(TEXT("OnTakeDamage"));
	void IHealthInterface::Execute_OnTakeDamage(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHealthInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHealthInterface_OnTakeDamage);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHealthInterface*)(O->GetNativeInterfaceAddress(UHealthInterface::StaticClass())))
		{
			I->OnTakeDamage_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
