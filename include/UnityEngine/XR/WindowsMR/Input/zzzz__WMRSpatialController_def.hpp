#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Forward declare root types
namespace UnityEngine::XR::WindowsMR::Input {
class WMRSpatialController;
}
// Type: UnityEngine.XR.WindowsMR.Input::WMRSpatialController
namespace UnityEngine::XR::WindowsMR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6209))
// CS Name: UnityEngine.XR.WindowsMR.Input.WMRSpatialController
class CORDL_TYPE WMRSpatialController : public UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x200};

virtual ~WMRSpatialController() = default;

// Ctor Parameters [CppParam { name: "", ty: "WMRSpatialController", modifiers: " const&", def_value: None }]
constexpr WMRSpatialController(WMRSpatialController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WMRSpatialController", modifiers: "&&", def_value: None }]
constexpr WMRSpatialController(WMRSpatialController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WMRSpatialController(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr WMRSpatialController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WMRSpatialController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WMRSpatialController& operator=(WMRSpatialController&& o) noexcept = default;
  constexpr WMRSpatialController& operator=(WMRSpatialController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__joystick_k__BackingField, put=__set__joystick_k__BackingField))  _joystick_k__BackingField;

constexpr void __set__joystick_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__joystick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__touchpad_k__BackingField, put=__set__touchpad_k__BackingField))  _touchpad_k__BackingField;

constexpr void __set__touchpad_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__touchpad_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__menu_k__BackingField, put=__set__menu_k__BackingField))  _menu_k__BackingField;

constexpr void __set__menu_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__menu_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__joystickClicked_k__BackingField, put=__set__joystickClicked_k__BackingField))  _joystickClicked_k__BackingField;

constexpr void __set__joystickClicked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__joystickClicked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadClicked_k__BackingField, put=__set__touchpadClicked_k__BackingField))  _touchpadClicked_k__BackingField;

constexpr void __set__touchpadClicked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadClicked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadTouched_k__BackingField, put=__set__touchpadTouched_k__BackingField))  _touchpadTouched_k__BackingField;

constexpr void __set__touchpadTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField))  _deviceVelocity_k__BackingField;

constexpr void __set__deviceVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField))  _deviceAngularVelocity_k__BackingField;

constexpr void __set__deviceAngularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__batteryLevel_k__BackingField, put=__set__batteryLevel_k__BackingField))  _batteryLevel_k__BackingField;

constexpr void __set__batteryLevel_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__batteryLevel_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__sourceLossRisk_k__BackingField, put=__set__sourceLossRisk_k__BackingField))  _sourceLossRisk_k__BackingField;

constexpr void __set__sourceLossRisk_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__sourceLossRisk_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__sourceLossMitigationDirection_k__BackingField, put=__set__sourceLossMitigationDirection_k__BackingField))  _sourceLossMitigationDirection_k__BackingField;

constexpr void __set__sourceLossMitigationDirection_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__sourceLossMitigationDirection_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__pointerPosition_k__BackingField, put=__set__pointerPosition_k__BackingField))  _pointerPosition_k__BackingField;

constexpr void __set__pointerPosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__pointerPosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__pointerRotation_k__BackingField, put=__set__pointerRotation_k__BackingField))  _pointerRotation_k__BackingField;

constexpr void __set__pointerRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__pointerRotation_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_joystick, put=set_joystick))  joystick;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_touchpad, put=set_touchpad))  touchpad;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_menu, put=set_menu))  menu;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_joystickClicked, put=set_joystickClicked))  joystickClicked;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadClicked, put=set_touchpadClicked))  touchpadClicked;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadTouched, put=set_touchpadTouched))  touchpadTouched;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity))  deviceVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity))  deviceAngularVelocity;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_batteryLevel, put=set_batteryLevel))  batteryLevel;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_sourceLossRisk, put=set_sourceLossRisk))  sourceLossRisk;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_sourceLossMitigationDirection, put=set_sourceLossMitigationDirection))  sourceLossMitigationDirection;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_pointerPosition, put=set_pointerPosition))  pointerPosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_pointerRotation, put=set_pointerRotation))  pointerRotation;


// Methods

/// @brief Method get_joystick addr 0x28a36dc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_joystick() ;

/// @brief Method set_joystick addr 0x28a36e4 size 0x8 virtual false final false
 void set_joystick(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_touchpad addr 0x28a36ec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_touchpad() ;

/// @brief Method set_touchpad addr 0x28a36f4 size 0x8 virtual false final false
 void set_touchpad(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_grip addr 0x28a36fc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x28a3704 size 0x8 virtual false final false
 void set_grip(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_gripPressed addr 0x28a370c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x28a3714 size 0x8 virtual false final false
 void set_gripPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_menu addr 0x28a371c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_menu() ;

/// @brief Method set_menu addr 0x28a3724 size 0x8 virtual false final false
 void set_menu(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trigger addr 0x28a372c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x28a3734 size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerPressed addr 0x28a373c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x28a3744 size 0x8 virtual false final false
 void set_triggerPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_joystickClicked addr 0x28a374c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_joystickClicked() ;

/// @brief Method set_joystickClicked addr 0x28a3754 size 0x8 virtual false final false
 void set_joystickClicked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpadClicked addr 0x28a375c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_touchpadClicked() ;

/// @brief Method set_touchpadClicked addr 0x28a3764 size 0x8 virtual false final false
 void set_touchpadClicked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpadTouched addr 0x28a376c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_touchpadTouched() ;

/// @brief Method set_touchpadTouched addr 0x28a3774 size 0x8 virtual false final false
 void set_touchpadTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_deviceVelocity addr 0x28a377c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x28a3784 size 0x8 virtual false final false
 void set_deviceVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularVelocity addr 0x28a378c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x28a3794 size 0x8 virtual false final false
 void set_deviceAngularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_batteryLevel addr 0x28a379c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_batteryLevel() ;

/// @brief Method set_batteryLevel addr 0x28a37a4 size 0x8 virtual false final false
 void set_batteryLevel(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_sourceLossRisk addr 0x28a37ac size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_sourceLossRisk() ;

/// @brief Method set_sourceLossRisk addr 0x28a37b4 size 0x8 virtual false final false
 void set_sourceLossRisk(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_sourceLossMitigationDirection addr 0x28a37bc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_sourceLossMitigationDirection() ;

/// @brief Method set_sourceLossMitigationDirection addr 0x28a37c4 size 0x8 virtual false final false
 void set_sourceLossMitigationDirection(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerPosition addr 0x28a37cc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_pointerPosition() ;

/// @brief Method set_pointerPosition addr 0x28a37d4 size 0x8 virtual false final false
 void set_pointerPosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerRotation addr 0x28a37dc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_pointerRotation() ;

/// @brief Method set_pointerRotation addr 0x28a37e4 size 0x8 virtual false final false
 void set_pointerRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method FinishSetup addr 0x28a37ec size 0x364 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit WMRSpatialController() ;

/// @brief Method .ctor addr 0x28a3b50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::WindowsMR::Input
NEED_NO_BOX(UnityEngine::XR::WindowsMR::Input::WMRSpatialController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::WindowsMR::Input::WMRSpatialController, "UnityEngine.XR.WindowsMR.Input", "WMRSpatialController");
