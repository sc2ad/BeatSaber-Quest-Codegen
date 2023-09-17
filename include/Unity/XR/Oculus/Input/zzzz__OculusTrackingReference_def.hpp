#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
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
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusTrackingReference;
}
// Type: Unity.XR.Oculus.Input::OculusTrackingReference
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15244))
// CS Name: Unity.XR.Oculus.Input.OculusTrackingReference
class CORDL_TYPE OculusTrackingReference : public ::UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~OculusTrackingReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusTrackingReference", modifiers: " const&", def_value: None }]
constexpr OculusTrackingReference(OculusTrackingReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusTrackingReference", modifiers: "&&", def_value: None }]
constexpr OculusTrackingReference(OculusTrackingReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusTrackingReference(void* ptr) noexcept : ::UnityEngine::InputSystem::InputDevice(ptr) {
}


  constexpr OculusTrackingReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusTrackingReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusTrackingReference& operator=(OculusTrackingReference&& o) noexcept = default;
  constexpr OculusTrackingReference& operator=(OculusTrackingReference const& o) noexcept = default;
                


// Fields

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


// Properties

 ::UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;


// Methods

/// @brief Method get_trackingState addr 0x2ae3f4c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2ae3f54 size 0x8 virtual false final false
 void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_isTracked addr 0x2ae3f5c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2ae3f64 size 0x8 virtual false final false
 void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePosition addr 0x2ae3f6c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2ae3f74 size 0x8 virtual false final false
 void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2ae3f7c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2ae3f84 size 0x8 virtual false final false
 void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method FinishSetup addr 0x2ae3f8c size 0x148 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit OculusTrackingReference() ;

/// @brief Method .ctor addr 0x2ae40d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus::Input
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusTrackingReference);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusTrackingReference, "Unity.XR.Oculus.Input", "OculusTrackingReference");
