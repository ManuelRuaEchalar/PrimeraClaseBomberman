// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimeraClase/EnemigoMetal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoMetal() {}
// Cross Module References
	PRIMERACLASE_API UClass* Z_Construct_UClass_AEnemigoMetal_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AEnemigoMetal();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_PrimeraClase();
// End Cross Module References
	void AEnemigoMetal::StaticRegisterNativesAEnemigoMetal()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoMetal_NoRegister()
	{
		return AEnemigoMetal::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoMetal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoMetal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimeraClase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoMetal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoMetal.h" },
		{ "ModuleRelativePath", "EnemigoMetal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoMetal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoMetal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoMetal_Statics::ClassParams = {
		&AEnemigoMetal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoMetal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoMetal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoMetal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoMetal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoMetal, 3789553068);
	template<> PRIMERACLASE_API UClass* StaticClass<AEnemigoMetal>()
	{
		return AEnemigoMetal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoMetal(Z_Construct_UClass_AEnemigoMetal, &AEnemigoMetal::StaticClass, TEXT("/Script/PrimeraClase"), TEXT("AEnemigoMetal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoMetal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
