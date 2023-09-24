#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class OculusTouchControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController;
}
// Type: ::OculusTouchController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14222))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.OculusTouchControllerProfile::OculusTouchController
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController : public UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x230};

virtual ~UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController(UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController(UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__thumbstick_k__BackingField, put=__set__thumbstick_k__BackingField))  _thumbstick_k__BackingField;

constexpr void __set__thumbstick_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__thumbstick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__menu_k__BackingField, put=__set__menu_k__BackingField))  _menu_k__BackingField;

constexpr void __set__menu_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__menu_k__BackingField() const;

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

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerTouched_k__BackingField, put=__set__triggerTouched_k__BackingField))  _triggerTouched_k__BackingField;

constexpr void __set__triggerTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickClicked_k__BackingField, put=__set__thumbstickClicked_k__BackingField))  _thumbstickClicked_k__BackingField;

constexpr void __set__thumbstickClicked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickClicked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickTouched_k__BackingField, put=__set__thumbstickTouched_k__BackingField))  _thumbstickTouched_k__BackingField;

constexpr void __set__thumbstickTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbrestTouched_k__BackingField, put=__set__thumbrestTouched_k__BackingField))  _thumbrestTouched_k__BackingField;

constexpr void __set__thumbrestTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbrestTouched_k__BackingField() const;

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

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_thumbstick, put=set_thumbstick))  thumbstick;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_menu, put=set_menu))  menu;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryButton, put=set_primaryButton))  primaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryTouched, put=set_primaryTouched))  primaryTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryButton, put=set_secondaryButton))  secondaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryTouched, put=set_secondaryTouched))  secondaryTouched;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerTouched, put=set_triggerTouched))  triggerTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickClicked, put=set_thumbstickClicked))  thumbstickClicked;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickTouched, put=set_thumbstickTouched))  thumbstickTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbrestTouched, put=set_thumbrestTouched))  thumbrestTouched;

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

/// @brief Method get_thumbstick addr 0x2affc8c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_thumbstick() ;

