#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Decimal;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace System::Xml::Linq {
class XObject;
}
namespace System::Xml::Linq {
class XDocument;
}
namespace System {
struct Guid;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace System {
class Uri;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System {
struct DateTime;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace System::Xml {
class XmlDocument;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
struct DateTimeOffset;
}
namespace Newtonsoft::Json {
struct Formatting;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConvert;
}
// Type: Newtonsoft.Json::JsonConvert
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11776))
// CS Name: Newtonsoft.Json.JsonConvert
class CORDL_TYPE JsonConvert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JsonConvert() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: " const&", def_value: None }]
constexpr JsonConvert(JsonConvert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonConvert", modifiers: "&&", def_value: None }]
constexpr JsonConvert(JsonConvert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonConvert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonConvert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonConvert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonConvert& operator=(JsonConvert&& o) noexcept = default;
  constexpr JsonConvert& operator=(JsonConvert const& o) noexcept = default;
                


// Fields

static System::Func_1<Newtonsoft::Json::JsonSerializerSettings> __declspec(property(get=__get__DefaultSettings_k__BackingField, put=__set__DefaultSettings_k__BackingField))  _DefaultSettings_k__BackingField;

static void __set__DefaultSettings_k__BackingField(System::Func_1<Newtonsoft::Json::JsonSerializerSettings> value) ;

static System::Func_1<Newtonsoft::Json::JsonSerializerSettings> __get__DefaultSettings_k__BackingField() ;

static ::StringW __declspec(property(get=__get_True, put=__set_True))  True;

static void __set_True(::StringW value) ;

static ::StringW __get_True() ;

static ::StringW __declspec(property(get=__get_False, put=__set_False))  False;

static void __set_False(::StringW value) ;

static ::StringW __get_False() ;

static ::StringW __declspec(property(get=__get_Null, put=__set_Null))  Null;

static void __set_Null(::StringW value) ;

static ::StringW __get_Null() ;

static ::StringW __declspec(property(get=__get_Undefined, put=__set_Undefined))  Undefined;

static void __set_Undefined(::StringW value) ;

static ::StringW __get_Undefined() ;

static ::StringW __declspec(property(get=__get_PositiveInfinity, put=__set_PositiveInfinity))  PositiveInfinity;

static void __set_PositiveInfinity(::StringW value) ;

static ::StringW __get_PositiveInfinity() ;

static ::StringW __declspec(property(get=__get_NegativeInfinity, put=__set_NegativeInfinity))  NegativeInfinity;

static void __set_NegativeInfinity(::StringW value) ;

static ::StringW __get_NegativeInfinity() ;

static ::StringW __declspec(property(get=__get_NaN, put=__set_NaN))  NaN;

static void __set_NaN(::StringW value) ;

static ::StringW __get_NaN() ;

static Newtonsoft::Json::JsonSerializerSettings __declspec(property(get=__get_InitialSerializerSettings, put=__set_InitialSerializerSettings))  InitialSerializerSettings;

static void __set_InitialSerializerSettings(Newtonsoft::Json::JsonSerializerSettings value) ;

static Newtonsoft::Json::JsonSerializerSettings __get_InitialSerializerSettings() ;


// Properties

static System::Func_1<Newtonsoft::Json::JsonSerializerSettings> __declspec(property(get=get_DefaultSettings, put=set_DefaultSettings))  DefaultSettings;


// Methods

/// @brief Method get_DefaultSettings addr 0x24d5a70 size 0x58 virtual false final false
static System::Func_1<Newtonsoft::Json::JsonSerializerSettings> get_DefaultSettings() ;

/// @brief Method set_DefaultSettings addr 0x24d5ac8 size 0x5c virtual false final false
static void set_DefaultSettings(System::Func_1<Newtonsoft::Json::JsonSerializerSettings> value) ;

/// @brief Method GetDefaultSettings addr 0x24d5d08 size 0x58 virtual false final false
static Newtonsoft::Json::JsonSerializerSettings GetDefaultSettings() ;

/// @brief Method ToString addr 0x24d5d60 size 0x5c virtual false final false
static ::StringW ToString(System::DateTime value) ;

/// @brief Method ToString addr 0x24d5dbc size 0x270 virtual false final false
static ::StringW ToString(System::DateTime value, Newtonsoft::Json::DateFormatHandling format, Newtonsoft::Json::DateTimeZoneHandling timeZoneHandling) ;

/// @brief Method ToString addr 0x24d602c size 0x68 virtual false final false
static ::StringW ToString(System::DateTimeOffset value) ;

/// @brief Method ToString addr 0x24d6094 size 0x250 virtual false final false
static ::StringW ToString(System::DateTimeOffset value, Newtonsoft::Json::DateFormatHandling format) ;

/// @brief Method ToString addr 0x24d25d0 size 0x6c virtual false final false
static ::StringW ToString(bool value) ;

/// @brief Method ToString addr 0x24d2730 size 0x8c virtual false final false
static ::StringW ToString(char16_t value) ;

/// @brief Method ToString addr 0x24d633c size 0x54 virtual false final false
static ::StringW ToString(::bs_hook::EnumTypeWrapper value) ;

/// @brief Method ToString addr 0x24d6390 size 0x6c virtual false final false
static ::StringW ToString(int32_t value) ;

/// @brief Method ToString addr 0x24d63fc size 0x6c virtual false final false
static ::StringW ToString(int16_t value) ;

/// @brief Method ToString addr 0x24d6468 size 0x6c virtual false final false
static ::StringW ToString(uint16_t value) ;

/// @brief Method ToString addr 0x24d64d4 size 0x6c virtual false final false
static ::StringW ToString(uint32_t value) ;

/// @brief Method ToString addr 0x24d6540 size 0x6c virtual false final false
static ::StringW ToString(int64_t value) ;

/// @brief Method ToString addr 0x24d65ac size 0x6c virtual false final false
static ::StringW ToString(uint64_t value) ;

/// @brief Method ToString addr 0x24d6618 size 0xcc virtual false final false
static ::StringW ToString(float_t value) ;

/// @brief Method ToString addr 0x24d20cc size 0xf0 virtual false final false
static ::StringW ToString(float_t value, Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable) ;

/// @brief Method EnsureFloatFormat addr 0x24d6834 size 0x184 virtual false final false
static ::StringW EnsureFloatFormat(double_t value, ::StringW text, Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable) ;

/// @brief Method ToString addr 0x24d69b8 size 0xc8 virtual false final false
static ::StringW ToString(double_t value) ;

/// @brief Method ToString addr 0x24d2354 size 0xec virtual false final false
static ::StringW ToString(double_t value, Newtonsoft::Json::FloatFormatHandling floatFormatHandling, char16_t quoteChar, bool nullable) ;

/// @brief Method EnsureDecimalPlace addr 0x24d66e4 size 0x150 virtual false final false
static ::StringW EnsureDecimalPlace(double_t value, ::StringW text) ;

/// @brief Method EnsureDecimalPlace addr 0x24d6a80 size 0x7c virtual false final false
static ::StringW EnsureDecimalPlace(::StringW text) ;

/// @brief Method ToString addr 0x24d6afc size 0x6c virtual false final false
static ::StringW ToString(uint8_t value) ;

/// @brief Method ToString addr 0x24d6b68 size 0x6c virtual false final false
static ::StringW ToString(int8_t value) ;

/// @brief Method ToString addr 0x24d28b8 size 0xc8 virtual false final false
static ::StringW ToString(System::Decimal value) ;

/// @brief Method ToString addr 0x24d6bd4 size 0x68 virtual false final false
static ::StringW ToString(System::Guid value) ;

/// @brief Method ToString addr 0x24d6c3c size 0xb8 virtual false final false
static ::StringW ToString(System::Guid value, char16_t quoteChar) ;

/// @brief Method ToString addr 0x24d6cf4 size 0x58 virtual false final false
static ::StringW ToString(System::TimeSpan value) ;

/// @brief Method ToString addr 0x24d6d4c size 0x7c virtual false final false
static ::StringW ToString(System::TimeSpan value, char16_t quoteChar) ;

/// @brief Method ToString addr 0x24d6e30 size 0xb4 virtual false final false
static ::StringW ToString(System::Uri value) ;

/// @brief Method ToString addr 0x24d6ee4 size 0x78 virtual false final false
static ::StringW ToString(System::Uri value, char16_t quoteChar) ;

/// @brief Method ToString addr 0x24d62e4 size 0x58 virtual false final false
static ::StringW ToString(::StringW value) ;

/// @brief Method ToString addr 0x24d6dc8 size 0x68 virtual false final false
static ::StringW ToString(::StringW value, char16_t delimiter) ;

/// @brief Method ToString addr 0x24d6f5c size 0xe8 virtual false final false
static ::StringW ToString(::StringW value, char16_t delimiter, Newtonsoft::Json::StringEscapeHandling stringEscapeHandling) ;

/// @brief Method ToString addr 0x24d7044 size 0x7a8 virtual false final false
static ::StringW ToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SerializeObject addr 0x24d77ec size 0x5c virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SerializeObject addr 0x24d78c4 size 0x68 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Formatting formatting) ;

/// @brief Method SerializeObject addr 0x24d799c size 0xa4 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method SerializeObject addr 0x24d7a40 size 0xb4 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Formatting formatting, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method SerializeObject addr 0x24d7b8c size 0x68 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeObject addr 0x24d7848 size 0x7c virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, System::Type type, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeObject addr 0x24d792c size 0x70 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, Newtonsoft::Json::Formatting formatting, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeObject addr 0x24d7af4 size 0x98 virtual false final false
static ::StringW SerializeObject(::bs_hook::Il2CppWrapperType value, System::Type type, Newtonsoft::Json::Formatting formatting, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeObjectInternal addr 0x24d7c28 size 0x284 virtual false final false
static ::StringW SerializeObjectInternal(::bs_hook::Il2CppWrapperType value, System::Type type, Newtonsoft::Json::JsonSerializer jsonSerializer) ;

/// @brief Method DeserializeObject addr 0x24d7ebc size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value) ;

/// @brief Method DeserializeObject addr 0x24d8168 size 0x68 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method DeserializeObject addr 0x24d81d0 size 0x68 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value, System::Type type) ;

/// @brief Method DeserializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeObject(::StringW value) ;

/// @brief Method DeserializeAnonymousType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeAnonymousType(::StringW value, T anonymousTypeObject) ;

/// @brief Method DeserializeAnonymousType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeAnonymousType(::StringW value, T anonymousTypeObject, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method DeserializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeObject(::StringW value, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method DeserializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DeserializeObject(::StringW value, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method DeserializeObject addr 0x24d8238 size 0xb0 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value, System::Type type, ::ArrayW<Newtonsoft::Json::JsonConverter> converters) ;

/// @brief Method DeserializeObject addr 0x24d7f18 size 0x250 virtual false final false
static ::bs_hook::Il2CppWrapperType DeserializeObject(::StringW value, System::Type type, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method PopulateObject addr 0x24d8334 size 0x68 virtual false final false
static void PopulateObject(::StringW value, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method PopulateObject addr 0x24d839c size 0x26c virtual false final false
static void PopulateObject(::StringW value, ::bs_hook::Il2CppWrapperType target, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method SerializeXmlNode addr 0x24d861c size 0x58 virtual false final false
static ::StringW SerializeXmlNode(System::Xml::XmlNode node) ;

/// @brief Method SerializeXmlNode addr 0x24d8674 size 0xf0 virtual false final false
static ::StringW SerializeXmlNode(System::Xml::XmlNode node, Newtonsoft::Json::Formatting formatting) ;

/// @brief Method SerializeXmlNode addr 0x24d8764 size 0xfc virtual false final false
static ::StringW SerializeXmlNode(System::Xml::XmlNode node, Newtonsoft::Json::Formatting formatting, bool omitRootObject) ;

/// @brief Method DeserializeXmlNode addr 0x24d8860 size 0x58 virtual false final false
static System::Xml::XmlDocument DeserializeXmlNode(::StringW value) ;

/// @brief Method DeserializeXmlNode addr 0x24d88b8 size 0x68 virtual false final false
static System::Xml::XmlDocument DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName) ;

/// @brief Method DeserializeXmlNode addr 0x24d8920 size 0x1a4 virtual false final false
static System::Xml::XmlDocument DeserializeXmlNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute) ;

/// @brief Method SerializeXNode addr 0x24d8ac4 size 0x58 virtual false final false
static ::StringW SerializeXNode(System::Xml::Linq::XObject node) ;

/// @brief Method SerializeXNode addr 0x24d8b1c size 0x68 virtual false final false
static ::StringW SerializeXNode(System::Xml::Linq::XObject node, Newtonsoft::Json::Formatting formatting) ;

/// @brief Method SerializeXNode addr 0x24d8b84 size 0xfc virtual false final false
static ::StringW SerializeXNode(System::Xml::Linq::XObject node, Newtonsoft::Json::Formatting formatting, bool omitRootObject) ;

/// @brief Method DeserializeXNode addr 0x24d8c80 size 0x58 virtual false final false
static System::Xml::Linq::XDocument DeserializeXNode(::StringW value) ;

/// @brief Method DeserializeXNode addr 0x24d8cd8 size 0x68 virtual false final false
static System::Xml::Linq::XDocument DeserializeXNode(::StringW value, ::StringW deserializeRootElementName) ;

/// @brief Method DeserializeXNode addr 0x24d8d40 size 0x1a4 virtual false final false
static System::Xml::Linq::XDocument DeserializeXNode(::StringW value, ::StringW deserializeRootElementName, bool writeArrayAttribute) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonConvert);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonConvert, "Newtonsoft.Json", "JsonConvert");
