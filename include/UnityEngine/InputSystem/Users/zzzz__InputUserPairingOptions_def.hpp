#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct InputUserPairingOptions;
}
// Type: UnityEngine.InputSystem.Users::InputUserPairingOptions
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6450))
// CS Name: UnityEngine.InputSystem.Users.InputUserPairingOptions
struct CORDL_TYPE InputUserPairingOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputUserPairingOptions(int32_t value__) noexcept;


                    constexpr InputUserPairingOptions(InputUserPairingOptions const&) = default;
                    constexpr InputUserPairingOptions(InputUserPairingOptions&&) = default;
                    constexpr InputUserPairingOptions& operator=(InputUserPairingOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputUserPairingOptions& operator=(InputUserPairingOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputUserPairingOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputUserPairingOptions_Unwrapped : int32_t {
__None = 0,
__ForcePlatformUserAccountSelection = 1,
__ForceNoPlatformUserAccountSelection = 2,
__UnpairCurrentDevicesFromUser = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputUserPairingOptions_Unwrapped () const noexcept {
return std::bit_cast<__InputUserPairingOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const None;

/// @brief Field ForcePlatformUserAccountSelection offset 0
static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const ForcePlatformUserAccountSelection;

/// @brief Field ForceNoPlatformUserAccountSelection offset 0
static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const ForceNoPlatformUserAccountSelection;

/// @brief Field UnpairCurrentDevicesFromUser offset 0
static ::UnityEngine::InputSystem::Users::InputUserPairingOptions const UnpairCurrentDevicesFromUser;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUserPairingOptions, "UnityEngine.InputSystem.Users", "InputUserPairingOptions");
