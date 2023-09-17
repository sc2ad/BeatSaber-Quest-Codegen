#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaAlign;
}
// Type: UnityEngine.Yoga::YogaAlign
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15378))
// CS Name: UnityEngine.Yoga.YogaAlign
struct CORDL_TYPE YogaAlign : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaAlign(int32_t value__) noexcept;


                    constexpr YogaAlign(YogaAlign const&) = default;
                    constexpr YogaAlign(YogaAlign&&) = default;
                    constexpr YogaAlign& operator=(YogaAlign const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaAlign& operator=(YogaAlign&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaAlign(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __YogaAlign_Unwrapped : int32_t {
__Auto = 0,
__FlexStart = 1,
__Center = 2,
__FlexEnd = 3,
__Stretch = 4,
__Baseline = 5,
__SpaceBetween = 6,
__SpaceAround = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaAlign_Unwrapped () const noexcept {
return std::bit_cast<__YogaAlign_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Auto offset 0
static ::UnityEngine::Yoga::YogaAlign const Auto;

/// @brief Field FlexStart offset 0
static ::UnityEngine::Yoga::YogaAlign const FlexStart;

/// @brief Field Center offset 0
static ::UnityEngine::Yoga::YogaAlign const Center;

/// @brief Field FlexEnd offset 0
static ::UnityEngine::Yoga::YogaAlign const FlexEnd;

/// @brief Field Stretch offset 0
static ::UnityEngine::Yoga::YogaAlign const Stretch;

/// @brief Field Baseline offset 0
static ::UnityEngine::Yoga::YogaAlign const Baseline;

/// @brief Field SpaceBetween offset 0
static ::UnityEngine::Yoga::YogaAlign const SpaceBetween;

/// @brief Field SpaceAround offset 0
static ::UnityEngine::Yoga::YogaAlign const SpaceAround;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaAlign, "UnityEngine.Yoga", "YogaAlign");
