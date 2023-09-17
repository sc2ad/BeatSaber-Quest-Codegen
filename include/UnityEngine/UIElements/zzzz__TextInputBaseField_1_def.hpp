#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
template<typename T>
struct CustomStyleProperty_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class ITextElement;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
namespace UnityEngine::UIElements {
class TextEditorEventHandler;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__VisualElement__MeasureMode;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__DropdownMenuAction__Status;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TValueType>
class TextInputBaseField_1;
}
namespace UnityEngine::UIElements {
template<typename TValueType>
class ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase;
}
namespace UnityEngine::UIElements {
template<typename TValueType>
class ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueType>
class TextInputBaseField_1<TValueType>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueType>
class ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueType>
class ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits<TValueType>;
}
// Type: ::UxmlTraits
// Type: ::TextInputBase
// Type: UnityEngine.UIElements::TextInputBaseField`1
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7194)), TypeDefinitionIndex(TypeDefinitionIndex(7229)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 887 }), TypeDefinitionIndex(TypeDefinitionIndex(7075))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7194), inst: 2 })
// CS Name: UnityEngine.UIElements.TextInputBaseField`1::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits<TValueType> : public ::UnityEngine::UIElements::BaseFieldTraits_2<::StringW,::UnityEngine::UIElements::UxmlStringAttributeDescription> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits(____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits(____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::BaseFieldTraits_2<::StringW,::UnityEngine::UIElements::UxmlStringAttributeDescription>(ptr) {
}


  constexpr ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlIntAttributeDescription __declspec(property(get=__get_m_MaxLength, put=__set_m_MaxLength))  m_MaxLength;

constexpr void __set_m_MaxLength(::UnityEngine::UIElements::UxmlIntAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription __get_m_MaxLength() const;

 ::UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_Password, put=__set_m_Password))  m_Password;

constexpr void __set_m_Password(::UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_Password() const;

 ::UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_MaskCharacter, put=__set_m_MaskCharacter))  m_MaskCharacter;

constexpr void __set_m_MaskCharacter(::UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_MaskCharacter() const;

 ::UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Text() const;

 ::UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_IsReadOnly, put=__set_m_IsReadOnly))  m_IsReadOnly;

constexpr void __set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_IsReadOnly() const;

 ::UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_IsDelayed, put=__set_m_IsDelayed))  m_IsDelayed;

constexpr void __set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_IsDelayed() const;


// Methods

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::TextInputBase
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7195)), TypeDefinitionIndex(TypeDefinitionIndex(6828))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7195), inst: 2 })
// CS Name: UnityEngine.UIElements.TextInputBaseField`1::TextInputBase
class CORDL_TYPE ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::ITextInputField
constexpr operator  ::UnityEngine::UIElements::ITextInputField() const noexcept;

