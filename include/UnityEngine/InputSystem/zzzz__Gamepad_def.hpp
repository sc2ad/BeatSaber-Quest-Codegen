#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadButton;
}
namespace UnityEngine::InputSystem::Controls {
class DpadControl;
}
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
namespace UnityEngine::InputSystem::Haptics {
struct DualMotorRumble;
}
namespace UnityEngine::InputSystem::Controls {
class StickControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Gamepad;
}
// Type: UnityEngine.InputSystem::Gamepad
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6320))
// CS Name: UnityEngine.InputSystem.Gamepad
class CORDL_TYPE Gamepad : public UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::Haptics::IDualMotorRumble
constexpr operator  UnityEngine::InputSystem::Haptics::IDualMotorRumble() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::Haptics::IHaptics
constexpr operator  UnityEngine::InputSystem::Haptics::IHaptics() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d8};

virtual ~Gamepad() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gamepad", modifiers: " const&", def_value: None }]
constexpr Gamepad(Gamepad const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gamepad", modifiers: "&&", def_value: None }]
constexpr Gamepad(Gamepad&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gamepad(void* ptr) noexcept : UnityEngine::InputSystem::InputDevice(ptr) {
}


  constexpr Gamepad& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gamepad& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gamepad& operator=(Gamepad&& o) noexcept = default;
  constexpr Gamepad& operator=(Gamepad const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__buttonWest_k__BackingField, put=__set__buttonWest_k__BackingField))  _buttonWest_k__BackingField;

constexpr void __set__buttonWest_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__buttonWest_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__buttonNorth_k__BackingField, put=__set__buttonNorth_k__BackingField))  _buttonNorth_k__BackingField;

constexpr void __set__buttonNorth_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__buttonNorth_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__buttonSouth_k__BackingField, put=__set__buttonSouth_k__BackingField))  _buttonSouth_k__BackingField;

constexpr void __set__buttonSouth_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__buttonSouth_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__buttonEast_k__BackingField, put=__set__buttonEast_k__BackingField))  _buttonEast_k__BackingField;

constexpr void __set__buttonEast_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__buttonEast_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__leftStickButton_k__BackingField, put=__set__leftStickButton_k__BackingField))  _leftStickButton_k__BackingField;

constexpr void __set__leftStickButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__leftStickButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__rightStickButton_k__BackingField, put=__set__rightStickButton_k__BackingField))  _rightStickButton_k__BackingField;

constexpr void __set__rightStickButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__rightStickButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__startButton_k__BackingField, put=__set__startButton_k__BackingField))  _startButton_k__BackingField;

constexpr void __set__startButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__startButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__selectButton_k__BackingField, put=__set__selectButton_k__BackingField))  _selectButton_k__BackingField;

constexpr void __set__selectButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__selectButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::DpadControl __declspec(property(get=__get__dpad_k__BackingField, put=__set__dpad_k__BackingField))  _dpad_k__BackingField;

constexpr void __set__dpad_k__BackingField(UnityEngine::InputSystem::Controls::DpadControl value) ;

constexpr UnityEngine::InputSystem::Controls::DpadControl __get__dpad_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__leftShoulder_k__BackingField, put=__set__leftShoulder_k__BackingField))  _leftShoulder_k__BackingField;

constexpr void __set__leftShoulder_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__leftShoulder_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__rightShoulder_k__BackingField, put=__set__rightShoulder_k__BackingField))  _rightShoulder_k__BackingField;

constexpr void __set__rightShoulder_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__rightShoulder_k__BackingField() const;

 UnityEngine::InputSystem::Controls::StickControl __declspec(property(get=__get__leftStick_k__BackingField, put=__set__leftStick_k__BackingField))  _leftStick_k__BackingField;

constexpr void __set__leftStick_k__BackingField(UnityEngine::InputSystem::Controls::StickControl value) ;

constexpr UnityEngine::InputSystem::Controls::StickControl __get__leftStick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::StickControl __declspec(property(get=__get__rightStick_k__BackingField, put=__set__rightStick_k__BackingField))  _rightStick_k__BackingField;

constexpr void __set__rightStick_k__BackingField(UnityEngine::InputSystem::Controls::StickControl value) ;

constexpr UnityEngine::InputSystem::Controls::StickControl __get__rightStick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__leftTrigger_k__BackingField, put=__set__leftTrigger_k__BackingField))  _leftTrigger_k__BackingField;

