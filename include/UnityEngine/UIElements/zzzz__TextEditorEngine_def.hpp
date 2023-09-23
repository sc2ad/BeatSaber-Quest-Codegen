#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction;
}
// Type: ::OnDetectFocusChangeFunction
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7186))
// CS Name: UnityEngine.UIElements.TextEditorEngine::OnDetectFocusChangeFunction
class CORDL_TYPE UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction(UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction(UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction& operator=(UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction& operator=(UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2cbcef8 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2cbcfb4 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::OnIndexChangeFunction
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7187))
// CS Name: UnityEngine.UIElements.TextEditorEngine::OnIndexChangeFunction
class CORDL_TYPE UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction(UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction(UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction& operator=(UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction& operator=(UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2cbcfc8 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2cbd084 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextEditorEngine
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14776))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7188))
// CS Name: UnityEngine.UIElements.TextEditorEngine
class CORDL_TYPE TextEditorEngine : public UnityEngine::TextEditor {
public:
// Declarations
using OnIndexChangeFunction = UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction;

using OnDetectFocusChangeFunction = UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~TextEditorEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextEditorEngine", modifiers: " const&", def_value: None }]
constexpr TextEditorEngine(TextEditorEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextEditorEngine", modifiers: "&&", def_value: None }]
constexpr TextEditorEngine(TextEditorEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextEditorEngine(void* ptr) noexcept : UnityEngine::TextEditor(ptr) {
}


  constexpr TextEditorEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextEditorEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextEditorEngine& operator=(TextEditorEngine&& o) noexcept = default;
  constexpr TextEditorEngine& operator=(TextEditorEngine const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction __declspec(property(get=__get_m_DetectFocusChangeFunction, put=__set_m_DetectFocusChangeFunction))  m_DetectFocusChangeFunction;

constexpr void __set_m_DetectFocusChangeFunction(UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction __get_m_DetectFocusChangeFunction() const;

 UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction __declspec(property(get=__get_m_IndexChangeFunction, put=__set_m_IndexChangeFunction))  m_IndexChangeFunction;

constexpr void __set_m_IndexChangeFunction(UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction __get_m_IndexChangeFunction() const;


// Properties

 UnityEngine::Rect __declspec(property(get=get_localPosition))  localPosition;


// Methods

// Ctor Parameters [CppParam { name: "detectFocusChange", ty: "UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction", modifiers: "", def_value: None }, CppParam { name: "indexChangeFunction", ty: "UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction", modifiers: "", def_value: None }]
explicit TextEditorEngine(UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction detectFocusChange, UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction indexChangeFunction) ;

/// @brief Method .ctor addr 0x2cbcdd8 size 0x2c virtual false final false
 void _ctor(UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction detectFocusChange, UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction indexChangeFunction) ;

/// @brief Method get_localPosition addr 0x2cbce04 size 0x88 virtual true final false
 UnityEngine::Rect get_localPosition() ;

/// @brief Method OnDetectFocusChange addr 0x2cbce8c size 0x24 virtual true final false
 void OnDetectFocusChange() ;

/// @brief Method OnCursorIndexChange addr 0x2cbceb0 size 0x24 virtual true final false
 void OnCursorIndexChange() ;

/// @brief Method OnSelectIndexChange addr 0x2cbced4 size 0x24 virtual true final false
 void OnSelectIndexChange() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TextEditorEngine);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TextEditorEngine, "UnityEngine.UIElements", "TextEditorEngine");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnDetectFocusChangeFunction, "UnityEngine.UIElements", "TextEditorEngine/OnDetectFocusChangeFunction");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TextEditorEngine__OnIndexChangeFunction, "UnityEngine.UIElements", "TextEditorEngine/OnIndexChangeFunction");
