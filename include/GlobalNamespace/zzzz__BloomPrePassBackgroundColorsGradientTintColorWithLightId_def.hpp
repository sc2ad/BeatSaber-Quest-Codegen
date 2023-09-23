#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientTintColorWithLightId;
}
// Type: ::BloomPrePassBackgroundColorsGradientTintColorWithLightId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14713))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14675))
// CS Name: BloomPrePassBackgroundColorsGradientTintColorWithLightId
class CORDL_TYPE BloomPrePassBackgroundColorsGradientTintColorWithLightId : public GlobalNamespace::RuntimeLightWithIds {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~BloomPrePassBackgroundColorsGradientTintColorWithLightId() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightId", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightId(BloomPrePassBackgroundColorsGradientTintColorWithLightId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightId", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightId(BloomPrePassBackgroundColorsGradientTintColorWithLightId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundColorsGradientTintColorWithLightId(void* ptr) noexcept : GlobalNamespace::RuntimeLightWithIds(ptr) {
}


  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightId& operator=(BloomPrePassBackgroundColorsGradientTintColorWithLightId&& o) noexcept = default;
  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightId& operator=(BloomPrePassBackgroundColorsGradientTintColorWithLightId const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassBackgroundColorsGradient __declspec(property(get=__get__bloomPrePassBackgroundColorsGradient, put=__set__bloomPrePassBackgroundColorsGradient))  _bloomPrePassBackgroundColorsGradient;

constexpr void __set__bloomPrePassBackgroundColorsGradient(GlobalNamespace::BloomPrePassBackgroundColorsGradient value) ;

constexpr GlobalNamespace::BloomPrePassBackgroundColorsGradient __get__bloomPrePassBackgroundColorsGradient() const;

 bool __declspec(property(get=__get__useGrayscale, put=__set__useGrayscale))  _useGrayscale;

constexpr void __set__useGrayscale(bool value) ;

constexpr bool __get__useGrayscale() const;

 float_t __declspec(property(get=__get_grayscaleFactor, put=__set_grayscaleFactor))  grayscaleFactor;

constexpr void __set_grayscaleFactor(float_t value) ;

constexpr float_t __get_grayscaleFactor() const;


// Methods

/// @brief Method ColorWasSet addr 0x1f9c4ec size 0x70 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

// Ctor Parameters []
explicit BloomPrePassBackgroundColorsGradientTintColorWithLightId() ;

/// @brief Method .ctor addr 0x1f9c55c size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId, "", "BloomPrePassBackgroundColorsGradientTintColorWithLightId");
