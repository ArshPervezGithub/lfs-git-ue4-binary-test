// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VersionControlTest/VersionControlTestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVersionControlTestGameModeBase() {}
// Cross Module References
	VERSIONCONTROLTEST_API UClass* Z_Construct_UClass_AVersionControlTestGameModeBase_NoRegister();
	VERSIONCONTROLTEST_API UClass* Z_Construct_UClass_AVersionControlTestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VersionControlTest();
// End Cross Module References
	void AVersionControlTestGameModeBase::StaticRegisterNativesAVersionControlTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AVersionControlTestGameModeBase_NoRegister()
	{
		return AVersionControlTestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVersionControlTestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVersionControlTestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VersionControlTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVersionControlTestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VersionControlTestGameModeBase.h" },
		{ "ModuleRelativePath", "VersionControlTestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVersionControlTestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVersionControlTestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVersionControlTestGameModeBase_Statics::ClassParams = {
		&AVersionControlTestGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVersionControlTestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVersionControlTestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVersionControlTestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVersionControlTestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVersionControlTestGameModeBase, 674984503);
	template<> VERSIONCONTROLTEST_API UClass* StaticClass<AVersionControlTestGameModeBase>()
	{
		return AVersionControlTestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVersionControlTestGameModeBase(Z_Construct_UClass_AVersionControlTestGameModeBase, &AVersionControlTestGameModeBase::StaticClass, TEXT("/Script/VersionControlTest"), TEXT("AVersionControlTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVersionControlTestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