/// @brief Method set_thumbstick addr 0x2affc94 size 0x8 virtual false final false
 void set_thumbstick(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_grip addr 0x2affc9c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x2affca4 size 0x8 virtual false final false
 void set_grip(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_gripPressed addr 0x2affcac size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x2affcb4 size 0x8 virtual false final false
 void set_gripPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_menu addr 0x2affcbc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_menu() ;

/// @brief Method set_menu addr 0x2affcc4 size 0x8 virtual false final false
 void set_menu(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primaryButton addr 0x2affccc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primaryButton() ;

/// @brief Method set_primaryButton addr 0x2affcd4 size 0x8 virtual false final false
 void set_primaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primaryTouched addr 0x2affcdc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primaryTouched() ;

/// @brief Method set_primaryTouched addr 0x2affce4 size 0x8 virtual false final false
 void set_primaryTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryButton addr 0x2affcec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_secondaryButton() ;

/// @brief Method set_secondaryButton addr 0x2affcf4 size 0x8 virtual false final false
 void set_secondaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryTouched addr 0x2affcfc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_secondaryTouched() ;

/// @brief Method set_secondaryTouched addr 0x2affd04 size 0x8 virtual false final false
 void set_secondaryTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trigger addr 0x2affd0c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x2affd14 size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerPressed addr 0x2affd1c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2affd24 size 0x8 virtual false final false
 void set_triggerPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_triggerTouched addr 0x2affd2c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerTouched() ;

/// @brief Method set_triggerTouched addr 0x2affd34 size 0x8 virtual false final false
 void set_triggerTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickClicked addr 0x2affd3c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickClicked() ;

/// @brief Method set_thumbstickClicked addr 0x2affd44 size 0x8 virtual false final false
 void set_thumbstickClicked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickTouched addr 0x2affd4c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickTouched() ;

/// @brief Method set_thumbstickTouched addr 0x2affd54 size 0x8 virtual false final false
 void set_thumbstickTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbrestTouched addr 0x2affd5c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbrestTouched() ;

/// @brief Method set_thumbrestTouched addr 0x2affd64 size 0x8 virtual false final false
 void set_thumbrestTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePose addr 0x2affd6c size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_devicePose() ;

/// @brief Method set_devicePose addr 0x2affd74 size 0x8 virtual false final false
 void set_devicePose(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_pointer addr 0x2affd7c size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_pointer() ;

/// @brief Method set_pointer addr 0x2affd84 size 0x8 virtual false final false
 void set_pointer(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_isTracked addr 0x2affd8c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2affd94 size 0x8 virtual false final false
 void set_isTracked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2affd9c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2affda4 size 0x8 virtual false final false
 void set_trackingState(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_devicePosition addr 0x2affdac size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2affdb4 size 0x8 virtual false final false
 void set_devicePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2affdbc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2affdc4 size 0x8 virtual false final false
 void set_deviceRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_pointerPosition addr 0x2affdcc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_pointerPosition() ;

/// @brief Method set_pointerPosition addr 0x2affdd4 size 0x8 virtual false final false
 void set_pointerPosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerRotation addr 0x2affddc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_pointerRotation() ;

/// @brief Method set_pointerRotation addr 0x2affde4 size 0x8 virtual false final false
 void set_pointerRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_haptic addr 0x2affdec size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::HapticControl get_haptic() ;

/// @brief Method set_haptic addr 0x2affdf4 size 0x8 virtual false final false
 void set_haptic(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method FinishSetup addr 0x2affdfc size 0x498 virtual true final false
 void FinishSetup() ;

static UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController New_ctor() ;

/// @brief Method .ctor addr 0x2b00294 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::OculusTouchControllerProfile
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14223))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.OculusTouchControllerProfile
class CORDL_TYPE OculusTouchControllerProfile : public UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using OculusTouchController = UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~OculusTouchControllerProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusTouchControllerProfile", modifiers: " const&", def_value: None }]
constexpr OculusTouchControllerProfile(OculusTouchControllerProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusTouchControllerProfile", modifiers: "&&", def_value: None }]
constexpr OculusTouchControllerProfile(OculusTouchControllerProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusTouchControllerProfile(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature(ptr) {
}


  constexpr OculusTouchControllerProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusTouchControllerProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusTouchControllerProfile& operator=(OculusTouchControllerProfile&& o) noexcept = default;
  constexpr OculusTouchControllerProfile& operator=(OculusTouchControllerProfile const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.oculustouch"};

/// @brief Field profile offset 0
static constexpr ::ConstString  profile{u"/interaction_profiles/oculus/touch_controller"};

/// @brief Field buttonX offset 0
static constexpr ::ConstString  buttonX{u"/input/x/click"};

/// @brief Field buttonXTouch offset 0
static constexpr ::ConstString  buttonXTouch{u"/input/x/touch"};

/// @brief Field buttonY offset 0
static constexpr ::ConstString  buttonY{u"/input/y/click"};

/// @brief Field buttonYTouch offset 0
static constexpr ::ConstString  buttonYTouch{u"/input/y/touch"};

/// @brief Field menu offset 0
static constexpr ::ConstString  menu{u"/input/menu/click"};

/// @brief Field buttonA offset 0
static constexpr ::ConstString  buttonA{u"/input/a/click"};

/// @brief Field buttonATouch offset 0
static constexpr ::ConstString  buttonATouch{u"/input/a/touch"};

/// @brief Field buttonB offset 0
static constexpr ::ConstString  buttonB{u"/input/b/click"};

/// @brief Field buttonBTouch offset 0
static constexpr ::ConstString  buttonBTouch{u"/input/b/touch"};

/// @brief Field system offset 0
static constexpr ::ConstString  system{u"/input/system/click"};

/// @brief Field squeeze offset 0
static constexpr ::ConstString  squeeze{u"/input/squeeze/value"};

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

/// @brief Field thumbrest offset 0
static constexpr ::ConstString  thumbrest{u"/input/thumbrest/touch"};

/// @brief Field grip offset 0
static constexpr ::ConstString  grip{u"/input/grip/pose"};

/// @brief Field aim offset 0
static constexpr ::ConstString  aim{u"/input/aim/pose"};

/// @brief Field haptic offset 0
static constexpr ::ConstString  haptic{u"/output/haptic"};

/// @brief Field kDeviceLocalizedName offset 0
static constexpr ::ConstString  kDeviceLocalizedName{u"Oculus Touch Controller OpenXR"};


// Methods

/// @brief Method RegisterDeviceLayout addr 0x2afcd90 size 0x140 virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2afced0 size 0x68 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2afcf38 size 0x2d4c virtual true final false
 void RegisterActionMapsWithRuntime() ;

static UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile New_ctor() ;

/// @brief Method .ctor addr 0x2affc84 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile, "UnityEngine.XR.OpenXR.Features.Interactions", "OculusTouchControllerProfile");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__OculusTouchControllerProfile__OculusTouchController, "UnityEngine.XR.OpenXR.Features.Interactions", "OculusTouchControllerProfile/OculusTouchController");
