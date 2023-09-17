#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Newtonsoft::Json::Linq::JsonPath {
class PathFilter;
}
namespace Newtonsoft::Json::Linq::JsonPath {
struct QueryOperator;
}
namespace Newtonsoft::Json::Linq::JsonPath {
class QueryExpression;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class JPath;
}
// Type: Newtonsoft.Json.Linq.JsonPath::JPath
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11961))
// CS Name: Newtonsoft.Json.Linq.JsonPath.JPath
class CORDL_TYPE JPath : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~JPath() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPath", modifiers: " const&", def_value: None }]
constexpr JPath(JPath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPath", modifiers: "&&", def_value: None }]
constexpr JPath(JPath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPath(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JPath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPath& operator=(JPath&& o) noexcept = default;
  constexpr JPath& operator=(JPath const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__expression, put=__set__expression))  _expression;

constexpr void __set__expression(::StringW value) ;

constexpr ::StringW __get__expression() const;

 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter> __declspec(property(get=__get__Filters_k__BackingField, put=__set__Filters_k__BackingField))  _Filters_k__BackingField;

constexpr void __set__Filters_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter> value) ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter> __get__Filters_k__BackingField() const;

 int32_t __declspec(property(get=__get__currentIndex, put=__set__currentIndex))  _currentIndex;

constexpr void __set__currentIndex(int32_t value) ;

constexpr int32_t __get__currentIndex() const;


// Properties

 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter> __declspec(property(get=get_Filters, put=set_Filters))  Filters;


// Methods

/// @brief Method get_Filters addr 0x2536a58 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter> get_Filters() ;

/// @brief Method set_Filters addr 0x2536a60 size 0x8 virtual false final false
 void set_Filters(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter> value) ;

// Ctor Parameters [CppParam { name: "expression", ty: "::StringW", modifiers: "", def_value: None }]
explicit JPath(::StringW expression) ;

/// @brief Method .ctor addr 0x2536a68 size 0xb8 virtual false final false
 void _ctor(::StringW expression) ;

/// @brief Method ParseMain addr 0x2536b20 size 0x160 virtual false final false
 void ParseMain() ;

/// @brief Method ParsePath addr 0x2536cd4 size 0x608 virtual false final false
 bool ParsePath(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter> filters, int32_t currentPartStartIndex, bool query) ;

/// @brief Method ParseIndexer addr 0x25372e4 size 0xf4 virtual false final false
 ::Newtonsoft::Json::Linq::JsonPath::PathFilter ParseIndexer(char16_t indexerOpenChar) ;

/// @brief Method ParseArrayIndexer addr 0x2537948 size 0x798 virtual false final false
 ::Newtonsoft::Json::Linq::JsonPath::PathFilter ParseArrayIndexer(char16_t indexerCloseChar) ;

/// @brief Method EatWhitespace addr 0x2536c80 size 0x54 virtual false final false
 void EatWhitespace() ;

/// @brief Method ParseQuery addr 0x25377a0 size 0x1a8 virtual false final false
 ::Newtonsoft::Json::Linq::JsonPath::PathFilter ParseQuery(char16_t indexerCloseChar) ;

/// @brief Method ParseExpression addr 0x25380e0 size 0x690 virtual false final false
 ::Newtonsoft::Json::Linq::JsonPath::QueryExpression ParseExpression() ;

/// @brief Method ParseValue addr 0x253895c size 0x38c virtual false final false
 ::bs_hook::Il2CppWrapperType ParseValue() ;

/// @brief Method ReadQuotedString addr 0x2538e18 size 0x244 virtual false final false
 ::StringW ReadQuotedString() ;

/// @brief Method Match addr 0x2538cf0 size 0xa8 virtual false final false
 bool Match(::StringW s) ;

/// @brief Method ParseOperator addr 0x2538778 size 0x1e4 virtual false final false
 ::Newtonsoft::Json::Linq::JsonPath::QueryOperator ParseOperator() ;

/// @brief Method ParseQuotedField addr 0x253744c size 0x354 virtual false final false
 ::Newtonsoft::Json::Linq::JsonPath::PathFilter ParseQuotedField(char16_t indexerCloseChar) ;

/// @brief Method EnsureLength addr 0x25373d8 size 0x74 virtual false final false
 void EnsureLength(::StringW message) ;

/// @brief Method Evaluate addr 0x253905c size 0xc virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> Evaluate(::Newtonsoft::Json::Linq::JToken t, bool errorWhenNoMatch) ;

/// @brief Method Evaluate addr 0x2539068 size 0x1cc virtual false final false
static ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> Evaluate(::System::Collections::Generic::List_1<::Newtonsoft::Json::Linq::JsonPath::PathFilter> filters, ::Newtonsoft::Json::Linq::JToken t, bool errorWhenNoMatch) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::JPath);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::JPath, "Newtonsoft.Json.Linq.JsonPath", "JPath");
