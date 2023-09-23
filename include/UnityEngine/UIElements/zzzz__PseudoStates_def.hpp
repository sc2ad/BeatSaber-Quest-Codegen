#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct PseudoStates;
}
// Type: UnityEngine.UIElements::PseudoStates
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6907))
// CS Name: UnityEngine.UIElements.PseudoStates
struct CORDL_TYPE PseudoStates : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PseudoStates(int32_t value__) noexcept;


                    constexpr PseudoStates(PseudoStates const&) = default;
                    constexpr PseudoStates(PseudoStates&&) = default;
                    constexpr PseudoStates& operator=(PseudoStates const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PseudoStates& operator=(PseudoStates&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PseudoStates(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PseudoStates_Unwrapped : int32_t {
__Active = 1,
__Hover = 2,
__Checked = 8,
__Disabled = 32,
__Focus = 64,
__Root = 128,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PseudoStates_Unwrapped () const noexcept {
return std::bit_cast<__PseudoStates_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Active offset 0
static UnityEngine::UIElements::PseudoStates const Active;

/// @brief Field Hover offset 0
static UnityEngine::UIElements::PseudoStates const Hover;

/// @brief Field Checked offset 0
static UnityEngine::UIElements::PseudoStates const Checked;

/// @brief Field Disabled offset 0
static UnityEngine::UIElements::PseudoStates const Disabled;

/// @brief Field Focus offset 0
static UnityEngine::UIElements::PseudoStates const Focus;

/// @brief Field Root offset 0
static UnityEngine::UIElements::PseudoStates const Root;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PseudoStates, "UnityEngine.UIElements", "PseudoStates");
