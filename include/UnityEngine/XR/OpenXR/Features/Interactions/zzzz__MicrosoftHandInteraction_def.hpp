#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
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
class MicrosoftHandInteraction;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand;
}
// Type: ::HoloLensHand
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14218))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MicrosoftHandInteraction::HoloLensHand
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand : public UnityEngine::InputSystem::XR::XRController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d8};

virtual ~UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand(UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand(UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRController(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand& operator=(UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand& operator=(UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__select_k__BackingField, put=__set__select_k__BackingField))  _select_k__BackingField;

constexpr void __set__select_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__select_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__selectPressed_k__BackingField, put=__set__selectPressed_k__BackingField))  _selectPressed_k__BackingField;

constexpr void __set__selectPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__selectPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__squeeze_k__BackingField, put=__set__squeeze_k__BackingField))  _squeeze_k__BackingField;

constexpr void __set__squeeze_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__squeeze_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__squeezePressed_k__BackingField, put=__set__squeezePressed_k__BackingField))  _squeezePressed_k__BackingField;

constexpr void __set__squeezePressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__squeezePressed_k__BackingField() const;

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


// Properties

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_select, put=set_select))  select;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_selectPressed, put=set_selectPressed))  selectPressed;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_squeeze, put=set_squeeze))  squeeze;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_squeezePressed, put=set_squeezePressed))  squeezePressed;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_devicePose, put=set_devicePose))  devicePose;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_pointer, put=set_pointer))  pointer;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_pointerPosition, put=set_pointerPosition))  pointerPosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_pointerRotation, put=set_pointerRotation))  pointerRotation;


// Methods

/// @brief Method get_select addr 0x2afa544 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_select() ;

/// @brief Method set_select addr 0x2afa54c size 0x8 virtual false final false
 void set_select(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_selectPressed addr 0x2afa554 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_selectPressed() ;

/// @brief Method set_selectPressed addr 0x2afa55c size 0x8 virtual false final false
 void set_selectPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_squeeze addr 0x2afa564 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_squeeze() ;

/// @brief Method set_squeeze addr 0x2afa56c size 0x8 virtual false final false
 void set_squeeze(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_squeezePressed addr 0x2afa574 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_squeezePressed() ;

/// @brief Method set_squeezePressed addr 0x2afa57c size 0x8 virtual false final false
 void set_squeezePressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePose addr 0x2afa584 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_devicePose() ;

/// @brief Method set_devicePose addr 0x2afa58c size 0x8 virtual false final false
 void set_devicePose(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_pointer addr 0x2afa594 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_pointer() ;

/// @brief Method set_pointer addr 0x2afa59c size 0x8 virtual false final false
 void set_pointer(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_isTracked addr 0x2afa5a4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2afa5ac size 0x8 virtual false final false
 void set_isTracked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2afa5b4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2afa5bc size 0x8 virtual false final false
 void set_trackingState(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_devicePosition addr 0x2afa5c4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2afa5cc size 0x8 virtual false final false
 void set_devicePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2afa5d4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2afa5dc size 0x8 virtual false final false
 void set_deviceRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_pointerPosition addr 0x2afa5e4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_pointerPosition() ;

/// @brief Method set_pointerPosition addr 0x2afa5ec size 0x8 virtual false final false
 void set_pointerPosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerRotation addr 0x2afa5f4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_pointerRotation() ;

/// @brief Method set_pointerRotation addr 0x2afa5fc size 0x8 virtual false final false
 void set_pointerRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method FinishSetup addr 0x2afa604 size 0x2b0 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand() ;

/// @brief Method .ctor addr 0x2afa8b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::MicrosoftHandInteraction
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14219))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MicrosoftHandInteraction
class CORDL_TYPE MicrosoftHandInteraction : public UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using HoloLensHand = UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MicrosoftHandInteraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "MicrosoftHandInteraction", modifiers: " const&", def_value: None }]
constexpr MicrosoftHandInteraction(MicrosoftHandInteraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MicrosoftHandInteraction", modifiers: "&&", def_value: None }]
constexpr MicrosoftHandInteraction(MicrosoftHandInteraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MicrosoftHandInteraction(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature(ptr) {
}


  constexpr MicrosoftHandInteraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MicrosoftHandInteraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MicrosoftHandInteraction& operator=(MicrosoftHandInteraction&& o) noexcept = default;
  constexpr MicrosoftHandInteraction& operator=(MicrosoftHandInteraction const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.handtracking"};

/// @brief Field extensionString offset 0
static constexpr ::ConstString  extensionString{u"XR_MSFT_hand_interaction"};

/// @brief Field profile offset 0
static constexpr ::ConstString  profile{u"/interaction_profiles/microsoft/hand_interaction"};

/// @brief Field select offset 0
static constexpr ::ConstString  select{u"/input/select/value"};

/// @brief Field squeeze offset 0
static constexpr ::ConstString  squeeze{u"/input/squeeze/value"};

/// @brief Field grip offset 0
static constexpr ::ConstString  grip{u"/input/grip/pose"};

/// @brief Field aim offset 0
static constexpr ::ConstString  aim{u"/input/aim/pose"};

/// @brief Field kDeviceLocalizedName offset 0
static constexpr ::ConstString  kDeviceLocalizedName{u"HoloLens Hand OpenXR"};


// Methods

/// @brief Method RegisterDeviceLayout addr 0x2af93dc size 0x140 virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2af951c size 0x68 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2af9584 size 0xfb8 virtual true final false
 void RegisterActionMapsWithRuntime() ;

// Ctor Parameters []
explicit MicrosoftHandInteraction() ;

/// @brief Method .ctor addr 0x2afa53c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction, "UnityEngine.XR.OpenXR.Features.Interactions", "MicrosoftHandInteraction");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__MicrosoftHandInteraction__HoloLensHand, "UnityEngine.XR.OpenXR.Features.Interactions", "MicrosoftHandInteraction/HoloLensHand");
