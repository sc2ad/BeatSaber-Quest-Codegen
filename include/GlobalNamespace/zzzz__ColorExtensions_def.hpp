#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorExtensions;
}
// Type: ::ColorExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13779))
// CS Name: ColorExtensions
class CORDL_TYPE ColorExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ColorExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorExtensions", modifiers: " const&", def_value: None }]
constexpr ColorExtensions(ColorExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorExtensions", modifiers: "&&", def_value: None }]
constexpr ColorExtensions(ColorExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ColorExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorExtensions& operator=(ColorExtensions&& o) noexcept = default;
  constexpr ColorExtensions& operator=(ColorExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method SaturatedColor addr 0x1f753d4 size 0x58 virtual false final false
static ::UnityEngine::Color SaturatedColor(::UnityEngine::Color color, float_t saturation) ;

/// @brief Method ColorWithAlpha addr 0x1f7542c size 0x8 virtual false final false
static ::UnityEngine::Color ColorWithAlpha(::UnityEngine::Color color, float_t alpha) ;

/// @brief Method ColorWithR addr 0x1f75434 size 0x8 virtual false final false
static ::UnityEngine::Color ColorWithR(::UnityEngine::Color color, float_t r) ;

/// @brief Method ColorWithG addr 0x1f7543c size 0x8 virtual false final false
static ::UnityEngine::Color ColorWithG(::UnityEngine::Color color, float_t g) ;

/// @brief Method ColorWithB addr 0x1f75444 size 0x8 virtual false final false
static ::UnityEngine::Color ColorWithB(::UnityEngine::Color color, float_t b) ;

/// @brief Method ColorWithValue addr 0x1f7544c size 0x54 virtual false final false
static ::UnityEngine::Color ColorWithValue(::UnityEngine::Color color, float_t value) ;

/// @brief Method LerpRGBUnclamped addr 0x1f754a0 size 0x2c virtual false final false
static ::UnityEngine::Color LerpRGBUnclamped(::UnityEngine::Color a, ::UnityEngine::Color b, float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorExtensions, "", "ColorExtensions");
