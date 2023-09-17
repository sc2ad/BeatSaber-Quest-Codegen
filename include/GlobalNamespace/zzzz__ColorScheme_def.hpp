#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorScheme;
}
// Type: ::ColorScheme
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16035))
// CS Name: ColorScheme
class CORDL_TYPE ColorScheme : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~ColorScheme() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorScheme", modifiers: " const&", def_value: None }]
constexpr ColorScheme(ColorScheme const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorScheme", modifiers: "&&", def_value: None }]
constexpr ColorScheme(ColorScheme&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorScheme(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ColorScheme& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorScheme& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorScheme& operator=(ColorScheme&& o) noexcept = default;
  constexpr ColorScheme& operator=(ColorScheme const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__colorSchemeId, put=__set__colorSchemeId))  _colorSchemeId;

constexpr void __set__colorSchemeId(::StringW value) ;

constexpr ::StringW __get__colorSchemeId() const;

 ::StringW __declspec(property(get=__get__colorSchemeNameLocalizationKey, put=__set__colorSchemeNameLocalizationKey))  _colorSchemeNameLocalizationKey;

constexpr void __set__colorSchemeNameLocalizationKey(::StringW value) ;

constexpr ::StringW __get__colorSchemeNameLocalizationKey() const;

 bool __declspec(property(get=__get__useNonLocalizedName, put=__set__useNonLocalizedName))  _useNonLocalizedName;

constexpr void __set__useNonLocalizedName(bool value) ;

constexpr bool __get__useNonLocalizedName() const;

 ::StringW __declspec(property(get=__get__nonLocalizedName, put=__set__nonLocalizedName))  _nonLocalizedName;

constexpr void __set__nonLocalizedName(::StringW value) ;

constexpr ::StringW __get__nonLocalizedName() const;

 bool __declspec(property(get=__get__isEditable, put=__set__isEditable))  _isEditable;

constexpr void __set__isEditable(bool value) ;

constexpr bool __get__isEditable() const;

 ::UnityEngine::Color __declspec(property(get=__get__saberAColor, put=__set__saberAColor))  _saberAColor;

constexpr void __set__saberAColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__saberAColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__saberBColor, put=__set__saberBColor))  _saberBColor;

constexpr void __set__saberBColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__saberBColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__obstaclesColor, put=__set__obstaclesColor))  _obstaclesColor;

constexpr void __set__obstaclesColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__obstaclesColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__environmentColor0, put=__set__environmentColor0))  _environmentColor0;

