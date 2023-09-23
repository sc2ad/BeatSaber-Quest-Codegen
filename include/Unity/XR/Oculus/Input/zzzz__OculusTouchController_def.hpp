#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusTouchController;
}
// Type: Unity.XR.Oculus.Input::OculusTouchController
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15243))
// CS Name: Unity.XR.Oculus.Input.OculusTouchController
class CORDL_TYPE OculusTouchController : public UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x220};

virtual ~OculusTouchController() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusTouchController", modifiers: " const&", def_value: None }]
constexpr OculusTouchController(OculusTouchController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusTouchController", modifiers: "&&", def_value: None }]
constexpr OculusTouchController(OculusTouchController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusTouchController(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr OculusTouchController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusTouchController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusTouchController& operator=(OculusTouchController&& o) noexcept = default;
  constexpr OculusTouchController& operator=(OculusTouchController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__thumbstick_k__BackingField, put=__set__thumbstick_k__BackingField))  _thumbstick_k__BackingField;

constexpr void __set__thumbstick_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__thumbstick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primaryButton_k__BackingField, put=__set__primaryButton_k__BackingField))  _primaryButton_k__BackingField;

constexpr void __set__primaryButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__primaryButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondaryButton_k__BackingField, put=__set__secondaryButton_k__BackingField))  _secondaryButton_k__BackingField;

constexpr void __set__secondaryButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__secondaryButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__start_k__BackingField, put=__set__start_k__BackingField))  _start_k__BackingField;

constexpr void __set__start_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__start_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickClicked_k__BackingField, put=__set__thumbstickClicked_k__BackingField))  _thumbstickClicked_k__BackingField;

constexpr void __set__thumbstickClicked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickClicked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primaryTouched_k__BackingField, put=__set__primaryTouched_k__BackingField))  _primaryTouched_k__BackingField;

constexpr void __set__primaryTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__primaryTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondaryTouched_k__BackingField, put=__set__secondaryTouched_k__BackingField))  _secondaryTouched_k__BackingField;

constexpr void __set__secondaryTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__secondaryTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__triggerTouched_k__BackingField, put=__set__triggerTouched_k__BackingField))  _triggerTouched_k__BackingField;

constexpr void __set__triggerTouched_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__triggerTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickTouched_k__BackingField, put=__set__thumbstickTouched_k__BackingField))  _thumbstickTouched_k__BackingField;

constexpr void __set__thumbstickTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField))  _trackingState_k__BackingField;

constexpr void __set__trackingState_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__trackingState_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField))  _isTracked_k__BackingField;

constexpr void __set__isTracked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__isTracked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__devicePosition_k__BackingField, put=__set__devicePosition_k__BackingField))  _devicePosition_k__BackingField;

constexpr void __set__devicePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__devicePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__deviceRotation_k__BackingField, put=__set__deviceRotation_k__BackingField))  _deviceRotation_k__BackingField;

constexpr void __set__deviceRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__deviceRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField))  _deviceVelocity_k__BackingField;

constexpr void __set__deviceVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField))  _deviceAngularVelocity_k__BackingField;

constexpr void __set__deviceAngularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAcceleration_k__BackingField, put=__set__deviceAcceleration_k__BackingField))  _deviceAcceleration_k__BackingField;

constexpr void __set__deviceAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAcceleration_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularAcceleration_k__BackingField, put=__set__deviceAngularAcceleration_k__BackingField))  _deviceAngularAcceleration_k__BackingField;

constexpr void __set__deviceAngularAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularAcceleration_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_thumbstick, put=set_thumbstick))  thumbstick;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryButton, put=set_primaryButton))  primaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryButton, put=set_secondaryButton))  secondaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_start, put=set_start))  start;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickClicked, put=set_thumbstickClicked))  thumbstickClicked;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryTouched, put=set_primaryTouched))  primaryTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryTouched, put=set_secondaryTouched))  secondaryTouched;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_triggerTouched, put=set_triggerTouched))  triggerTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickTouched, put=set_thumbstickTouched))  thumbstickTouched;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity))  deviceVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity))  deviceAngularVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAcceleration, put=set_deviceAcceleration))  deviceAcceleration;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularAcceleration, put=set_deviceAngularAcceleration))  deviceAngularAcceleration;