constexpr void __set__leftTrigger_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__leftTrigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__rightTrigger_k__BackingField, put=__set__rightTrigger_k__BackingField))  _rightTrigger_k__BackingField;

constexpr void __set__rightTrigger_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__rightTrigger_k__BackingField() const;

static UnityEngine::InputSystem::Gamepad __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::Gamepad value) ;

static UnityEngine::InputSystem::Gamepad __get__current_k__BackingField() ;

 UnityEngine::InputSystem::Haptics::DualMotorRumble __declspec(property(get=__get_m_Rumble, put=__set_m_Rumble))  m_Rumble;

constexpr void __set_m_Rumble(UnityEngine::InputSystem::Haptics::DualMotorRumble value) ;

constexpr UnityEngine::InputSystem::Haptics::DualMotorRumble __get_m_Rumble() const;

static int32_t __declspec(property(get=__get_s_GamepadCount, put=__set_s_GamepadCount))  s_GamepadCount;

static void __set_s_GamepadCount(int32_t value) ;

static int32_t __get_s_GamepadCount() ;

static ::ArrayW<UnityEngine::InputSystem::Gamepad> __declspec(property(get=__get_s_Gamepads, put=__set_s_Gamepads))  s_Gamepads;

static void __set_s_Gamepads(::ArrayW<UnityEngine::InputSystem::Gamepad> value) ;

static ::ArrayW<UnityEngine::InputSystem::Gamepad> __get_s_Gamepads() ;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_buttonWest, put=set_buttonWest))  buttonWest;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_buttonNorth, put=set_buttonNorth))  buttonNorth;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_buttonSouth, put=set_buttonSouth))  buttonSouth;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_buttonEast, put=set_buttonEast))  buttonEast;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_leftStickButton, put=set_leftStickButton))  leftStickButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_rightStickButton, put=set_rightStickButton))  rightStickButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_startButton, put=set_startButton))  startButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_selectButton, put=set_selectButton))  selectButton;

 UnityEngine::InputSystem::Controls::DpadControl __declspec(property(get=get_dpad, put=set_dpad))  dpad;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_leftShoulder, put=set_leftShoulder))  leftShoulder;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_rightShoulder, put=set_rightShoulder))  rightShoulder;

 UnityEngine::InputSystem::Controls::StickControl __declspec(property(get=get_leftStick, put=set_leftStick))  leftStick;

 UnityEngine::InputSystem::Controls::StickControl __declspec(property(get=get_rightStick, put=set_rightStick))  rightStick;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_leftTrigger, put=set_leftTrigger))  leftTrigger;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_rightTrigger, put=set_rightTrigger))  rightTrigger;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_aButton))  aButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_bButton))  bButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_xButton))  xButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_yButton))  yButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triangleButton))  triangleButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_squareButton))  squareButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_circleButton))  circleButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_crossButton))  crossButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_Item))  Item;

static UnityEngine::InputSystem::Gamepad __declspec(property(get=get_current, put=set_current))  current;

static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Gamepad> __declspec(property(get=get_all))  all;


// Methods

/// @brief Method get_buttonWest addr 0x28d6d74 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_buttonWest() ;

