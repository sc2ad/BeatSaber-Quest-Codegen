#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class QueryExpression;
}
// Type: Newtonsoft.Json.Linq.JsonPath::QueryExpression
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11964))
// CS Name: Newtonsoft.Json.Linq.JsonPath.QueryExpression
class CORDL_TYPE QueryExpression : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~QueryExpression() = default;

// Ctor Parameters [CppParam { name: "", ty: "QueryExpression", modifiers: " const&", def_value: None }]
constexpr QueryExpression(QueryExpression const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QueryExpression", modifiers: "&&", def_value: None }]
constexpr QueryExpression(QueryExpression&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QueryExpression(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QueryExpression& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QueryExpression& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QueryExpression& operator=(QueryExpression&& o) noexcept = default;
  constexpr QueryExpression& operator=(QueryExpression const& o) noexcept = default;
                


// Fields

 ::Newtonsoft::Json::Linq::JsonPath::QueryOperator __declspec(property(get=__get__Operator_k__BackingField, put=__set__Operator_k__BackingField))  _Operator_k__BackingField;

constexpr void __set__Operator_k__BackingField(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value) ;

constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator __get__Operator_k__BackingField() const;


// Properties

 ::Newtonsoft::Json::Linq::JsonPath::QueryOperator __declspec(property(get=get_Operator, put=set_Operator))  Operator;


// Methods

/// @brief Method get_Operator addr 0x2539234 size 0x8 virtual false final false
 ::Newtonsoft::Json::Linq::JsonPath::QueryOperator get_Operator() ;

/// @brief Method set_Operator addr 0x253923c size 0x8 virtual false final false
 void set_Operator(::Newtonsoft::Json::Linq::JsonPath::QueryOperator value) ;

/// @brief Method IsMatch addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsMatch(::Newtonsoft::Json::Linq::JToken t) ;

// Ctor Parameters []
explicit QueryExpression() ;

/// @brief Method .ctor addr 0x2539244 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::QueryExpression);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::QueryExpression, "Newtonsoft.Json.Linq.JsonPath", "QueryExpression");
