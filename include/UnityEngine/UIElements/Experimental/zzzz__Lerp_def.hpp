#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class Lerp;
}
// Type: UnityEngine.UIElements.Experimental::Lerp
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7556))
// CS Name: UnityEngine.UIElements.Experimental.Lerp
class CORDL_TYPE Lerp : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Lerp() = default;

// Ctor Parameters [CppParam { name: "", ty: "Lerp", modifiers: " const&", def_value: None }]
constexpr Lerp(Lerp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Lerp", modifiers: "&&", def_value: None }]
constexpr Lerp(Lerp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Lerp(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Lerp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Lerp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Lerp& operator=(Lerp&& o) noexcept = default;
  constexpr Lerp& operator=(Lerp const& o) noexcept = default;
                


// Methods

/// @brief Method Interpolate addr 0x2c6add8 size 0x10 virtual false final false
static float_t Interpolate(float_t start, float_t end, float_t ratio) ;

/// @brief Method Interpolate addr 0x2c6ade8 size 0x38 virtual false final false
static UnityEngine::Color Interpolate(UnityEngine::Color start, UnityEngine::Color end, float_t ratio) ;

/// @brief Method Interpolate addr 0x2c6ae20 size 0x3f0 virtual false final false
static UnityEngine::UIElements::Experimental::StyleValues Interpolate(UnityEngine::UIElements::Experimental::StyleValues start, UnityEngine::UIElements::Experimental::StyleValues end, float_t ratio) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
NEED_NO_BOX(UnityEngine::UIElements::Experimental::Lerp);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Experimental::Lerp, "UnityEngine.UIElements.Experimental", "Lerp");
