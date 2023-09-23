#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
namespace Newtonsoft::Json {
struct MissingMemberHandling;
}
namespace Newtonsoft::Json {
class JsonConverterCollection;
}
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace Newtonsoft::Json {
struct MetadataPropertyHandling;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
namespace System::IO {
class TextWriter;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::IO {
class TextReader;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Type: Newtonsoft.Json::JsonSerializer
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11778))
// CS Name: Newtonsoft.Json.JsonSerializer
class CORDL_TYPE JsonSerializer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~JsonSerializer() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializer", modifiers: " const&", def_value: None }]
constexpr JsonSerializer(JsonSerializer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializer", modifiers: "&&", def_value: None }]
constexpr JsonSerializer(JsonSerializer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonSerializer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonSerializer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonSerializer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonSerializer& operator=(JsonSerializer&& o) noexcept = default;
  constexpr JsonSerializer& operator=(JsonSerializer const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::TypeNameHandling __declspec(property(get=__get__typeNameHandling, put=__set__typeNameHandling))  _typeNameHandling;

constexpr void __set__typeNameHandling(Newtonsoft::Json::TypeNameHandling value) ;

constexpr Newtonsoft::Json::TypeNameHandling __get__typeNameHandling() const;

 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __declspec(property(get=__get__typeNameAssemblyFormat, put=__set__typeNameAssemblyFormat))  _typeNameAssemblyFormat;

constexpr void __set__typeNameAssemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) ;

constexpr System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __get__typeNameAssemblyFormat() const;

 Newtonsoft::Json::PreserveReferencesHandling __declspec(property(get=__get__preserveReferencesHandling, put=__set__preserveReferencesHandling))  _preserveReferencesHandling;

constexpr void __set__preserveReferencesHandling(Newtonsoft::Json::PreserveReferencesHandling value) ;

constexpr Newtonsoft::Json::PreserveReferencesHandling __get__preserveReferencesHandling() const;

 Newtonsoft::Json::ReferenceLoopHandling __declspec(property(get=__get__referenceLoopHandling, put=__set__referenceLoopHandling))  _referenceLoopHandling;

constexpr void __set__referenceLoopHandling(Newtonsoft::Json::ReferenceLoopHandling value) ;

constexpr Newtonsoft::Json::ReferenceLoopHandling __get__referenceLoopHandling() const;

 Newtonsoft::Json::MissingMemberHandling __declspec(property(get=__get__missingMemberHandling, put=__set__missingMemberHandling))  _missingMemberHandling;

constexpr void __set__missingMemberHandling(Newtonsoft::Json::MissingMemberHandling value) ;

constexpr Newtonsoft::Json::MissingMemberHandling __get__missingMemberHandling() const;

 Newtonsoft::Json::ObjectCreationHandling __declspec(property(get=__get__objectCreationHandling, put=__set__objectCreationHandling))  _objectCreationHandling;

constexpr void __set__objectCreationHandling(Newtonsoft::Json::ObjectCreationHandling value) ;

constexpr Newtonsoft::Json::ObjectCreationHandling __get__objectCreationHandling() const;

 Newtonsoft::Json::NullValueHandling __declspec(property(get=__get__nullValueHandling, put=__set__nullValueHandling))  _nullValueHandling;

constexpr void __set__nullValueHandling(Newtonsoft::Json::NullValueHandling value) ;

constexpr Newtonsoft::Json::NullValueHandling __get__nullValueHandling() const;

 Newtonsoft::Json::DefaultValueHandling __declspec(property(get=__get__defaultValueHandling, put=__set__defaultValueHandling))  _defaultValueHandling;

constexpr void __set__defaultValueHandling(Newtonsoft::Json::DefaultValueHandling value) ;

constexpr Newtonsoft::Json::DefaultValueHandling __get__defaultValueHandling() const;

 Newtonsoft::Json::ConstructorHandling __declspec(property(get=__get__constructorHandling, put=__set__constructorHandling))  _constructorHandling;

constexpr void __set__constructorHandling(Newtonsoft::Json::ConstructorHandling value) ;

constexpr Newtonsoft::Json::ConstructorHandling __get__constructorHandling() const;

 Newtonsoft::Json::MetadataPropertyHandling __declspec(property(get=__get__metadataPropertyHandling, put=__set__metadataPropertyHandling))  _metadataPropertyHandling;

constexpr void __set__metadataPropertyHandling(Newtonsoft::Json::MetadataPropertyHandling value) ;

constexpr Newtonsoft::Json::MetadataPropertyHandling __get__metadataPropertyHandling() const;

 Newtonsoft::Json::JsonConverterCollection __declspec(property(get=__get__converters, put=__set__converters))  _converters;

constexpr void __set__converters(Newtonsoft::Json::JsonConverterCollection value) ;

constexpr Newtonsoft::Json::JsonConverterCollection __get__converters() const;

 Newtonsoft::Json::Serialization::IContractResolver __declspec(property(get=__get__contractResolver, put=__set__contractResolver))  _contractResolver;

constexpr void __set__contractResolver(Newtonsoft::Json::Serialization::IContractResolver value) ;

constexpr Newtonsoft::Json::Serialization::IContractResolver __get__contractResolver() const;

 Newtonsoft::Json::Serialization::ITraceWriter __declspec(property(get=__get__traceWriter, put=__set__traceWriter))  _traceWriter;

constexpr void __set__traceWriter(Newtonsoft::Json::Serialization::ITraceWriter value) ;

constexpr Newtonsoft::Json::Serialization::ITraceWriter __get__traceWriter() const;

 System::Collections::IEqualityComparer __declspec(property(get=__get__equalityComparer, put=__set__equalityComparer))  _equalityComparer;

constexpr void __set__equalityComparer(System::Collections::IEqualityComparer value) ;

constexpr System::Collections::IEqualityComparer __get__equalityComparer() const;

 System::Runtime::Serialization::SerializationBinder __declspec(property(get=__get__binder, put=__set__binder))  _binder;

constexpr void __set__binder(System::Runtime::Serialization::SerializationBinder value) ;

constexpr System::Runtime::Serialization::SerializationBinder __get__binder() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get__context() const;

 Newtonsoft::Json::Serialization::IReferenceResolver __declspec(property(get=__get__referenceResolver, put=__set__referenceResolver))  _referenceResolver;

constexpr void __set__referenceResolver(Newtonsoft::Json::Serialization::IReferenceResolver value) ;

constexpr Newtonsoft::Json::Serialization::IReferenceResolver __get__referenceResolver() const;

 System::Nullable_1<Newtonsoft::Json::Formatting> __declspec(property(get=__get__formatting, put=__set__formatting))  _formatting;

constexpr void __set__formatting(System::Nullable_1<Newtonsoft::Json::Formatting> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::Formatting> __get__formatting() const;

 System::Nullable_1<Newtonsoft::Json::DateFormatHandling> __declspec(property(get=__get__dateFormatHandling, put=__set__dateFormatHandling))  _dateFormatHandling;

constexpr void __set__dateFormatHandling(System::Nullable_1<Newtonsoft::Json::DateFormatHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::DateFormatHandling> __get__dateFormatHandling() const;

 System::Nullable_1<Newtonsoft::Json::DateTimeZoneHandling> __declspec(property(get=__get__dateTimeZoneHandling, put=__set__dateTimeZoneHandling))  _dateTimeZoneHandling;

constexpr void __set__dateTimeZoneHandling(System::Nullable_1<Newtonsoft::Json::DateTimeZoneHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::DateTimeZoneHandling> __get__dateTimeZoneHandling() const;

 System::Nullable_1<Newtonsoft::Json::DateParseHandling> __declspec(property(get=__get__dateParseHandling, put=__set__dateParseHandling))  _dateParseHandling;

constexpr void __set__dateParseHandling(System::Nullable_1<Newtonsoft::Json::DateParseHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::DateParseHandling> __get__dateParseHandling() const;

 System::Nullable_1<Newtonsoft::Json::FloatFormatHandling> __declspec(property(get=__get__floatFormatHandling, put=__set__floatFormatHandling))  _floatFormatHandling;

constexpr void __set__floatFormatHandling(System::Nullable_1<Newtonsoft::Json::FloatFormatHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::FloatFormatHandling> __get__floatFormatHandling() const;

 System::Nullable_1<Newtonsoft::Json::FloatParseHandling> __declspec(property(get=__get__floatParseHandling, put=__set__floatParseHandling))  _floatParseHandling;

constexpr void __set__floatParseHandling(System::Nullable_1<Newtonsoft::Json::FloatParseHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::FloatParseHandling> __get__floatParseHandling() const;

 System::Nullable_1<Newtonsoft::Json::StringEscapeHandling> __declspec(property(get=__get__stringEscapeHandling, put=__set__stringEscapeHandling))  _stringEscapeHandling;

constexpr void __set__stringEscapeHandling(System::Nullable_1<Newtonsoft::Json::StringEscapeHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::StringEscapeHandling> __get__stringEscapeHandling() const;

 System::Globalization::CultureInfo __declspec(property(get=__get__culture, put=__set__culture))  _culture;

constexpr void __set__culture(System::Globalization::CultureInfo value) ;

constexpr System::Globalization::CultureInfo __get__culture() const;

 System::Nullable_1<int32_t> __declspec(property(get=__get__maxDepth, put=__set__maxDepth))  _maxDepth;

constexpr void __set__maxDepth(System::Nullable_1<int32_t> value) ;

constexpr System::Nullable_1<int32_t> __get__maxDepth() const;

 bool __declspec(property(get=__get__maxDepthSet, put=__set__maxDepthSet))  _maxDepthSet;

constexpr void __set__maxDepthSet(bool value) ;

constexpr bool __get__maxDepthSet() const;

 System::Nullable_1<bool> __declspec(property(get=__get__checkAdditionalContent, put=__set__checkAdditionalContent))  _checkAdditionalContent;

constexpr void __set__checkAdditionalContent(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__checkAdditionalContent() const;

 ::StringW __declspec(property(get=__get__dateFormatString, put=__set__dateFormatString))  _dateFormatString;

constexpr void __set__dateFormatString(::StringW value) ;

constexpr ::StringW __get__dateFormatString() const;

 bool __declspec(property(get=__get__dateFormatStringSet, put=__set__dateFormatStringSet))  _dateFormatStringSet;

constexpr void __set__dateFormatStringSet(bool value) ;

constexpr bool __get__dateFormatStringSet() const;

 System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> __declspec(property(get=__get_Error, put=__set_Error))  Error;

constexpr void __set_Error(System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> value) ;

constexpr System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> __get_Error() const;


// Properties

 Newtonsoft::Json::Serialization::IReferenceResolver __declspec(property(get=get_ReferenceResolver, put=set_ReferenceResolver))  ReferenceResolver;

 System::Runtime::Serialization::SerializationBinder __declspec(property(get=get_Binder, put=set_Binder))  Binder;

 Newtonsoft::Json::Serialization::ITraceWriter __declspec(property(get=get_TraceWriter, put=set_TraceWriter))  TraceWriter;

 System::Collections::IEqualityComparer __declspec(property(get=get_EqualityComparer, put=set_EqualityComparer))  EqualityComparer;

 Newtonsoft::Json::TypeNameHandling __declspec(property(get=get_TypeNameHandling, put=set_TypeNameHandling))  TypeNameHandling;

 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __declspec(property(get=get_TypeNameAssemblyFormat, put=set_TypeNameAssemblyFormat))  TypeNameAssemblyFormat;

 Newtonsoft::Json::PreserveReferencesHandling __declspec(property(get=get_PreserveReferencesHandling, put=set_PreserveReferencesHandling))  PreserveReferencesHandling;

 Newtonsoft::Json::ReferenceLoopHandling __declspec(property(get=get_ReferenceLoopHandling, put=set_ReferenceLoopHandling))  ReferenceLoopHandling;

 Newtonsoft::Json::MissingMemberHandling __declspec(property(get=get_MissingMemberHandling, put=set_MissingMemberHandling))  MissingMemberHandling;

 Newtonsoft::Json::NullValueHandling __declspec(property(get=get_NullValueHandling, put=set_NullValueHandling))  NullValueHandling;

 Newtonsoft::Json::DefaultValueHandling __declspec(property(get=get_DefaultValueHandling, put=set_DefaultValueHandling))  DefaultValueHandling;

 Newtonsoft::Json::ObjectCreationHandling __declspec(property(get=get_ObjectCreationHandling, put=set_ObjectCreationHandling))  ObjectCreationHandling;

 Newtonsoft::Json::ConstructorHandling __declspec(property(get=get_ConstructorHandling, put=set_ConstructorHandling))  ConstructorHandling;

 Newtonsoft::Json::MetadataPropertyHandling __declspec(property(get=get_MetadataPropertyHandling, put=set_MetadataPropertyHandling))  MetadataPropertyHandling;

 Newtonsoft::Json::JsonConverterCollection __declspec(property(get=get_Converters))  Converters;

 Newtonsoft::Json::Serialization::IContractResolver __declspec(property(get=get_ContractResolver, put=set_ContractResolver))  ContractResolver;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=get_Context, put=set_Context))  Context;

 Newtonsoft::Json::Formatting __declspec(property(get=get_Formatting, put=set_Formatting))  Formatting;

 Newtonsoft::Json::DateFormatHandling __declspec(property(get=get_DateFormatHandling, put=set_DateFormatHandling))  DateFormatHandling;

 Newtonsoft::Json::DateTimeZoneHandling __declspec(property(get=get_DateTimeZoneHandling, put=set_DateTimeZoneHandling))  DateTimeZoneHandling;

 Newtonsoft::Json::DateParseHandling __declspec(property(get=get_DateParseHandling, put=set_DateParseHandling))  DateParseHandling;

 Newtonsoft::Json::FloatParseHandling __declspec(property(get=get_FloatParseHandling, put=set_FloatParseHandling))  FloatParseHandling;

 Newtonsoft::Json::FloatFormatHandling __declspec(property(get=get_FloatFormatHandling, put=set_FloatFormatHandling))  FloatFormatHandling;

 Newtonsoft::Json::StringEscapeHandling __declspec(property(get=get_StringEscapeHandling, put=set_StringEscapeHandling))  StringEscapeHandling;

 ::StringW __declspec(property(get=get_DateFormatString, put=set_DateFormatString))  DateFormatString;

 System::Globalization::CultureInfo __declspec(property(get=get_Culture, put=set_Culture))  Culture;

 System::Nullable_1<int32_t> __declspec(property(get=get_MaxDepth, put=set_MaxDepth))  MaxDepth;

 bool __declspec(property(get=get_CheckAdditionalContent, put=set_CheckAdditionalContent))  CheckAdditionalContent;


// Methods

/// @brief Method add_Error addr 0x24d9030 size 0xb0 virtual true final false
 void add_Error(System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> value) ;

/// @brief Method remove_Error addr 0x24d90e0 size 0xb0 virtual true final false
 void remove_Error(System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> value) ;

/// @brief Method get_ReferenceResolver addr 0x24d9190 size 0x4 virtual true final false
 Newtonsoft::Json::Serialization::IReferenceResolver get_ReferenceResolver() ;

/// @brief Method set_ReferenceResolver addr 0x24d9200 size 0x7c virtual true final false
 void set_ReferenceResolver(Newtonsoft::Json::Serialization::IReferenceResolver value) ;

/// @brief Method get_Binder addr 0x24d927c size 0x8 virtual true final false
 System::Runtime::Serialization::SerializationBinder get_Binder() ;

/// @brief Method set_Binder addr 0x24d9284 size 0x7c virtual true final false
 void set_Binder(System::Runtime::Serialization::SerializationBinder value) ;

/// @brief Method get_TraceWriter addr 0x24d9300 size 0x8 virtual true final false
 Newtonsoft::Json::Serialization::ITraceWriter get_TraceWriter() ;

/// @brief Method set_TraceWriter addr 0x24d9308 size 0x8 virtual true final false
 void set_TraceWriter(Newtonsoft::Json::Serialization::ITraceWriter value) ;

/// @brief Method get_EqualityComparer addr 0x24d9310 size 0x8 virtual true final false
 System::Collections::IEqualityComparer get_EqualityComparer() ;

/// @brief Method set_EqualityComparer addr 0x24d9318 size 0x8 virtual true final false
 void set_EqualityComparer(System::Collections::IEqualityComparer value) ;

/// @brief Method get_TypeNameHandling addr 0x24d9320 size 0x8 virtual true final false
 Newtonsoft::Json::TypeNameHandling get_TypeNameHandling() ;

/// @brief Method set_TypeNameHandling addr 0x24d9328 size 0x64 virtual true final false
 void set_TypeNameHandling(Newtonsoft::Json::TypeNameHandling value) ;

/// @brief Method get_TypeNameAssemblyFormat addr 0x24d938c size 0x8 virtual true final false
 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat() ;

/// @brief Method set_TypeNameAssemblyFormat addr 0x24d9394 size 0x64 virtual true final false
 void set_TypeNameAssemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) ;

/// @brief Method get_PreserveReferencesHandling addr 0x24d93f8 size 0x8 virtual true final false
 Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling() ;

/// @brief Method set_PreserveReferencesHandling addr 0x24d9400 size 0x64 virtual true final false
 void set_PreserveReferencesHandling(Newtonsoft::Json::PreserveReferencesHandling value) ;

/// @brief Method get_ReferenceLoopHandling addr 0x24d9464 size 0x8 virtual true final false
 Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling() ;

/// @brief Method set_ReferenceLoopHandling addr 0x24d946c size 0x64 virtual true final false
 void set_ReferenceLoopHandling(Newtonsoft::Json::ReferenceLoopHandling value) ;

/// @brief Method get_MissingMemberHandling addr 0x24d94d0 size 0x8 virtual true final false
 Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling() ;

/// @brief Method set_MissingMemberHandling addr 0x24d94d8 size 0x64 virtual true final false
 void set_MissingMemberHandling(Newtonsoft::Json::MissingMemberHandling value) ;

/// @brief Method get_NullValueHandling addr 0x24d953c size 0x8 virtual true final false
 Newtonsoft::Json::NullValueHandling get_NullValueHandling() ;

/// @brief Method set_NullValueHandling addr 0x24d9544 size 0x64 virtual true final false
 void set_NullValueHandling(Newtonsoft::Json::NullValueHandling value) ;

/// @brief Method get_DefaultValueHandling addr 0x24d95a8 size 0x8 virtual true final false
 Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling() ;

/// @brief Method set_DefaultValueHandling addr 0x24d95b0 size 0x64 virtual true final false
 void set_DefaultValueHandling(Newtonsoft::Json::DefaultValueHandling value) ;

/// @brief Method get_ObjectCreationHandling addr 0x24d9614 size 0x8 virtual true final false
 Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling() ;

/// @brief Method set_ObjectCreationHandling addr 0x24d961c size 0x64 virtual true final false
 void set_ObjectCreationHandling(Newtonsoft::Json::ObjectCreationHandling value) ;

/// @brief Method get_ConstructorHandling addr 0x24d9680 size 0x8 virtual true final false
 Newtonsoft::Json::ConstructorHandling get_ConstructorHandling() ;

/// @brief Method set_ConstructorHandling addr 0x24d9688 size 0x64 virtual true final false
 void set_ConstructorHandling(Newtonsoft::Json::ConstructorHandling value) ;

/// @brief Method get_MetadataPropertyHandling addr 0x24d96ec size 0x8 virtual true final false
 Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling() ;

/// @brief Method set_MetadataPropertyHandling addr 0x24d96f4 size 0x64 virtual true final false
 void set_MetadataPropertyHandling(Newtonsoft::Json::MetadataPropertyHandling value) ;

/// @brief Method get_Converters addr 0x24d9758 size 0x68 virtual true final false
 Newtonsoft::Json::JsonConverterCollection get_Converters() ;

/// @brief Method get_ContractResolver addr 0x24d97c0 size 0x8 virtual true final false
 Newtonsoft::Json::Serialization::IContractResolver get_ContractResolver() ;

/// @brief Method set_ContractResolver addr 0x24d97c8 size 0xa8 virtual true final false
 void set_ContractResolver(Newtonsoft::Json::Serialization::IContractResolver value) ;

/// @brief Method get_Context addr 0x24d9870 size 0xc virtual true final false
 System::Runtime::Serialization::StreamingContext get_Context() ;

/// @brief Method set_Context addr 0x24d987c size 0x8 virtual true final false
 void set_Context(System::Runtime::Serialization::StreamingContext value) ;

/// @brief Method get_Formatting addr 0x24d9884 size 0x50 virtual true final false
 Newtonsoft::Json::Formatting get_Formatting() ;

/// @brief Method set_Formatting addr 0x24d98d4 size 0x68 virtual true final false
 void set_Formatting(Newtonsoft::Json::Formatting value) ;

/// @brief Method get_DateFormatHandling addr 0x24d993c size 0x50 virtual true final false
 Newtonsoft::Json::DateFormatHandling get_DateFormatHandling() ;

/// @brief Method set_DateFormatHandling addr 0x24d998c size 0x68 virtual true final false
 void set_DateFormatHandling(Newtonsoft::Json::DateFormatHandling value) ;

/// @brief Method get_DateTimeZoneHandling addr 0x24d99f4 size 0x54 virtual true final false
 Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling() ;

/// @brief Method set_DateTimeZoneHandling addr 0x24d9a48 size 0x68 virtual true final false
 void set_DateTimeZoneHandling(Newtonsoft::Json::DateTimeZoneHandling value) ;

/// @brief Method get_DateParseHandling addr 0x24d9ab0 size 0x50 virtual true final false
 Newtonsoft::Json::DateParseHandling get_DateParseHandling() ;

/// @brief Method set_DateParseHandling addr 0x24d9b00 size 0x68 virtual true final false
 void set_DateParseHandling(Newtonsoft::Json::DateParseHandling value) ;

/// @brief Method get_FloatParseHandling addr 0x24d9b68 size 0x50 virtual true final false
 Newtonsoft::Json::FloatParseHandling get_FloatParseHandling() ;

/// @brief Method set_FloatParseHandling addr 0x24d9bb8 size 0x68 virtual true final false
 void set_FloatParseHandling(Newtonsoft::Json::FloatParseHandling value) ;

/// @brief Method get_FloatFormatHandling addr 0x24d9c20 size 0x50 virtual true final false
 Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling() ;

/// @brief Method set_FloatFormatHandling addr 0x24d9c70 size 0x68 virtual true final false
 void set_FloatFormatHandling(Newtonsoft::Json::FloatFormatHandling value) ;

/// @brief Method get_StringEscapeHandling addr 0x24d9cd8 size 0x50 virtual true final false
 Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling() ;

/// @brief Method set_StringEscapeHandling addr 0x24d9d28 size 0x68 virtual true final false
 void set_StringEscapeHandling(Newtonsoft::Json::StringEscapeHandling value) ;

/// @brief Method get_DateFormatString addr 0x24d9d90 size 0x50 virtual true final false
 ::StringW get_DateFormatString() ;

/// @brief Method set_DateFormatString addr 0x24d9de0 size 0x10 virtual true final false
 void set_DateFormatString(::StringW value) ;

/// @brief Method get_Culture addr 0x24d9df0 size 0x64 virtual true final false
 System::Globalization::CultureInfo get_Culture() ;

/// @brief Method set_Culture addr 0x24d9e54 size 0x8 virtual true final false
 void set_Culture(System::Globalization::CultureInfo value) ;

/// @brief Method get_MaxDepth addr 0x24d9e5c size 0x8 virtual true final false
 System::Nullable_1<int32_t> get_MaxDepth() ;

/// @brief Method set_MaxDepth addr 0x24d9e64 size 0xc8 virtual true final false
 void set_MaxDepth(System::Nullable_1<int32_t> value) ;

/// @brief Method get_CheckAdditionalContent addr 0x24d9f2c size 0x5c virtual true final false
 bool get_CheckAdditionalContent() ;

/// @brief Method set_CheckAdditionalContent addr 0x24d9f88 size 0x68 virtual true final false
 void set_CheckAdditionalContent(bool value) ;

/// @brief Method IsCheckAdditionalContentSet addr 0x24d82e8 size 0x3c virtual false final false
 bool IsCheckAdditionalContentSet() ;

// Ctor Parameters []
explicit JsonSerializer() ;

/// @brief Method .ctor addr 0x24d9ff0 size 0x130 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x24da120 size 0x58 virtual false final false
static Newtonsoft::Json::JsonSerializer Create() ;

/// @brief Method Create addr 0x24da178 size 0x34 virtual false final false
static Newtonsoft::Json::JsonSerializer Create(Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method CreateDefault addr 0x24da7ec size 0xa4 virtual false final false
static Newtonsoft::Json::JsonSerializer CreateDefault() ;

/// @brief Method CreateDefault addr 0x24d7bf4 size 0x34 virtual false final false
static Newtonsoft::Json::JsonSerializer CreateDefault(Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method ApplySerializerSettings addr 0x24da1ac size 0x640 virtual false final false
static void ApplySerializerSettings(Newtonsoft::Json::JsonSerializer serializer, Newtonsoft::Json::JsonSerializerSettings settings) ;

/// @brief Method Populate addr 0x24da890 size 0x84 virtual false final false
 void Populate(System::IO::TextReader reader, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method Populate addr 0x24d8608 size 0x10 virtual false final false
 void Populate(Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method PopulateInternal addr 0x24da914 size 0x29c virtual true final false
 void PopulateInternal(Newtonsoft::Json::JsonReader reader, ::bs_hook::Il2CppWrapperType target) ;

/// @brief Method Deserialize addr 0x24db0b4 size 0x14 virtual false final false
 ::bs_hook::Il2CppWrapperType Deserialize(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method Deserialize addr 0x24db0c8 size 0x84 virtual false final false
 ::bs_hook::Il2CppWrapperType Deserialize(System::IO::TextReader reader, System::Type objectType) ;

/// @brief Method Deserialize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T Deserialize(Newtonsoft::Json::JsonReader reader) ;

/// @brief Method Deserialize addr 0x24d8324 size 0x10 virtual false final false
 ::bs_hook::Il2CppWrapperType Deserialize(Newtonsoft::Json::JsonReader reader, System::Type objectType) ;

/// @brief Method DeserializeInternal addr 0x24db14c size 0x298 virtual true final false
 ::bs_hook::Il2CppWrapperType DeserializeInternal(Newtonsoft::Json::JsonReader reader, System::Type objectType) ;

/// @brief Method SetupReader addr 0x24dabb0 size 0x388 virtual false final false
 void SetupReader(Newtonsoft::Json::JsonReader reader, ByRef<System::Globalization::CultureInfo> previousCulture, ByRef<System::Nullable_1<Newtonsoft::Json::DateTimeZoneHandling>> previousDateTimeZoneHandling, ByRef<System::Nullable_1<Newtonsoft::Json::DateParseHandling>> previousDateParseHandling, ByRef<System::Nullable_1<Newtonsoft::Json::FloatParseHandling>> previousFloatParseHandling, ByRef<System::Nullable_1<int32_t>> previousMaxDepth, ByRef<::StringW> previousDateFormatString) ;

/// @brief Method ResetReader addr 0x24daf38 size 0x17c virtual false final false
 void ResetReader(Newtonsoft::Json::JsonReader reader, System::Globalization::CultureInfo previousCulture, System::Nullable_1<Newtonsoft::Json::DateTimeZoneHandling> previousDateTimeZoneHandling, System::Nullable_1<Newtonsoft::Json::DateParseHandling> previousDateParseHandling, System::Nullable_1<Newtonsoft::Json::FloatParseHandling> previousFloatParseHandling, System::Nullable_1<int32_t> previousMaxDepth, ::StringW previousDateFormatString) ;

/// @brief Method Serialize addr 0x24db3e4 size 0x88 virtual false final false
 void Serialize(System::IO::TextWriter textWriter, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Serialize addr 0x24d7eac size 0x10 virtual false final false
 void Serialize(Newtonsoft::Json::JsonWriter jsonWriter, ::bs_hook::Il2CppWrapperType value, System::Type objectType) ;

/// @brief Method Serialize addr 0x24db480 size 0x94 virtual false final false
 void Serialize(System::IO::TextWriter textWriter, ::bs_hook::Il2CppWrapperType value, System::Type objectType) ;

/// @brief Method Serialize addr 0x24db46c size 0x14 virtual false final false
 void Serialize(Newtonsoft::Json::JsonWriter jsonWriter, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SerializeInternal addr 0x24db514 size 0x59c virtual true final false
 void SerializeInternal(Newtonsoft::Json::JsonWriter jsonWriter, ::bs_hook::Il2CppWrapperType value, System::Type objectType) ;

/// @brief Method GetReferenceResolver addr 0x24d9194 size 0x6c virtual false final false
 Newtonsoft::Json::Serialization::IReferenceResolver GetReferenceResolver() ;

/// @brief Method GetMatchingConverter addr 0x24dbab0 size 0x8 virtual false final false
 Newtonsoft::Json::JsonConverter GetMatchingConverter(System::Type type) ;

/// @brief Method GetMatchingConverter addr 0x24dbab8 size 0x15c virtual false final false
static Newtonsoft::Json::JsonConverter GetMatchingConverter(System::Collections::Generic::IList_1<Newtonsoft::Json::JsonConverter> converters, System::Type objectType) ;

/// @brief Method OnError addr 0x24dbc14 size 0x28 virtual false final false
 void OnError(Newtonsoft::Json::Serialization::ErrorEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonSerializer);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonSerializer, "Newtonsoft.Json", "JsonSerializer");
