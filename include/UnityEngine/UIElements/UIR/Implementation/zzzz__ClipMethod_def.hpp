#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
struct ClipMethod;
}
// Type: UnityEngine.UIElements.UIR.Implementation::ClipMethod
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7545))
// CS Name: UnityEngine.UIElements.UIR.Implementation.ClipMethod
struct CORDL_TYPE ClipMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClipMethod(int32_t value__) noexcept;


                    constexpr ClipMethod(ClipMethod const&) = default;
                    constexpr ClipMethod(ClipMethod&&) = default;
                    constexpr ClipMethod& operator=(ClipMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ClipMethod& operator=(ClipMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ClipMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ClipMethod_Unwrapped : int32_t {
__Undetermined = 0,
__NotClipped = 1,
__Scissor = 2,
__ShaderDiscard = 3,
__Stencil = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClipMethod_Unwrapped () const noexcept {
return std::bit_cast<__ClipMethod_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undetermined offset 0
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const Undetermined;

/// @brief Field NotClipped offset 0
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const NotClipped;

/// @brief Field Scissor offset 0
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const Scissor;

/// @brief Field ShaderDiscard offset 0
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const ShaderDiscard;

/// @brief Field Stencil offset 0
static ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const Stencil;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR::Implementation
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::ClipMethod, "UnityEngine.UIElements.UIR.Implementation", "ClipMethod");
