#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem {
class Pen;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
// Type: UnityEngine.InputSystem.UI::ExtendedPointerEventData
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13107))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6454))
// CS Name: UnityEngine.InputSystem.UI.ExtendedPointerEventData
class CORDL_TYPE ExtendedPointerEventData : public UnityEngine::EventSystems::PointerEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x198};

virtual ~ExtendedPointerEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPointerEventData", modifiers: " const&", def_value: None }]
constexpr ExtendedPointerEventData(ExtendedPointerEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedPointerEventData", modifiers: "&&", def_value: None }]
constexpr ExtendedPointerEventData(ExtendedPointerEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtendedPointerEventData(void* ptr) noexcept : UnityEngine::EventSystems::PointerEventData(ptr) {
}


  constexpr ExtendedPointerEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtendedPointerEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtendedPointerEventData& operator=(ExtendedPointerEventData&& o) noexcept = default;
  constexpr ExtendedPointerEventData& operator=(ExtendedPointerEventData const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::InputControl __declspec(property(get=__get__control_k__BackingField, put=__set__control_k__BackingField))  _control_k__BackingField;

constexpr void __set__control_k__BackingField(UnityEngine::InputSystem::InputControl value) ;

constexpr UnityEngine::InputSystem::InputControl __get__control_k__BackingField() const;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=__get__device_k__BackingField, put=__set__device_k__BackingField))  _device_k__BackingField;

constexpr void __set__device_k__BackingField(UnityEngine::InputSystem::InputDevice value) ;

constexpr UnityEngine::InputSystem::InputDevice __get__device_k__BackingField() const;

 int32_t __declspec(property(get=__get__touchId_k__BackingField, put=__set__touchId_k__BackingField))  _touchId_k__BackingField;

constexpr void __set__touchId_k__BackingField(int32_t value) ;

constexpr int32_t __get__touchId_k__BackingField() const;

 UnityEngine::InputSystem::UI::UIPointerType __declspec(property(get=__get__pointerType_k__BackingField, put=__set__pointerType_k__BackingField))  _pointerType_k__BackingField;

constexpr void __set__pointerType_k__BackingField(UnityEngine::InputSystem::UI::UIPointerType value) ;

constexpr UnityEngine::InputSystem::UI::UIPointerType __get__pointerType_k__BackingField() const;

 int32_t __declspec(property(get=__get__uiToolkitPointerId_k__BackingField, put=__set__uiToolkitPointerId_k__BackingField))  _uiToolkitPointerId_k__BackingField;

constexpr void __set__uiToolkitPointerId_k__BackingField(int32_t value) ;

constexpr int32_t __get__uiToolkitPointerId_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__trackedDevicePosition_k__BackingField, put=__set__trackedDevicePosition_k__BackingField))  _trackedDevicePosition_k__BackingField;

constexpr void __set__trackedDevicePosition_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__trackedDevicePosition_k__BackingField() const;

 UnityEngine::Quaternion __declspec(property(get=__get__trackedDeviceOrientation_k__BackingField, put=__set__trackedDeviceOrientation_k__BackingField))  _trackedDeviceOrientation_k__BackingField;

constexpr void __set__trackedDeviceOrientation_k__BackingField(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__trackedDeviceOrientation_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_control, put=set_control))  control;

 UnityEngine::InputSystem::InputDevice __declspec(property(get=get_device, put=set_device))  device;

 int32_t __declspec(property(get=get_touchId, put=set_touchId))  touchId;

 UnityEngine::InputSystem::UI::UIPointerType __declspec(property(get=get_pointerType, put=set_pointerType))  pointerType;

 int32_t __declspec(property(get=get_uiToolkitPointerId, put=set_uiToolkitPointerId))  uiToolkitPointerId;

 UnityEngine::Vector3 __declspec(property(get=get_trackedDevicePosition, put=set_trackedDevicePosition))  trackedDevicePosition;

 UnityEngine::Quaternion __declspec(property(get=get_trackedDeviceOrientation, put=set_trackedDeviceOrientation))  trackedDeviceOrientation;


// Methods

// Ctor Parameters [CppParam { name: "eventSystem", ty: "UnityEngine::EventSystems::EventSystem", modifiers: "", def_value: None }]
explicit ExtendedPointerEventData(UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method .ctor addr 0x293be8c size 0x8 virtual false final false
 void _ctor(UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method get_control addr 0x293be94 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputControl get_control() ;

/// @brief Method set_control addr 0x293be9c size 0x8 virtual false final false
 void set_control(UnityEngine::InputSystem::InputControl value) ;

/// @brief Method get_device addr 0x293bea4 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputDevice get_device() ;

/// @brief Method set_device addr 0x293beac size 0x8 virtual false final false
 void set_device(UnityEngine::InputSystem::InputDevice value) ;

/// @brief Method get_touchId addr 0x293beb4 size 0x8 virtual false final false
 int32_t get_touchId() ;

/// @brief Method set_touchId addr 0x293bebc size 0x8 virtual false final false
 void set_touchId(int32_t value) ;

/// @brief Method get_pointerType addr 0x293bec4 size 0x8 virtual false final false
 UnityEngine::InputSystem::UI::UIPointerType get_pointerType() ;

/// @brief Method set_pointerType addr 0x293becc size 0x8 virtual false final false
 void set_pointerType(UnityEngine::InputSystem::UI::UIPointerType value) ;

/// @brief Method get_uiToolkitPointerId addr 0x293bed4 size 0x8 virtual false final false
 int32_t get_uiToolkitPointerId() ;

/// @brief Method set_uiToolkitPointerId addr 0x293bedc size 0x8 virtual false final false
 void set_uiToolkitPointerId(int32_t value) ;

/// @brief Method get_trackedDevicePosition addr 0x293bee4 size 0x10 virtual false final false
 UnityEngine::Vector3 get_trackedDevicePosition() ;

/// @brief Method set_trackedDevicePosition addr 0x293bef4 size 0x10 virtual false final false
 void set_trackedDevicePosition(UnityEngine::Vector3 value) ;

/// @brief Method get_trackedDeviceOrientation addr 0x293bf04 size 0x14 virtual false final false
 UnityEngine::Quaternion get_trackedDeviceOrientation() ;

/// @brief Method set_trackedDeviceOrientation addr 0x293bf18 size 0x14 virtual false final false
 void set_trackedDeviceOrientation(UnityEngine::Quaternion value) ;

/// @brief Method ToString addr 0x293bf2c size 0x3bc virtual true final false
 ::StringW ToString() ;

/// @brief Method MakePointerIdForTouch addr 0x293c2e8 size 0x8 virtual false final false
static int32_t MakePointerIdForTouch(int32_t deviceId, int32_t touchId) ;

/// @brief Method TouchIdFromPointerId addr 0x293c2f0 size 0x8 virtual false final false
static int32_t TouchIdFromPointerId(int32_t pointerId) ;

/// @brief Method ReadDeviceState addr 0x293c2f8 size 0x254 virtual false final false
 void ReadDeviceState() ;

/// @brief Method GetPenPointerId addr 0x293c54c size 0x254 virtual false final false
static int32_t GetPenPointerId(UnityEngine::InputSystem::Pen pen) ;

/// @brief Method GetTouchPointerId addr 0x293c7a0 size 0xf8 virtual false final false
static int32_t GetTouchPointerId(UnityEngine::InputSystem::Controls::TouchControl touchControl) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
NEED_NO_BOX(UnityEngine::InputSystem::UI::ExtendedPointerEventData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UI::ExtendedPointerEventData, "UnityEngine.InputSystem.UI", "ExtendedPointerEventData");
