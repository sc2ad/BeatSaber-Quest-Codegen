#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Unity/XR/OpenVR/zzzz__ViveTracker_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class HandedViveTracker;
}
// Type: Unity.XR.OpenVR::HandedViveTracker
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6202))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6203))
// CS Name: Unity.XR.OpenVR.HandedViveTracker
class CORDL_TYPE HandedViveTracker : public ::Unity::XR::OpenVR::ViveTracker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1b0};

virtual ~HandedViveTracker() = default;

// Ctor Parameters [CppParam { name: "", ty: "HandedViveTracker", modifiers: " const&", def_value: None }]
constexpr HandedViveTracker(HandedViveTracker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HandedViveTracker", modifiers: "&&", def_value: None }]
constexpr HandedViveTracker(HandedViveTracker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HandedViveTracker(void* ptr) noexcept : ::Unity::XR::OpenVR::ViveTracker(ptr) {
}


  constexpr HandedViveTracker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HandedViveTracker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HandedViveTracker& operator=(HandedViveTracker&& o) noexcept = default;
  constexpr HandedViveTracker& operator=(HandedViveTracker const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primary_k__BackingField, put=__set__primary_k__BackingField))  _primary_k__BackingField;

constexpr void __set__primary_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__primary_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__trackpadPressed_k__BackingField, put=__set__trackpadPressed_k__BackingField))  _trackpadPressed_k__BackingField;

constexpr void __set__trackpadPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__trackpadPressed_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primary, put=set_primary))  primary;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_trackpadPressed, put=set_trackpadPressed))  trackpadPressed;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;


// Methods

/// @brief Method get_grip addr 0x28a2d20 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x28a2d28 size 0x8 virtual false final false
 void set_grip(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_gripPressed addr 0x28a2d30 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x28a2d38 size 0x8 virtual false final false
 void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primary addr 0x28a2d40 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_primary() ;

/// @brief Method set_primary addr 0x28a2d48 size 0x8 virtual false final false
 void set_primary(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackpadPressed addr 0x28a2d50 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_trackpadPressed() ;

/// @brief Method set_trackpadPressed addr 0x28a2d58 size 0x8 virtual false final false
 void set_trackpadPressed(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_triggerPressed addr 0x28a2d60 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x28a2d68 size 0x8 virtual false final false
 void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method FinishSetup addr 0x28a2d70 size 0x138 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit HandedViveTracker() ;

/// @brief Method .ctor addr 0x28a2ea8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::OpenVR::HandedViveTracker);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::OpenVR::HandedViveTracker, "Unity.XR.OpenVR", "HandedViveTracker");
