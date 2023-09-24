#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class ValveIndexControllerProfile;
}
// Type: ::ValveIndexController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14224))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile::ValveIndexController
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController : public UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x250};

virtual ~UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController(UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController(UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__system_k__BackingField, put=__set__system_k__BackingField))  _system_k__BackingField;

constexpr void __set__system_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__system_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__systemTouched_k__BackingField, put=__set__systemTouched_k__BackingField))  _systemTouched_k__BackingField;

constexpr void __set__systemTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__systemTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primaryButton_k__BackingField, put=__set__primaryButton_k__BackingField))  _primaryButton_k__BackingField;

constexpr void __set__primaryButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__primaryButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primaryTouched_k__BackingField, put=__set__primaryTouched_k__BackingField))  _primaryTouched_k__BackingField;

constexpr void __set__primaryTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__primaryTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondaryButton_k__BackingField, put=__set__secondaryButton_k__BackingField))  _secondaryButton_k__BackingField;

constexpr void __set__secondaryButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__secondaryButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondaryTouched_k__BackingField, put=__set__secondaryTouched_k__BackingField))  _secondaryTouched_k__BackingField;

constexpr void __set__secondaryTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__secondaryTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__gripForce_k__BackingField, put=__set__gripForce_k__BackingField))  _gripForce_k__BackingField;

constexpr void __set__gripForce_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__gripForce_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerTouched_k__BackingField, put=__set__triggerTouched_k__BackingField))  _triggerTouched_k__BackingField;

constexpr void __set__triggerTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__thumbstick_k__BackingField, put=__set__thumbstick_k__BackingField))  _thumbstick_k__BackingField;

constexpr void __set__thumbstick_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__thumbstick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickClicked_k__BackingField, put=__set__thumbstickClicked_k__BackingField))  _thumbstickClicked_k__BackingField;

constexpr void __set__thumbstickClicked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickClicked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickTouched_k__BackingField, put=__set__thumbstickTouched_k__BackingField))  _thumbstickTouched_k__BackingField;

constexpr void __set__thumbstickTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__trackpad_k__BackingField, put=__set__trackpad_k__BackingField))  _trackpad_k__BackingField;

constexpr void __set__trackpad_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__trackpad_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__trackpadTouched_k__BackingField, put=__set__trackpadTouched_k__BackingField))  _trackpadTouched_k__BackingField;

constexpr void __set__trackpadTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__trackpadTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trackpadForce_k__BackingField, put=__set__trackpadForce_k__BackingField))  _trackpadForce_k__BackingField;

constexpr void __set__trackpadForce_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__trackpadForce_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=__get__devicePose_k__BackingField, put=__set__devicePose_k__BackingField))  _devicePose_k__BackingField;

constexpr void __set__devicePose_k__BackingField(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::PoseControl __get__devicePose_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=__get__pointer_k__BackingField, put=__set__pointer_k__BackingField))  _pointer_k__BackingField;

constexpr void __set__pointer_k__BackingField(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::PoseControl __get__pointer_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField))  _isTracked_k__BackingField;

constexpr void __set__isTracked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__isTracked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField))  _trackingState_k__BackingField;

constexpr void __set__trackingState_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__trackingState_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__devicePosition_k__BackingField, put=__set__devicePosition_k__BackingField))  _devicePosition_k__BackingField;

constexpr void __set__devicePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__devicePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__deviceRotation_k__BackingField, put=__set__deviceRotation_k__BackingField))  _deviceRotation_k__BackingField;

constexpr void __set__deviceRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__deviceRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__pointerPosition_k__BackingField, put=__set__pointerPosition_k__BackingField))  _pointerPosition_k__BackingField;

constexpr void __set__pointerPosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__pointerPosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__pointerRotation_k__BackingField, put=__set__pointerRotation_k__BackingField))  _pointerRotation_k__BackingField;

constexpr void __set__pointerRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__pointerRotation_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=__get__haptic_k__BackingField, put=__set__haptic_k__BackingField))  _haptic_k__BackingField;

constexpr void __set__haptic_k__BackingField(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::HapticControl __get__haptic_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_system, put=set_system))  system;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_systemTouched, put=set_systemTouched))  systemTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryButton, put=set_primaryButton))  primaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryTouched, put=set_primaryTouched))  primaryTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryButton, put=set_secondaryButton))  secondaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryTouched, put=set_secondaryTouched))  secondaryTouched;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_gripForce, put=set_gripForce))  gripForce;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerTouched, put=set_triggerTouched))  triggerTouched;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_thumbstick, put=set_thumbstick))  thumbstick;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickClicked, put=set_thumbstickClicked))  thumbstickClicked;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickTouched, put=set_thumbstickTouched))  thumbstickTouched;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_trackpad, put=set_trackpad))  trackpad;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_trackpadTouched, put=set_trackpadTouched))  trackpadTouched;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trackpadForce, put=set_trackpadForce))  trackpadForce;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_devicePose, put=set_devicePose))  devicePose;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_pointer, put=set_pointer))  pointer;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_pointerPosition, put=set_pointerPosition))  pointerPosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_pointerRotation, put=set_pointerRotation))  pointerRotation;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=get_haptic, put=set_haptic))  haptic;


