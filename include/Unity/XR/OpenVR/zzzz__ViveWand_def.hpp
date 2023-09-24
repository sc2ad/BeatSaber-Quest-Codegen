#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class ViveWand;
}
// Type: Unity.XR.OpenVR::ViveWand
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6200))
// CS Name: Unity.XR.OpenVR.ViveWand
class CORDL_TYPE ViveWand : public UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1c8};

virtual ~ViveWand() = default;

// Ctor Parameters [CppParam { name: "", ty: "ViveWand", modifiers: " const&", def_value: None }]
constexpr ViveWand(ViveWand const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ViveWand", modifiers: "&&", def_value: None }]
constexpr ViveWand(ViveWand&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ViveWand(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr ViveWand& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ViveWand& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ViveWand& operator=(ViveWand&& o) noexcept = default;
  constexpr ViveWand& operator=(ViveWand const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primary_k__BackingField, put=__set__primary_k__BackingField))  _primary_k__BackingField;

constexpr void __set__primary_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__primary_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__trackpadPressed_k__BackingField, put=__set__trackpadPressed_k__BackingField))  _trackpadPressed_k__BackingField;

constexpr void __set__trackpadPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__trackpadPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__trackpadTouched_k__BackingField, put=__set__trackpadTouched_k__BackingField))  _trackpadTouched_k__BackingField;

constexpr void __set__trackpadTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__trackpadTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__trackpad_k__BackingField, put=__set__trackpad_k__BackingField))  _trackpad_k__BackingField;

constexpr void __set__trackpad_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__trackpad_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField))  _deviceVelocity_k__BackingField;

constexpr void __set__deviceVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField))  _deviceAngularVelocity_k__BackingField;

constexpr void __set__deviceAngularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularVelocity_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primary, put=set_primary))  primary;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_trackpadPressed, put=set_trackpadPressed))  trackpadPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_trackpadTouched, put=set_trackpadTouched))  trackpadTouched;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_trackpad, put=set_trackpad))  trackpad;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity))  deviceVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity))  deviceAngularVelocity;


// Methods

/// @brief Method get_grip addr 0x28a296c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x28a2974 size 0x8 virtual false final false
 void set_grip(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_gripPressed addr 0x28a297c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x28a2984 size 0x8 virtual false final false
 void set_gripPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primary addr 0x28a298c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primary() ;

/// @brief Method set_primary addr 0x28a2994 size 0x8 virtual false final false
 void set_primary(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackpadPressed addr 0x28a299c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_trackpadPressed() ;

/// @brief Method set_trackpadPressed addr 0x28a29a4 size 0x8 virtual false final false
 void set_trackpadPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackpadTouched addr 0x28a29ac size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_trackpadTouched() ;

/// @brief Method set_trackpadTouched addr 0x28a29b4 size 0x8 virtual false final false
 void set_trackpadTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackpad addr 0x28a29bc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_trackpad() ;

/// @brief Method set_trackpad addr 0x28a29c4 size 0x8 virtual false final false
 void set_trackpad(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_trigger addr 0x28a29cc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x28a29d4 size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerPressed addr 0x28a29dc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x28a29e4 size 0x8 virtual false final false
 void set_triggerPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_deviceVelocity addr 0x28a29ec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x28a29f4 size 0x8 virtual false final false
 void set_deviceVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularVelocity addr 0x28a29fc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x28a2a04 size 0x8 virtual false final false
 void set_deviceAngularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method FinishSetup addr 0x28a2a0c size 0x238 virtual true final false
 void FinishSetup() ;

static Unity::XR::OpenVR::ViveWand New_ctor() ;

/// @brief Method .ctor addr 0x28a2c44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::OpenVR
NEED_NO_BOX(Unity::XR::OpenVR::ViveWand);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::OpenVR::ViveWand, "Unity.XR.OpenVR", "ViveWand");
