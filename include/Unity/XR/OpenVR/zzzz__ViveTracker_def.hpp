#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class ViveTracker;
}
// Type: Unity.XR.OpenVR::ViveTracker
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6372))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6202))
// CS Name: Unity.XR.OpenVR.ViveTracker
class CORDL_TYPE ViveTracker : public ::UnityEngine::InputSystem::TrackedDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x188};

virtual ~ViveTracker() = default;

// Ctor Parameters [CppParam { name: "", ty: "ViveTracker", modifiers: " const&", def_value: None }]
constexpr ViveTracker(ViveTracker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ViveTracker", modifiers: "&&", def_value: None }]
constexpr ViveTracker(ViveTracker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ViveTracker(void* ptr) noexcept : ::UnityEngine::InputSystem::TrackedDevice(ptr) {
}


  constexpr ViveTracker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ViveTracker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ViveTracker& operator=(ViveTracker&& o) noexcept = default;
  constexpr ViveTracker& operator=(ViveTracker const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField))  _deviceVelocity_k__BackingField;

constexpr void __set__deviceVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__deviceVelocity_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField))  _deviceAngularVelocity_k__BackingField;

constexpr void __set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularVelocity_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity))  deviceVelocity;

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity))  deviceAngularVelocity;


// Methods

/// @brief Method get_deviceVelocity addr 0x28a2c54 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x28a2c5c size 0x8 virtual false final false
 void set_deviceVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularVelocity addr 0x28a2c64 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x28a2c6c size 0x8 virtual false final false
 void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method FinishSetup addr 0x28a2c74 size 0xa4 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit ViveTracker() ;

/// @brief Method .ctor addr 0x28a2d18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::OpenVR::ViveTracker);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::ViveTracker, "Unity.XR.OpenVR", "ViveTracker");
