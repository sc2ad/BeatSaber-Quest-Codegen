#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleMatchingContext;
}
// Type: UnityEngine.UIElements::StyleMatchingContext
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6903))
// CS Name: UnityEngine.UIElements.StyleMatchingContext
class CORDL_TYPE StyleMatchingContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StyleMatchingContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleMatchingContext", modifiers: " const&", def_value: None }]
constexpr StyleMatchingContext(StyleMatchingContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleMatchingContext", modifiers: "&&", def_value: None }]
constexpr StyleMatchingContext(StyleMatchingContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleMatchingContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleMatchingContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleMatchingContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleMatchingContext& operator=(StyleMatchingContext&& o) noexcept = default;
  constexpr StyleMatchingContext& operator=(StyleMatchingContext const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> __declspec(property(get=__get_m_StyleSheetStack, put=__set_m_StyleSheetStack))  m_StyleSheetStack;

constexpr void __set_m_StyleSheetStack(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> __get_m_StyleSheetStack() const;

 ::UnityEngine::UIElements::StyleVariableContext __declspec(property(get=__get_variableContext, put=__set_variableContext))  variableContext;

constexpr void __set_variableContext(::UnityEngine::UIElements::StyleVariableContext value) ;

constexpr ::UnityEngine::UIElements::StyleVariableContext __get_variableContext() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_currentElement, put=__set_currentElement))  currentElement;

constexpr void __set_currentElement(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_currentElement() const;

 ::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::StyleSheets::MatchResultInfo> __declspec(property(get=__get_processResult, put=__set_processResult))  processResult;

constexpr void __set_processResult(::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::StyleSheets::MatchResultInfo> value) ;

constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::StyleSheets::MatchResultInfo> __get_processResult() const;


// Properties

 int32_t __declspec(property(get=get_styleSheetCount))  styleSheetCount;


// Methods

/// @brief Method get_styleSheetCount addr 0x2c4905c size 0x48 virtual false final false
 int32_t get_styleSheetCount() ;

// Ctor Parameters [CppParam { name: "processResult", ty: "::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::StyleSheets::MatchResultInfo>", modifiers: "", def_value: None }]
explicit StyleMatchingContext(::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::StyleSheets::MatchResultInfo> processResult) ;

/// @brief Method .ctor addr 0x2c490a4 size 0xc4 virtual false final false
 void _ctor(::System::Action_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::StyleSheets::MatchResultInfo> processResult) ;

/// @brief Method AddStyleSheet addr 0x2c49168 size 0xec virtual false final false
 void AddStyleSheet(::UnityEngine::UIElements::StyleSheet sheet) ;

/// @brief Method RemoveStyleSheetRange addr 0x2c49254 size 0x68 virtual false final false
 void RemoveStyleSheetRange(int32_t index, int32_t count) ;

/// @brief Method GetStyleSheetAt addr 0x2c492bc size 0x58 virtual false final false
 ::UnityEngine::UIElements::StyleSheet GetStyleSheetAt(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleMatchingContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleMatchingContext, "UnityEngine.UIElements", "StyleMatchingContext");
