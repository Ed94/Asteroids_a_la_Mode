// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/NativizedAssets.h"
#include "Public/Difficulty__pf179872773.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDifficulty__pf179872773() {}
// Cross Module References
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Difficulty__pf();
// End Cross Module References
	static UEnum* E__Difficulty__pf_StaticEnum()
	{
		class UPackage* EnumPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Difficulty"));
		class UEnum* Singleton = Cast<UEnum>(StaticFindObjectFast(UEnum::StaticClass(), EnumPackage, TEXT("Difficulty")));
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NativizedAssets_E__Difficulty__pf, EnumPackage, TEXT("Difficulty"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E__Difficulty__pf(E__Difficulty__pf_StaticEnum, TEXT("/Game/Modes/Options/Difficulty"), TEXT("Difficulty"), true, TEXT("/Game/Modes/Options/Difficulty"), TEXT("/Game/Modes/Options/Difficulty.Difficulty"));
	uint32 Get_Z_Construct_UEnum_NativizedAssets_E__Difficulty__pf_CRC() { return 643532953U; }
	UEnum* Z_Construct_UEnum_NativizedAssets_E__Difficulty__pf()
	{
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Difficulty"));		UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Difficulty"), 0, Get_Z_Construct_UEnum_NativizedAssets_E__Difficulty__pf_CRC(), true);
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Difficulty::Difficulty_MAX", (int64)E__Difficulty__pf::E__Difficulty__pf_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "E__Difficulty__pf_MAX.OverrideName", "Difficulty::Difficulty_MAX" },
				{ "EnumDisplayNameFn", "E__Difficulty__pf__GetUserFriendlyName" },
				{ "ModuleRelativePath", "Public/Difficulty__pf179872773.h" },
				{ "OverrideNativeName", "Difficulty" },
				{ "ReplaceConverted", "/Game/Modes/Options/Difficulty.Difficulty" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())[](){ return (UObject*)FindOrConstructDynamicTypePackage(TEXT("/Game/Modes/Options/Difficulty")); },
				UE4CodeGen_Private::EDynamicType::Dynamic,
				"Difficulty",
				RF_Public|RF_Transient,
				E__Difficulty__pf__GetUserFriendlyName,
				(uint8)UEnum::ECppForm::EnumClass,
				"E__Difficulty__pf",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
