#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
namespace {
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class QueryExpression;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class CompositeExpression;
}
// Type: Newtonsoft.Json.Linq.JsonPath::CompositeExpression
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11964))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11965))
// CS Name: Newtonsoft.Json.Linq.JsonPath.CompositeExpression
class CORDL_TYPE CompositeExpression : public ::Newtonsoft::Json::Linq::JsonPath::QueryExpression {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CompositeExpression() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompositeExpression", modifiers: " const&", def_value: None }]
constexpr CompositeExpression(CompositeExpression const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompositeExpression", modifiers: "&&", def_value: None }]
constexpr CompositeExpression(CompositeExpression&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompositeExpression(void* ptr) noexcept : ::Newtonsoft::Json::Linq::JsonPath::QueryExpression(ptr) {
}


  constexpr CompositeExpression& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompositeExpression& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompositeExpression& operator=(CompositeExpression&& o) noexcept = default;
  constexpr CompositeExpression& operator=(CompositeExpression const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression> __declspec(property(get=__get__Expressions_k__BackingField, put=__set__Expressions_k__BackingField))  _Expressions_k__BackingField;

constexpr void __set__Expressions_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression> value) ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression> __get__Expressions_k__BackingField() const;


// Properties

 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression> __declspec(property(get=get_Expressions, put=set_Expressions))  Expressions;


// Methods

/// @brief Method get_Expressions addr 0x253924c size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression> get_Expressions() ;

/// @brief Method set_Expressions addr 0x2539254 size 0x8 virtual false final false
 void set_Expressions(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::QueryExpression> value) ;

// Ctor Parameters []
explicit CompositeExpression() ;

/// @brief Method .ctor addr 0x2538d98 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method IsMatch addr 0x253925c size 0x27c virtual true final false
 bool IsMatch(::Newtonsoft::Json::Linq::JToken t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::CompositeExpression, "Newtonsoft.Json.Linq.JsonPath", "CompositeExpression");
