#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
// Type: UnityEngine.InputSystem.Users::InputUserChange
namespace UnityEngine::InputSystem::Users {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6449))
// CS Name: UnityEngine.InputSystem.Users.InputUserChange
struct CORDL_TYPE InputUserChange : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputUserChange(int32_t value__) noexcept;


                    constexpr InputUserChange(InputUserChange const&) = default;
                    constexpr InputUserChange(InputUserChange&&) = default;
                    constexpr InputUserChange& operator=(InputUserChange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputUserChange& operator=(InputUserChange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputUserChange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputUserChange_Unwrapped : int32_t {
__Added = 0,
__Removed = 1,
__DevicePaired = 2,
__DeviceUnpaired = 3,
__DeviceLost = 4,
__DeviceRegained = 5,
__AccountChanged = 6,
__AccountNameChanged = 7,
__AccountSelectionInProgress = 8,
__AccountSelectionCanceled = 9,
__AccountSelectionComplete = 10,
__ControlSchemeChanged = 11,
__ControlsChanged = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputUserChange_Unwrapped () const noexcept {
return std::bit_cast<__InputUserChange_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Added offset 0
static UnityEngine::InputSystem::Users::InputUserChange const Added;

/// @brief Field Removed offset 0
static UnityEngine::InputSystem::Users::InputUserChange const Removed;

/// @brief Field DevicePaired offset 0
static UnityEngine::InputSystem::Users::InputUserChange const DevicePaired;

/// @brief Field DeviceUnpaired offset 0
static UnityEngine::InputSystem::Users::InputUserChange const DeviceUnpaired;

/// @brief Field DeviceLost offset 0
static UnityEngine::InputSystem::Users::InputUserChange const DeviceLost;

/// @brief Field DeviceRegained offset 0
static UnityEngine::InputSystem::Users::InputUserChange const DeviceRegained;

/// @brief Field AccountChanged offset 0
static UnityEngine::InputSystem::Users::InputUserChange const AccountChanged;

/// @brief Field AccountNameChanged offset 0
static UnityEngine::InputSystem::Users::InputUserChange const AccountNameChanged;

/// @brief Field AccountSelectionInProgress offset 0
static UnityEngine::InputSystem::Users::InputUserChange const AccountSelectionInProgress;

/// @brief Field AccountSelectionCanceled offset 0
static UnityEngine::InputSystem::Users::InputUserChange const AccountSelectionCanceled;

/// @brief Field AccountSelectionComplete offset 0
static UnityEngine::InputSystem::Users::InputUserChange const AccountSelectionComplete;

/// @brief Field ControlSchemeChanged offset 0
static UnityEngine::InputSystem::Users::InputUserChange const ControlSchemeChanged;

/// @brief Field ControlsChanged offset 0
static UnityEngine::InputSystem::Users::InputUserChange const ControlsChanged;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Users
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Users::InputUserChange, "UnityEngine.InputSystem.Users", "InputUserChange");