/// @brief Convert operator to ::UnityEngine::UIElements::IEventHandler
constexpr operator  ::UnityEngine::UIElements::IEventHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::UIElements::ITextElement
constexpr operator  ::UnityEngine::UIElements::ITextElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase(____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase(____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase(void* ptr) noexcept : ::UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase& operator=(____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase& operator=(____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_OriginalText, put=__set_m_OriginalText))  m_OriginalText;

constexpr void __set_m_OriginalText(::StringW value) ;

constexpr ::StringW __get_m_OriginalText() const;

 bool __declspec(property(get=__get__isReadOnly_k__BackingField, put=__set__isReadOnly_k__BackingField))  _isReadOnly_k__BackingField;

constexpr void __set__isReadOnly_k__BackingField(bool value) ;

constexpr bool __get__isReadOnly_k__BackingField() const;

 int32_t __declspec(property(get=__get__maxLength_k__BackingField, put=__set__maxLength_k__BackingField))  _maxLength_k__BackingField;

constexpr void __set__maxLength_k__BackingField(int32_t value) ;

constexpr int32_t __get__maxLength_k__BackingField() const;

 char16_t __declspec(property(get=__get__maskChar_k__BackingField, put=__set__maskChar_k__BackingField))  _maskChar_k__BackingField;

constexpr void __set__maskChar_k__BackingField(char16_t value) ;

constexpr char16_t __get__maskChar_k__BackingField() const;

 bool __declspec(property(get=__get__isPasswordField_k__BackingField, put=__set__isPasswordField_k__BackingField))  _isPasswordField_k__BackingField;

constexpr void __set__isPasswordField_k__BackingField(bool value) ;

constexpr bool __get__isPasswordField_k__BackingField() const;

 bool __declspec(property(get=__get__doubleClickSelectsWord_k__BackingField, put=__set__doubleClickSelectsWord_k__BackingField))  _doubleClickSelectsWord_k__BackingField;

constexpr void __set__doubleClickSelectsWord_k__BackingField(bool value) ;

constexpr bool __get__doubleClickSelectsWord_k__BackingField() const;

 bool __declspec(property(get=__get__tripleClickSelectsLine_k__BackingField, put=__set__tripleClickSelectsLine_k__BackingField))  _tripleClickSelectsLine_k__BackingField;

constexpr void __set__tripleClickSelectsLine_k__BackingField(bool value) ;

constexpr bool __get__tripleClickSelectsLine_k__BackingField() const;

 bool __declspec(property(get=__get__isDelayed_k__BackingField, put=__set__isDelayed_k__BackingField))  _isDelayed_k__BackingField;

constexpr void __set__isDelayed_k__BackingField(bool value) ;

constexpr bool __get__isDelayed_k__BackingField() const;

 bool __declspec(property(get=__get__isDragging_k__BackingField, put=__set__isDragging_k__BackingField))  _isDragging_k__BackingField;

constexpr void __set__isDragging_k__BackingField(bool value) ;

constexpr bool __get__isDragging_k__BackingField() const;

 bool __declspec(property(get=__get_m_TouchScreenTextFieldInitialized, put=__set_m_TouchScreenTextFieldInitialized))  m_TouchScreenTextFieldInitialized;

constexpr void __set_m_TouchScreenTextFieldInitialized(bool value) ;

constexpr bool __get_m_TouchScreenTextFieldInitialized() const;

 ::UnityEngine::UIElements::IVisualElementScheduledItem __declspec(property(get=__get_m_HardwareKeyboardPoller, put=__set_m_HardwareKeyboardPoller))  m_HardwareKeyboardPoller;

constexpr void __set_m_HardwareKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem value) ;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem __get_m_HardwareKeyboardPoller() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_SelectionColor, put=__set_m_SelectionColor))  m_SelectionColor;

constexpr void __set_m_SelectionColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_SelectionColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_m_CursorColor, put=__set_m_CursorColor))  m_CursorColor;

constexpr void __set_m_CursorColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_m_CursorColor() const;

 ::UnityEngine::UIElements::TextEditorEventHandler __declspec(property(get=__get__editorEventHandler_k__BackingField, put=__set__editorEventHandler_k__BackingField))  _editorEventHandler_k__BackingField;

constexpr void __set__editorEventHandler_k__BackingField(::UnityEngine::UIElements::TextEditorEventHandler value) ;

constexpr ::UnityEngine::UIElements::TextEditorEventHandler __get__editorEventHandler_k__BackingField() const;

 ::UnityEngine::UIElements::TextEditorEngine __declspec(property(get=__get__editorEngine_k__BackingField, put=__set__editorEngine_k__BackingField))  _editorEngine_k__BackingField;

constexpr void __set__editorEngine_k__BackingField(::UnityEngine::UIElements::TextEditorEngine value) ;

constexpr ::UnityEngine::UIElements::TextEditorEngine __get__editorEngine_k__BackingField() const;

 ::UnityEngine::UIElements::ITextHandle __declspec(property(get=__get_m_TextHandle, put=__set_m_TextHandle))  m_TextHandle;

constexpr void __set_m_TextHandle(::UnityEngine::UIElements::ITextHandle value) ;