/// @brief Method set_buttonWest addr 0x28d6d7c size 0x8 virtual false final false
 void set_buttonWest(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_buttonNorth addr 0x28d6d84 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_buttonNorth() ;

/// @brief Method set_buttonNorth addr 0x28d6d8c size 0x8 virtual false final false
 void set_buttonNorth(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_buttonSouth addr 0x28d6d94 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_buttonSouth() ;

/// @brief Method set_buttonSouth addr 0x28d6d9c size 0x8 virtual false final false
 void set_buttonSouth(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_buttonEast addr 0x28d6da4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_buttonEast() ;

/// @brief Method set_buttonEast addr 0x28d6dac size 0x8 virtual false final false
 void set_buttonEast(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_leftStickButton addr 0x28d6db4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_leftStickButton() ;

/// @brief Method set_leftStickButton addr 0x28d6dbc size 0x8 virtual false final false
 void set_leftStickButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_rightStickButton addr 0x28d6dc4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_rightStickButton() ;

/// @brief Method set_rightStickButton addr 0x28d6dcc size 0x8 virtual false final false
 void set_rightStickButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_startButton addr 0x28d6dd4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_startButton() ;

/// @brief Method set_startButton addr 0x28d6ddc size 0x8 virtual false final false
 void set_startButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_selectButton addr 0x28d6de4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_selectButton() ;

/// @brief Method set_selectButton addr 0x28d6dec size 0x8 virtual false final false
 void set_selectButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_dpad addr 0x28d6df4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::DpadControl get_dpad() ;

/// @brief Method set_dpad addr 0x28d6dfc size 0x8 virtual false final false
 void set_dpad(UnityEngine::InputSystem::Controls::DpadControl value) ;

/// @brief Method get_leftShoulder addr 0x28d6e04 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_leftShoulder() ;

/// @brief Method set_leftShoulder addr 0x28d6e0c size 0x8 virtual false final false
 void set_leftShoulder(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_rightShoulder addr 0x28d6e14 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_rightShoulder() ;

/// @brief Method set_rightShoulder addr 0x28d6e1c size 0x8 virtual false final false
 void set_rightShoulder(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_leftStick addr 0x28d6e24 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::StickControl get_leftStick() ;

/// @brief Method set_leftStick addr 0x28d6e2c size 0x8 virtual false final false
 void set_leftStick(UnityEngine::InputSystem::Controls::StickControl value) ;

/// @brief Method get_rightStick addr 0x28d6e34 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::StickControl get_rightStick() ;

/// @brief Method set_rightStick addr 0x28d6e3c size 0x8 virtual false final false
 void set_rightStick(UnityEngine::InputSystem::Controls::StickControl value) ;

/// @brief Method get_leftTrigger addr 0x28d6e44 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_leftTrigger() ;

/// @brief Method set_leftTrigger addr 0x28d6e4c size 0x8 virtual false final false
 void set_leftTrigger(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_rightTrigger addr 0x28d6e54 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_rightTrigger() ;

/// @brief Method set_rightTrigger addr 0x28d6e5c size 0x8 virtual false final false
 void set_rightTrigger(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_aButton addr 0x28d6e64 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_aButton() ;

/// @brief Method get_bButton addr 0x28d6e6c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_bButton() ;

/// @brief Method get_xButton addr 0x28d6e74 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_xButton() ;

/// @brief Method get_yButton addr 0x28d6e7c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_yButton() ;

/// @brief Method get_triangleButton addr 0x28d6e84 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triangleButton() ;

/// @brief Method get_squareButton addr 0x28d6e8c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_squareButton() ;

/// @brief Method get_circleButton addr 0x28d6e94 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_circleButton() ;

/// @brief Method get_crossButton addr 0x28d6e9c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_crossButton() ;

/// @brief Method get_Item addr 0x28d6ea4 size 0x164 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_Item(UnityEngine::InputSystem::LowLevel::GamepadButton button) ;

/// @brief Method get_current addr 0x28d7008 size 0x48 virtual false final false
static UnityEngine::InputSystem::Gamepad get_current() ;

/// @brief Method set_current addr 0x28d7050 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::Gamepad value) ;

/// @brief Method get_all addr 0x28d709c size 0x80 virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Gamepad> get_all() ;

/// @brief Method FinishSetup addr 0x28d711c size 0x2e0 virtual true final false
 void FinishSetup() ;

/// @brief Method MakeCurrent addr 0x28d73fc size 0x4c virtual true final false
 void MakeCurrent() ;

/// @brief Method OnAdded addr 0x28d744c size 0x78 virtual true final false
 void OnAdded() ;

/// @brief Method OnRemoved addr 0x28d74c4 size 0x118 virtual true final false
 void OnRemoved() ;

/// @brief Method PauseHaptics addr 0x28d75dc size 0x10 virtual true final false
 void PauseHaptics() ;

/// @brief Method ResumeHaptics addr 0x28d75ec size 0x10 virtual true final false
 void ResumeHaptics() ;

/// @brief Method ResetHaptics addr 0x28d75fc size 0x10 virtual true final false
 void ResetHaptics() ;

/// @brief Method SetMotorSpeeds addr 0x28d760c size 0x10 virtual true final false
 void SetMotorSpeeds(float_t lowFrequency, float_t highFrequency) ;

static UnityEngine::InputSystem::Gamepad New_ctor() ;

/// @brief Method .ctor addr 0x28d761c size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::Gamepad);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Gamepad, "UnityEngine.InputSystem", "Gamepad");
