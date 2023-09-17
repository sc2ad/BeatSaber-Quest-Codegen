#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Axis;
}
// Type: UnityEngine.ProBuilder::Axis
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12102))
// CS Name: UnityEngine.ProBuilder.Axis
struct CORDL_TYPE Axis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Axis(int32_t value__) noexcept;


                    constexpr Axis(Axis const&) = default;
                    constexpr Axis(Axis&&) = default;
                    constexpr Axis& operator=(Axis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Axis& operator=(Axis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Axis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Axis_Unwrapped : int32_t {
__Right = 0,
__Left = 1,
__Up = 2,
__Down = 3,
__Forward = 4,
__Backward = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Axis_Unwrapped () const noexcept {
return std::bit_cast<__Axis_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Right offset 0
static ::UnityEngine::ProBuilder::Axis const Right;

/// @brief Field Left offset 0
static ::UnityEngine::ProBuilder::Axis const Left;

/// @brief Field Up offset 0
static ::UnityEngine::ProBuilder::Axis const Up;

/// @brief Field Down offset 0
static ::UnityEngine::ProBuilder::Axis const Down;

/// @brief Field Forward offset 0
static ::UnityEngine::ProBuilder::Axis const Forward;

/// @brief Field Backward offset 0
static ::UnityEngine::ProBuilder::Axis const Backward;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Axis, "UnityEngine.ProBuilder", "Axis");
