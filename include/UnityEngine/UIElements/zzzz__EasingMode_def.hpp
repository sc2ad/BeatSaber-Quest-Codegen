#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct EasingMode;
}
// Type: UnityEngine.UIElements::EasingMode
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7384))
// CS Name: UnityEngine.UIElements.EasingMode
struct CORDL_TYPE EasingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EasingMode(int32_t value__) noexcept;


                    constexpr EasingMode(EasingMode const&) = default;
                    constexpr EasingMode(EasingMode&&) = default;
                    constexpr EasingMode& operator=(EasingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EasingMode& operator=(EasingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EasingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EasingMode_Unwrapped : int32_t {
__Ease = 0,
__EaseIn = 1,
__EaseOut = 2,
__EaseInOut = 3,
__Linear = 4,
__EaseInSine = 5,
__EaseOutSine = 6,
__EaseInOutSine = 7,
__EaseInCubic = 8,
__EaseOutCubic = 9,
__EaseInOutCubic = 10,
__EaseInCirc = 11,
__EaseOutCirc = 12,
__EaseInOutCirc = 13,
__EaseInElastic = 14,
__EaseOutElastic = 15,
__EaseInOutElastic = 16,
__EaseInBack = 17,
__EaseOutBack = 18,
__EaseInOutBack = 19,
__EaseInBounce = 20,
__EaseOutBounce = 21,
__EaseInOutBounce = 22,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EasingMode_Unwrapped () const noexcept {
return std::bit_cast<__EasingMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Ease offset 0
static UnityEngine::UIElements::EasingMode const Ease;

/// @brief Field EaseIn offset 0
static UnityEngine::UIElements::EasingMode const EaseIn;

/// @brief Field EaseOut offset 0
static UnityEngine::UIElements::EasingMode const EaseOut;

/// @brief Field EaseInOut offset 0
static UnityEngine::UIElements::EasingMode const EaseInOut;

/// @brief Field Linear offset 0
static UnityEngine::UIElements::EasingMode const Linear;

/// @brief Field EaseInSine offset 0
static UnityEngine::UIElements::EasingMode const EaseInSine;

/// @brief Field EaseOutSine offset 0
static UnityEngine::UIElements::EasingMode const EaseOutSine;

/// @brief Field EaseInOutSine offset 0
static UnityEngine::UIElements::EasingMode const EaseInOutSine;

/// @brief Field EaseInCubic offset 0
static UnityEngine::UIElements::EasingMode const EaseInCubic;

/// @brief Field EaseOutCubic offset 0
static UnityEngine::UIElements::EasingMode const EaseOutCubic;

/// @brief Field EaseInOutCubic offset 0
static UnityEngine::UIElements::EasingMode const EaseInOutCubic;

/// @brief Field EaseInCirc offset 0
static UnityEngine::UIElements::EasingMode const EaseInCirc;

/// @brief Field EaseOutCirc offset 0
static UnityEngine::UIElements::EasingMode const EaseOutCirc;

/// @brief Field EaseInOutCirc offset 0
static UnityEngine::UIElements::EasingMode const EaseInOutCirc;

/// @brief Field EaseInElastic offset 0
static UnityEngine::UIElements::EasingMode const EaseInElastic;

/// @brief Field EaseOutElastic offset 0
static UnityEngine::UIElements::EasingMode const EaseOutElastic;

/// @brief Field EaseInOutElastic offset 0
static UnityEngine::UIElements::EasingMode const EaseInOutElastic;

/// @brief Field EaseInBack offset 0
static UnityEngine::UIElements::EasingMode const EaseInBack;

/// @brief Field EaseOutBack offset 0
static UnityEngine::UIElements::EasingMode const EaseOutBack;

/// @brief Field EaseInOutBack offset 0
static UnityEngine::UIElements::EasingMode const EaseInOutBack;

/// @brief Field EaseInBounce offset 0
static UnityEngine::UIElements::EasingMode const EaseInBounce;

/// @brief Field EaseOutBounce offset 0
static UnityEngine::UIElements::EasingMode const EaseOutBounce;

/// @brief Field EaseInOutBounce offset 0
static UnityEngine::UIElements::EasingMode const EaseInOutBounce;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::EasingMode, "UnityEngine.UIElements", "EasingMode");