constexpr ::UnityEngine::UIElements::ITextHandle __get_m_TextHandle() const;

 ::StringW __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::StringW value) ;

constexpr ::StringW __get_m_Text() const;


// Properties

 bool __declspec(property(get=UnityEngine_UIElements_ITextInputField_get_isReadOnly))  UnityEngine_UIElements_ITextInputField_isReadOnly;

 bool __declspec(property(get=get_isReadOnly, put=set_isReadOnly))  isReadOnly;

 int32_t __declspec(property(get=get_maxLength, put=set_maxLength))  maxLength;

 char16_t __declspec(property(get=get_maskChar, put=set_maskChar))  maskChar;

 bool __declspec(property(get=get_isPasswordField, put=set_isPasswordField))  isPasswordField;

 bool __declspec(property(get=get_doubleClickSelectsWord, put=set_doubleClickSelectsWord))  doubleClickSelectsWord;

 bool __declspec(property(get=get_tripleClickSelectsLine, put=set_tripleClickSelectsLine))  tripleClickSelectsLine;

 bool __declspec(property(get=get_isDelayed, put=set_isDelayed))  isDelayed;

 bool __declspec(property(get=get_isDragging))  isDragging;

 bool __declspec(property(get=get_touchScreenTextField))  touchScreenTextField;

 bool __declspec(property(get=get_touchScreenTextFieldChanged))  touchScreenTextFieldChanged;

 ::UnityEngine::Color __declspec(property(get=get_selectionColor))  selectionColor;

 ::UnityEngine::Color __declspec(property(get=get_cursorColor))  cursorColor;

 bool __declspec(property(get=get_hasFocus))  hasFocus;

 ::UnityEngine::UIElements::TextEditorEventHandler __declspec(property(get=get_editorEventHandler, put=set_editorEventHandler))  editorEventHandler;

 ::UnityEngine::UIElements::TextEditorEngine __declspec(property(get=get_editorEngine, put=set_editorEngine))  editorEngine;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 bool __declspec(property(get=UnityEngine_UIElements_ITextInputField_get_hasFocus))  UnityEngine_UIElements_ITextInputField_hasFocus;

 ::UnityEngine::UIElements::TextEditorEngine __declspec(property(get=UnityEngine_UIElements_ITextInputField_get_editorEngine))  UnityEngine_UIElements_ITextInputField_editorEngine;

 bool __declspec(property(get=UnityEngine_UIElements_ITextInputField_get_isDelayed))  UnityEngine_UIElements_ITextInputField_isDelayed;


// Methods

/// @brief Method ResetValueAndText addr 0x0 size 0xffffffffffffffff virtual false final false
 void ResetValueAndText() ;

/// @brief Method SaveValueAndText addr 0x0 size 0xffffffffffffffff virtual false final false
 void SaveValueAndText() ;

/// @brief Method RestoreValueAndText addr 0x0 size 0xffffffffffffffff virtual false final false
 void RestoreValueAndText() ;

/// @brief Method UpdateText addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateText(::StringW value) ;

/// @brief Method StringToValue addr 0x0 size 0xffffffffffffffff virtual true final false
 TValueType StringToValue(::StringW str) ;

/// @brief Method UpdateValueFromText addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateValueFromText() ;

/// @brief Method UnityEngine.UIElements.ITextInputField.get_isReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool UnityEngine_UIElements_ITextInputField_get_isReadOnly() ;

/// @brief Method get_isReadOnly addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isReadOnly() ;

/// @brief Method set_isReadOnly addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_isReadOnly(bool value) ;

/// @brief Method get_maxLength addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_maxLength() ;

/// @brief Method set_maxLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_maxLength(int32_t value) ;

/// @brief Method get_maskChar addr 0x0 size 0xffffffffffffffff virtual false final false
 char16_t get_maskChar() ;

/// @brief Method set_maskChar addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_maskChar(char16_t value) ;

/// @brief Method get_isPasswordField addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isPasswordField() ;

/// @brief Method set_isPasswordField addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_isPasswordField(bool value) ;

