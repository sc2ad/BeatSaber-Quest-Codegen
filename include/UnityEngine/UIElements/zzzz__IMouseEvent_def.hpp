#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMouseEvent;
}
// Type: UnityEngine.UIElements::IMouseEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7312))
// CS Name: UnityEngine.UIElements.IMouseEvent
class CORDL_TYPE IMouseEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMouseEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMouseEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::EventModifiers __declspec(property(get=get_modifiers))  modifiers;

 ::UnityEngine::Vector2 __declspec(property(get=get_mousePosition))  mousePosition;

 ::UnityEngine::Vector2 __declspec(property(get=get_localMousePosition))  localMousePosition;

 ::UnityEngine::Vector2 __declspec(property(get=get_mouseDelta))  mouseDelta;

 int32_t __declspec(property(get=get_clickCount))  clickCount;

 int32_t __declspec(property(get=get_button))  button;

 int32_t __declspec(property(get=get_pressedButtons))  pressedButtons;

 bool __declspec(property(get=get_shiftKey))  shiftKey;

 bool __declspec(property(get=get_ctrlKey))  ctrlKey;

 bool __declspec(property(get=get_commandKey))  commandKey;

 bool __declspec(property(get=get_altKey))  altKey;


// Methods

/// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method get_mousePosition addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector2 get_mousePosition() ;

/// @brief Method get_localMousePosition addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector2 get_localMousePosition() ;

/// @brief Method get_mouseDelta addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector2 get_mouseDelta() ;

/// @brief Method get_clickCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_clickCount() ;

/// @brief Method get_button addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_button() ;

/// @brief Method get_pressedButtons addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_pressedButtons() ;

/// @brief Method get_shiftKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_shiftKey() ;

/// @brief Method get_ctrlKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_ctrlKey() ;

/// @brief Method get_commandKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_commandKey() ;

/// @brief Method get_altKey addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_altKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IMouseEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMouseEvent, "UnityEngine.UIElements", "IMouseEvent");
