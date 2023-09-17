#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class OpenVRHMD;
}
// Type: Unity.XR.OpenVR::OpenVRHMD
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6198))
// CS Name: Unity.XR.OpenVR.OpenVRHMD
class CORDL_TYPE OpenVRHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1e8};

virtual ~OpenVRHMD() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVRHMD", modifiers: " const&", def_value: None }]
constexpr OpenVRHMD(OpenVRHMD const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVRHMD", modifiers: "&&", def_value: None }]
constexpr OpenVRHMD(OpenVRHMD&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenVRHMD(void* ptr) noexcept : ::UnityEngine::InputSystem::XR::XRHMD(ptr) {
}


  constexpr OpenVRHMD& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenVRHMD& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenVRHMD& operator=(OpenVRHMD&& o) noexcept = default;
  constexpr OpenVRHMD& operator=(OpenVRHMD const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField))  _deviceVelocity_k__BackingField;

constexpr void __set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__deviceVelocity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField))  _deviceAngularVelocity_k__BackingField;

constexpr void __set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularVelocity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__leftEyeVelocity_k__BackingField, put=__set__leftEyeVelocity_k__BackingField))  _leftEyeVelocity_k__BackingField;

constexpr void __set__leftEyeVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__leftEyeVelocity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__leftEyeAngularVelocity_k__BackingField, put=__set__leftEyeAngularVelocity_k__BackingField))  _leftEyeAngularVelocity_k__BackingField;

constexpr void __set__leftEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__leftEyeAngularVelocity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__rightEyeVelocity_k__BackingField, put=__set__rightEyeVelocity_k__BackingField))  _rightEyeVelocity_k__BackingField;

constexpr void __set__rightEyeVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__rightEyeVelocity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__rightEyeAngularVelocity_k__BackingField, put=__set__rightEyeAngularVelocity_k__BackingField))  _rightEyeAngularVelocity_k__BackingField;

constexpr void __set__rightEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__rightEyeAngularVelocity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__centerEyeVelocity_k__BackingField, put=__set__centerEyeVelocity_k__BackingField))  _centerEyeVelocity_k__BackingField;

constexpr void __set__centerEyeVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__centerEyeVelocity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__centerEyeAngularVelocity_k__BackingField, put=__set__centerEyeAngularVelocity_k__BackingField))  _centerEyeAngularVelocity_k__BackingField;

constexpr void __set__centerEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__centerEyeAngularVelocity_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity))  deviceVelocity;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity))  deviceAngularVelocity;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_leftEyeVelocity, put=set_leftEyeVelocity))  leftEyeVelocity;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_leftEyeAngularVelocity, put=set_leftEyeAngularVelocity))  leftEyeAngularVelocity;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_rightEyeVelocity, put=set_rightEyeVelocity))  rightEyeVelocity;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_rightEyeAngularVelocity, put=set_rightEyeAngularVelocity))  rightEyeAngularVelocity;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_centerEyeVelocity, put=set_centerEyeVelocity))  centerEyeVelocity;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_centerEyeAngularVelocity, put=set_centerEyeAngularVelocity))  centerEyeAngularVelocity;


// Methods

/// @brief Method get_deviceVelocity addr 0x28a2420 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x28a2428 size 0x8 virtual false final false
 void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularVelocity addr 0x28a2430 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x28a2438 size 0x8 virtual false final false
 void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_leftEyeVelocity addr 0x28a2440 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_leftEyeVelocity() ;

/// @brief Method set_leftEyeVelocity addr 0x28a2448 size 0x8 virtual false final false
 void set_leftEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_leftEyeAngularVelocity addr 0x28a2450 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_leftEyeAngularVelocity() ;

/// @brief Method set_leftEyeAngularVelocity addr 0x28a2458 size 0x8 virtual false final false
 void set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rightEyeVelocity addr 0x28a2460 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_rightEyeVelocity() ;

/// @brief Method set_rightEyeVelocity addr 0x28a2468 size 0x8 virtual false final false
 void set_rightEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rightEyeAngularVelocity addr 0x28a2470 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_rightEyeAngularVelocity() ;

/// @brief Method set_rightEyeAngularVelocity addr 0x28a2478 size 0x8 virtual false final false
 void set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_centerEyeVelocity addr 0x28a2480 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_centerEyeVelocity() ;

/// @brief Method set_centerEyeVelocity addr 0x28a2488 size 0x8 virtual false final false
 void set_centerEyeVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_centerEyeAngularVelocity addr 0x28a2490 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_centerEyeAngularVelocity() ;

/// @brief Method set_centerEyeAngularVelocity addr 0x28a2498 size 0x8 virtual false final false
 void set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method FinishSetup addr 0x28a24a0 size 0x1ac virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit OpenVRHMD() ;

/// @brief Method .ctor addr 0x28a264c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::OpenVR::OpenVRHMD);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::OpenVRHMD, "Unity.XR.OpenVR", "OpenVRHMD");
