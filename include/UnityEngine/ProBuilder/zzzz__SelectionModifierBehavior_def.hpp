#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct SelectionModifierBehavior;
}
// Type: UnityEngine.ProBuilder::SelectionModifierBehavior
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12124))
// CS Name: UnityEngine.ProBuilder.SelectionModifierBehavior
struct CORDL_TYPE SelectionModifierBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SelectionModifierBehavior(int32_t value__) noexcept;


                    constexpr SelectionModifierBehavior(SelectionModifierBehavior const&) = default;
                    constexpr SelectionModifierBehavior(SelectionModifierBehavior&&) = default;
                    constexpr SelectionModifierBehavior& operator=(SelectionModifierBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SelectionModifierBehavior& operator=(SelectionModifierBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SelectionModifierBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SelectionModifierBehavior_Unwrapped : int32_t {
__Add = 0,
__Subtract = 1,
__Difference = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SelectionModifierBehavior_Unwrapped () const noexcept {
return std::bit_cast<__SelectionModifierBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Add offset 0
static UnityEngine::ProBuilder::SelectionModifierBehavior const Add;

/// @brief Field Subtract offset 0
static UnityEngine::ProBuilder::SelectionModifierBehavior const Subtract;

/// @brief Field Difference offset 0
static UnityEngine::ProBuilder::SelectionModifierBehavior const Difference;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionModifierBehavior, "UnityEngine.ProBuilder", "SelectionModifierBehavior");