constexpr void __set__environmentColor0(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__environmentColor0() const;

 ::UnityEngine::Color __declspec(property(get=__get__environmentColor1, put=__set__environmentColor1))  _environmentColor1;

constexpr void __set__environmentColor1(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__environmentColor1() const;

 ::UnityEngine::Color __declspec(property(get=__get__environmentColorW, put=__set__environmentColorW))  _environmentColorW;

constexpr void __set__environmentColorW(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__environmentColorW() const;

 bool __declspec(property(get=__get__supportsEnvironmentColorBoost, put=__set__supportsEnvironmentColorBoost))  _supportsEnvironmentColorBoost;

constexpr void __set__supportsEnvironmentColorBoost(bool value) ;

constexpr bool __get__supportsEnvironmentColorBoost() const;

 ::UnityEngine::Color __declspec(property(get=__get__environmentColor0Boost, put=__set__environmentColor0Boost))  _environmentColor0Boost;

constexpr void __set__environmentColor0Boost(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__environmentColor0Boost() const;

 ::UnityEngine::Color __declspec(property(get=__get__environmentColor1Boost, put=__set__environmentColor1Boost))  _environmentColor1Boost;

constexpr void __set__environmentColor1Boost(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__environmentColor1Boost() const;

 ::UnityEngine::Color __declspec(property(get=__get__environmentColorWBoost, put=__set__environmentColorWBoost))  _environmentColorWBoost;

constexpr void __set__environmentColorWBoost(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__environmentColorWBoost() const;


// Properties

 ::StringW __declspec(property(get=get_colorSchemeId))  colorSchemeId;

 ::StringW __declspec(property(get=get_colorSchemeNameLocalizationKey))  colorSchemeNameLocalizationKey;

 ::StringW __declspec(property(get=get_nonLocalizedName))  nonLocalizedName;

 bool __declspec(property(get=get_useNonLocalizedName))  useNonLocalizedName;

 bool __declspec(property(get=get_isEditable))  isEditable;

 ::UnityEngine::Color __declspec(property(get=get_saberAColor))  saberAColor;

 ::UnityEngine::Color __declspec(property(get=get_saberBColor))  saberBColor;

 ::UnityEngine::Color __declspec(property(get=get_environmentColor0))  environmentColor0;

 ::UnityEngine::Color __declspec(property(get=get_environmentColor1))  environmentColor1;

 ::UnityEngine::Color __declspec(property(get=get_environmentColorW))  environmentColorW;

 bool __declspec(property(get=get_supportsEnvironmentColorBoost))  supportsEnvironmentColorBoost;

 ::UnityEngine::Color __declspec(property(get=get_environmentColor0Boost))  environmentColor0Boost;

 ::UnityEngine::Color __declspec(property(get=get_environmentColor1Boost))  environmentColor1Boost;

 ::UnityEngine::Color __declspec(property(get=get_environmentColorWBoost))  environmentColorWBoost;

 ::UnityEngine::Color __declspec(property(get=get_obstaclesColor))  obstaclesColor;


// Methods

/// @brief Method get_colorSchemeId addr 0x11a2fec size 0x8 virtual false final false
 ::StringW get_colorSchemeId() ;

/// @brief Method get_colorSchemeNameLocalizationKey addr 0x11a2ff4 size 0x8 virtual false final false
 ::StringW get_colorSchemeNameLocalizationKey() ;

/// @brief Method get_nonLocalizedName addr 0x11a2ffc size 0x8 virtual false final false
 ::StringW get_nonLocalizedName() ;

/// @brief Method get_useNonLocalizedName addr 0x11a3004 size 0x8 virtual false final false
 bool get_useNonLocalizedName() ;

/// @brief Method get_isEditable addr 0x11a300c size 0x8 virtual false final false
 bool get_isEditable() ;

/// @brief Method get_saberAColor addr 0x11a3014 size 0xc virtual false final false
 ::UnityEngine::Color get_saberAColor() ;

/// @brief Method get_saberBColor addr 0x11a3020 size 0xc virtual false final false
 ::UnityEngine::Color get_saberBColor() ;

/// @brief Method get_environmentColor0 addr 0x11a302c size 0xc virtual false final false
 ::UnityEngine::Color get_environmentColor0() ;

/// @brief Method get_environmentColor1 addr 0x11a3038 size 0xc virtual false final false
 ::UnityEngine::Color get_environmentColor1() ;

/// @brief Method get_environmentColorW addr 0x11a3044 size 0xc virtual false final false
 ::UnityEngine::Color get_environmentColorW() ;

/// @brief Method get_supportsEnvironmentColorBoost addr 0x11a3050 size 0x8 virtual false final false
 bool get_supportsEnvironmentColorBoost() ;

/// @brief Method get_environmentColor0Boost addr 0x11a3058 size 0xc virtual false final false
 ::UnityEngine::Color get_environmentColor0Boost() ;

/// @brief Method get_environmentColor1Boost addr 0x11a3064 size 0xc virtual false final false
 ::UnityEngine::Color get_environmentColor1Boost() ;

/// @brief Method get_environmentColorWBoost addr 0x11a3070 size 0xc virtual false final false
 ::UnityEngine::Color get_environmentColorWBoost() ;

/// @brief Method get_obstaclesColor addr 0x11a307c size 0xc virtual false final false
 ::UnityEngine::Color get_obstaclesColor() ;

// Ctor Parameters [CppParam { name: "colorSchemeId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "colorSchemeNameLocalizationKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "useNonLocalizedName", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nonLocalizedName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isEditable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saberAColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "saberBColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor0", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor1", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "supportsEnvironmentColorBoost", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "environmentColor0Boost", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor1Boost", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "obstaclesColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
explicit ColorScheme(::StringW colorSchemeId, ::StringW colorSchemeNameLocalizationKey, bool useNonLocalizedName, ::StringW nonLocalizedName, bool isEditable, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color obstaclesColor) ;

/// @brief Method .ctor addr 0x11a3088 size 0x110 virtual false final false
 void _ctor(::StringW colorSchemeId, ::StringW colorSchemeNameLocalizationKey, bool useNonLocalizedName, ::StringW nonLocalizedName, bool isEditable, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color obstaclesColor) ;

// Ctor Parameters [CppParam { name: "colorScheme", ty: "::GlobalNamespace::ColorScheme", modifiers: "", def_value: None }, CppParam { name: "saberAColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "saberBColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor0", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor1", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "supportsEnvironmentColorBoost", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "environmentColor0Boost", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "environmentColor1Boost", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "obstaclesColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
explicit ColorScheme(::GlobalNamespace::ColorScheme colorScheme, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color obstaclesColor) ;

/// @brief Method .ctor addr 0x11a3198 size 0x90 virtual false final false
 void _ctor(::GlobalNamespace::ColorScheme colorScheme, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, bool supportsEnvironmentColorBoost, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color obstaclesColor) ;

// Ctor Parameters [CppParam { name: "colorScheme", ty: "::GlobalNamespace::ColorScheme", modifiers: "", def_value: None }]
explicit ColorScheme(::GlobalNamespace::ColorScheme colorScheme) ;

/// @brief Method .ctor addr 0x11a3228 size 0xb0 virtual false final false
 void _ctor(::GlobalNamespace::ColorScheme colorScheme) ;

// Ctor Parameters [CppParam { name: "colorScheme", ty: "::GlobalNamespace::ColorSchemeSO", modifiers: "", def_value: None }]
explicit ColorScheme(::GlobalNamespace::ColorSchemeSO colorScheme) ;

/// @brief Method .ctor addr 0x11a32d8 size 0x18 virtual false final false
 void _ctor(::GlobalNamespace::ColorSchemeSO colorScheme) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorScheme, "", "ColorScheme");
