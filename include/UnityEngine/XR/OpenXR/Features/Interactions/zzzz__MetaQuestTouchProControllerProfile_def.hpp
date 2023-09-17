#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class MetaQuestTouchProControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController;
}
// Type: ::QuestProTouchController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14216))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MetaQuestTouchProControllerProfile::QuestProTouchController
class CORDL_TYPE ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x270};

virtual ~____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController(____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController(____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController(void* ptr) noexcept : ::UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController& operator=(____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController&& o) noexcept = default;
  constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController& operator=(____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__thumbstick_k__BackingField, put=__set__thumbstick_k__BackingField))  _thumbstick_k__BackingField;

constexpr void __set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control __get__thumbstick_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__menu_k__BackingField, put=__set__menu_k__BackingField))  _menu_k__BackingField;

constexpr void __set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__menu_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primaryButton_k__BackingField, put=__set__primaryButton_k__BackingField))  _primaryButton_k__BackingField;

constexpr void __set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__primaryButton_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primaryTouched_k__BackingField, put=__set__primaryTouched_k__BackingField))  _primaryTouched_k__BackingField;

constexpr void __set__primaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__primaryTouched_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondaryButton_k__BackingField, put=__set__secondaryButton_k__BackingField))  _secondaryButton_k__BackingField;

constexpr void __set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__secondaryButton_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondaryTouched_k__BackingField, put=__set__secondaryTouched_k__BackingField))  _secondaryTouched_k__BackingField;

constexpr void __set__secondaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__secondaryTouched_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerTouched_k__BackingField, put=__set__triggerTouched_k__BackingField))  _triggerTouched_k__BackingField;

constexpr void __set__triggerTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__triggerTouched_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickClicked_k__BackingField, put=__set__thumbstickClicked_k__BackingField))  _thumbstickClicked_k__BackingField;

constexpr void __set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickClicked_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickTouched_k__BackingField, put=__set__thumbstickTouched_k__BackingField))  _thumbstickTouched_k__BackingField;

constexpr void __set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickTouched_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbrestTouched_k__BackingField, put=__set__thumbrestTouched_k__BackingField))  _thumbrestTouched_k__BackingField;

constexpr void __set__thumbrestTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__thumbrestTouched_k__BackingField() const;

 ::UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=__get__devicePose_k__BackingField, put=__set__devicePose_k__BackingField))  _devicePose_k__BackingField;

constexpr void __set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl value) ;

constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl __get__devicePose_k__BackingField() const;

 ::UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=__get__pointer_k__BackingField, put=__set__pointer_k__BackingField))  _pointer_k__BackingField;

constexpr void __set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl value) ;

constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl __get__pointer_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField))  _isTracked_k__BackingField;

constexpr void __set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__isTracked_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField))  _trackingState_k__BackingField;

constexpr void __set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::IntegerControl __get__trackingState_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__devicePosition_k__BackingField, put=__set__devicePosition_k__BackingField))  _devicePosition_k__BackingField;

constexpr void __set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__devicePosition_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__deviceRotation_k__BackingField, put=__set__deviceRotation_k__BackingField))  _deviceRotation_k__BackingField;

constexpr void __set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl __get__deviceRotation_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__pointerPosition_k__BackingField, put=__set__pointerPosition_k__BackingField))  _pointerPosition_k__BackingField;

constexpr void __set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__pointerPosition_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__pointerRotation_k__BackingField, put=__set__pointerRotation_k__BackingField))  _pointerRotation_k__BackingField;

constexpr void __set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl __get__pointerRotation_k__BackingField() const;

 ::UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=__get__haptic_k__BackingField, put=__set__haptic_k__BackingField))  _haptic_k__BackingField;

constexpr void __set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl value) ;

constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl __get__haptic_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__thumbrestForce_k__BackingField, put=__set__thumbrestForce_k__BackingField))  _thumbrestForce_k__BackingField;

constexpr void __set__thumbrestForce_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__thumbrestForce_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__stylusForce_k__BackingField, put=__set__stylusForce_k__BackingField))  _stylusForce_k__BackingField;

