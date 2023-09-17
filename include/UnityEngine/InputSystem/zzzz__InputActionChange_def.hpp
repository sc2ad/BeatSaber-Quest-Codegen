#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
// Type: UnityEngine.InputSystem::InputActionChange
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6223))
// CS Name: UnityEngine.InputSystem.InputActionChange
struct CORDL_TYPE InputActionChange : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputActionChange(int32_t value__) noexcept;


                    constexpr InputActionChange(InputActionChange const&) = default;
                    constexpr InputActionChange(InputActionChange&&) = default;
                    constexpr InputActionChange& operator=(InputActionChange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputActionChange& operator=(InputActionChange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputActionChange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InputActionChange_Unwrapped : int32_t {
__ActionEnabled = 0,
__ActionDisabled = 1,
__ActionMapEnabled = 2,
__ActionMapDisabled = 3,
__ActionStarted = 4,
__ActionPerformed = 5,
__ActionCanceled = 6,
__BoundControlsAboutToChange = 7,
__BoundControlsChanged = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputActionChange_Unwrapped () const noexcept {
return std::bit_cast<__InputActionChange_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ActionEnabled offset 0
static ::UnityEngine::InputSystem::InputActionChange const ActionEnabled;

/// @brief Field ActionDisabled offset 0
static ::UnityEngine::InputSystem::InputActionChange const ActionDisabled;

/// @brief Field ActionMapEnabled offset 0
static ::UnityEngine::InputSystem::InputActionChange const ActionMapEnabled;

/// @brief Field ActionMapDisabled offset 0
static ::UnityEngine::InputSystem::InputActionChange const ActionMapDisabled;

/// @brief Field ActionStarted offset 0
static ::UnityEngine::InputSystem::InputActionChange const ActionStarted;

/// @brief Field ActionPerformed offset 0
static ::UnityEngine::InputSystem::InputActionChange const ActionPerformed;

/// @brief Field ActionCanceled offset 0
static ::UnityEngine::InputSystem::InputActionChange const ActionCanceled;

/// @brief Field BoundControlsAboutToChange offset 0
static ::UnityEngine::InputSystem::InputActionChange const BoundControlsAboutToChange;

/// @brief Field BoundControlsChanged offset 0
static ::UnityEngine::InputSystem::InputActionChange const BoundControlsChanged;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionChange, "UnityEngine.InputSystem", "InputActionChange");
