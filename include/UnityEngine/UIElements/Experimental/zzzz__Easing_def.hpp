#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class Easing;
}
// Type: UnityEngine.UIElements.Experimental::Easing
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7553))
// CS Name: UnityEngine.UIElements.Experimental.Easing
class CORDL_TYPE Easing : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Easing() = default;

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: " const&", def_value: None }]
constexpr Easing(Easing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "&&", def_value: None }]
constexpr Easing(Easing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Easing(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Easing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Easing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Easing& operator=(Easing&& o) noexcept = default;
  constexpr Easing& operator=(Easing const& o) noexcept = default;
                


// Methods

/// @brief Method Linear addr 0x2c6a474 size 0x4 virtual false final false
static float_t Linear(float_t t) ;

/// @brief Method InSine addr 0x2c6a478 size 0x2c virtual false final false
static float_t InSine(float_t t) ;

/// @brief Method OutSine addr 0x2c6a4a4 size 0x10 virtual false final false
static float_t OutSine(float_t t) ;

/// @brief Method InOutSine addr 0x2c6a4b4 size 0x34 virtual false final false
static float_t InOutSine(float_t t) ;

/// @brief Method InQuad addr 0x2c6a4e8 size 0x8 virtual false final false
static float_t InQuad(float_t t) ;

/// @brief Method OutQuad addr 0x2c6a4f0 size 0x10 virtual false final false
static float_t OutQuad(float_t t) ;

/// @brief Method InOutQuad addr 0x2c6a500 size 0x40 virtual false final false
static float_t InOutQuad(float_t t) ;

/// @brief Method InCubic addr 0x2c6a540 size 0x8 virtual false final false
static float_t InCubic(float_t t) ;

/// @brief Method OutCubic addr 0x2c6a550 size 0x24 virtual false final false
static float_t OutCubic(float_t t) ;

/// @brief Method InOutCubic addr 0x2c6a5ac size 0x48 virtual false final false
static float_t InOutCubic(float_t t) ;

/// @brief Method InPower addr 0x2c6a548 size 0x8 virtual false final false
static float_t InPower(float_t t, int32_t power) ;

/// @brief Method OutPower addr 0x2c6a574 size 0x38 virtual false final false
static float_t OutPower(float_t t, int32_t power) ;

/// @brief Method InOutPower addr 0x2c6a5f4 size 0x68 virtual false final false
static float_t InOutPower(float_t t, int32_t power) ;

/// @brief Method InBounce addr 0x2c6a65c size 0x24 virtual false final false
static float_t InBounce(float_t t) ;

/// @brief Method OutBounce addr 0x2c6a680 size 0xb8 virtual false final false
static float_t OutBounce(float_t t) ;

/// @brief Method InOutBounce addr 0x2c6a738 size 0x54 virtual false final false
static float_t InOutBounce(float_t t) ;

/// @brief Method InElastic addr 0x2c6a78c size 0x78 virtual false final false
static float_t InElastic(float_t t) ;

/// @brief Method OutElastic addr 0x2c6a804 size 0x78 virtual false final false
static float_t OutElastic(float_t t) ;

/// @brief Method InOutElastic addr 0x2c6a87c size 0x104 virtual false final false
static float_t InOutElastic(float_t t) ;

/// @brief Method InBack addr 0x2c6a980 size 0x24 virtual false final false
static float_t InBack(float_t t) ;

/// @brief Method OutBack addr 0x2c6a9a4 size 0x30 virtual false final false
static float_t OutBack(float_t t) ;

/// @brief Method InOutBack addr 0x2c6a9d4 size 0x7c virtual false final false
static float_t InOutBack(float_t t) ;

/// @brief Method InCirc addr 0x2c6aa50 size 0x20 virtual false final false
static float_t InCirc(float_t t) ;

/// @brief Method OutCirc addr 0x2c6aa70 size 0x1c virtual false final false
static float_t OutCirc(float_t t) ;

/// @brief Method InOutCirc addr 0x2c6aa8c size 0x48 virtual false final false
static float_t InOutCirc(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
NEED_NO_BOX(UnityEngine::UIElements::Experimental::Easing);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Experimental::Easing, "UnityEngine.UIElements.Experimental", "Easing");
