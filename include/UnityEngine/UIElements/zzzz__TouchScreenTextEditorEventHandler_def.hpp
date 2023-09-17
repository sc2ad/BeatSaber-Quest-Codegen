#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
namespace {
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TouchScreenTextEditorEventHandler;
}
// Type: UnityEngine.UIElements::TouchScreenTextEditorEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7192))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7230))
// CS Name: UnityEngine.UIElements.TouchScreenTextEditorEventHandler
class CORDL_TYPE TouchScreenTextEditorEventHandler : public ::UnityEngine::UIElements::TextEditorEventHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TouchScreenTextEditorEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenTextEditorEventHandler", modifiers: " const&", def_value: None }]
constexpr TouchScreenTextEditorEventHandler(TouchScreenTextEditorEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenTextEditorEventHandler", modifiers: "&&", def_value: None }]
constexpr TouchScreenTextEditorEventHandler(TouchScreenTextEditorEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TouchScreenTextEditorEventHandler(void* ptr) noexcept : ::UnityEngine::UIElements::TextEditorEventHandler(ptr) {
}


  constexpr TouchScreenTextEditorEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TouchScreenTextEditorEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TouchScreenTextEditorEventHandler& operator=(TouchScreenTextEditorEventHandler&& o) noexcept = default;
  constexpr TouchScreenTextEditorEventHandler& operator=(TouchScreenTextEditorEventHandler const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::IVisualElementScheduledItem __declspec(property(get=__get_m_TouchKeyboardPoller, put=__set_m_TouchKeyboardPoller))  m_TouchKeyboardPoller;

constexpr void __set_m_TouchKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem value) ;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem __get_m_TouchKeyboardPoller() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_LastPointerDownTarget, put=__set_m_LastPointerDownTarget))  m_LastPointerDownTarget;

constexpr void __set_m_LastPointerDownTarget(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_LastPointerDownTarget() const;

static ::UnityEngine::TouchScreenKeyboard __declspec(property(get=__get_s_KeyboardOnScreen, put=__set_s_KeyboardOnScreen))  s_KeyboardOnScreen;

static void __set_s_KeyboardOnScreen(::UnityEngine::TouchScreenKeyboard value) ;

static ::UnityEngine::TouchScreenKeyboard __get_s_KeyboardOnScreen() ;


// Methods

// Ctor Parameters [CppParam { name: "editorEngine", ty: "::UnityEngine::UIElements::TextEditorEngine", modifiers: "", def_value: None }, CppParam { name: "textInputField", ty: "::UnityEngine::UIElements::ITextInputField", modifiers: "", def_value: None }]
explicit TouchScreenTextEditorEventHandler(::UnityEngine::UIElements::TextEditorEngine editorEngine, ::UnityEngine::UIElements::ITextInputField textInputField) ;

/// @brief Method .ctor addr 0x2cc45f0 size 0x8 virtual false final false
 void _ctor(::UnityEngine::UIElements::TextEditorEngine editorEngine, ::UnityEngine::UIElements::ITextInputField textInputField) ;

/// @brief Method PollTouchScreenKeyboard addr 0x2cc45f8 size 0x25c virtual false final false
 void PollTouchScreenKeyboard() ;

/// @brief Method DoPollTouchScreenKeyboard addr 0x2cc4854 size 0x728 virtual false final false
 void DoPollTouchScreenKeyboard() ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x2cc4f7c size 0x550 virtual true final false
 void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, "UnityEngine.UIElements", "TouchScreenTextEditorEventHandler");