constexpr void __set__stylusForce_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__stylusForce_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__triggerCurl_k__BackingField, put=__set__triggerCurl_k__BackingField))  _triggerCurl_k__BackingField;

constexpr void __set__triggerCurl_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__triggerCurl_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__triggerSlide_k__BackingField, put=__set__triggerSlide_k__BackingField))  _triggerSlide_k__BackingField;

constexpr void __set__triggerSlide_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__triggerSlide_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerProximity_k__BackingField, put=__set__triggerProximity_k__BackingField))  _triggerProximity_k__BackingField;

constexpr void __set__triggerProximity_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__triggerProximity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbProximity_k__BackingField, put=__set__thumbProximity_k__BackingField))  _thumbProximity_k__BackingField;

constexpr void __set__thumbProximity_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__thumbProximity_k__BackingField() const;

 ::UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=__get__hapticTrigger_k__BackingField, put=__set__hapticTrigger_k__BackingField))  _hapticTrigger_k__BackingField;

constexpr void __set__hapticTrigger_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl value) ;

constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl __get__hapticTrigger_k__BackingField() const;

 ::UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=__get__hapticThumb_k__BackingField, put=__set__hapticThumb_k__BackingField))  _hapticThumb_k__BackingField;

constexpr void __set__hapticThumb_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl value) ;

constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl __get__hapticThumb_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_thumbstick, put=set_thumbstick))  thumbstick;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_menu, put=set_menu))  menu;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryButton, put=set_primaryButton))  primaryButton;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryTouched, put=set_primaryTouched))  primaryTouched;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryButton, put=set_secondaryButton))  secondaryButton;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryTouched, put=set_secondaryTouched))  secondaryTouched;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerTouched, put=set_triggerTouched))  triggerTouched;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickClicked, put=set_thumbstickClicked))  thumbstickClicked;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickTouched, put=set_thumbstickTouched))  thumbstickTouched;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbrestTouched, put=set_thumbrestTouched))  thumbrestTouched;

 ::UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_devicePose, put=set_devicePose))  devicePose;

 ::UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_pointer, put=set_pointer))  pointer;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 ::UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_pointerPosition, put=set_pointerPosition))  pointerPosition;

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_pointerRotation, put=set_pointerRotation))  pointerRotation;

 ::UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=get_haptic, put=set_haptic))  haptic;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_thumbrestForce, put=set_thumbrestForce))  thumbrestForce;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_stylusForce, put=set_stylusForce))  stylusForce;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_triggerCurl, put=set_triggerCurl))  triggerCurl;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_triggerSlide, put=set_triggerSlide))  triggerSlide;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerProximity, put=set_triggerProximity))  triggerProximity;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbProximity, put=set_thumbProximity))  thumbProximity;

 ::UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=get_hapticTrigger, put=set_hapticTrigger))  hapticTrigger;

 ::UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=get_hapticThumb, put=set_hapticThumb))  hapticThumb;


// Methods

/// @brief Method get_thumbstick addr 0x2af8c0c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector2Control get_thumbstick() ;

