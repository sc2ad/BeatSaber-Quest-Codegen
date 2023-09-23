#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Type: UnityEngine.UIElements::IPointerEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7295))
// CS Name: UnityEngine.UIElements.IPointerEvent
class CORDL_TYPE IPointerEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPointerEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPointerEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_pointerId))  pointerId;

 ::StringW __declspec(property(get=get_pointerType))  pointerType;

 bool __declspec(property(get=get_isPrimary))  isPrimary;

 int32_t __declspec(property(get=get_button))  button;

 int32_t __declspec(property(get=get_pressedButtons))  pressedButtons;

 UnityEngine::Vector3 __declspec(property(get=get_position))  position;

 UnityEngine::Vector3 __declspec(property(get=get_localPosition))  localPosition;

 UnityEngine::Vector3 __declspec(property(get=get_deltaPosition))  deltaPosition;

 float_t __declspec(property(get=get_deltaTime))  deltaTime;

 int32_t __declspec(property(get=get_clickCount))  clickCount;

 float_t __declspec(property(get=get_pressure))  pressure;

 float_t __declspec(property(get=get_tangentialPressure))  tangentialPressure;

 float_t __declspec(property(get=get_altitudeAngle))  altitudeAngle;

 float_t __declspec(property(get=get_azimuthAngle))  azimuthAngle;

 float_t __declspec(property(get=get_twist))  twist;

 UnityEngine::Vector2 __declspec(property(get=get_radius))  radius;

 UnityEngine::Vector2 __declspec(property(get=get_radiusVariance))  radiusVariance;

 UnityEngine::EventModifiers __declspec(property(get=get_modifiers))  modifiers;

 bool __declspec(property(get=get_shiftKey))  shiftKey;

 bool __declspec(property(get=get_ctrlKey))  ctrlKey;

 bool __declspec(property(get=get_commandKey))  commandKey;

 bool __declspec(property(get=get_altKey))  altKey;

 bool __declspec(property(get=get_actionKey))  actionKey;


// Methods

/// @brief Method get_pointerId addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_pointerId() ;

/// @brief Method get_pointerType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_pointerType() ;

/// @brief Method get_isPrimary addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isPrimary() ;

/// @brief Method get_button addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_button() ;

/// @brief Method get_pressedButtons addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_pressedButtons() ;

/// @brief Method get_position addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method get_localPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector3 get_localPosition() ;

/// @brief Method get_deltaPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method get_deltaTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_deltaTime() ;

/// @brief Method get_clickCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_clickCount() ;

/// @brief Method get_pressure addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_pressure() ;

/// @brief Method get_tangentialPressure addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_tangentialPressure() ;

/// @brief Method get_altitudeAngle addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_altitudeAngle() ;

/// @brief Method get_azimuthAngle addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_azimuthAngle() ;

/// @brief Method get_twist addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_twist() ;

/// @brief Method get_radius addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 get_radius() ;

/// @brief Method get_radiusVariance addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 get_radiusVariance() ;

/// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method get_shiftKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_shiftKey() ;

/// @brief Method get_ctrlKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ctrlKey() ;

/// @brief Method get_commandKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_commandKey() ;

/// @brief Method get_altKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_altKey() ;

/// @brief Method get_actionKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_actionKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IPointerEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IPointerEvent, "UnityEngine.UIElements", "IPointerEvent");
