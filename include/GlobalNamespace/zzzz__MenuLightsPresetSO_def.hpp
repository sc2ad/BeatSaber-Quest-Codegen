#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair;
}
// Type: ::LightIdColorPair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4461))
// CS Name: MenuLightsPresetSO::LightIdColorPair
class CORDL_TYPE ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair(____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair(____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair& operator=(____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair& operator=(____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_lightId, put=__set_lightId))  lightId;

constexpr void __set_lightId(int32_t value) ;

constexpr int32_t __get_lightId() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get_baseColor, put=__set_baseColor))  baseColor;

constexpr void __set_baseColor(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get_baseColor() const;

 float_t __declspec(property(get=__get_intensity, put=__set_intensity))  intensity;

constexpr void __set_intensity(float_t value) ;

constexpr float_t __get_intensity() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_lightColor))  lightColor;


// Methods

/// @brief Method get_lightColor addr 0x21f08c8 size 0x2c virtual false final false
 ::UnityEngine::Color get_lightColor() ;

// Ctor Parameters []
explicit ____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair() ;

/// @brief Method .ctor addr 0x21f08f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MenuLightsPresetSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4462))
// CS Name: MenuLightsPresetSO
class CORDL_TYPE MenuLightsPresetSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using LightIdColorPair = ::GlobalNamespace::____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MenuLightsPresetSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: " const&", def_value: None }]
constexpr MenuLightsPresetSO(MenuLightsPresetSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuLightsPresetSO", modifiers: "&&", def_value: None }]
constexpr MenuLightsPresetSO(MenuLightsPresetSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuLightsPresetSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr MenuLightsPresetSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuLightsPresetSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuLightsPresetSO& operator=(MenuLightsPresetSO&& o) noexcept = default;
  constexpr MenuLightsPresetSO& operator=(MenuLightsPresetSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__playersPlaceNeonsColor, put=__set__playersPlaceNeonsColor))  _playersPlaceNeonsColor;

constexpr void __set__playersPlaceNeonsColor(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__playersPlaceNeonsColor() const;

 float_t __declspec(property(get=__get__playersPlaceNeonsIntensity, put=__set__playersPlaceNeonsIntensity))  _playersPlaceNeonsIntensity;

constexpr void __set__playersPlaceNeonsIntensity(float_t value) ;

constexpr float_t __get__playersPlaceNeonsIntensity() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> __declspec(property(get=__get__lightIdColorPairs, put=__set__lightIdColorPairs))  _lightIdColorPairs;

constexpr void __set__lightIdColorPairs(::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> __get__lightIdColorPairs() const;


// Properties

 ::GlobalNamespace::ColorSO __declspec(property(get=get_playersPlaceNeonsColor))  playersPlaceNeonsColor;

 float_t __declspec(property(get=get_playersPlaceNeonsIntensity))  playersPlaceNeonsIntensity;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> __declspec(property(get=get_lightIdColorPairs))  lightIdColorPairs;


// Methods

/// @brief Method get_playersPlaceNeonsColor addr 0x21f08a0 size 0x8 virtual false final false
 ::GlobalNamespace::ColorSO get_playersPlaceNeonsColor() ;

/// @brief Method get_playersPlaceNeonsIntensity addr 0x21f08a8 size 0x8 virtual false final false
 float_t get_playersPlaceNeonsIntensity() ;

/// @brief Method get_lightIdColorPairs addr 0x21f08b0 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair> get_lightIdColorPairs() ;

// Ctor Parameters []
explicit MenuLightsPresetSO() ;

/// @brief Method .ctor addr 0x21f08b8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MenuLightsPresetSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuLightsPresetSO, "", "MenuLightsPresetSO");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuLightsPresetSO__LightIdColorPair, "", "MenuLightsPresetSO/LightIdColorPair");
