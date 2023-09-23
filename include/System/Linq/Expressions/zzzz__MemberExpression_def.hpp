#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MemberExpression;
}
// Type: System.Linq.Expressions::MemberExpression
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14581))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14586))
// CS Name: System.Linq.Expressions.MemberExpression
class CORDL_TYPE MemberExpression : public System::Linq::Expressions::Expression {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MemberExpression() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberExpression", modifiers: " const&", def_value: None }]
constexpr MemberExpression(MemberExpression const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemberExpression", modifiers: "&&", def_value: None }]
constexpr MemberExpression(MemberExpression&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemberExpression(void* ptr) noexcept : System::Linq::Expressions::Expression(ptr) {
}


  constexpr MemberExpression& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemberExpression& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemberExpression& operator=(MemberExpression&& o) noexcept = default;
  constexpr MemberExpression& operator=(MemberExpression const& o) noexcept = default;
                


// Properties

 System::Reflection::MemberInfo __declspec(property(get=get_Member))  Member;


// Methods

/// @brief Method get_Member addr 0x268240c size 0xc virtual false final false
 System::Reflection::MemberInfo get_Member() ;

/// @brief Method GetMember addr 0x2682418 size 0x24 virtual true final false
 System::Reflection::MemberInfo GetMember() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq::Expressions
NEED_NO_BOX(System::Linq::Expressions::MemberExpression);
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Expressions::MemberExpression, "System.Linq.Expressions", "MemberExpression");
