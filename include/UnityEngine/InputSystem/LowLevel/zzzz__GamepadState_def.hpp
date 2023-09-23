#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadButton;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadState;
}
// Type: UnityEngine.InputSystem.LowLevel::GamepadState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6575))
// CS Name: UnityEngine.InputSystem.LowLevel.GamepadState
struct CORDL_TYPE GamepadState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "buttons", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "leftStick", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "rightStick", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "leftTrigger", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightTrigger", ty: "float_t", modifiers: "", def_value: None }]
constexpr GamepadState(uint32_t buttons, UnityEngine::Vector2 leftStick, UnityEngine::Vector2 rightStick, float_t leftTrigger, float_t rightTrigger) noexcept;


                    constexpr GamepadState(GamepadState const&) = default;
                    constexpr GamepadState(GamepadState&&) = default;
                    constexpr GamepadState& operator=(GamepadState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GamepadState& operator=(GamepadState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GamepadState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field ButtonSouthShortDisplayName offset 0
static constexpr ::ConstString  ButtonSouthShortDisplayName{u"A"};

/// @brief Field ButtonNorthShortDisplayName offset 0
static constexpr ::ConstString  ButtonNorthShortDisplayName{u"Y"};

/// @brief Field ButtonWestShortDisplayName offset 0
static constexpr ::ConstString  ButtonWestShortDisplayName{u"X"};

/// @brief Field ButtonEastShortDisplayName offset 0
static constexpr ::ConstString  ButtonEastShortDisplayName{u"B"};

 uint32_t __declspec(property(get=__get_buttons, put=__set_buttons))  buttons;

constexpr void __set_buttons(uint32_t value) ;

constexpr uint32_t __get_buttons() const;

 UnityEngine::Vector2 __declspec(property(get=__get_leftStick, put=__set_leftStick))  leftStick;

constexpr void __set_leftStick(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_leftStick() const;

 UnityEngine::Vector2 __declspec(property(get=__get_rightStick, put=__set_rightStick))  rightStick;

constexpr void __set_rightStick(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_rightStick() const;

 float_t __declspec(property(get=__get_leftTrigger, put=__set_leftTrigger))  leftTrigger;

constexpr void __set_leftTrigger(float_t value) ;

constexpr float_t __get_leftTrigger() const;

 float_t __declspec(property(get=__get_rightTrigger, put=__set_rightTrigger))  rightTrigger;

constexpr void __set_rightTrigger(float_t value) ;

constexpr float_t __get_rightTrigger() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Format))  Format;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_Format addr 0x2955d38 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method get_format addr 0x2955d68 size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method .ctor addr 0x2955d98 size 0xb4 virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::LowLevel::GamepadButton> buttons) ;

/// @brief Method WithButton addr 0x2955e4c size 0x34 virtual false final false
 UnityEngine::InputSystem::LowLevel::GamepadState WithButton(UnityEngine::InputSystem::LowLevel::GamepadButton button, bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::GamepadState, "UnityEngine.InputSystem.LowLevel", "GamepadState");
