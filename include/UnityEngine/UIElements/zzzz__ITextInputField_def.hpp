#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class ITextElement;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITextInputField;
}
// Type: UnityEngine.UIElements::ITextInputField
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7193))
// CS Name: UnityEngine.UIElements.ITextInputField
class CORDL_TYPE ITextInputField : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IEventHandler
constexpr operator  UnityEngine::UIElements::IEventHandler() const noexcept;

/// @brief Convert operator to UnityEngine::UIElements::ITextElement
constexpr operator  UnityEngine::UIElements::ITextElement() const noexcept;

~ITextInputField() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITextInputField(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_hasFocus))  hasFocus;

 bool __declspec(property(get=get_doubleClickSelectsWord))  doubleClickSelectsWord;

 bool __declspec(property(get=get_tripleClickSelectsLine))  tripleClickSelectsLine;

 bool __declspec(property(get=get_isReadOnly))  isReadOnly;

 bool __declspec(property(get=get_isDelayed))  isDelayed;

 bool __declspec(property(get=get_isPasswordField))  isPasswordField;

 UnityEngine::UIElements::TextEditorEngine __declspec(property(get=get_editorEngine))  editorEngine;


// Methods

/// @brief Method get_hasFocus addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_hasFocus() ;

/// @brief Method get_doubleClickSelectsWord addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_doubleClickSelectsWord() ;

/// @brief Method get_tripleClickSelectsLine addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_tripleClickSelectsLine() ;

/// @brief Method get_isReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isReadOnly() ;

/// @brief Method get_isDelayed addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isDelayed() ;

/// @brief Method get_isPasswordField addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isPasswordField() ;

/// @brief Method get_editorEngine addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::TextEditorEngine get_editorEngine() ;

/// @brief Method SyncTextEngine addr 0x0 size 0xffffffffffffffff virtual true final false
 void SyncTextEngine() ;

/// @brief Method AcceptCharacter addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AcceptCharacter(char16_t c) ;

/// @brief Method CullString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW CullString(::StringW s) ;

/// @brief Method UpdateText addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateText(::StringW value) ;

/// @brief Method UpdateValueFromText addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateValueFromText() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::ITextInputField);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ITextInputField, "UnityEngine.UIElements", "ITextInputField");
