#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct Justify;
}
// Type: UnityEngine.UIElements::Justify
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6978))
// CS Name: UnityEngine.UIElements.Justify
struct CORDL_TYPE Justify : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Justify(int32_t value__) noexcept;


                    constexpr Justify(Justify const&) = default;
                    constexpr Justify(Justify&&) = default;
                    constexpr Justify& operator=(Justify const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Justify& operator=(Justify&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Justify(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Justify_Unwrapped : int32_t {
__FlexStart = 0,
__Center = 1,
__FlexEnd = 2,
__SpaceBetween = 3,
__SpaceAround = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Justify_Unwrapped () const noexcept {
return std::bit_cast<__Justify_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FlexStart offset 0
static ::UnityEngine::UIElements::Justify const FlexStart;

/// @brief Field Center offset 0
static ::UnityEngine::UIElements::Justify const Center;

/// @brief Field FlexEnd offset 0
static ::UnityEngine::UIElements::Justify const FlexEnd;

/// @brief Field SpaceBetween offset 0
static ::UnityEngine::UIElements::Justify const SpaceBetween;

/// @brief Field SpaceAround offset 0
static ::UnityEngine::UIElements::Justify const SpaceAround;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Justify, "UnityEngine.UIElements", "Justify");
