// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimeraClase/Puntuacion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuntuacion() {}
// Cross Module References
	PRIMERACLASE_API UClass* Z_Construct_UClass_APuntuacion_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_APuntuacion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PrimeraClase();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void APuntuacion::StaticRegisterNativesAPuntuacion()
	{
	}
	UClass* Z_Construct_UClass_APuntuacion_NoRegister()
	{
		return APuntuacion::StaticClass();
	}
	struct Z_Construct_UClass_APuntuacion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuntuacion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimeraClase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuntuacion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * APuntuacion\n * Actor singleton que muestra la puntuaci\xc3\xb3n en pantalla.\n */" },
		{ "IncludePath", "Puntuacion.h" },
		{ "ModuleRelativePath", "Puntuacion.h" },
		{ "ToolTip", "APuntuacion\nActor singleton que muestra la puntuaci\xc3\xb3n en pantalla." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuntuacion_Statics::NewProp_TextComponent_MetaData[] = {
		{ "Category", "Puntuacion" },
		{ "Comment", "// Componente para mostrar texto en el mundo\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Puntuacion.h" },
		{ "ToolTip", "Componente para mostrar texto en el mundo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuntuacion_Statics::NewProp_TextComponent = { "TextComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuntuacion, TextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuntuacion_Statics::NewProp_TextComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuntuacion_Statics::NewProp_TextComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuntuacion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuntuacion_Statics::NewProp_TextComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuntuacion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuntuacion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuntuacion_Statics::ClassParams = {
		&APuntuacion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuntuacion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuntuacion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuntuacion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuntuacion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuntuacion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuntuacion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuntuacion, 608596793);
	template<> PRIMERACLASE_API UClass* StaticClass<APuntuacion>()
	{
		return APuntuacion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuntuacion(Z_Construct_UClass_APuntuacion, &APuntuacion::StaticClass, TEXT("/Script/PrimeraClase"), TEXT("APuntuacion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuntuacion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
