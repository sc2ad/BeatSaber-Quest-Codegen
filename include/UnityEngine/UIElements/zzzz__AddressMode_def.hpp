#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct AddressMode;
}
// Type: UnityEngine.UIElements::AddressMode
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6888))
// CS Name: UnityEngine.UIElements.AddressMode
struct CORDL_TYPE AddressMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddressMode(int32_t value__) noexcept;


                    constexpr AddressMode(AddressMode const&) = default;
                    constexpr AddressMode(AddressMode&&) = default;
                    constexpr AddressMode& operator=(AddressMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AddressMode& operator=(AddressMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AddressMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AddressMode_Unwrapped : int32_t {
__Wrap = 0,
__Clamp = 1,
__Mirror = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AddressMode_Unwrapped () const noexcept {
return std::bit_cast<__AddressMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Wrap offset 0
static UnityEngine::UIElements::AddressMode const Wrap;

/// @brief Field Clamp offset 0
static UnityEngine::UIElements::AddressMode const Clamp;

/// @brief Field Mirror offset 0
static UnityEngine::UIElements::AddressMode const Mirror;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::AddressMode, "UnityEngine.UIElements", "AddressMode");
