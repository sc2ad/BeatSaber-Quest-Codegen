#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct EventModifiers;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IKeyboardEvent;
}
// Type: UnityEngine.UIElements::IKeyboardEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7338))
// CS Name: UnityEngine.UIElements.IKeyboardEvent
class CORDL_TYPE IKeyboardEvent : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IKeyboardEvent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKeyboardEvent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::EventModifiers __declspec(property(get=get_modifiers))  modifiers;

 char16_t __declspec(property(get=get_character))  character;

 ::UnityEngine::KeyCode __declspec(property(get=get_keyCode))  keyCode;


// Methods

/// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method get_character addr 0x0 size 0xffffffffffffffff virtual true final false
 char16_t get_character() ;

/// @brief Method get_keyCode addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::KeyCode get_keyCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::IKeyboardEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IKeyboardEvent, "UnityEngine.UIElements", "IKeyboardEvent");
