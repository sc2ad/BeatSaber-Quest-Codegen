#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__JoystickState__Button;
}
namespace UnityEngine::InputSystem::LowLevel {
struct JoystickState;
}
// Type: ::Button
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6583))
// CS Name: UnityEngine.InputSystem.LowLevel.JoystickState::Button
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__JoystickState__Button : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__JoystickState__Button(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__JoystickState__Button(UnityEngine__InputSystem__LowLevel__JoystickState__Button const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__JoystickState__Button(UnityEngine__InputSystem__LowLevel__JoystickState__Button&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__JoystickState__Button& operator=(UnityEngine__InputSystem__LowLevel__JoystickState__Button const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__JoystickState__Button& operator=(UnityEngine__InputSystem__LowLevel__JoystickState__Button&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__JoystickState__Button(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__LowLevel__JoystickState__Button_Unwrapped : int32_t {
__HatSwitchUp = 0,
__HatSwitchDown = 1,
__HatSwitchLeft = 2,
__HatSwitchRight = 3,
__Trigger = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__LowLevel__JoystickState__Button_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__LowLevel__JoystickState__Button_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HatSwitchUp offset 0
static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__JoystickState__Button const HatSwitchUp;

/// @brief Field HatSwitchDown offset 0
static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__JoystickState__Button const HatSwitchDown;

/// @brief Field HatSwitchLeft offset 0
static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__JoystickState__Button const HatSwitchLeft;

/// @brief Field HatSwitchRight offset 0
static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__JoystickState__Button const HatSwitchRight;

/// @brief Field Trigger offset 0
static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__JoystickState__Button const Trigger;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::JoystickState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6584))
// CS Name: UnityEngine.InputSystem.LowLevel.JoystickState
struct CORDL_TYPE JoystickState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Button = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__JoystickState__Button;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "buttons", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stick", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr JoystickState(int32_t buttons, UnityEngine::Vector2 stick) noexcept;


                    constexpr JoystickState(JoystickState const&) = default;
                    constexpr JoystickState(JoystickState&&) = default;
                    constexpr JoystickState& operator=(JoystickState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr JoystickState& operator=(JoystickState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit JoystickState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_buttons, put=__set_buttons))  buttons;

constexpr void __set_buttons(int32_t value) ;

constexpr int32_t __get_buttons() const;

 UnityEngine::Vector2 __declspec(property(get=__get_stick, put=__set_stick))  stick;

constexpr void __set_stick(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_stick() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_kFormat))  kFormat;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_kFormat addr 0x2955ee0 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Method get_format addr 0x2955f10 size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__JoystickState__Button, "UnityEngine.InputSystem.LowLevel", "JoystickState/Button");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::JoystickState, "UnityEngine.InputSystem.LowLevel", "JoystickState");
