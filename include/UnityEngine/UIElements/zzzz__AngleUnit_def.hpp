#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct AngleUnit;
}
// Type: UnityEngine.UIElements::AngleUnit
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7402))
// CS Name: UnityEngine.UIElements.AngleUnit
struct CORDL_TYPE AngleUnit : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AngleUnit(int32_t value__) noexcept;


                    constexpr AngleUnit(AngleUnit const&) = default;
                    constexpr AngleUnit(AngleUnit&&) = default;
                    constexpr AngleUnit& operator=(AngleUnit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AngleUnit& operator=(AngleUnit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AngleUnit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AngleUnit_Unwrapped : int32_t {
__Degree = 0,
__Gradian = 1,
__Radian = 2,
__Turn = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AngleUnit_Unwrapped () const noexcept {
return std::bit_cast<__AngleUnit_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Degree offset 0
static ::UnityEngine::UIElements::AngleUnit const Degree;

/// @brief Field Gradian offset 0
static ::UnityEngine::UIElements::AngleUnit const Gradian;

/// @brief Field Radian offset 0
static ::UnityEngine::UIElements::AngleUnit const Radian;

/// @brief Field Turn offset 0
static ::UnityEngine::UIElements::AngleUnit const Turn;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AngleUnit, "UnityEngine.UIElements", "AngleUnit");
