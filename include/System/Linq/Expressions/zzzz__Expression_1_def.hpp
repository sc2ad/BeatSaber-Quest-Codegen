#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
namespace {
// Forward declare root types
namespace System::Linq::Expressions {
template<typename TDelegate>
class Expression_1;
}
// Type: System.Linq.Expressions::Expression`1
namespace System::Linq::Expressions {
// cpp template
template<typename TDelegate>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14584))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14585))
// CS Name: System.Linq.Expressions.Expression`1
class CORDL_TYPE Expression_1 : public ::System::Linq::Expressions::LambdaExpression {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Expression_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Expression_1", modifiers: " const&", def_value: None }]
constexpr Expression_1(Expression_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Expression_1", modifiers: "&&", def_value: None }]
constexpr Expression_1(Expression_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Expression_1(void* ptr) noexcept : ::System::Linq::Expressions::LambdaExpression(ptr) {
}


  constexpr Expression_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Expression_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Expression_1& operator=(Expression_1&& o) noexcept = default;
  constexpr Expression_1& operator=(Expression_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq::Expressions
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Expression_1, "System.Linq.Expressions", "Expression`1");
