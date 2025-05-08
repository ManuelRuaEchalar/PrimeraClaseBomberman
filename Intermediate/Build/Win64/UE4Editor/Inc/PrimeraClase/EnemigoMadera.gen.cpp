// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimeraClase/EnemigoMadera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoMadera() {}
// Cross Module References
	PRIMERACLASE_API UClass* Z_Construct_UClass_AEnemigoMadera_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AEnemigoMadera();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_PrimeraClase();
// End Cross Module References
	void AEnemigoMadera::StaticRegisterNativesAEnemigoMadera()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoMadera_NoRegister()
	{
		return AEnemigoMadera::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoMadera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoMadera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimeraClase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoMadera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoMadera.h" },
		{ "ModuleRelativePath", "EnemigoMadera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoMadera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoMadera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoMadera_Statics::ClassParams = {
		&AEnemigoMadera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoMadera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoMadera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoMadera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoMadera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoMadera, 2691302438);
	template<> PRIMERACLASE_API UClass* StaticClass<AEnemigoMadera>()
	{
		return AEnemigoMadera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoMadera(Z_Construct_UClass_AEnemigoMadera, &AEnemigoMadera::StaticClass, TEXT("/Script/PrimeraClase"), TEXT("AEnemigoMadera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoMadera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
