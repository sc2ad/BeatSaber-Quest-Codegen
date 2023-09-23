#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryExpression_def.hpp"
namespace Newtonsoft::Json::Linq::JsonPath {
class PathFilter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Linq {
class JValue;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class BooleanQueryExpression;
}
// Type: Newtonsoft.Json.Linq.JsonPath::BooleanQueryExpression
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11964))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11966))
// CS Name: Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression
class CORDL_TYPE BooleanQueryExpression : public Newtonsoft::Json::Linq::JsonPath::QueryExpression {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BooleanQueryExpression() = default;

// Ctor Parameters [CppParam { name: "", ty: "BooleanQueryExpression", modifiers: " const&", def_value: None }]
constexpr BooleanQueryExpression(BooleanQueryExpression const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BooleanQueryExpression", modifiers: "&&", def_value: None }]
constexpr BooleanQueryExpression(BooleanQueryExpression&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BooleanQueryExpression(void* ptr) noexcept : Newtonsoft::Json::Linq::JsonPath::QueryExpression(ptr) {
}


  constexpr BooleanQueryExpression& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BooleanQueryExpression& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BooleanQueryExpression& operator=(BooleanQueryExpression&& o) noexcept = default;
  constexpr BooleanQueryExpression& operator=(BooleanQueryExpression const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JsonPath::PathFilter> __declspec(property(get=__get__Path_k__BackingField, put=__set__Path_k__BackingField))  _Path_k__BackingField;

constexpr void __set__Path_k__BackingField(System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JsonPath::PathFilter> value) ;

constexpr System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JsonPath::PathFilter> __get__Path_k__BackingField() const;

 Newtonsoft::Json::Linq::JValue __declspec(property(get=__get__Value_k__BackingField, put=__set__Value_k__BackingField))  _Value_k__BackingField;

constexpr void __set__Value_k__BackingField(Newtonsoft::Json::Linq::JValue value) ;

constexpr Newtonsoft::Json::Linq::JValue __get__Value_k__BackingField() const;


// Properties

 System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JsonPath::PathFilter> __declspec(property(get=get_Path, put=set_Path))  Path;

 Newtonsoft::Json::Linq::JValue __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

/// @brief Method get_Path addr 0x25394d8 size 0x8 virtual false final false
 System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JsonPath::PathFilter> get_Path() ;

/// @brief Method set_Path addr 0x25394e0 size 0x8 virtual false final false
 void set_Path(System::Collections::Generic::List_1<Newtonsoft::Json::Linq::JsonPath::PathFilter> value) ;

/// @brief Method get_Value addr 0x25394e8 size 0x8 virtual false final false
 Newtonsoft::Json::Linq::JValue get_Value() ;

/// @brief Method set_Value addr 0x25394f0 size 0x8 virtual false final false
 void set_Value(Newtonsoft::Json::Linq::JValue value) ;

/// @brief Method IsMatch addr 0x25394f8 size 0x470 virtual true final false
 bool IsMatch(Newtonsoft::Json::Linq::JToken t) ;

/// @brief Method EqualsWithStringCoercion addr 0x2539968 size 0x4d4 virtual false final false
 bool EqualsWithStringCoercion(Newtonsoft::Json::Linq::JValue value, Newtonsoft::Json::Linq::JValue queryValue) ;

// Ctor Parameters []
explicit BooleanQueryExpression() ;

/// @brief Method .ctor addr 0x2538ce8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
NEED_NO_BOX(Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JsonPath::BooleanQueryExpression, "Newtonsoft.Json.Linq.JsonPath", "BooleanQueryExpression");
