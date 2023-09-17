#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct OwnedState;
}
// Type: UnityEngine.UIElements.UIR::OwnedState
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7473))
// CS Name: UnityEngine.UIElements.UIR.OwnedState
struct CORDL_TYPE OwnedState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr OwnedState(uint8_t value__) noexcept;


                    constexpr OwnedState(OwnedState const&) = default;
                    constexpr OwnedState(OwnedState&&) = default;
                    constexpr OwnedState& operator=(OwnedState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OwnedState& operator=(OwnedState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OwnedState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OwnedState_Unwrapped : uint8_t {
__Inherited = 0u,
__Owned = 1u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OwnedState_Unwrapped () const noexcept {
return std::bit_cast<__OwnedState_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Inherited offset 0
static ::UnityEngine::UIElements::UIR::OwnedState const Inherited;

/// @brief Field Owned offset 0
static ::UnityEngine::UIElements::UIR::OwnedState const Owned;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::OwnedState, "UnityEngine.UIElements.UIR", "OwnedState");