/// @brief Method get_doubleClickSelectsWord addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_doubleClickSelectsWord() ;

/// @brief Method set_doubleClickSelectsWord addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_doubleClickSelectsWord(bool value) ;

/// @brief Method get_tripleClickSelectsLine addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_tripleClickSelectsLine() ;

/// @brief Method set_tripleClickSelectsLine addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_tripleClickSelectsLine(bool value) ;

/// @brief Method get_isDelayed addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isDelayed() ;

/// @brief Method set_isDelayed addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_isDelayed(bool value) ;

/// @brief Method get_isDragging addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isDragging() ;

/// @brief Method get_touchScreenTextField addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_touchScreenTextField() ;

/// @brief Method get_touchScreenTextFieldChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_touchScreenTextFieldChanged() ;

/// @brief Method get_selectionColor addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color get_selectionColor() ;

/// @brief Method get_cursorColor addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color get_cursorColor() ;

/// @brief Method get_hasFocus addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_hasFocus() ;

/// @brief Method get_editorEventHandler addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::TextEditorEventHandler get_editorEventHandler() ;

/// @brief Method set_editorEventHandler addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_editorEventHandler(::UnityEngine::UIElements::TextEditorEventHandler value) ;

/// @brief Method get_editorEngine addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::TextEditorEngine get_editorEngine() ;

/// @brief Method set_editorEngine addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_editorEngine(::UnityEngine::UIElements::TextEditorEngine value) ;

/// @brief Method get_text addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW get_text() ;

/// @brief Method set_text addr 0x0 size 0xffffffffffffffff virtual true final true
 void set_text(::StringW value) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method InitTextEditorEventHandler addr 0x0 size 0xffffffffffffffff virtual false final false
 void InitTextEditorEventHandler() ;

/// @brief Method CutActionStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status CutActionStatus(::UnityEngine::UIElements::DropdownMenuAction a) ;

/// @brief Method CopyActionStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status CopyActionStatus(::UnityEngine::UIElements::DropdownMenuAction a) ;

/// @brief Method PasteActionStatus addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status PasteActionStatus(::UnityEngine::UIElements::DropdownMenuAction a) ;

/// @brief Method ProcessMenuCommand addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessMenuCommand(::StringW command) ;

/// @brief Method Cut addr 0x0 size 0xffffffffffffffff virtual false final false
 void Cut(::UnityEngine::UIElements::DropdownMenuAction a) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
 void Copy(::UnityEngine::UIElements::DropdownMenuAction a) ;

/// @brief Method Paste addr 0x0 size 0xffffffffffffffff virtual false final false
 void Paste(::UnityEngine::UIElements::DropdownMenuAction a) ;

/// @brief Method OnInputCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnInputCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent e) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent attachEvent) ;

/// @brief Method SyncTextEngine addr 0x0 size 0xffffffffffffffff virtual true final false
 void SyncTextEngine() ;

/// @brief Method CullString addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW CullString(::StringW s) ;

/// @brief Method OnGenerateVisualContent addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext mgc) ;

/// @brief Method DrawWithTextSelectionAndCursor addr 0x0 size 0xffffffffffffffff virtual false final false
 void DrawWithTextSelectionAndCursor(::UnityEngine::UIElements::MeshGenerationContext mgc, ::StringW newText, float_t pixelsPerPoint) ;

/// @brief Method AcceptCharacter addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AcceptCharacter(char16_t c) ;

/// @brief Method BuildContextualMenu addr 0x0 size 0xffffffffffffffff virtual true final false
 void BuildContextualMenu(::UnityEngine::UIElements::ContextualMenuPopulateEvent evt) ;

/// @brief Method OnDetectFocusChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDetectFocusChange() ;

/// @brief Method OnCursorIndexChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnCursorIndexChange() ;

/// @brief Method DoMeasure addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t desiredHeight, ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__MeasureMode heightMode) ;

