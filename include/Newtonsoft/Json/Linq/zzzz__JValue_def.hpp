#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
class IComparable;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
class Type;
}
namespace System {
struct TypeCode;
}
namespace System {
class Uri;
}
namespace System {
struct TimeSpan;
}
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct Guid;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class IConvertible;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JValue;
}
// Type: Newtonsoft.Json.Linq::JValue
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11944))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11949))
// CS Name: Newtonsoft.Json.Linq.JValue
class CORDL_TYPE JValue : public ::Newtonsoft::Json::Linq::JToken {
public:
// Declarations
/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief Convert operator to ::System::IConvertible
constexpr operator  ::System::IConvertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~JValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "JValue", modifiers: " const&", def_value: None }]
constexpr JValue(JValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JValue", modifiers: "&&", def_value: None }]
constexpr JValue(JValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JValue(void* ptr) noexcept : ::Newtonsoft::Json::Linq::JToken(ptr) {
}


  constexpr JValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JValue& operator=(JValue&& o) noexcept = default;
  constexpr JValue& operator=(JValue const& o) noexcept = default;
                


// Fields

 ::Newtonsoft::Json::Linq::JTokenType __declspec(property(get=__get__valueType, put=__set__valueType))  _valueType;

constexpr void __set__valueType(::Newtonsoft::Json::Linq::JTokenType value) ;

constexpr ::Newtonsoft::Json::Linq::JTokenType __get__valueType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__value() const;


// Properties

 bool __declspec(property(get=get_HasValues))  HasValues;

 ::Newtonsoft::Json::Linq::JTokenType __declspec(property(get=get_Type))  Type;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value, put=set_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::Newtonsoft::Json::Linq::JTokenType", modifiers: "", def_value: None }]
explicit JValue(::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Linq::JTokenType type) ;

/// @brief Method .ctor addr 0x2530c50 size 0x74 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType value, ::Newtonsoft::Json::Linq::JTokenType type) ;

// Ctor Parameters [CppParam { name: "other", ty: "::Newtonsoft::Json::Linq::JValue", modifiers: "", def_value: None }]
explicit JValue(::Newtonsoft::Json::Linq::JValue other) ;

/// @brief Method .ctor addr 0x2530cc4 size 0x80 virtual false final false
 void _ctor(::Newtonsoft::Json::Linq::JValue other) ;

// Ctor Parameters [CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }]
explicit JValue(int64_t value) ;

/// @brief Method .ctor addr 0x2530d44 size 0x6c virtual false final false
 void _ctor(int64_t value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::System::Decimal", modifiers: "", def_value: None }]
explicit JValue(::System::Decimal value) ;

/// @brief Method .ctor addr 0x2530db0 size 0xa0 virtual false final false
 void _ctor(::System::Decimal value) ;

// Ctor Parameters [CppParam { name: "value", ty: "char16_t", modifiers: "", def_value: None }]
explicit JValue(char16_t value) ;

/// @brief Method .ctor addr 0x2530e50 size 0x6c virtual false final false
 void _ctor(char16_t value) ;

// Ctor Parameters [CppParam { name: "value", ty: "uint64_t", modifiers: "", def_value: None }]
explicit JValue(uint64_t value) ;

/// @brief Method .ctor addr 0x2530ebc size 0x6c virtual false final false
 void _ctor(uint64_t value) ;

// Ctor Parameters [CppParam { name: "value", ty: "double_t", modifiers: "", def_value: None }]
explicit JValue(double_t value) ;

/// @brief Method .ctor addr 0x2530f28 size 0x6c virtual false final false
 void _ctor(double_t value) ;

// Ctor Parameters [CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }]
explicit JValue(float_t value) ;

/// @brief Method .ctor addr 0x2530f94 size 0x6c virtual false final false
 void _ctor(float_t value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::System::DateTime", modifiers: "", def_value: None }]
explicit JValue(::System::DateTime value) ;

/// @brief Method .ctor addr 0x2531000 size 0x6c virtual false final false
 void _ctor(::System::DateTime value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::System::DateTimeOffset", modifiers: "", def_value: None }]
explicit JValue(::System::DateTimeOffset value) ;

/// @brief Method .ctor addr 0x253106c size 0x78 virtual false final false
 void _ctor(::System::DateTimeOffset value) ;

// Ctor Parameters [CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
explicit JValue(bool value) ;

/// @brief Method .ctor addr 0x25310e4 size 0x6c virtual false final false
 void _ctor(bool value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
explicit JValue(::StringW value) ;

/// @brief Method .ctor addr 0x2531150 size 0x8 virtual false final false
 void _ctor(::StringW value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::System::Guid", modifiers: "", def_value: None }]
explicit JValue(::System::Guid value) ;

/// @brief Method .ctor addr 0x2531158 size 0x78 virtual false final false
 void _ctor(::System::Guid value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::System::Uri", modifiers: "", def_value: None }]
explicit JValue(::System::Uri value) ;

/// @brief Method .ctor addr 0x25311d0 size 0x84 virtual false final false
 void _ctor(::System::Uri value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
explicit JValue(::System::TimeSpan value) ;

/// @brief Method .ctor addr 0x2531254 size 0x6c virtual false final false
 void _ctor(::System::TimeSpan value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit JValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method .ctor addr 0x25312c0 size 0x30 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method DeepEquals addr 0x2531704 size 0x9c virtual true final false
 bool DeepEquals(::Newtonsoft::Json::Linq::JToken node) ;

/// @brief Method get_HasValues addr 0x25317fc size 0x8 virtual true final false
 bool get_HasValues() ;

/// @brief Method Compare addr 0x2531804 size 0x88c virtual false final false
static int32_t Compare(::Newtonsoft::Json::Linq::JTokenType valueType, ::bs_hook::Il2CppWrapperType objA, ::bs_hook::Il2CppWrapperType objB) ;

/// @brief Method CompareFloat addr 0x2532090 size 0xfc virtual false final false
static int32_t CompareFloat(::bs_hook::Il2CppWrapperType objA, ::bs_hook::Il2CppWrapperType objB) ;

/// @brief Method CloneToken addr 0x253218c size 0x60 virtual true final false
 ::Newtonsoft::Json::Linq::JToken CloneToken() ;

/// @brief Method CreateComment addr 0x25321ec size 0x64 virtual false final false
static ::Newtonsoft::Json::Linq::JValue CreateComment(::StringW value) ;

/// @brief Method CreateString addr 0x2532250 size 0x64 virtual false final false
static ::Newtonsoft::Json::Linq::JValue CreateString(::StringW value) ;

/// @brief Method CreateNull addr 0x252fd7c size 0x60 virtual false final false
static ::Newtonsoft::Json::Linq::JValue CreateNull() ;

/// @brief Method CreateUndefined addr 0x25322b4 size 0x60 virtual false final false
static ::Newtonsoft::Json::Linq::JValue CreateUndefined() ;

/// @brief Method GetValueType addr 0x25312f0 size 0x414 virtual false final false
static ::Newtonsoft::Json::Linq::JTokenType GetValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetStringValueType addr 0x2532314 size 0x7c virtual false final false
static ::Newtonsoft::Json::Linq::JTokenType GetStringValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current) ;

/// @brief Method get_Type addr 0x2532390 size 0x8 virtual true final false
 ::Newtonsoft::Json::Linq::JTokenType get_Type() ;

/// @brief Method get_Value addr 0x2532398 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method set_Value addr 0x25323a0 size 0xb0 virtual false final false
 void set_Value(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteTo addr 0x2532450 size 0x760 virtual true final false
 void WriteTo(::Newtonsoft::Json::JsonWriter writer, ::ArrayW<::Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method GetDeepHashCode addr 0x2532bb0 size 0x54 virtual true final false
 int32_t GetDeepHashCode() ;

/// @brief Method ValuesEquals addr 0x25317a0 size 0x5c virtual false final false
static bool ValuesEquals(::Newtonsoft::Json::Linq::JValue v1, ::Newtonsoft::Json::Linq::JValue v2) ;

/// @brief Method Equals addr 0x2532c04 size 0x10 virtual false final false
 bool Equals(::Newtonsoft::Json::Linq::JValue other) ;

/// @brief Method Equals addr 0x2532c14 size 0xa4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2532cb8 size 0x18 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2532cd0 size 0x68 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2532d38 size 0x70 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2532ec0 size 0xc virtual true final true
 ::StringW ToString(::System::IFormatProvider formatProvider) ;

/// @brief Method ToString addr 0x2532da8 size 0x118 virtual true final true
 ::StringW ToString(::StringW format, ::System::IFormatProvider formatProvider) ;

/// @brief Method System.IComparable.CompareTo addr 0x2532ecc size 0x94 virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method CompareTo addr 0x2532f60 size 0x20 virtual false final false
 int32_t CompareTo(::Newtonsoft::Json::Linq::JValue obj) ;

/// @brief Method System.IConvertible.GetTypeCode addr 0x2532f80 size 0xbc virtual true final true
 ::System::TypeCode System_IConvertible_GetTypeCode() ;

/// @brief Method System.IConvertible.ToBoolean addr 0x253303c size 0x58 virtual true final true
 bool System_IConvertible_ToBoolean(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToChar addr 0x2533094 size 0x58 virtual true final true
 char16_t System_IConvertible_ToChar(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSByte addr 0x25330ec size 0x58 virtual true final true
 int8_t System_IConvertible_ToSByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToByte addr 0x2533144 size 0x58 virtual true final true
 uint8_t System_IConvertible_ToByte(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt16 addr 0x253319c size 0x58 virtual true final true
 int16_t System_IConvertible_ToInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt16 addr 0x25331f4 size 0x58 virtual true final true
 uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt32 addr 0x253324c size 0x58 virtual true final true
 int32_t System_IConvertible_ToInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt32 addr 0x25332a4 size 0x58 virtual true final true
 uint32_t System_IConvertible_ToUInt32(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToInt64 addr 0x25332fc size 0x58 virtual true final true
 int64_t System_IConvertible_ToInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToUInt64 addr 0x2533354 size 0x58 virtual true final true
 uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToSingle addr 0x25333ac size 0x58 virtual true final true
 float_t System_IConvertible_ToSingle(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDouble addr 0x2533404 size 0x58 virtual true final true
 double_t System_IConvertible_ToDouble(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDecimal addr 0x253345c size 0x58 virtual true final true
 ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToDateTime addr 0x25334b4 size 0x58 virtual true final true
 ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider provider) ;

/// @brief Method System.IConvertible.ToType addr 0x253350c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_IConvertible_ToType(::System::Type conversionType, ::System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Linq::JValue);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JValue, "Newtonsoft.Json.Linq", "JValue");
