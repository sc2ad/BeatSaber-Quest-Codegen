#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace Unity::XR::OpenVR {
class OpenVRControllerWMR;
}
// Type: Unity.XR.OpenVR::OpenVRControllerWMR
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6199))
// CS Name: Unity.XR.OpenVR.OpenVRControllerWMR
class CORDL_TYPE OpenVRControllerWMR : public UnityEngine::InputSystem::XR::XRController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d0};

virtual ~OpenVRControllerWMR() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVRControllerWMR", modifiers: " const&", def_value: None }]
constexpr OpenVRControllerWMR(OpenVRControllerWMR const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenVRControllerWMR", modifiers: "&&", def_value: None }]
constexpr OpenVRControllerWMR(OpenVRControllerWMR&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenVRControllerWMR(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRController(ptr) {
}


  constexpr OpenVRControllerWMR& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenVRControllerWMR& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenVRControllerWMR& operator=(OpenVRControllerWMR&& o) noexcept = default;
  constexpr OpenVRControllerWMR& operator=(OpenVRControllerWMR const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField))  _deviceVelocity_k__BackingField;

constexpr void __set__deviceVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField))  _deviceAngularVelocity_k__BackingField;

constexpr void __set__deviceAngularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadClick_k__BackingField, put=__set__touchpadClick_k__BackingField))  _touchpadClick_k__BackingField;

constexpr void __set__touchpadClick_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadClick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadTouch_k__BackingField, put=__set__touchpadTouch_k__BackingField))  _touchpadTouch_k__BackingField;

constexpr void __set__touchpadTouch_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadTouch_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__menu_k__BackingField, put=__set__menu_k__BackingField))  _menu_k__BackingField;

constexpr void __set__menu_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__menu_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__touchpad_k__BackingField, put=__set__touchpad_k__BackingField))  _touchpad_k__BackingField;

constexpr void __set__touchpad_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__touchpad_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__joystick_k__BackingField, put=__set__joystick_k__BackingField))  _joystick_k__BackingField;

constexpr void __set__joystick_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__joystick_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity))  deviceVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity))  deviceAngularVelocity;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadClick, put=set_touchpadClick))  touchpadClick;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadTouch, put=set_touchpadTouch))  touchpadTouch;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_menu, put=set_menu))  menu;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_touchpad, put=set_touchpad))  touchpad;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_joystick, put=set_joystick))  joystick;


// Methods

/// @brief Method get_deviceVelocity addr 0x28a2654 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x28a265c size 0x8 virtual false final false
 void set_deviceVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularVelocity addr 0x28a2664 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x28a266c size 0x8 virtual false final false
 void set_deviceAngularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_touchpadClick addr 0x28a2674 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_touchpadClick() ;

/// @brief Method set_touchpadClick addr 0x28a267c size 0x8 virtual false final false
 void set_touchpadClick(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_touchpadTouch addr 0x28a2684 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_touchpadTouch() ;

/// @brief Method set_touchpadTouch addr 0x28a268c size 0x8 virtual false final false
 void set_touchpadTouch(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_gripPressed addr 0x28a2694 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x28a269c size 0x8 virtual false final false
 void set_gripPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_triggerPressed addr 0x28a26a4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x28a26ac size 0x8 virtual false final false
 void set_triggerPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_menu addr 0x28a26b4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_menu() ;

/// @brief Method set_menu addr 0x28a26bc size 0x8 virtual false final false
 void set_menu(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trigger addr 0x28a26c4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x28a26cc size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_grip addr 0x28a26d4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x28a26dc size 0x8 virtual false final false
 void set_grip(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_touchpad addr 0x28a26e4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_touchpad() ;

/// @brief Method set_touchpad addr 0x28a26ec size 0x8 virtual false final false
 void set_touchpad(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_joystick addr 0x28a26f4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_joystick() ;

/// @brief Method set_joystick addr 0x28a26fc size 0x8 virtual false final false
 void set_joystick(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method FinishSetup addr 0x28a2704 size 0x260 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit OpenVRControllerWMR() ;

/// @brief Method .ctor addr 0x28a2964 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::OpenVR
NEED_NO_BOX(Unity::XR::OpenVR::OpenVRControllerWMR);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::OpenVR::OpenVRControllerWMR, "Unity.XR.OpenVR", "OpenVRControllerWMR");
