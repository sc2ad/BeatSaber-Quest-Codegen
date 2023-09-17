#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
namespace {
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class MicrosoftMotionControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController;
}
// Type: ::WMRSpatialController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14220))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MicrosoftMotionControllerProfile::WMRSpatialController
class CORDL_TYPE ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x210};

virtual ~____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController(____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController(____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController(void* ptr) noexcept : ::UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController& operator=(____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController&& o) noexcept = default;
  constexpr ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController& operator=(____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__joystick_k__BackingField, put=__set__joystick_k__BackingField))  _joystick_k__BackingField;

constexpr void __set__joystick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control __get__joystick_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__touchpad_k__BackingField, put=__set__touchpad_k__BackingField))  _touchpad_k__BackingField;

constexpr void __set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control __get__touchpad_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__menu_k__BackingField, put=__set__menu_k__BackingField))  _menu_k__BackingField;

constexpr void __set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__menu_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__joystickClicked_k__BackingField, put=__set__joystickClicked_k__BackingField))  _joystickClicked_k__BackingField;

constexpr void __set__joystickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__joystickClicked_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadClicked_k__BackingField, put=__set__touchpadClicked_k__BackingField))  _touchpadClicked_k__BackingField;

constexpr void __set__touchpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadClicked_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadTouched_k__BackingField, put=__set__touchpadTouched_k__BackingField))  _touchpadTouched_k__BackingField;

constexpr void __set__touchpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadTouched_k__BackingField() const;

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


// Properties

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_joystick, put=set_joystick))  joystick;

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_touchpad, put=set_touchpad))  touchpad;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_menu, put=set_menu))  menu;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_joystickClicked, put=set_joystickClicked))  joystickClicked;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadClicked, put=set_touchpadClicked))  touchpadClicked;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadTouched, put=set_touchpadTouched))  touchpadTouched;

 ::UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_devicePose, put=set_devicePose))  devicePose;

 ::UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_pointer, put=set_pointer))  pointer;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 ::UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_pointerPosition, put=set_pointerPosition))  pointerPosition;

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_pointerRotation, put=set_pointerRotation))  pointerRotation;

 ::UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=get_haptic, put=set_haptic))  haptic;


// Methods

/// @brief Method get_joystick addr 0x2afc864 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector2Control get_joystick() ;

