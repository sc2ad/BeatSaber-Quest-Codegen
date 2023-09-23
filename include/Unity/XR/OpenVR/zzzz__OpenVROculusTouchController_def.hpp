#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class OpenVROculusTouchController;
}
// Type: Unity.XR.OpenVR::OpenVROculusTouchController
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6409))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6204))
// CS Name: Unity.XR.OpenVR.OpenVROculusTouchController
class CORDL_TYPE OpenVROculusTouchController : public UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d0};

virtual ~OpenVROculusTouchController() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVROculusTouchController", modifiers: " const&", def_value: None }]
constexpr OpenVROculusTouchController(OpenVROculusTouchController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVROculusTouchController", modifiers: "&&", def_value: None }]
constexpr OpenVROculusTouchController(OpenVROculusTouchController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenVROculusTouchController(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr OpenVROculusTouchController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenVROculusTouchController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenVROculusTouchController& operator=(OpenVROculusTouchController&& o) noexcept = default;
  constexpr OpenVROculusTouchController& operator=(OpenVROculusTouchController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__thumbstick_k__BackingField, put=__set__thumbstick_k__BackingField))  _thumbstick_k__BackingField;

constexpr void __set__thumbstick_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__thumbstick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primaryButton_k__BackingField, put=__set__primaryButton_k__BackingField))  _primaryButton_k__BackingField;

constexpr void __set__primaryButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__primaryButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondaryButton_k__BackingField, put=__set__secondaryButton_k__BackingField))  _secondaryButton_k__BackingField;

constexpr void __set__secondaryButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__secondaryButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickClicked_k__BackingField, put=__set__thumbstickClicked_k__BackingField))  _thumbstickClicked_k__BackingField;

constexpr void __set__thumbstickClicked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickClicked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickTouched_k__BackingField, put=__set__thumbstickTouched_k__BackingField))  _thumbstickTouched_k__BackingField;

constexpr void __set__thumbstickTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField))  _deviceVelocity_k__BackingField;

constexpr void __set__deviceVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField))  _deviceAngularVelocity_k__BackingField;

constexpr void __set__deviceAngularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularVelocity_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_thumbstick, put=set_thumbstick))  thumbstick;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryButton, put=set_primaryButton))  primaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryButton, put=set_secondaryButton))  secondaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickClicked, put=set_thumbstickClicked))  thumbstickClicked;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickTouched, put=set_thumbstickTouched))  thumbstickTouched;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity))  deviceVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity))  deviceAngularVelocity;


// Methods

/// @brief Method get_thumbstick addr 0x28a2eb0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_thumbstick() ;

/// @brief Method set_thumbstick addr 0x28a2eb8 size 0x8 virtual false final false
 void set_thumbstick(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_trigger addr 0x28a2ec0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x28a2ec8 size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_grip addr 0x28a2ed0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x28a2ed8 size 0x8 virtual false final false
 void set_grip(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_primaryButton addr 0x28a2ee0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primaryButton() ;

/// @brief Method set_primaryButton addr 0x28a2ee8 size 0x8 virtual false final false
 void set_primaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryButton addr 0x28a2ef0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_secondaryButton() ;

/// @brief Method set_secondaryButton addr 0x28a2ef8 size 0x8 virtual false final false
 void set_secondaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_gripPressed addr 0x28a2f00 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x28a2f08 size 0x8 virtual false final false
 void set_gripPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_triggerPressed addr 0x28a2f10 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x28a2f18 size 0x8 virtual false final false
 void set_triggerPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickClicked addr 0x28a2f20 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickClicked() ;

/// @brief Method set_thumbstickClicked addr 0x28a2f28 size 0x8 virtual false final false
 void set_thumbstickClicked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickTouched addr 0x28a2f30 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickTouched() ;

/// @brief Method set_thumbstickTouched addr 0x28a2f38 size 0x8 virtual false final false
 void set_thumbstickTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_deviceVelocity addr 0x28a2f40 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x28a2f48 size 0x8 virtual false final false
 void set_deviceVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularVelocity addr 0x28a2f50 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x28a2f58 size 0x8 virtual false final false
 void set_deviceAngularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method FinishSetup addr 0x28a2f60 size 0x260 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit OpenVROculusTouchController() ;

/// @brief Method .ctor addr 0x28a31c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::OpenVR
NEED_NO_BOX(Unity::XR::OpenVR::OpenVROculusTouchController);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::OpenVR::OpenVROculusTouchController, "Unity.XR.OpenVR", "OpenVROculusTouchController");
