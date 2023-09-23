#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class EnvironmentSizeData;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace GlobalNamespace {
class EnvironmentLightGroups;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Type: ::EnvironmentInfoSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4199))
// CS Name: EnvironmentInfoSO
class CORDL_TYPE EnvironmentInfoSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~EnvironmentInfoSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfoSO", modifiers: " const&", def_value: None }]
constexpr EnvironmentInfoSO(EnvironmentInfoSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentInfoSO", modifiers: "&&", def_value: None }]
constexpr EnvironmentInfoSO(EnvironmentInfoSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentInfoSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr EnvironmentInfoSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentInfoSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentInfoSO& operator=(EnvironmentInfoSO&& o) noexcept = default;
  constexpr EnvironmentInfoSO& operator=(EnvironmentInfoSO const& o) noexcept = default;
                


// Fields

/// @brief Field kLightGroupSubDir offset 0
static constexpr ::ConstString  kLightGroupSubDir{u"LightGroups"};

 ::StringW __declspec(property(get=__get__environmentName, put=__set__environmentName))  _environmentName;

constexpr void __set__environmentName(::StringW value) ;

constexpr ::StringW __get__environmentName() const;

 GlobalNamespace::ColorSchemeSO __declspec(property(get=__get__colorScheme, put=__set__colorScheme))  _colorScheme;

constexpr void __set__colorScheme(GlobalNamespace::ColorSchemeSO value) ;

constexpr GlobalNamespace::ColorSchemeSO __get__colorScheme() const;

 GlobalNamespace::SceneInfo __declspec(property(get=__get__sceneInfo, put=__set__sceneInfo))  _sceneInfo;

constexpr void __set__sceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__sceneInfo() const;

 ::StringW __declspec(property(get=__get__serializedName, put=__set__serializedName))  _serializedName;

constexpr void __set__serializedName(::StringW value) ;

constexpr ::StringW __get__serializedName() const;

 ::StringW __declspec(property(get=__get__environmentAssetDirectory, put=__set__environmentAssetDirectory))  _environmentAssetDirectory;

constexpr void __set__environmentAssetDirectory(::StringW value) ;

constexpr ::StringW __get__environmentAssetDirectory() const;

 GlobalNamespace::EnvironmentTypeSO __declspec(property(get=__get__environmentType, put=__set__environmentType))  _environmentType;

constexpr void __set__environmentType(GlobalNamespace::EnvironmentTypeSO value) ;

constexpr GlobalNamespace::EnvironmentTypeSO __get__environmentType() const;

 GlobalNamespace::EnvironmentSizeData __declspec(property(get=__get__environmentSizeData, put=__set__environmentSizeData))  _environmentSizeData;

constexpr void __set__environmentSizeData(GlobalNamespace::EnvironmentSizeData value) ;

constexpr GlobalNamespace::EnvironmentSizeData __get__environmentSizeData() const;

 GlobalNamespace::EnvironmentIntensityReductionOptions __declspec(property(get=__get__environmentIntensityReductionOptions, put=__set__environmentIntensityReductionOptions))  _environmentIntensityReductionOptions;

constexpr void __set__environmentIntensityReductionOptions(GlobalNamespace::EnvironmentIntensityReductionOptions value) ;

constexpr GlobalNamespace::EnvironmentIntensityReductionOptions __get__environmentIntensityReductionOptions() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__environmentKeywords, put=__set__environmentKeywords))  _environmentKeywords;

constexpr void __set__environmentKeywords(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__environmentKeywords() const;

 GlobalNamespace::EnvironmentLightGroups __declspec(property(get=__get__lightGroups, put=__set__lightGroups))  _lightGroups;

constexpr void __set__lightGroups(GlobalNamespace::EnvironmentLightGroups value) ;

constexpr GlobalNamespace::EnvironmentLightGroups __get__lightGroups() const;

 GlobalNamespace::DefaultEnvironmentEvents __declspec(property(get=__get__defaultEnvironmentEvents, put=__set__defaultEnvironmentEvents))  _defaultEnvironmentEvents;

constexpr void __set__defaultEnvironmentEvents(GlobalNamespace::DefaultEnvironmentEvents value) ;

constexpr GlobalNamespace::DefaultEnvironmentEvents __get__defaultEnvironmentEvents() const;


// Properties

 GlobalNamespace::SceneInfo __declspec(property(get=get_sceneInfo))  sceneInfo;

 ::StringW __declspec(property(get=get_environmentName))  environmentName;

 GlobalNamespace::ColorSchemeSO __declspec(property(get=get_colorScheme))  colorScheme;

 ::StringW __declspec(property(get=get_serializedName))  serializedName;

 ::StringW __declspec(property(get=get_environmentAssetDirectory))  environmentAssetDirectory;

 GlobalNamespace::EnvironmentTypeSO __declspec(property(get=get_environmentType))  environmentType;

 GlobalNamespace::EnvironmentSizeData __declspec(property(get=get_environmentSizeData))  environmentSizeData;

 GlobalNamespace::EnvironmentIntensityReductionOptions __declspec(property(get=get_environmentIntensityReductionOptions))  environmentIntensityReductionOptions;

 System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=get_environmentKeywords))  environmentKeywords;

 GlobalNamespace::EnvironmentLightGroups __declspec(property(get=get_lightGroups))  lightGroups;

 GlobalNamespace::DefaultEnvironmentEvents __declspec(property(get=get_defaultEnvironmentEvents))  defaultEnvironmentEvents;


// Methods

/// @brief Method get_sceneInfo addr 0x21bee58 size 0x8 virtual false final false
 GlobalNamespace::SceneInfo get_sceneInfo() ;

/// @brief Method get_environmentName addr 0x21bee60 size 0x8 virtual false final false
 ::StringW get_environmentName() ;

/// @brief Method get_colorScheme addr 0x21bee68 size 0x8 virtual false final false
 GlobalNamespace::ColorSchemeSO get_colorScheme() ;

/// @brief Method get_serializedName addr 0x21bee70 size 0x8 virtual false final false
 ::StringW get_serializedName() ;

/// @brief Method get_environmentAssetDirectory addr 0x21bee78 size 0x8 virtual false final false
 ::StringW get_environmentAssetDirectory() ;

/// @brief Method get_environmentType addr 0x21bee80 size 0x8 virtual false final false
 GlobalNamespace::EnvironmentTypeSO get_environmentType() ;

/// @brief Method get_environmentSizeData addr 0x21bee88 size 0x8 virtual false final false
 GlobalNamespace::EnvironmentSizeData get_environmentSizeData() ;

/// @brief Method get_environmentIntensityReductionOptions addr 0x21bee90 size 0x8 virtual false final false
 GlobalNamespace::EnvironmentIntensityReductionOptions get_environmentIntensityReductionOptions() ;

/// @brief Method get_environmentKeywords addr 0x21bee98 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<::StringW> get_environmentKeywords() ;

/// @brief Method get_lightGroups addr 0x21beea0 size 0x8 virtual false final false
 GlobalNamespace::EnvironmentLightGroups get_lightGroups() ;

/// @brief Method get_defaultEnvironmentEvents addr 0x21beea8 size 0x8 virtual false final false
 GlobalNamespace::DefaultEnvironmentEvents get_defaultEnvironmentEvents() ;

// Ctor Parameters []
explicit EnvironmentInfoSO() ;

/// @brief Method .ctor addr 0x21beeb0 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentInfoSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentInfoSO, "", "EnvironmentInfoSO");