/// @brief Method set_joystick addr 0x2afc86c size 0x8 virtual false final false
 void set_joystick(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_touchpad addr 0x2afc874 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector2Control get_touchpad() ;

/// @brief Method set_touchpad addr 0x2afc87c size 0x8 virtual false final false
 void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_grip addr 0x2afc884 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x2afc88c size 0x8 virtual false final false
 void set_grip(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_gripPressed addr 0x2afc894 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x2afc89c size 0x8 virtual false final false
 void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_menu addr 0x2afc8a4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_menu() ;

/// @brief Method set_menu addr 0x2afc8ac size 0x8 virtual false final false
 void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trigger addr 0x2afc8b4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x2afc8bc size 0x8 virtual false final false
 void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerPressed addr 0x2afc8c4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2afc8cc size 0x8 virtual false final false
 void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_joystickClicked addr 0x2afc8d4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_joystickClicked() ;

/// @brief Method set_joystickClicked addr 0x2afc8dc size 0x8 virtual false final false
 void set_joystickClicked(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpadClicked addr 0x2afc8e4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_touchpadClicked() ;

/// @brief Method set_touchpadClicked addr 0x2afc8ec size 0x8 virtual false final false
 void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpadTouched addr 0x2afc8f4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_touchpadTouched() ;

/// @brief Method set_touchpadTouched addr 0x2afc8fc size 0x8 virtual false final false
 void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePose addr 0x2afc904 size 0x8 virtual false final false
 ::UnityEngine::XR::OpenXR::Input::PoseControl get_devicePose() ;

/// @brief Method set_devicePose addr 0x2afc90c size 0x8 virtual false final false
 void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_pointer addr 0x2afc914 size 0x8 virtual false final false
 ::UnityEngine::XR::OpenXR::Input::PoseControl get_pointer() ;

/// @brief Method set_pointer addr 0x2afc91c size 0x8 virtual false final false
 void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_isTracked addr 0x2afc924 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2afc92c size 0x8 virtual false final false
 void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2afc934 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2afc93c size 0x8 virtual false final false
 void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_devicePosition addr 0x2afc944 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2afc94c size 0x8 virtual false final false
 void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2afc954 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2afc95c size 0x8 virtual false final false
 void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_pointerPosition addr 0x2afc964 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_pointerPosition() ;

/// @brief Method set_pointerPosition addr 0x2afc96c size 0x8 virtual false final false
 void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerRotation addr 0x2afc974 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::QuaternionControl get_pointerRotation() ;

/// @brief Method set_pointerRotation addr 0x2afc97c size 0x8 virtual false final false
 void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_haptic addr 0x2afc984 size 0x8 virtual false final false
 ::UnityEngine::XR::OpenXR::Input::HapticControl get_haptic() ;

/// @brief Method set_haptic addr 0x2afc98c size 0x8 virtual false final false
 void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method FinishSetup addr 0x2afc994 size 0x3f4 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit ____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController() ;

/// @brief Method .ctor addr 0x2afcd88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::MicrosoftMotionControllerProfile
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14221))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MicrosoftMotionControllerProfile
class CORDL_TYPE MicrosoftMotionControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using WMRSpatialController = ::UnityEngine::XR::OpenXR::Features::Interactions::____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MicrosoftMotionControllerProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "MicrosoftMotionControllerProfile", modifiers: " const&", def_value: None }]
constexpr MicrosoftMotionControllerProfile(MicrosoftMotionControllerProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MicrosoftMotionControllerProfile", modifiers: "&&", def_value: None }]
constexpr MicrosoftMotionControllerProfile(MicrosoftMotionControllerProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MicrosoftMotionControllerProfile(void* ptr) noexcept : ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature(ptr) {
}


  constexpr MicrosoftMotionControllerProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MicrosoftMotionControllerProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MicrosoftMotionControllerProfile& operator=(MicrosoftMotionControllerProfile&& o) noexcept = default;
  constexpr MicrosoftMotionControllerProfile& operator=(MicrosoftMotionControllerProfile const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.microsoftmotioncontroller"};

/// @brief Field profile offset 0
static constexpr ::ConstString  profile{u"/interaction_profiles/microsoft/motion_controller"};

/// @brief Field menu offset 0
static constexpr ::ConstString  menu{u"/input/menu/click"};

/// @brief Field squeeze offset 0
static constexpr ::ConstString  squeeze{u"/input/squeeze/click"};

/// @brief Field trigger offset 0
static constexpr ::ConstString  trigger{u"/input/trigger/value"};

/// @brief Field thumbstick offset 0
static constexpr ::ConstString  thumbstick{u"/input/thumbstick"};

/// @brief Field thumbstickClick offset 0
static constexpr ::ConstString  thumbstickClick{u"/input/thumbstick/click"};

/// @brief Field trackpad offset 0
static constexpr ::ConstString  trackpad{u"/input/trackpad"};

/// @brief Field trackpadClick offset 0
static constexpr ::ConstString  trackpadClick{u"/input/trackpad/click"};

/// @brief Field trackpadTouch offset 0
static constexpr ::ConstString  trackpadTouch{u"/input/trackpad/touch"};

/// @brief Field grip offset 0
static constexpr ::ConstString  grip{u"/input/grip/pose"};

/// @brief Field aim offset 0
static constexpr ::ConstString  aim{u"/input/aim/pose"};

/// @brief Field haptic offset 0
static constexpr ::ConstString  haptic{u"/output/haptic"};

/// @brief Field kDeviceLocalizedName offset 0
static constexpr ::ConstString  kDeviceLocalizedName{u"Windows MR Controller OpenXR"};


// Methods

/// @brief Method RegisterDeviceLayout addr 0x2afa8bc size 0x140 virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2afa9fc size 0x68 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2afaa64 size 0x1df8 virtual true final false
 void RegisterActionMapsWithRuntime() ;

// Ctor Parameters []
explicit MicrosoftMotionControllerProfile() ;

/// @brief Method .ctor addr 0x2afc85c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftMotionControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftMotionControllerProfile, "UnityEngine.XR.OpenXR.Features.Interactions", "MicrosoftMotionControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::____UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftMotionControllerProfile__WMRSpatialController, "UnityEngine.XR.OpenXR.Features.Interactions", "MicrosoftMotionControllerProfile/WMRSpatialController");
