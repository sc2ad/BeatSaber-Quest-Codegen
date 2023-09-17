#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
namespace {
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace System::Linq::Expressions {
class UnaryExpression;
}
// Type: System.Linq.Expressions::UnaryExpression
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14581))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14588))
// CS Name: System.Linq.Expressions.UnaryExpression
class CORDL_TYPE UnaryExpression : public ::System::Linq::Expressions::Expression {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnaryExpression() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnaryExpression", modifiers: " const&", def_value: None }]
constexpr UnaryExpression(UnaryExpression const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnaryExpression", modifiers: "&&", def_value: None }]
constexpr UnaryExpression(UnaryExpression&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnaryExpression(void* ptr) noexcept : ::System::Linq::Expressions::Expression(ptr) {
}


  constexpr UnaryExpression& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnaryExpression& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnaryExpression& operator=(UnaryExpression&& o) noexcept = default;
  constexpr UnaryExpression& operator=(UnaryExpression const& o) noexcept = default;
                


// Fields

 ::System::Linq::Expressions::Expression __declspec(property(get=__get__Operand_k__BackingField, put=__set__Operand_k__BackingField))  _Operand_k__BackingField;

constexpr void __set__Operand_k__BackingField(::System::Linq::Expressions::Expression value) ;

constexpr ::System::Linq::Expressions::Expression __get__Operand_k__BackingField() const;


// Properties

 ::System::Linq::Expressions::Expression __declspec(property(get=get_Operand))  Operand;


// Methods

/// @brief Method get_Operand addr 0x26824b0 size 0x8 virtual false final false
 ::System::Linq::Expressions::Expression get_Operand() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq::Expressions
} // end anonymous namespace
NEED_NO_BOX(::System::Linq::Expressions::UnaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::UnaryExpression, "System.Linq.Expressions", "UnaryExpression");