// Methods

/// @brief Method get_thumbstick addr 0x2ae39dc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_thumbstick() ;

/// @brief Method set_thumbstick addr 0x2ae39e4 size 0x8 virtual false final false
 void set_thumbstick(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_trigger addr 0x2ae39ec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x2ae39f4 size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_grip addr 0x2ae39fc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x2ae3a04 size 0x8 virtual false final false
 void set_grip(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_primaryButton addr 0x2ae3a0c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primaryButton() ;

/// @brief Method set_primaryButton addr 0x2ae3a14 size 0x8 virtual false final false
 void set_primaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryButton addr 0x2ae3a1c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_secondaryButton() ;

/// @brief Method set_secondaryButton addr 0x2ae3a24 size 0x8 virtual false final false
 void set_secondaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_gripPressed addr 0x2ae3a2c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x2ae3a34 size 0x8 virtual false final false
 void set_gripPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_start addr 0x2ae3a3c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_start() ;

/// @brief Method set_start addr 0x2ae3a44 size 0x8 virtual false final false
 void set_start(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickClicked addr 0x2ae3a4c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickClicked() ;

/// @brief Method set_thumbstickClicked addr 0x2ae3a54 size 0x8 virtual false final false
 void set_thumbstickClicked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primaryTouched addr 0x2ae3a5c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primaryTouched() ;

/// @brief Method set_primaryTouched addr 0x2ae3a64 size 0x8 virtual false final false
 void set_primaryTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryTouched addr 0x2ae3a6c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_secondaryTouched() ;

/// @brief Method set_secondaryTouched addr 0x2ae3a74 size 0x8 virtual false final false
 void set_secondaryTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_triggerTouched addr 0x2ae3a7c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_triggerTouched() ;

/// @brief Method set_triggerTouched addr 0x2ae3a84 size 0x8 virtual false final false
 void set_triggerTouched(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerPressed addr 0x2ae3a8c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2ae3a94 size 0x8 virtual false final false
 void set_triggerPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickTouched addr 0x2ae3a9c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickTouched() ;

/// @brief Method set_thumbstickTouched addr 0x2ae3aa4 size 0x8 virtual false final false
 void set_thumbstickTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2ae3aac size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2ae3ab4 size 0x8 virtual false final false
 void set_trackingState(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_isTracked addr 0x2ae3abc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2ae3ac4 size 0x8 virtual false final false
 void set_isTracked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePosition addr 0x2ae3acc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2ae3ad4 size 0x8 virtual false final false
 void set_devicePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2ae3adc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2ae3ae4 size 0x8 virtual false final false
 void set_deviceRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_deviceVelocity addr 0x2ae3aec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x2ae3af4 size 0x8 virtual false final false
 void set_deviceVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularVelocity addr 0x2ae3afc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x2ae3b04 size 0x8 virtual false final false
 void set_deviceAngularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAcceleration addr 0x2ae3b0c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAcceleration() ;

/// @brief Method set_deviceAcceleration addr 0x2ae3b14 size 0x8 virtual false final false
 void set_deviceAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularAcceleration addr 0x2ae3b1c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularAcceleration() ;

/// @brief Method set_deviceAngularAcceleration addr 0x2ae3b24 size 0x8 virtual false final false
 void set_deviceAngularAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method FinishSetup addr 0x2ae3b2c size 0x418 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit OculusTouchController() ;

/// @brief Method .ctor addr 0x2ae3f44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus::Input
NEED_NO_BOX(Unity::XR::Oculus::Input::OculusTouchController);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Input::OculusTouchController, "Unity.XR.Oculus.Input", "OculusTouchController");