/// @brief Method set_thumbstick addr 0x2af8c14 size 0x8 virtual false final false
 void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_grip addr 0x2af8c1c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x2af8c24 size 0x8 virtual false final false
 void set_grip(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_gripPressed addr 0x2af8c2c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x2af8c34 size 0x8 virtual false final false
 void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_menu addr 0x2af8c3c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_menu() ;

/// @brief Method set_menu addr 0x2af8c44 size 0x8 virtual false final false
 void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primaryButton addr 0x2af8c4c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_primaryButton() ;

/// @brief Method set_primaryButton addr 0x2af8c54 size 0x8 virtual false final false
 void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primaryTouched addr 0x2af8c5c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_primaryTouched() ;

/// @brief Method set_primaryTouched addr 0x2af8c64 size 0x8 virtual false final false
 void set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryButton addr 0x2af8c6c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_secondaryButton() ;

/// @brief Method set_secondaryButton addr 0x2af8c74 size 0x8 virtual false final false
 void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryTouched addr 0x2af8c7c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_secondaryTouched() ;

/// @brief Method set_secondaryTouched addr 0x2af8c84 size 0x8 virtual false final false
 void set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trigger addr 0x2af8c8c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x2af8c94 size 0x8 virtual false final false
 void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerPressed addr 0x2af8c9c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2af8ca4 size 0x8 virtual false final false
 void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_triggerTouched addr 0x2af8cac size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_triggerTouched() ;

/// @brief Method set_triggerTouched addr 0x2af8cb4 size 0x8 virtual false final false
 void set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickClicked addr 0x2af8cbc size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickClicked() ;

/// @brief Method set_thumbstickClicked addr 0x2af8cc4 size 0x8 virtual false final false
 void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickTouched addr 0x2af8ccc size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickTouched() ;

/// @brief Method set_thumbstickTouched addr 0x2af8cd4 size 0x8 virtual false final false
 void set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbrestTouched addr 0x2af8cdc size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_thumbrestTouched() ;

/// @brief Method set_thumbrestTouched addr 0x2af8ce4 size 0x8 virtual false final false
 void set_thumbrestTouched(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePose addr 0x2af8cec size 0x8 virtual false final false
 ::UnityEngine::XR::OpenXR::Input::PoseControl get_devicePose() ;

/// @brief Method set_devicePose addr 0x2af8cf4 size 0x8 virtual false final false
 void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_pointer addr 0x2af8cfc size 0x8 virtual false final false
 ::UnityEngine::XR::OpenXR::Input::PoseControl get_pointer() ;

/// @brief Method set_pointer addr 0x2af8d04 size 0x8 virtual false final false
 void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_isTracked addr 0x2af8d0c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2af8d14 size 0x8 virtual false final false
 void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2af8d1c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2af8d24 size 0x8 virtual false final false
 void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_devicePosition addr 0x2af8d2c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2af8d34 size 0x8 virtual false final false
 void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2af8d3c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2af8d44 size 0x8 virtual false final false
 void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_pointerPosition addr 0x2af8d4c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_pointerPosition() ;

/// @brief Method set_pointerPosition addr 0x2af8d54 size 0x8 virtual false final false
 void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerRotation addr 0x2af8d5c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::QuaternionControl get_pointerRotation() ;

/// @brief Method set_pointerRotation addr 0x2af8d64 size 0x8 virtual false final false
 void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_haptic addr 0x2af8d6c size 0x8 virtual false final false
 ::UnityEngine::XR::OpenXR::Input::HapticControl get_haptic() ;

/// @brief Method set_haptic addr 0x2af8d74 size 0x8 virtual false final false
 void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method get_thumbrestForce addr 0x2af8d7c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_thumbrestForce() ;

/// @brief Method set_thumbrestForce addr 0x2af8d84 size 0x8 virtual false final false
 void set_thumbrestForce(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_stylusForce addr 0x2af8d8c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_stylusForce() ;

/// @brief Method set_stylusForce addr 0x2af8d94 size 0x8 virtual false final false
 void set_stylusForce(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerCurl addr 0x2af8d9c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_triggerCurl() ;

/// @brief Method set_triggerCurl addr 0x2af8da4 size 0x8 virtual false final false
 void set_triggerCurl(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerSlide addr 0x2af8dac size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_triggerSlide() ;

/// @brief Method set_triggerSlide addr 0x2af8db4 size 0x8 virtual false final false
 void set_triggerSlide(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerProximity addr 0x2af8dbc size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_triggerProximity() ;

/// @brief Method set_triggerProximity addr 0x2af8dc4 size 0x8 virtual false final false
 void set_triggerProximity(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbProximity addr 0x2af8dcc size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_thumbProximity() ;

/// @brief Method set_thumbProximity addr 0x2af8dd4 size 0x8 virtual false final false
 void set_thumbProximity(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_hapticTrigger addr 0x2af8ddc size 0x8 virtual false final false
 ::UnityEngine::XR::OpenXR::Input::HapticControl get_hapticTrigger() ;

/// @brief Method set_hapticTrigger addr 0x2af8de4 size 0x8 virtual false final false
 void set_hapticTrigger(::UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method get_hapticThumb addr 0x2af8dec size 0x8 virtual false final false
 ::UnityEngine::XR::OpenXR::Input::HapticControl get_hapticThumb() ;

/// @brief Method set_hapticThumb addr 0x2af8df4 size 0x8 virtual false final false
 void set_hapticThumb(::UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method FinishSetup addr 0x2af8dfc size 0x5d8 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit ____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController() ;

/// @brief Method .ctor addr 0x2af93d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::MetaQuestTouchProControllerProfile
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14217))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MetaQuestTouchProControllerProfile
class CORDL_TYPE MetaQuestTouchProControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using QuestProTouchController = ::UnityEngine::XR::OpenXR::Features::Interactions::____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MetaQuestTouchProControllerProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaQuestTouchProControllerProfile", modifiers: " const&", def_value: None }]
constexpr MetaQuestTouchProControllerProfile(MetaQuestTouchProControllerProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaQuestTouchProControllerProfile", modifiers: "&&", def_value: None }]
constexpr MetaQuestTouchProControllerProfile(MetaQuestTouchProControllerProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MetaQuestTouchProControllerProfile(void* ptr) noexcept : ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature(ptr) {
}


  constexpr MetaQuestTouchProControllerProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MetaQuestTouchProControllerProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MetaQuestTouchProControllerProfile& operator=(MetaQuestTouchProControllerProfile&& o) noexcept = default;
  constexpr MetaQuestTouchProControllerProfile& operator=(MetaQuestTouchProControllerProfile const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.metaquestpro"};

/// @brief Field profile offset 0
static constexpr ::ConstString  profile{u"/interaction_profiles/facebook/touch_controller_pro"};

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

/// @brief Field thumbrestForce offset 0
static constexpr ::ConstString  thumbrestForce{u"/input/thumbrest/force"};

/// @brief Field stylusForce offset 0
static constexpr ::ConstString  stylusForce{u"/input/stylus_fb/force"};

/// @brief Field triggerCurl offset 0
static constexpr ::ConstString  triggerCurl{u"/input/trigger/curl_fb"};

/// @brief Field triggerSlide offset 0
static constexpr ::ConstString  triggerSlide{u"/input/trigger/slide_fb"};

/// @brief Field triggerProximity offset 0
static constexpr ::ConstString  triggerProximity{u"/input/trigger/proximity_fb"};

/// @brief Field thumbProximity offset 0
static constexpr ::ConstString  thumbProximity{u"/input/thumb_fb/proximity_fb"};

/// @brief Field hapticTrigger offset 0
static constexpr ::ConstString  hapticTrigger{u"/output/trigger_haptic_fb"};

/// @brief Field hapticThumb offset 0
static constexpr ::ConstString  hapticThumb{u"/output/thumb_haptic_fb"};

/// @brief Field kDeviceLocalizedName offset 0
static constexpr ::ConstString  kDeviceLocalizedName{u"Meta Quest Pro Touch Controller OpenXR"};


// Methods

/// @brief Method OnInstanceCreate addr 0x2af49a0 size 0x6c virtual true final false
 bool OnInstanceCreate(uint64_t instance) ;

/// @brief Method RegisterDeviceLayout addr 0x2af4a0c size 0x140 virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2af4b4c size 0x68 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2af4bb4 size 0x4050 virtual true final false
 void RegisterActionMapsWithRuntime() ;

// Ctor Parameters []
explicit MetaQuestTouchProControllerProfile() ;

/// @brief Method .ctor addr 0x2af8c04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile, "UnityEngine.XR.OpenXR.Features.Interactions", "MetaQuestTouchProControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::____UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController, "UnityEngine.XR.OpenXR.Features.Interactions", "MetaQuestTouchProControllerProfile/QuestProTouchController");
