// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOTC_Character/ClimbComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SOTC_CHARACTER_API UClass* Z_Construct_UClass_UClimbComponent();
SOTC_CHARACTER_API UClass* Z_Construct_UClass_UClimbComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SOTC_Character();
// End Cross Module References

// Begin Class UClimbComponent
void UClimbComponent::StaticRegisterNativesUClimbComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClimbComponent);
UClass* Z_Construct_UClass_UClimbComponent_NoRegister()
{
	return UClimbComponent::StaticClass();
}
struct Z_Construct_UClass_UClimbComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ClimbComponent.h" },
		{ "ModuleRelativePath", "ClimbComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClimbComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UClimbComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SOTC_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClimbComponent_Statics::ClassParams = {
	&UClimbComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClimbComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UClimbComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClimbComponent()
{
	if (!Z_Registration_Info_UClass_UClimbComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClimbComponent.OuterSingleton, Z_Construct_UClass_UClimbComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClimbComponent.OuterSingleton;
}
template<> SOTC_CHARACTER_API UClass* StaticClass<UClimbComponent>()
{
	return UClimbComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClimbComponent);
UClimbComponent::~UClimbComponent() {}
// End Class UClimbComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_antobrom_Documents_Unreal_Projects_CharacterControlller_CharacterController_SOTC_Character_Source_SOTC_Character_ClimbComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClimbComponent, UClimbComponent::StaticClass, TEXT("UClimbComponent"), &Z_Registration_Info_UClass_UClimbComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClimbComponent), 2125702449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antobrom_Documents_Unreal_Projects_CharacterControlller_CharacterController_SOTC_Character_Source_SOTC_Character_ClimbComponent_h_3722651514(TEXT("/Script/SOTC_Character"),
	Z_CompiledInDeferFile_FID_Users_antobrom_Documents_Unreal_Projects_CharacterControlller_CharacterController_SOTC_Character_Source_SOTC_Character_ClimbComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antobrom_Documents_Unreal_Projects_CharacterControlller_CharacterController_SOTC_Character_Source_SOTC_Character_ClimbComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
