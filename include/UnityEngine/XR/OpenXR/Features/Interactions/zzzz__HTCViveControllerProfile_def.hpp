#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HTCViveControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController;
}
// Type: ::ViveController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14212))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HTCViveControllerProfile::ViveController
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController : public UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x208};

virtual ~UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController(UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController(UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__select_k__BackingField, put=__set__select_k__BackingField))  _select_k__BackingField;

constexpr void __set__select_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__select_k__BackingField() const;

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

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__trackpad_k__BackingField, put=__set__trackpad_k__BackingField))  _trackpad_k__BackingField;

constexpr void __set__trackpad_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__trackpad_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__trackpadClicked_k__BackingField, put=__set__trackpadClicked_k__BackingField))  _trackpadClicked_k__BackingField;

constexpr void __set__trackpadClicked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__trackpadClicked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__trackpadTouched_k__BackingField, put=__set__trackpadTouched_k__BackingField))  _trackpadTouched_k__BackingField;

constexpr void __set__trackpadTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__trackpadTouched_k__BackingField() const;

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

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_select, put=set_select))  select;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_menu, put=set_menu))  menu;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_trackpad, put=set_trackpad))  trackpad;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_trackpadClicked, put=set_trackpadClicked))  trackpadClicked;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_trackpadTouched, put=set_trackpadTouched))  trackpadTouched;

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

/// @brief Method get_select addr 0x2af31ac size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_select() ;

/// @brief Method set_select addr 0x2af31b4 size 0x8 virtual false final false
 void set_select(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_grip addr 0x2af31bc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x2af31c4 size 0x8 virtual false final false
 void set_grip(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_gripPressed addr 0x2af31cc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x2af31d4 size 0x8 virtual false final false
 void set_gripPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_menu addr 0x2af31dc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_menu() ;

/// @brief Method set_menu addr 0x2af31e4 size 0x8 virtual false final false
 void set_menu(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trigger addr 0x2af31ec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x2af31f4 size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerPressed addr 0x2af31fc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2af3204 size 0x8 virtual false final false
 void set_triggerPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackpad addr 0x2af320c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_trackpad() ;

/// @brief Method set_trackpad addr 0x2af3214 size 0x8 virtual false final false
 void set_trackpad(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_trackpadClicked addr 0x2af321c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_trackpadClicked() ;

/// @brief Method set_trackpadClicked addr 0x2af3224 size 0x8 virtual false final false
 void set_trackpadClicked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackpadTouched addr 0x2af322c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_trackpadTouched() ;

/// @brief Method set_trackpadTouched addr 0x2af3234 size 0x8 virtual false final false
 void set_trackpadTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePose addr 0x2af323c size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_devicePose() ;

/// @brief Method set_devicePose addr 0x2af3244 size 0x8 virtual false final false
 void set_devicePose(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_pointer addr 0x2af324c size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_pointer() ;

/// @brief Method set_pointer addr 0x2af3254 size 0x8 virtual false final false
 void set_pointer(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_isTracked addr 0x2af325c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2af3264 size 0x8 virtual false final false
 void set_isTracked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2af326c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2af3274 size 0x8 virtual false final false
 void set_trackingState(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_devicePosition addr 0x2af327c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2af3284 size 0x8 virtual false final false
 void set_devicePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2af328c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2af3294 size 0x8 virtual false final false
 void set_deviceRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_pointerPosition addr 0x2af329c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_pointerPosition() ;

/// @brief Method set_pointerPosition addr 0x2af32a4 size 0x8 virtual false final false
 void set_pointerPosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerRotation addr 0x2af32ac size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_pointerRotation() ;

/// @brief Method set_pointerRotation addr 0x2af32b4 size 0x8 virtual false final false
 void set_pointerRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_haptic addr 0x2af32bc size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::HapticControl get_haptic() ;

/// @brief Method set_haptic addr 0x2af32c4 size 0x8 virtual false final false
 void set_haptic(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method FinishSetup addr 0x2af32cc size 0x3c8 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController() ;

/// @brief Method .ctor addr 0x2af3694 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::HTCViveControllerProfile
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14213))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HTCViveControllerProfile
class CORDL_TYPE HTCViveControllerProfile : public UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using ViveController = UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HTCViveControllerProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "HTCViveControllerProfile", modifiers: " const&", def_value: None }]
constexpr HTCViveControllerProfile(HTCViveControllerProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HTCViveControllerProfile", modifiers: "&&", def_value: None }]
constexpr HTCViveControllerProfile(HTCViveControllerProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HTCViveControllerProfile(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature(ptr) {
}


  constexpr HTCViveControllerProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HTCViveControllerProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HTCViveControllerProfile& operator=(HTCViveControllerProfile&& o) noexcept = default;
  constexpr HTCViveControllerProfile& operator=(HTCViveControllerProfile const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.htcvive"};

/// @brief Field profile offset 0
static constexpr ::ConstString  profile{u"/interaction_profiles/htc/vive_controller"};

/// @brief Field system offset 0
static constexpr ::ConstString  system{u"/input/system/click"};

/// @brief Field squeeze offset 0
static constexpr ::ConstString  squeeze{u"/input/squeeze/click"};

/// @brief Field menu offset 0
static constexpr ::ConstString  menu{u"/input/menu/click"};

/// @brief Field trigger offset 0
static constexpr ::ConstString  trigger{u"/input/trigger/value"};

/// @brief Field triggerClick offset 0
static constexpr ::ConstString  triggerClick{u"/input/trigger/click"};

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
static constexpr ::ConstString  kDeviceLocalizedName{u"HTC Vive Controller OpenXR"};


// Methods

/// @brief Method RegisterDeviceLayout addr 0x2af1400 size 0x140 virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2af1540 size 0x68 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2af15a8 size 0x1bfc virtual true final false
 void RegisterActionMapsWithRuntime() ;

// Ctor Parameters []
explicit HTCViveControllerProfile() ;

/// @brief Method .ctor addr 0x2af31a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile, "UnityEngine.XR.OpenXR.Features.Interactions", "HTCViveControllerProfile");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__HTCViveControllerProfile__ViveController, "UnityEngine.XR.OpenXR.Features.Interactions", "HTCViveControllerProfile/ViveController");
