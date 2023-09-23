#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorHelpers;
}
// Type: ::LightColorHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5024))
// CS Name: LightColorHelpers
class CORDL_TYPE LightColorHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LightColorHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorHelpers", modifiers: " const&", def_value: None }]
constexpr LightColorHelpers(LightColorHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorHelpers", modifiers: "&&", def_value: None }]
constexpr LightColorHelpers(LightColorHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightColorHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LightColorHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightColorHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightColorHelpers& operator=(LightColorHelpers&& o) noexcept = default;
  constexpr LightColorHelpers& operator=(LightColorHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method AdjustColorWithStrobe addr 0x225df70 size 0xd8 virtual false final false
static UnityEngine::Color AdjustColorWithStrobe(UnityEngine::Color fromColor, UnityEngine::Color toColor, UnityEngine::Color offColor, float_t t, float_t fromStrobeFrequency, float_t toStrobeFrequency, float_t tweenDuration) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightColorHelpers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightColorHelpers, "", "LightColorHelpers");