/// @brief Method ExecuteDefaultActionDisabledAtTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExecuteDefaultActionDisabledAtTarget(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ProcessEventAtTarget addr 0x0 size 0xffffffffffffffff virtual false final false
 void ProcessEventAtTarget(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ExecuteDefaultAction addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method UnityEngine.UIElements.ITextInputField.get_hasFocus addr 0x0 size 0xffffffffffffffff virtual true final true
 bool UnityEngine_UIElements_ITextInputField_get_hasFocus() ;

/// @brief Method UnityEngine.UIElements.ITextInputField.SyncTextEngine addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_ITextInputField_SyncTextEngine() ;

/// @brief Method UnityEngine.UIElements.ITextInputField.AcceptCharacter addr 0x0 size 0xffffffffffffffff virtual true final true
 bool UnityEngine_UIElements_ITextInputField_AcceptCharacter(char16_t c) ;

/// @brief Method UnityEngine.UIElements.ITextInputField.CullString addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW UnityEngine_UIElements_ITextInputField_CullString(::StringW s) ;

/// @brief Method UnityEngine.UIElements.ITextInputField.UpdateText addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_ITextInputField_UpdateText(::StringW value) ;

/// @brief Method UnityEngine.UIElements.ITextInputField.get_editorEngine addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::UIElements::TextEditorEngine UnityEngine_UIElements_ITextInputField_get_editorEngine() ;

/// @brief Method UnityEngine.UIElements.ITextInputField.get_isDelayed addr 0x0 size 0xffffffffffffffff virtual true final true
 bool UnityEngine_UIElements_ITextInputField_get_isDelayed() ;

/// @brief Method UnityEngine.UIElements.ITextInputField.UpdateValueFromText addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_ITextInputField_UpdateValueFromText() ;

/// @brief Method DeferGUIStyleRectSync addr 0x0 size 0xffffffffffffffff virtual false final false
 void DeferGUIStyleRectSync() ;

/// @brief Method OnPercentResolved addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnPercentResolved(::UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method SyncGUIStyle addr 0x0 size 0xffffffffffffffff virtual false final false
static void SyncGUIStyle(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> textInput, ::UnityEngine::GUIStyle style) ;

/// @brief Method IsLayoutUsingPercent addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsLayoutUsingPercent(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method AssignRect addr 0x0 size 0xffffffffffffffff virtual false final false
static void AssignRect(::UnityEngine::RectOffset rect, int32_t left, int32_t top, int32_t right, int32_t bottom) ;

/// @brief Method <ProcessEventAtTarget>b__97_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ProcessEventAtTarget_b__97_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextInputBaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7228)), TypeDefinitionIndex(TypeDefinitionIndex(7196)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 889 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7196), inst: 2 })
// CS Name: UnityEngine.UIElements.TextInputBaseField`1
class CORDL_TYPE TextInputBaseField_1<TValueType> : public ::UnityEngine::UIElements::BaseField_1<TValueType> {
public:
// Declarations
using TextInputBase = ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>;

using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits<TValueType>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TextInputBaseField_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1", modifiers: " const&", def_value: None }]
constexpr TextInputBaseField_1(TextInputBaseField_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1", modifiers: "&&", def_value: None }]
constexpr TextInputBaseField_1(TextInputBaseField_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextInputBaseField_1(void* ptr) noexcept : ::UnityEngine::UIElements::BaseField_1<TValueType>(ptr) {
}


  constexpr TextInputBaseField_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextInputBaseField_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextInputBaseField_1& operator=(TextInputBaseField_1&& o) noexcept = default;
  constexpr TextInputBaseField_1& operator=(TextInputBaseField_1 const& o) noexcept = default;
                


// Fields

static ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> __declspec(property(get=__get_s_SelectionColorProperty, put=__set_s_SelectionColorProperty))  s_SelectionColorProperty;

static void __set_s_SelectionColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> __get_s_SelectionColorProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> __declspec(property(get=__get_s_CursorColorProperty, put=__set_s_CursorColorProperty))  s_CursorColorProperty;

static void __set_s_CursorColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> __get_s_CursorColorProperty() ;

 int32_t __declspec(property(get=__get_m_VisualInputTabIndex, put=__set_m_VisualInputTabIndex))  m_VisualInputTabIndex;

constexpr void __set_m_VisualInputTabIndex(int32_t value) ;

constexpr int32_t __get_m_VisualInputTabIndex() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> __declspec(property(get=__get_m_TextInputBase, put=__set_m_TextInputBase))  m_TextInputBase;

constexpr void __set_m_TextInputBase(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> __get_m_TextInputBase() const;

 ::UnityEngine::UIElements::ITextHandle __declspec(property(get=__get__iTextHandle_k__BackingField, put=__set__iTextHandle_k__BackingField))  _iTextHandle_k__BackingField;

constexpr void __set__iTextHandle_k__BackingField(::UnityEngine::UIElements::ITextHandle value) ;

constexpr ::UnityEngine::UIElements::ITextHandle __get__iTextHandle_k__BackingField() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_singleLineInputUssClassName, put=__set_singleLineInputUssClassName))  singleLineInputUssClassName;

static void __set_singleLineInputUssClassName(::StringW value) ;

static ::StringW __get_singleLineInputUssClassName() ;

static ::StringW __declspec(property(get=__get_multilineInputUssClassName, put=__set_multilineInputUssClassName))  multilineInputUssClassName;

static void __set_multilineInputUssClassName(::StringW value) ;

static ::StringW __get_multilineInputUssClassName() ;

static ::StringW __declspec(property(get=__get_textInputUssName, put=__set_textInputUssName))  textInputUssName;

static void __set_textInputUssName(::StringW value) ;

static ::StringW __get_textInputUssName() ;

 ::System::Action_1<bool> __declspec(property(get=__get_onIsReadOnlyChanged, put=__set_onIsReadOnlyChanged))  onIsReadOnlyChanged;

constexpr void __set_onIsReadOnlyChanged(::System::Action_1<bool> value) ;

constexpr ::System::Action_1<bool> __get_onIsReadOnlyChanged() const;


// Properties

 ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> __declspec(property(get=get_textInputBase))  textInputBase;

 ::UnityEngine::UIElements::ITextHandle __declspec(property(put=set_iTextHandle))  iTextHandle;

 ::StringW __declspec(property(put=set_text))  text;

 bool __declspec(property(put=set_isReadOnly))  isReadOnly;

 bool __declspec(property(put=set_isPasswordField))  isPasswordField;

 int32_t __declspec(property(put=set_maxLength))  maxLength;

 bool __declspec(property(get=get_isDelayed, put=set_isDelayed))  isDelayed;

 char16_t __declspec(property(put=set_maskChar))  maskChar;


// Methods

/// @brief Method get_textInputBase addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> get_textInputBase() ;

/// @brief Method set_iTextHandle addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_iTextHandle(::UnityEngine::UIElements::ITextHandle value) ;

/// @brief Method set_text addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_text(::StringW value) ;

/// @brief Method set_isReadOnly addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_isReadOnly(bool value) ;

/// @brief Method set_isPasswordField addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_isPasswordField(bool value) ;

/// @brief Method set_maxLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_maxLength(int32_t value) ;

/// @brief Method get_isDelayed addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_isDelayed() ;

/// @brief Method set_isDelayed addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_isDelayed(bool value) ;

/// @brief Method set_maskChar addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_maskChar(char16_t value) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maxLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maskChar", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "textInputBase", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType>", modifiers: "", def_value: None }]
explicit TextInputBaseField_1(::StringW label, int32_t maxLength, char16_t maskChar, ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> textInputBase) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label, int32_t maxLength, char16_t maskChar, ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<TValueType> textInputBase) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent e) ;

/// @brief Method OnFieldCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnFieldCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent e) ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateMixedValueContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextInputBaseField_1, "UnityEngine.UIElements", "TextInputBaseField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase, "UnityEngine.UIElements", "TextInputBaseField`1/TextInputBase");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits, "UnityEngine.UIElements", "TextInputBaseField`1/UxmlTraits");
