#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct UsageHints;
}
// Type: UnityEngine.UIElements::UsageHints
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6950))
// CS Name: UnityEngine.UIElements.UsageHints
struct CORDL_TYPE UsageHints : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UsageHints(int32_t value__) noexcept;


                    constexpr UsageHints(UsageHints const&) = default;
                    constexpr UsageHints(UsageHints&&) = default;
                    constexpr UsageHints& operator=(UsageHints const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UsageHints& operator=(UsageHints&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UsageHints(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UsageHints_Unwrapped : int32_t {
__None = 0,
__DynamicTransform = 1,
__GroupTransform = 2,
__MaskContainer = 4,
__DynamicColor = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UsageHints_Unwrapped () const noexcept {
return std::bit_cast<__UsageHints_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::UIElements::UsageHints const None;

/// @brief Field DynamicTransform offset 0
static ::UnityEngine::UIElements::UsageHints const DynamicTransform;

/// @brief Field GroupTransform offset 0
static ::UnityEngine::UIElements::UsageHints const GroupTransform;

/// @brief Field MaskContainer offset 0
static ::UnityEngine::UIElements::UsageHints const MaskContainer;

/// @brief Field DynamicColor offset 0
static ::UnityEngine::UIElements::UsageHints const DynamicColor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UsageHints, "UnityEngine.UIElements", "UsageHints");
