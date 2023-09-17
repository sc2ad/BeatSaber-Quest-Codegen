#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
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
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class GearVRTrackedController;
}
// Type: Unity.XR.Oculus.Input::GearVRTrackedController
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15248))
// CS Name: Unity.XR.Oculus.Input.GearVRTrackedController
class CORDL_TYPE GearVRTrackedController : public ::UnityEngine::InputSystem::XR::XRController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1e0};

virtual ~GearVRTrackedController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GearVRTrackedController", modifiers: " const&", def_value: None }]
constexpr GearVRTrackedController(GearVRTrackedController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GearVRTrackedController", modifiers: "&&", def_value: None }]
constexpr GearVRTrackedController(GearVRTrackedController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GearVRTrackedController(void* ptr) noexcept : ::UnityEngine::InputSystem::XR::XRController(ptr) {
}


  constexpr GearVRTrackedController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GearVRTrackedController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GearVRTrackedController& operator=(GearVRTrackedController&& o) noexcept = default;
  constexpr GearVRTrackedController& operator=(GearVRTrackedController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__touchpad_k__BackingField, put=__set__touchpad_k__BackingField))  _touchpad_k__BackingField;

constexpr void __set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control __get__touchpad_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__back_k__BackingField, put=__set__back_k__BackingField))  _back_k__BackingField;

constexpr void __set__back_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__back_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadClicked_k__BackingField, put=__set__touchpadClicked_k__BackingField))  _touchpadClicked_k__BackingField;

constexpr void __set__touchpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadClicked_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadTouched_k__BackingField, put=__set__touchpadTouched_k__BackingField))  _touchpadTouched_k__BackingField;

constexpr void __set__touchpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadTouched_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField))  _trackingState_k__BackingField;

constexpr void __set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::IntegerControl __get__trackingState_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField))  _isTracked_k__BackingField;

constexpr void __set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__isTracked_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__devicePosition_k__BackingField, put=__set__devicePosition_k__BackingField))  _devicePosition_k__BackingField;

constexpr void __set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__devicePosition_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__deviceRotation_k__BackingField, put=__set__deviceRotation_k__BackingField))  _deviceRotation_k__BackingField;

constexpr void __set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl __get__deviceRotation_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField))  _deviceAngularVelocity_k__BackingField;

constexpr void __set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularVelocity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAcceleration_k__BackingField, put=__set__deviceAcceleration_k__BackingField))  _deviceAcceleration_k__BackingField;

constexpr void __set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAcceleration_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularAcceleration_k__BackingField, put=__set__deviceAngularAcceleration_k__BackingField))  _deviceAngularAcceleration_k__BackingField;

constexpr void __set__deviceAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularAcceleration_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_touchpad, put=set_touchpad))  touchpad;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_back, put=set_back))  back;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadClicked, put=set_touchpadClicked))  touchpadClicked;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadTouched, put=set_touchpadTouched))  touchpadTouched;

 ::UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity))  deviceAngularVelocity;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAcceleration, put=set_deviceAcceleration))  deviceAcceleration;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularAcceleration, put=set_deviceAngularAcceleration))  deviceAngularAcceleration;


// Methods

/// @brief Method get_touchpad addr 0x2ae42f0 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector2Control get_touchpad() ;

/// @brief Method set_touchpad addr 0x2ae42f8 size 0x8 virtual false final false
 void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_trigger addr 0x2ae4300 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x2ae4308 size 0x8 virtual false final false
 void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_back addr 0x2ae4310 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_back() ;

/// @brief Method set_back addr 0x2ae4318 size 0x8 virtual false final false
 void set_back(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_triggerPressed addr 0x2ae4320 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2ae4328 size 0x8 virtual false final false
 void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpadClicked addr 0x2ae4330 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_touchpadClicked() ;

/// @brief Method set_touchpadClicked addr 0x2ae4338 size 0x8 virtual false final false
 void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpadTouched addr 0x2ae4340 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_touchpadTouched() ;

/// @brief Method set_touchpadTouched addr 0x2ae4348 size 0x8 virtual false final false
 void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2ae4350 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2ae4358 size 0x8 virtual false final false
 void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_isTracked addr 0x2ae4360 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2ae4368 size 0x8 virtual false final false
 void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePosition addr 0x2ae4370 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2ae4378 size 0x8 virtual false final false
 void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2ae4380 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2ae4388 size 0x8 virtual false final false
 void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_deviceAngularVelocity addr 0x2ae4390 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x2ae4398 size 0x8 virtual false final false
 void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAcceleration addr 0x2ae43a0 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_deviceAcceleration() ;

/// @brief Method set_deviceAcceleration addr 0x2ae43a8 size 0x8 virtual false final false
 void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularAcceleration addr 0x2ae43b0 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularAcceleration() ;

/// @brief Method set_deviceAngularAcceleration addr 0x2ae43b8 size 0x8 virtual false final false
 void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method FinishSetup addr 0x2ae43c0 size 0x2d8 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit GearVRTrackedController() ;

/// @brief Method .ctor addr 0x2ae4204 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus::Input
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::Oculus::Input::GearVRTrackedController);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::GearVRTrackedController, "Unity.XR.Oculus.Input", "GearVRTrackedController");
