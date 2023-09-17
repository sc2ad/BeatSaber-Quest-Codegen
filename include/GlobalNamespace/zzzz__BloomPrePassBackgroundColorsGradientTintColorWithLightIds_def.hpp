#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradient;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColorsGradientTintColorWithLightIds;
}
// Type: ::BloomPrePassBackgroundColorsGradientTintColorWithLightIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14676))
// CS Name: BloomPrePassBackgroundColorsGradientTintColorWithLightIds
class CORDL_TYPE BloomPrePassBackgroundColorsGradientTintColorWithLightIds : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BloomPrePassBackgroundColorsGradientTintColorWithLightIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightIds", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightIds(BloomPrePassBackgroundColorsGradientTintColorWithLightIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColorsGradientTintColorWithLightIds", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightIds(BloomPrePassBackgroundColorsGradientTintColorWithLightIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundColorsGradientTintColorWithLightIds(void* ptr) noexcept : ::GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightIds& operator=(BloomPrePassBackgroundColorsGradientTintColorWithLightIds&& o) noexcept = default;
  constexpr BloomPrePassBackgroundColorsGradientTintColorWithLightIds& operator=(BloomPrePassBackgroundColorsGradientTintColorWithLightIds const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BloomPrePassBackgroundColorsGradient __declspec(property(get=__get__bloomPrePassBackgroundColorsGradient, put=__set__bloomPrePassBackgroundColorsGradient))  _bloomPrePassBackgroundColorsGradient;

constexpr void __set__bloomPrePassBackgroundColorsGradient(::GlobalNamespace::BloomPrePassBackgroundColorsGradient value) ;

constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradient __get__bloomPrePassBackgroundColorsGradient() const;


// Methods

/// @brief Method ColorWasSet addr 0x1f9c58c size 0x20 virtual true final false
 void ColorWasSet(::UnityEngine::Color color) ;

// Ctor Parameters []
explicit BloomPrePassBackgroundColorsGradientTintColorWithLightIds() ;

/// @brief Method .ctor addr 0x1f9c5ac size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds, "", "BloomPrePassBackgroundColorsGradientTintColorWithLightIds");
