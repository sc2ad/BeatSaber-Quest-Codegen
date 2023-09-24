#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRHMD;
}
// Type: UnityEngine.InputSystem.XR::XRHMD
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6372))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6407))
// CS Name: UnityEngine.InputSystem.XR.XRHMD
class CORDL_TYPE XRHMD : public UnityEngine::InputSystem::TrackedDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1a8};

virtual ~XRHMD() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRHMD", modifiers: " const&", def_value: None }]
constexpr XRHMD(XRHMD const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRHMD", modifiers: "&&", def_value: None }]
constexpr XRHMD(XRHMD&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRHMD(void* ptr) noexcept : UnityEngine::InputSystem::TrackedDevice(ptr) {
}


  constexpr XRHMD& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRHMD& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRHMD& operator=(XRHMD&& o) noexcept = default;
  constexpr XRHMD& operator=(XRHMD const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__leftEyePosition_k__BackingField, put=__set__leftEyePosition_k__BackingField))  _leftEyePosition_k__BackingField;

constexpr void __set__leftEyePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__leftEyePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__leftEyeRotation_k__BackingField, put=__set__leftEyeRotation_k__BackingField))  _leftEyeRotation_k__BackingField;

constexpr void __set__leftEyeRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__leftEyeRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__rightEyePosition_k__BackingField, put=__set__rightEyePosition_k__BackingField))  _rightEyePosition_k__BackingField;

constexpr void __set__rightEyePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__rightEyePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__rightEyeRotation_k__BackingField, put=__set__rightEyeRotation_k__BackingField))  _rightEyeRotation_k__BackingField;

constexpr void __set__rightEyeRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__rightEyeRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__centerEyePosition_k__BackingField, put=__set__centerEyePosition_k__BackingField))  _centerEyePosition_k__BackingField;

constexpr void __set__centerEyePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__centerEyePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__centerEyeRotation_k__BackingField, put=__set__centerEyeRotation_k__BackingField))  _centerEyeRotation_k__BackingField;

constexpr void __set__centerEyeRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__centerEyeRotation_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_leftEyePosition, put=set_leftEyePosition))  leftEyePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_leftEyeRotation, put=set_leftEyeRotation))  leftEyeRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_rightEyePosition, put=set_rightEyePosition))  rightEyePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_rightEyeRotation, put=set_rightEyeRotation))  rightEyeRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_centerEyePosition, put=set_centerEyePosition))  centerEyePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_centerEyeRotation, put=set_centerEyeRotation))  centerEyeRotation;


// Methods

/// @brief Method get_leftEyePosition addr 0x2932e70 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_leftEyePosition() ;

/// @brief Method set_leftEyePosition addr 0x2932e78 size 0x8 virtual false final false
 void set_leftEyePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_leftEyeRotation addr 0x2932e80 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_leftEyeRotation() ;

/// @brief Method set_leftEyeRotation addr 0x2932e88 size 0x8 virtual false final false
 void set_leftEyeRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_rightEyePosition addr 0x2932e90 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_rightEyePosition() ;

/// @brief Method set_rightEyePosition addr 0x2932e98 size 0x8 virtual false final false
 void set_rightEyePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rightEyeRotation addr 0x2932ea0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_rightEyeRotation() ;

/// @brief Method set_rightEyeRotation addr 0x2932ea8 size 0x8 virtual false final false
 void set_rightEyeRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_centerEyePosition addr 0x2932eb0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_centerEyePosition() ;

/// @brief Method set_centerEyePosition addr 0x2932eb8 size 0x8 virtual false final false
 void set_centerEyePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_centerEyeRotation addr 0x2932ec0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_centerEyeRotation() ;

/// @brief Method set_centerEyeRotation addr 0x2932ec8 size 0x8 virtual false final false
 void set_centerEyeRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method FinishSetup addr 0x2932ed0 size 0x170 virtual true final false
 void FinishSetup() ;

static UnityEngine::InputSystem::XR::XRHMD New_ctor() ;

/// @brief Method .ctor addr 0x2933040 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(UnityEngine::InputSystem::XR::XRHMD);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::XRHMD, "UnityEngine.InputSystem.XR", "XRHMD");
