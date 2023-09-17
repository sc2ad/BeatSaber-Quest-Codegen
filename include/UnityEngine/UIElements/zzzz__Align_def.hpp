#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct Align;
}
// Type: UnityEngine.UIElements::Align
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6977))
// CS Name: UnityEngine.UIElements.Align
struct CORDL_TYPE Align : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Align(int32_t value__) noexcept;


                    constexpr Align(Align const&) = default;
                    constexpr Align(Align&&) = default;
                    constexpr Align& operator=(Align const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Align& operator=(Align&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Align(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Align_Unwrapped : int32_t {
__Auto = 0,
__FlexStart = 1,
__Center = 2,
__FlexEnd = 3,
__Stretch = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Align_Unwrapped () const noexcept {
return std::bit_cast<__Align_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Auto offset 0
static ::UnityEngine::UIElements::Align const Auto;

/// @brief Field FlexStart offset 0
static ::UnityEngine::UIElements::Align const FlexStart;

/// @brief Field Center offset 0
static ::UnityEngine::UIElements::Align const Center;

/// @brief Field FlexEnd offset 0
static ::UnityEngine::UIElements::Align const FlexEnd;

/// @brief Field Stretch offset 0
static ::UnityEngine::UIElements::Align const Stretch;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Align, "UnityEngine.UIElements", "Align");
