#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionMultiplier;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionCombinator;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct ExpressionType;
}
namespace UnityEngine::UIElements::StyleSheets::Syntax {
struct DataType;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets::Syntax {
class Expression;
}
// Type: UnityEngine.UIElements.StyleSheets.Syntax::Expression
namespace UnityEngine::UIElements::StyleSheets::Syntax {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7592))
// CS Name: UnityEngine.UIElements.StyleSheets.Syntax.Expression
class CORDL_TYPE Expression : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Expression() = default;

// Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: " const&", def_value: None }]
constexpr Expression(Expression const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "&&", def_value: None }]
constexpr Expression(Expression&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Expression(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Expression& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Expression& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Expression& operator=(Expression&& o) noexcept = default;
  constexpr Expression& operator=(Expression const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType __get_type() const;

 ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier __declspec(property(get=__get_multiplier, put=__set_multiplier))  multiplier;

constexpr void __set_multiplier(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier __get_multiplier() const;

 ::UnityEngine::UIElements::StyleSheets::Syntax::DataType __declspec(property(get=__get_dataType, put=__set_dataType))  dataType;

constexpr void __set_dataType(::UnityEngine::UIElements::StyleSheets::Syntax::DataType value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType __get_dataType() const;

 ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator __declspec(property(get=__get_combinator, put=__set_combinator))  combinator;

constexpr void __set_combinator(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator value) ;

constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator __get_combinator() const;

 ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression> __declspec(property(get=__get_subExpressions, put=__set_subExpressions))  subExpressions;

constexpr void __set_subExpressions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression> __get_subExpressions() const;

 ::StringW __declspec(property(get=__get_keyword, put=__set_keyword))  keyword;

constexpr void __set_keyword(::StringW value) ;

constexpr ::StringW __get_keyword() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType", modifiers: "", def_value: None }]
explicit Expression(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType type) ;

/// @brief Method .ctor addr 0x2c7e068 size 0x44 virtual false final false
 void _ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets::Syntax
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::Syntax::Expression);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Syntax::Expression, "UnityEngine.UIElements.StyleSheets.Syntax", "Expression");
