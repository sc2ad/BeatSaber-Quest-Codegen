#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextEditorEventHandler;
}
// Type: UnityEngine.UIElements::TextEditorEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7192))
// CS Name: UnityEngine.UIElements.TextEditorEventHandler
class CORDL_TYPE TextEditorEventHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TextEditorEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextEditorEventHandler", modifiers: " const&", def_value: None }]
constexpr TextEditorEventHandler(TextEditorEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextEditorEventHandler", modifiers: "&&", def_value: None }]
constexpr TextEditorEventHandler(TextEditorEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextEditorEventHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextEditorEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextEditorEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextEditorEventHandler& operator=(TextEditorEventHandler&& o) noexcept = default;
  constexpr TextEditorEventHandler& operator=(TextEditorEventHandler const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::TextEditorEngine __declspec(property(get=__get__editorEngine_k__BackingField, put=__set__editorEngine_k__BackingField))  _editorEngine_k__BackingField;

constexpr void __set__editorEngine_k__BackingField(UnityEngine::UIElements::TextEditorEngine value) ;

constexpr UnityEngine::UIElements::TextEditorEngine __get__editorEngine_k__BackingField() const;

 UnityEngine::UIElements::ITextInputField __declspec(property(get=__get__textInputField_k__BackingField, put=__set__textInputField_k__BackingField))  _textInputField_k__BackingField;

constexpr void __set__textInputField_k__BackingField(UnityEngine::UIElements::ITextInputField value) ;

constexpr UnityEngine::UIElements::ITextInputField __get__textInputField_k__BackingField() const;


// Properties

 UnityEngine::UIElements::TextEditorEngine __declspec(property(get=get_editorEngine, put=set_editorEngine))  editorEngine;

 UnityEngine::UIElements::ITextInputField __declspec(property(get=get_textInputField, put=set_textInputField))  textInputField;


// Methods

/// @brief Method get_editorEngine addr 0x2cbd57c size 0x8 virtual false final false
 UnityEngine::UIElements::TextEditorEngine get_editorEngine() ;

/// @brief Method set_editorEngine addr 0x2cbd584 size 0x8 virtual false final false
 void set_editorEngine(UnityEngine::UIElements::TextEditorEngine value) ;

/// @brief Method get_textInputField addr 0x2cbd58c size 0x8 virtual false final false
 UnityEngine::UIElements::ITextInputField get_textInputField() ;

/// @brief Method set_textInputField addr 0x2cbd594 size 0x8 virtual false final false
 void set_textInputField(UnityEngine::UIElements::ITextInputField value) ;

static UnityEngine::UIElements::TextEditorEventHandler New_ctor(UnityEngine::UIElements::TextEditorEngine editorEngine, UnityEngine::UIElements::ITextInputField textInputField) ;

/// @brief Method .ctor addr 0x2cbd59c size 0xc0 virtual false final false
 void _ctor(UnityEngine::UIElements::TextEditorEngine editorEngine, UnityEngine::UIElements::ITextInputField textInputField) ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x2cbd65c size 0x4 virtual true final false
 void ExecuteDefaultActionAtTarget(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ExecuteDefaultAction addr 0x2cbd660 size 0x158 virtual true final false
 void ExecuteDefaultAction(UnityEngine::UIElements::EventBase evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TextEditorEventHandler, "UnityEngine.UIElements", "TextEditorEventHandler");
