#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxTokenizer;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplier;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct StyleSyntaxToken;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionCombinator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class StyleSyntaxParser;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::StyleSyntaxParser
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7591))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser
class CORDL_TYPE StyleSyntaxParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StyleSyntaxParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSyntaxParser", modifiers: " const&", def_value: None }]
constexpr StyleSyntaxParser(StyleSyntaxParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSyntaxParser", modifiers: "&&", def_value: None }]
constexpr StyleSyntaxParser(StyleSyntaxParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleSyntaxParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StyleSyntaxParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleSyntaxParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleSyntaxParser& operator=(StyleSyntaxParser&& o) noexcept = default;
  constexpr StyleSyntaxParser& operator=(StyleSyntaxParser const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::Syntax::Expression> __declspec(property(get=__get_m_ProcessExpressionList, put=__set_m_ProcessExpressionList))  m_ProcessExpressionList;

constexpr void __set_m_ProcessExpressionList(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::Syntax::Expression> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::Syntax::Expression> __get_m_ProcessExpressionList() const;

 System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::Syntax::Expression> __declspec(property(get=__get_m_ExpressionStack, put=__set_m_ExpressionStack))  m_ExpressionStack;

constexpr void __set_m_ExpressionStack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::Syntax::Expression> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::Syntax::Expression> __get_m_ExpressionStack() const;

 System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator> __declspec(property(get=__get_m_CombinatorStack, put=__set_m_CombinatorStack))  m_CombinatorStack;

constexpr void __set_m_CombinatorStack(System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator> value) ;

constexpr System::Collections::Generic::Stack_1<UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator> __get_m_CombinatorStack() const;

 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::Syntax::Expression> __declspec(property(get=__get_m_ParsedExpressionCache, put=__set_m_ParsedExpressionCache))  m_ParsedExpressionCache;

constexpr void __set_m_ParsedExpressionCache(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::Syntax::Expression> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::UIElements::StyleSheets::Syntax::Expression> __get_m_ParsedExpressionCache() const;


// Methods

/// @brief Method Parse addr 0x2c7d450 size 0x198 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::Expression Parse(::StringW syntax) ;

/// @brief Method ParseExpression addr 0x2c7d5e8 size 0x280 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::Expression ParseExpression(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer tokenizer) ;

/// @brief Method ProcessCombinatorStack addr 0x2c7dd58 size 0x2f0 virtual false final false
 void ProcessCombinatorStack() ;

/// @brief Method ParseTerm addr 0x2c7d868 size 0x170 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::Expression ParseTerm(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer tokenizer) ;

/// @brief Method ParseCombinatorType addr 0x2c7dc00 size 0x158 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator ParseCombinatorType(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer tokenizer) ;

/// @brief Method ParseGroup addr 0x2c7d9d8 size 0x228 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::Expression ParseGroup(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer tokenizer) ;

/// @brief Method ParseDataType addr 0x2c7e0ac size 0x3e4 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::Expression ParseDataType(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer tokenizer) ;

/// @brief Method ParseNonTerminalValue addr 0x2c7e660 size 0x154 virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::Expression ParseNonTerminalValue(::StringW syntax) ;

/// @brief Method ParseProperty addr 0x2c7e7b4 size 0x2ec virtual false final false
 UnityEngine::UIElements::StyleSheets::Syntax::Expression ParseProperty(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer tokenizer) ;

/// @brief Method ParseMultiplier addr 0x2c7e490 size 0x17c virtual false final false
 void ParseMultiplier(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer tokenizer, ByRef<UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier> multiplier) ;

/// @brief Method ParseRanges addr 0x2c7eac8 size 0x124 virtual false final false
 void ParseRanges(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer tokenizer, ByRef<int32_t> min, ByRef<int32_t> max) ;

/// @brief Method EatSpace addr 0x2c7e620 size 0x40 virtual false final false
static void EatSpace(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenizer tokenizer) ;

/// @brief Method IsExpressionEnd addr 0x2c7e048 size 0x20 virtual false final false
static bool IsExpressionEnd(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token) ;

/// @brief Method IsCombinator addr 0x2c7e60c size 0x14 virtual false final false
static bool IsCombinator(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token) ;

/// @brief Method IsMultiplier addr 0x2c7eaa0 size 0x24 virtual false final false
static bool IsMultiplier(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxToken token) ;

// Ctor Parameters []
explicit StyleSyntaxParser() ;

/// @brief Method .ctor addr 0x2c7ebec size 0x148 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxParser, "UnityEngine.UIElements.StyleSheets.Syntax", "StyleSyntaxParser");
