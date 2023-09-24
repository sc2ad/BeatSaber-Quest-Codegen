#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
// Type: UnityEngine.InputSystem::InputDeviceChange
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6323))
// CS Name: UnityEngine.InputSystem.InputDeviceChange
struct CORDL_TYPE InputDeviceChange : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputDeviceChange(int32_t value__) noexcept;


                    constexpr InputDeviceChange(InputDeviceChange const&) = default;
                    constexpr InputDeviceChange(InputDeviceChange&&) = default;
                    constexpr InputDeviceChange& operator=(InputDeviceChange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputDeviceChange& operator=(InputDeviceChange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputDeviceChange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputDeviceChange_Unwrapped : int32_t {
__Added = 0,
__Removed = 1,
__Disconnected = 2,
__Reconnected = 3,
__Enabled = 4,
__Disabled = 5,
__UsageChanged = 6,
__ConfigurationChanged = 7,
__SoftReset = 8,
__HardReset = 9,
__Destroyed = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputDeviceChange_Unwrapped () const noexcept {
return std::bit_cast<__InputDeviceChange_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Added offset 0
static UnityEngine::InputSystem::InputDeviceChange const Added;

/// @brief Field Removed offset 0
static UnityEngine::InputSystem::InputDeviceChange const Removed;

/// @brief Field Disconnected offset 0
static UnityEngine::InputSystem::InputDeviceChange const Disconnected;

/// @brief Field Reconnected offset 0
static UnityEngine::InputSystem::InputDeviceChange const Reconnected;

/// @brief Field Enabled offset 0
static UnityEngine::InputSystem::InputDeviceChange const Enabled;

/// @brief Field Disabled offset 0
static UnityEngine::InputSystem::InputDeviceChange const Disabled;

/// @brief Field UsageChanged offset 0
static UnityEngine::InputSystem::InputDeviceChange const UsageChanged;

/// @brief Field ConfigurationChanged offset 0
static UnityEngine::InputSystem::InputDeviceChange const ConfigurationChanged;

/// @brief Field SoftReset offset 0
static UnityEngine::InputSystem::InputDeviceChange const SoftReset;

/// @brief Field HardReset offset 0
static UnityEngine::InputSystem::InputDeviceChange const HardReset;

/// @brief Field Destroyed offset 0
static UnityEngine::InputSystem::InputDeviceChange const Destroyed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputDeviceChange, "UnityEngine.InputSystem", "InputDeviceChange");
