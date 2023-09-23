#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class LambdaExpression;
}
// Type: System.Linq.Expressions::LambdaExpression
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14581))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14584))
// CS Name: System.Linq.Expressions.LambdaExpression
class CORDL_TYPE LambdaExpression : public System::Linq::Expressions::Expression {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LambdaExpression() = default;

// Ctor Parameters [CppParam { name: "", ty: "LambdaExpression", modifiers: " const&", def_value: None }]
constexpr LambdaExpression(LambdaExpression const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LambdaExpression", modifiers: "&&", def_value: None }]
constexpr LambdaExpression(LambdaExpression&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LambdaExpression(void* ptr) noexcept : System::Linq::Expressions::Expression(ptr) {
}


  constexpr LambdaExpression& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LambdaExpression& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LambdaExpression& operator=(LambdaExpression&& o) noexcept = default;
  constexpr LambdaExpression& operator=(LambdaExpression const& o) noexcept = default;
                


// Fields

 System::Linq::Expressions::Expression __declspec(property(get=__get__body, put=__set__body))  _body;

constexpr void __set__body(System::Linq::Expressions::Expression value) ;

constexpr System::Linq::Expressions::Expression __get__body() const;


// Properties

 System::Linq::Expressions::Expression __declspec(property(get=get_Body))  Body;


// Methods

/// @brief Method get_Body addr 0x2682404 size 0x8 virtual false final false
 System::Linq::Expressions::Expression get_Body() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq::Expressions
NEED_NO_BOX(System::Linq::Expressions::LambdaExpression);
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Expressions::LambdaExpression, "System.Linq.Expressions", "LambdaExpression");
