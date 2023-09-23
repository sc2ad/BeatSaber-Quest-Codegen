#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class ColorScheme;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemesSettings;
}
// Type: ::ColorSchemesSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4717))
// CS Name: ColorSchemesSettings
class CORDL_TYPE ColorSchemesSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ColorSchemesSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: " const&", def_value: None }]
constexpr ColorSchemesSettings(ColorSchemesSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemesSettings", modifiers: "&&", def_value: None }]
constexpr ColorSchemesSettings(ColorSchemesSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSchemesSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ColorSchemesSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSchemesSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSchemesSettings& operator=(ColorSchemesSettings&& o) noexcept = default;
  constexpr ColorSchemesSettings& operator=(ColorSchemesSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_overrideDefaultColors, put=__set_overrideDefaultColors))  overrideDefaultColors;

constexpr void __set_overrideDefaultColors(bool value) ;

constexpr bool __get_overrideDefaultColors() const;

 System::Collections::Generic::List_1<GlobalNamespace::ColorScheme> __declspec(property(get=__get__colorSchemesList, put=__set__colorSchemesList))  _colorSchemesList;

constexpr void __set__colorSchemesList(System::Collections::Generic::List_1<GlobalNamespace::ColorScheme> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::ColorScheme> __get__colorSchemesList() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::ColorScheme> __declspec(property(get=__get__colorSchemesDict, put=__set__colorSchemesDict))  _colorSchemesDict;

constexpr void __set__colorSchemesDict(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::ColorScheme> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::ColorScheme> __get__colorSchemesDict() const;

 ::StringW __declspec(property(get=__get__selectedColorSchemeId, put=__set__selectedColorSchemeId))  _selectedColorSchemeId;

constexpr void __set__selectedColorSchemeId(::StringW value) ;

constexpr ::StringW __get__selectedColorSchemeId() const;


// Properties

 ::StringW __declspec(property(get=get_selectedColorSchemeId, put=set_selectedColorSchemeId))  selectedColorSchemeId;


// Methods

/// @brief Method set_selectedColorSchemeId addr 0x221fa50 size 0x8 virtual false final false
 void set_selectedColorSchemeId(::StringW value) ;

/// @brief Method get_selectedColorSchemeId addr 0x221fa58 size 0x8 virtual false final false
 ::StringW get_selectedColorSchemeId() ;

// Ctor Parameters [CppParam { name: "colorSchemes", ty: "::ArrayW<GlobalNamespace::ColorScheme>", modifiers: "", def_value: None }]
explicit ColorSchemesSettings(::ArrayW<GlobalNamespace::ColorScheme> colorSchemes) ;

/// @brief Method .ctor addr 0x221fa60 size 0x160 virtual false final false
 void _ctor(::ArrayW<GlobalNamespace::ColorScheme> colorSchemes) ;

// Ctor Parameters [CppParam { name: "colorSchemeSOs", ty: "::ArrayW<GlobalNamespace::ColorSchemeSO>", modifiers: "", def_value: None }]
explicit ColorSchemesSettings(::ArrayW<GlobalNamespace::ColorSchemeSO> colorSchemeSOs) ;

/// @brief Method .ctor addr 0x221fbc0 size 0x20 virtual false final false
 void _ctor(::ArrayW<GlobalNamespace::ColorSchemeSO> colorSchemeSOs) ;

/// @brief Method ConvertColorSchemeSOs addr 0x221fbe0 size 0x114 virtual false final false
static ::ArrayW<GlobalNamespace::ColorScheme> ConvertColorSchemeSOs(::ArrayW<GlobalNamespace::ColorSchemeSO> colorSchemeSOs) ;

/// @brief Method GetNumberOfColorSchemes addr 0x221fcf4 size 0x48 virtual false final false
 int32_t GetNumberOfColorSchemes() ;

/// @brief Method GetColorSchemeForIdx addr 0x221fd3c size 0x58 virtual false final false
 GlobalNamespace::ColorScheme GetColorSchemeForIdx(int32_t idx) ;

/// @brief Method GetColorSchemeForId addr 0x221fd94 size 0x58 virtual false final false
 GlobalNamespace::ColorScheme GetColorSchemeForId(::StringW id) ;

/// @brief Method SetColorSchemeForId addr 0x221fdec size 0x110 virtual false final false
 void SetColorSchemeForId(GlobalNamespace::ColorScheme colorScheme) ;

/// @brief Method GetSelectedColorScheme addr 0x221fefc size 0x54 virtual false final false
 GlobalNamespace::ColorScheme GetSelectedColorScheme() ;

/// @brief Method GetSelectedColorSchemeIdx addr 0x221ff50 size 0xa0 virtual false final false
 int32_t GetSelectedColorSchemeIdx() ;

/// @brief Method GetOverrideColorScheme addr 0x221fff0 size 0x14 virtual false final false
 GlobalNamespace::ColorScheme GetOverrideColorScheme() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorSchemesSettings);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemesSettings, "", "ColorSchemesSettings");
