#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class MouseMoveEvent;
}
namespace UnityEngine::UIElements {
class ValidateCommandEvent;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class ExecuteCommandEvent;
}
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardTextEditorEventHandler;
}
// Type: UnityEngine.UIElements::KeyboardTextEditorEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7192))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7136))
// CS Name: UnityEngine.UIElements.KeyboardTextEditorEventHandler
class CORDL_TYPE KeyboardTextEditorEventHandler : public UnityEngine::UIElements::TextEditorEventHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~KeyboardTextEditorEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardTextEditorEventHandler", modifiers: " const&", def_value: None }]
constexpr KeyboardTextEditorEventHandler(KeyboardTextEditorEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardTextEditorEventHandler", modifiers: "&&", def_value: None }]
constexpr KeyboardTextEditorEventHandler(KeyboardTextEditorEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyboardTextEditorEventHandler(void* ptr) noexcept : UnityEngine::UIElements::TextEditorEventHandler(ptr) {
}


  constexpr KeyboardTextEditorEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyboardTextEditorEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyboardTextEditorEventHandler& operator=(KeyboardTextEditorEventHandler&& o) noexcept = default;
  constexpr KeyboardTextEditorEventHandler& operator=(KeyboardTextEditorEventHandler const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Changed, put=__set_m_Changed))  m_Changed;

constexpr void __set_m_Changed(bool value) ;

constexpr bool __get_m_Changed() const;

 bool __declspec(property(get=__get_m_Dragged, put=__set_m_Dragged))  m_Dragged;

constexpr void __set_m_Dragged(bool value) ;

constexpr bool __get_m_Dragged() const;

 bool __declspec(property(get=__get_m_DragToPosition, put=__set_m_DragToPosition))  m_DragToPosition;

constexpr void __set_m_DragToPosition(bool value) ;

constexpr bool __get_m_DragToPosition() const;

 bool __declspec(property(get=__get_m_SelectAllOnMouseUp, put=__set_m_SelectAllOnMouseUp))  m_SelectAllOnMouseUp;

constexpr void __set_m_SelectAllOnMouseUp(bool value) ;

constexpr bool __get_m_SelectAllOnMouseUp() const;

 ::StringW __declspec(property(get=__get_m_PreDrawCursorText, put=__set_m_PreDrawCursorText))  m_PreDrawCursorText;

constexpr void __set_m_PreDrawCursorText(::StringW value) ;

constexpr ::StringW __get_m_PreDrawCursorText() const;

 bool __declspec(property(get=__get_m_IsClicking, put=__set_m_IsClicking))  m_IsClicking;

constexpr void __set_m_IsClicking(bool value) ;

constexpr bool __get_m_IsClicking() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_ClickStartPosition, put=__set_m_ClickStartPosition))  m_ClickStartPosition;

constexpr void __set_m_ClickStartPosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_ClickStartPosition() const;

 UnityEngine::Event __declspec(property(get=__get_m_ImguiEvent, put=__set_m_ImguiEvent))  m_ImguiEvent;

constexpr void __set_m_ImguiEvent(UnityEngine::Event value) ;

constexpr UnityEngine::Event __get_m_ImguiEvent() const;


// Properties

 bool __declspec(property(get=get_isClicking, put=set_isClicking))  isClicking;


// Methods

/// @brief Method get_isClicking addr 0x2ca7b20 size 0x8 virtual false final false
 bool get_isClicking() ;

/// @brief Method set_isClicking addr 0x2ca7b28 size 0x34 virtual false final false
 void set_isClicking(bool value) ;

static UnityEngine::UIElements::KeyboardTextEditorEventHandler New_ctor(UnityEngine::UIElements::TextEditorEngine editorEngine, UnityEngine::UIElements::ITextInputField textInputField) ;

/// @brief Method .ctor addr 0x2ca7b5c size 0x80 virtual false final false
 void _ctor(UnityEngine::UIElements::TextEditorEngine editorEngine, UnityEngine::UIElements::ITextInputField textInputField) ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x2ca7bdc size 0x5bc virtual true final false
 void ExecuteDefaultActionAtTarget(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method OnFocus addr 0x2ca8198 size 0x190 virtual false final false
 void OnFocus(UnityEngine::UIElements::FocusEvent _) ;

/// @brief Method OnBlur addr 0x2ca8328 size 0xc virtual false final false
 void OnBlur(UnityEngine::UIElements::BlurEvent _) ;

/// @brief Method OnMouseDown addr 0x2ca8334 size 0x3f4 virtual false final false
 void OnMouseDown(UnityEngine::UIElements::MouseDownEvent evt) ;

/// @brief Method OnMouseUp addr 0x2ca8728 size 0x168 virtual false final false
 void OnMouseUp(UnityEngine::UIElements::MouseUpEvent evt) ;

/// @brief Method OnMouseMove addr 0x2ca8890 size 0x148 virtual false final false
 void OnMouseMove(UnityEngine::UIElements::MouseMoveEvent evt) ;

/// @brief Method ProcessDragMove addr 0x2ca9960 size 0x134 virtual false final false
 void ProcessDragMove(UnityEngine::UIElements::MouseMoveEvent evt) ;

/// @brief Method MoveDistanceQualifiesForDrag addr 0x2ca993c size 0x24 virtual false final false
 bool MoveDistanceQualifiesForDrag(UnityEngine::Vector2 start, UnityEngine::Vector2 current) ;

/// @brief Method OnKeyDown addr 0x2ca89d8 size 0x608 virtual false final false
 void OnKeyDown(UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method OnValidateCommandEvent addr 0x2ca8fe0 size 0x364 virtual false final false
 void OnValidateCommandEvent(UnityEngine::UIElements::ValidateCommandEvent evt) ;

/// @brief Method OnExecuteCommandEvent addr 0x2ca9344 size 0x5f8 virtual false final false
 void OnExecuteCommandEvent(UnityEngine::UIElements::ExecuteCommandEvent evt) ;

/// @brief Method PreDrawCursor addr 0x2ca9a94 size 0x340 virtual false final false
 void PreDrawCursor(::StringW newText) ;

/// @brief Method PostDrawCursor addr 0x2ca9dd4 size 0x24 virtual false final false
 void PostDrawCursor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::KeyboardTextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::KeyboardTextEditorEventHandler, "UnityEngine.UIElements", "KeyboardTextEditorEventHandler");