// Methods

/// @brief Method get_system addr 0x2b06b64 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_system() ;

/// @brief Method set_system addr 0x2b06b6c size 0x8 virtual false final false
 void set_system(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_systemTouched addr 0x2b06b74 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_systemTouched() ;

/// @brief Method set_systemTouched addr 0x2b06b7c size 0x8 virtual false final false
 void set_systemTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primaryButton addr 0x2b06b84 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primaryButton() ;

/// @brief Method set_primaryButton addr 0x2b06b8c size 0x8 virtual false final false
 void set_primaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primaryTouched addr 0x2b06b94 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primaryTouched() ;

/// @brief Method set_primaryTouched addr 0x2b06b9c size 0x8 virtual false final false
 void set_primaryTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryButton addr 0x2b06ba4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_secondaryButton() ;

/// @brief Method set_secondaryButton addr 0x2b06bac size 0x8 virtual false final false
 void set_secondaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryTouched addr 0x2b06bb4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_secondaryTouched() ;

/// @brief Method set_secondaryTouched addr 0x2b06bbc size 0x8 virtual false final false
 void set_secondaryTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_grip addr 0x2b06bc4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x2b06bcc size 0x8 virtual false final false
 void set_grip(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_gripPressed addr 0x2b06bd4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x2b06bdc size 0x8 virtual false final false
 void set_gripPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_gripForce addr 0x2b06be4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_gripForce() ;

/// @brief Method set_gripForce addr 0x2b06bec size 0x8 virtual false final false
 void set_gripForce(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_trigger addr 0x2b06bf4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x2b06bfc size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerPressed addr 0x2b06c04 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2b06c0c size 0x8 virtual false final false
 void set_triggerPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_triggerTouched addr 0x2b06c14 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerTouched() ;

/// @brief Method set_triggerTouched addr 0x2b06c1c size 0x8 virtual false final false
 void set_triggerTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstick addr 0x2b06c24 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_thumbstick() ;

/// @brief Method set_thumbstick addr 0x2b06c2c size 0x8 virtual false final false
 void set_thumbstick(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_thumbstickClicked addr 0x2b06c34 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickClicked() ;

/// @brief Method set_thumbstickClicked addr 0x2b06c3c size 0x8 virtual false final false
 void set_thumbstickClicked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickTouched addr 0x2b06c44 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickTouched() ;

/// @brief Method set_thumbstickTouched addr 0x2b06c4c size 0x8 virtual false final false
 void set_thumbstickTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackpad addr 0x2b06c54 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_trackpad() ;

/// @brief Method set_trackpad addr 0x2b06c5c size 0x8 virtual false final false
 void set_trackpad(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_trackpadTouched addr 0x2b06c64 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_trackpadTouched() ;

/// @brief Method set_trackpadTouched addr 0x2b06c6c size 0x8 virtual false final false
 void set_trackpadTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackpadForce addr 0x2b06c74 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trackpadForce() ;

/// @brief Method set_trackpadForce addr 0x2b06c7c size 0x8 virtual false final false
 void set_trackpadForce(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_devicePose addr 0x2b06c84 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_devicePose() ;

/// @brief Method set_devicePose addr 0x2b06c8c size 0x8 virtual false final false
 void set_devicePose(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_pointer addr 0x2b06c94 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_pointer() ;

/// @brief Method set_pointer addr 0x2b06c9c size 0x8 virtual false final false
 void set_pointer(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_isTracked addr 0x2b06ca4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2b06cac size 0x8 virtual false final false
 void set_isTracked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2b06cb4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2b06cbc size 0x8 virtual false final false
 void set_trackingState(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_devicePosition addr 0x2b06cc4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2b06ccc size 0x8 virtual false final false
 void set_devicePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2b06cd4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2b06cdc size 0x8 virtual false final false
 void set_deviceRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_pointerPosition addr 0x2b06ce4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_pointerPosition() ;

/// @brief Method set_pointerPosition addr 0x2b06cec size 0x8 virtual false final false
 void set_pointerPosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerRotation addr 0x2b06cf4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_pointerRotation() ;

/// @brief Method set_pointerRotation addr 0x2b06cfc size 0x8 virtual false final false
 void set_pointerRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_haptic addr 0x2b06d04 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::HapticControl get_haptic() ;

/// @brief Method set_haptic addr 0x2b06d0c size 0x8 virtual false final false
 void set_haptic(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method FinishSetup addr 0x2b06d14 size 0x538 virtual true final false
 void FinishSetup() ;

static UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController New_ctor() ;

/// @brief Method .ctor addr 0x2b0724c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::ValveIndexControllerProfile
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14225))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.ValveIndexControllerProfile
class CORDL_TYPE ValveIndexControllerProfile : public UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using ValveIndexController = UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ValveIndexControllerProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValveIndexControllerProfile", modifiers: " const&", def_value: None }]
constexpr ValveIndexControllerProfile(ValveIndexControllerProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValveIndexControllerProfile", modifiers: "&&", def_value: None }]
constexpr ValveIndexControllerProfile(ValveIndexControllerProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValveIndexControllerProfile(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature(ptr) {
}


  constexpr ValveIndexControllerProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValveIndexControllerProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValveIndexControllerProfile& operator=(ValveIndexControllerProfile&& o) noexcept = default;
  constexpr ValveIndexControllerProfile& operator=(ValveIndexControllerProfile const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.valveindex"};

/// @brief Field profile offset 0
static constexpr ::ConstString  profile{u"/interaction_profiles/valve/index_controller"};

/// @brief Field system offset 0
static constexpr ::ConstString  system{u"/input/system/click"};

/// @brief Field systemTouch offset 0
static constexpr ::ConstString  systemTouch{u"/input/system/touch"};

/// @brief Field buttonA offset 0
static constexpr ::ConstString  buttonA{u"/input/a/click"};

/// @brief Field buttonATouch offset 0
static constexpr ::ConstString  buttonATouch{u"/input/a/touch"};

/// @brief Field buttonB offset 0
static constexpr ::ConstString  buttonB{u"/input/b/click"};

/// @brief Field buttonBTouch offset 0
static constexpr ::ConstString  buttonBTouch{u"/input/b/touch"};

/// @brief Field squeeze offset 0
static constexpr ::ConstString  squeeze{u"/input/squeeze/value"};

/// @brief Field squeezeForce offset 0
static constexpr ::ConstString  squeezeForce{u"/input/squeeze/force"};

/// @brief Field triggerClick offset 0
static constexpr ::ConstString  triggerClick{u"/input/trigger/click"};

/// @brief Field trigger offset 0
static constexpr ::ConstString  trigger{u"/input/trigger/value"};

/// @brief Field triggerTouch offset 0
static constexpr ::ConstString  triggerTouch{u"/input/trigger/touch"};

/// @brief Field thumbstick offset 0
static constexpr ::ConstString  thumbstick{u"/input/thumbstick"};

/// @brief Field thumbstickClick offset 0
static constexpr ::ConstString  thumbstickClick{u"/input/thumbstick/click"};

/// @brief Field thumbstickTouch offset 0
static constexpr ::ConstString  thumbstickTouch{u"/input/thumbstick/touch"};

/// @brief Field trackpad offset 0
static constexpr ::ConstString  trackpad{u"/input/trackpad"};

/// @brief Field trackpadForce offset 0
static constexpr ::ConstString  trackpadForce{u"/input/trackpad/force"};

/// @brief Field trackpadTouch offset 0
static constexpr ::ConstString  trackpadTouch{u"/input/trackpad/touch"};

/// @brief Field grip offset 0
static constexpr ::ConstString  grip{u"/input/grip/pose"};

/// @brief Field aim offset 0
static constexpr ::ConstString  aim{u"/input/aim/pose"};

/// @brief Field haptic offset 0
static constexpr ::ConstString  haptic{u"/output/haptic"};

/// @brief Field kDeviceLocalizedName offset 0
static constexpr ::ConstString  kDeviceLocalizedName{u"Index Controller OpenXR"};


// Methods

/// @brief Method RegisterDeviceLayout addr 0x2b0029c size 0x140 virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2b003dc size 0x68 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2b00444 size 0x2fb4 virtual true final false
 void RegisterActionMapsWithRuntime() ;

static UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile New_ctor() ;

/// @brief Method .ctor addr 0x2b033f8 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__ValveIndexControllerProfile__ValveIndexController, "UnityEngine.XR.OpenXR.Features.Interactions", "ValveIndexControllerProfile/ValveIndexController");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile, "UnityEngine.XR.OpenXR.Features.Interactions", "ValveIndexControllerProfile");
