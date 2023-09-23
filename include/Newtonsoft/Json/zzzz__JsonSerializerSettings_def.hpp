#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
namespace Newtonsoft::Json {
struct MetadataPropertyHandling;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace Newtonsoft::Json::Serialization {
class ITraceWriter;
}
namespace Newtonsoft::Json {
struct NullValueHandling;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace Newtonsoft::Json {
struct DefaultValueHandling;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
namespace Newtonsoft::Json {
struct MissingMemberHandling;
}
namespace Newtonsoft::Json {
struct Formatting;
}
namespace Newtonsoft::Json {
struct PreserveReferencesHandling;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace Newtonsoft::Json {
struct ConstructorHandling;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json {
struct DateParseHandling;
}
namespace Newtonsoft::Json {
struct ObjectCreationHandling;
}
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonSerializerSettings;
}
namespace Newtonsoft::Json {
class Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0;
}
// Type: ::<>c__DisplayClass90_0
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11761))
// CS Name: Newtonsoft.Json.JsonSerializerSettings::<>c__DisplayClass90_0
class CORDL_TYPE Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0", modifiers: " const&", def_value: None }]
constexpr Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0(Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0", modifiers: "&&", def_value: None }]
constexpr Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0(Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0& operator=(Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0&& o) noexcept = default;
  constexpr Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0& operator=(Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0 const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Serialization::IReferenceResolver __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(Newtonsoft::Json::Serialization::IReferenceResolver value) ;

constexpr Newtonsoft::Json::Serialization::IReferenceResolver __get_value() const;


// Methods

// Ctor Parameters []
explicit Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0() ;

/// @brief Method .ctor addr 0x24c8d40 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <set_ReferenceResolver>b__0 addr 0x24c9844 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::IReferenceResolver _set_ReferenceResolver_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
// Type: Newtonsoft.Json::JsonSerializerSettings
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11762))
// CS Name: Newtonsoft.Json.JsonSerializerSettings
class CORDL_TYPE JsonSerializerSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass90_0 = Newtonsoft::Json::Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x110};

virtual ~JsonSerializerSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerSettings", modifiers: " const&", def_value: None }]
constexpr JsonSerializerSettings(JsonSerializerSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonSerializerSettings", modifiers: "&&", def_value: None }]
constexpr JsonSerializerSettings(JsonSerializerSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonSerializerSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonSerializerSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonSerializerSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonSerializerSettings& operator=(JsonSerializerSettings&& o) noexcept = default;
  constexpr JsonSerializerSettings& operator=(JsonSerializerSettings const& o) noexcept = default;
                


// Fields

/// @brief Field DefaultReferenceLoopHandling offset 0
static Newtonsoft::Json::ReferenceLoopHandling const DefaultReferenceLoopHandling;

/// @brief Field DefaultMissingMemberHandling offset 0
static Newtonsoft::Json::MissingMemberHandling const DefaultMissingMemberHandling;

/// @brief Field DefaultNullValueHandling offset 0
static Newtonsoft::Json::NullValueHandling const DefaultNullValueHandling;

/// @brief Field DefaultDefaultValueHandling offset 0
static Newtonsoft::Json::DefaultValueHandling const DefaultDefaultValueHandling;

/// @brief Field DefaultObjectCreationHandling offset 0
static Newtonsoft::Json::ObjectCreationHandling const DefaultObjectCreationHandling;

/// @brief Field DefaultPreserveReferencesHandling offset 0
static Newtonsoft::Json::PreserveReferencesHandling const DefaultPreserveReferencesHandling;

/// @brief Field DefaultConstructorHandling offset 0
static Newtonsoft::Json::ConstructorHandling const DefaultConstructorHandling;

/// @brief Field DefaultTypeNameHandling offset 0
static Newtonsoft::Json::TypeNameHandling const DefaultTypeNameHandling;

/// @brief Field DefaultMetadataPropertyHandling offset 0
static Newtonsoft::Json::MetadataPropertyHandling const DefaultMetadataPropertyHandling;

/// @brief Field DefaultTypeNameAssemblyFormat offset 0
static System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const DefaultTypeNameAssemblyFormat;

static System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_DefaultContext, put=__set_DefaultContext))  DefaultContext;

static void __set_DefaultContext(System::Runtime::Serialization::StreamingContext value) ;

static System::Runtime::Serialization::StreamingContext __get_DefaultContext() ;

/// @brief Field DefaultFormatting offset 0
static Newtonsoft::Json::Formatting const DefaultFormatting;

/// @brief Field DefaultDateFormatHandling offset 0
static Newtonsoft::Json::DateFormatHandling const DefaultDateFormatHandling;

/// @brief Field DefaultDateTimeZoneHandling offset 0
static Newtonsoft::Json::DateTimeZoneHandling const DefaultDateTimeZoneHandling;

/// @brief Field DefaultDateParseHandling offset 0
static Newtonsoft::Json::DateParseHandling const DefaultDateParseHandling;

/// @brief Field DefaultFloatParseHandling offset 0
static Newtonsoft::Json::FloatParseHandling const DefaultFloatParseHandling;

/// @brief Field DefaultFloatFormatHandling offset 0
static Newtonsoft::Json::FloatFormatHandling const DefaultFloatFormatHandling;

/// @brief Field DefaultStringEscapeHandling offset 0
static Newtonsoft::Json::StringEscapeHandling const DefaultStringEscapeHandling;

/// @brief Field DefaultFormatterAssemblyStyle offset 0
static System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const DefaultFormatterAssemblyStyle;

static System::Globalization::CultureInfo __declspec(property(get=__get_DefaultCulture, put=__set_DefaultCulture))  DefaultCulture;

static void __set_DefaultCulture(System::Globalization::CultureInfo value) ;

static System::Globalization::CultureInfo __get_DefaultCulture() ;

/// @brief Field DefaultCheckAdditionalContent offset 0
static constexpr bool  DefaultCheckAdditionalContent{false};

/// @brief Field DefaultDateFormatString offset 0
static constexpr ::ConstString  DefaultDateFormatString{u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.FFFFFFFK"};

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

 System::Nullable_1<bool> __declspec(property(get=__get__checkAdditionalContent, put=__set__checkAdditionalContent))  _checkAdditionalContent;

constexpr void __set__checkAdditionalContent(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__checkAdditionalContent() const;

 System::Nullable_1<int32_t> __declspec(property(get=__get__maxDepth, put=__set__maxDepth))  _maxDepth;

constexpr void __set__maxDepth(System::Nullable_1<int32_t> value) ;

constexpr System::Nullable_1<int32_t> __get__maxDepth() const;

 bool __declspec(property(get=__get__maxDepthSet, put=__set__maxDepthSet))  _maxDepthSet;

constexpr void __set__maxDepthSet(bool value) ;

constexpr bool __get__maxDepthSet() const;

 ::StringW __declspec(property(get=__get__dateFormatString, put=__set__dateFormatString))  _dateFormatString;

constexpr void __set__dateFormatString(::StringW value) ;

constexpr ::StringW __get__dateFormatString() const;

 bool __declspec(property(get=__get__dateFormatStringSet, put=__set__dateFormatStringSet))  _dateFormatStringSet;

constexpr void __set__dateFormatStringSet(bool value) ;

constexpr bool __get__dateFormatStringSet() const;

 System::Nullable_1<System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> __declspec(property(get=__get__typeNameAssemblyFormat, put=__set__typeNameAssemblyFormat))  _typeNameAssemblyFormat;

constexpr void __set__typeNameAssemblyFormat(System::Nullable_1<System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> value) ;

constexpr System::Nullable_1<System::Runtime::Serialization::Formatters::FormatterAssemblyStyle> __get__typeNameAssemblyFormat() const;

 System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> __declspec(property(get=__get__defaultValueHandling, put=__set__defaultValueHandling))  _defaultValueHandling;

constexpr void __set__defaultValueHandling(System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::DefaultValueHandling> __get__defaultValueHandling() const;

 System::Nullable_1<Newtonsoft::Json::PreserveReferencesHandling> __declspec(property(get=__get__preserveReferencesHandling, put=__set__preserveReferencesHandling))  _preserveReferencesHandling;

constexpr void __set__preserveReferencesHandling(System::Nullable_1<Newtonsoft::Json::PreserveReferencesHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::PreserveReferencesHandling> __get__preserveReferencesHandling() const;

 System::Nullable_1<Newtonsoft::Json::NullValueHandling> __declspec(property(get=__get__nullValueHandling, put=__set__nullValueHandling))  _nullValueHandling;

constexpr void __set__nullValueHandling(System::Nullable_1<Newtonsoft::Json::NullValueHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::NullValueHandling> __get__nullValueHandling() const;

 System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> __declspec(property(get=__get__objectCreationHandling, put=__set__objectCreationHandling))  _objectCreationHandling;

constexpr void __set__objectCreationHandling(System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ObjectCreationHandling> __get__objectCreationHandling() const;

 System::Nullable_1<Newtonsoft::Json::MissingMemberHandling> __declspec(property(get=__get__missingMemberHandling, put=__set__missingMemberHandling))  _missingMemberHandling;

constexpr void __set__missingMemberHandling(System::Nullable_1<Newtonsoft::Json::MissingMemberHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::MissingMemberHandling> __get__missingMemberHandling() const;

 System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __declspec(property(get=__get__referenceLoopHandling, put=__set__referenceLoopHandling))  _referenceLoopHandling;

constexpr void __set__referenceLoopHandling(System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ReferenceLoopHandling> __get__referenceLoopHandling() const;

 System::Nullable_1<System::Runtime::Serialization::StreamingContext> __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(System::Nullable_1<System::Runtime::Serialization::StreamingContext> value) ;

constexpr System::Nullable_1<System::Runtime::Serialization::StreamingContext> __get__context() const;

 System::Nullable_1<Newtonsoft::Json::ConstructorHandling> __declspec(property(get=__get__constructorHandling, put=__set__constructorHandling))  _constructorHandling;

constexpr void __set__constructorHandling(System::Nullable_1<Newtonsoft::Json::ConstructorHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::ConstructorHandling> __get__constructorHandling() const;

 System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __declspec(property(get=__get__typeNameHandling, put=__set__typeNameHandling))  _typeNameHandling;

constexpr void __set__typeNameHandling(System::Nullable_1<Newtonsoft::Json::TypeNameHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::TypeNameHandling> __get__typeNameHandling() const;

 System::Nullable_1<Newtonsoft::Json::MetadataPropertyHandling> __declspec(property(get=__get__metadataPropertyHandling, put=__set__metadataPropertyHandling))  _metadataPropertyHandling;

constexpr void __set__metadataPropertyHandling(System::Nullable_1<Newtonsoft::Json::MetadataPropertyHandling> value) ;

constexpr System::Nullable_1<Newtonsoft::Json::MetadataPropertyHandling> __get__metadataPropertyHandling() const;

 System::Collections::Generic::IList_1<Newtonsoft::Json::JsonConverter> __declspec(property(get=__get__Converters_k__BackingField, put=__set__Converters_k__BackingField))  _Converters_k__BackingField;

constexpr void __set__Converters_k__BackingField(System::Collections::Generic::IList_1<Newtonsoft::Json::JsonConverter> value) ;

constexpr System::Collections::Generic::IList_1<Newtonsoft::Json::JsonConverter> __get__Converters_k__BackingField() const;

 Newtonsoft::Json::Serialization::IContractResolver __declspec(property(get=__get__ContractResolver_k__BackingField, put=__set__ContractResolver_k__BackingField))  _ContractResolver_k__BackingField;

constexpr void __set__ContractResolver_k__BackingField(Newtonsoft::Json::Serialization::IContractResolver value) ;

constexpr Newtonsoft::Json::Serialization::IContractResolver __get__ContractResolver_k__BackingField() const;

 System::Collections::IEqualityComparer __declspec(property(get=__get__EqualityComparer_k__BackingField, put=__set__EqualityComparer_k__BackingField))  _EqualityComparer_k__BackingField;

constexpr void __set__EqualityComparer_k__BackingField(System::Collections::IEqualityComparer value) ;

constexpr System::Collections::IEqualityComparer __get__EqualityComparer_k__BackingField() const;

 System::Func_1<Newtonsoft::Json::Serialization::IReferenceResolver> __declspec(property(get=__get__ReferenceResolverProvider_k__BackingField, put=__set__ReferenceResolverProvider_k__BackingField))  _ReferenceResolverProvider_k__BackingField;

constexpr void __set__ReferenceResolverProvider_k__BackingField(System::Func_1<Newtonsoft::Json::Serialization::IReferenceResolver> value) ;

constexpr System::Func_1<Newtonsoft::Json::Serialization::IReferenceResolver> __get__ReferenceResolverProvider_k__BackingField() const;

 Newtonsoft::Json::Serialization::ITraceWriter __declspec(property(get=__get__TraceWriter_k__BackingField, put=__set__TraceWriter_k__BackingField))  _TraceWriter_k__BackingField;

constexpr void __set__TraceWriter_k__BackingField(Newtonsoft::Json::Serialization::ITraceWriter value) ;

constexpr Newtonsoft::Json::Serialization::ITraceWriter __get__TraceWriter_k__BackingField() const;

 System::Runtime::Serialization::SerializationBinder __declspec(property(get=__get__Binder_k__BackingField, put=__set__Binder_k__BackingField))  _Binder_k__BackingField;

constexpr void __set__Binder_k__BackingField(System::Runtime::Serialization::SerializationBinder value) ;

constexpr System::Runtime::Serialization::SerializationBinder __get__Binder_k__BackingField() const;

 System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField))  _Error_k__BackingField;

constexpr void __set__Error_k__BackingField(System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> value) ;

constexpr System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> __get__Error_k__BackingField() const;


// Properties

 Newtonsoft::Json::ReferenceLoopHandling __declspec(property(get=get_ReferenceLoopHandling, put=set_ReferenceLoopHandling))  ReferenceLoopHandling;

 Newtonsoft::Json::MissingMemberHandling __declspec(property(get=get_MissingMemberHandling, put=set_MissingMemberHandling))  MissingMemberHandling;

 Newtonsoft::Json::ObjectCreationHandling __declspec(property(get=get_ObjectCreationHandling, put=set_ObjectCreationHandling))  ObjectCreationHandling;

 Newtonsoft::Json::NullValueHandling __declspec(property(get=get_NullValueHandling, put=set_NullValueHandling))  NullValueHandling;

 Newtonsoft::Json::DefaultValueHandling __declspec(property(get=get_DefaultValueHandling, put=set_DefaultValueHandling))  DefaultValueHandling;

 System::Collections::Generic::IList_1<Newtonsoft::Json::JsonConverter> __declspec(property(get=get_Converters, put=set_Converters))  Converters;

 Newtonsoft::Json::PreserveReferencesHandling __declspec(property(get=get_PreserveReferencesHandling, put=set_PreserveReferencesHandling))  PreserveReferencesHandling;

 Newtonsoft::Json::TypeNameHandling __declspec(property(get=get_TypeNameHandling, put=set_TypeNameHandling))  TypeNameHandling;

 Newtonsoft::Json::MetadataPropertyHandling __declspec(property(get=get_MetadataPropertyHandling, put=set_MetadataPropertyHandling))  MetadataPropertyHandling;

 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle __declspec(property(get=get_TypeNameAssemblyFormat, put=set_TypeNameAssemblyFormat))  TypeNameAssemblyFormat;

 Newtonsoft::Json::ConstructorHandling __declspec(property(get=get_ConstructorHandling, put=set_ConstructorHandling))  ConstructorHandling;

 Newtonsoft::Json::Serialization::IContractResolver __declspec(property(get=get_ContractResolver, put=set_ContractResolver))  ContractResolver;

 System::Collections::IEqualityComparer __declspec(property(get=get_EqualityComparer, put=set_EqualityComparer))  EqualityComparer;

 Newtonsoft::Json::Serialization::IReferenceResolver __declspec(property(get=get_ReferenceResolver, put=set_ReferenceResolver))  ReferenceResolver;

 System::Func_1<Newtonsoft::Json::Serialization::IReferenceResolver> __declspec(property(get=get_ReferenceResolverProvider, put=set_ReferenceResolverProvider))  ReferenceResolverProvider;

 Newtonsoft::Json::Serialization::ITraceWriter __declspec(property(get=get_TraceWriter, put=set_TraceWriter))  TraceWriter;

 System::Runtime::Serialization::SerializationBinder __declspec(property(get=get_Binder, put=set_Binder))  Binder;

 System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> __declspec(property(get=get_Error, put=set_Error))  Error;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=get_Context, put=set_Context))  Context;

 ::StringW __declspec(property(get=get_DateFormatString, put=set_DateFormatString))  DateFormatString;

 System::Nullable_1<int32_t> __declspec(property(get=get_MaxDepth, put=set_MaxDepth))  MaxDepth;

 Newtonsoft::Json::Formatting __declspec(property(get=get_Formatting, put=set_Formatting))  Formatting;

 Newtonsoft::Json::DateFormatHandling __declspec(property(get=get_DateFormatHandling, put=set_DateFormatHandling))  DateFormatHandling;

 Newtonsoft::Json::DateTimeZoneHandling __declspec(property(get=get_DateTimeZoneHandling, put=set_DateTimeZoneHandling))  DateTimeZoneHandling;

 Newtonsoft::Json::DateParseHandling __declspec(property(get=get_DateParseHandling, put=set_DateParseHandling))  DateParseHandling;

 Newtonsoft::Json::FloatFormatHandling __declspec(property(get=get_FloatFormatHandling, put=set_FloatFormatHandling))  FloatFormatHandling;

 Newtonsoft::Json::FloatParseHandling __declspec(property(get=get_FloatParseHandling, put=set_FloatParseHandling))  FloatParseHandling;

 Newtonsoft::Json::StringEscapeHandling __declspec(property(get=get_StringEscapeHandling, put=set_StringEscapeHandling))  StringEscapeHandling;

 System::Globalization::CultureInfo __declspec(property(get=get_Culture, put=set_Culture))  Culture;

 bool __declspec(property(get=get_CheckAdditionalContent, put=set_CheckAdditionalContent))  CheckAdditionalContent;


// Methods

/// @brief Method get_ReferenceLoopHandling addr 0x24c8500 size 0x50 virtual false final false
 Newtonsoft::Json::ReferenceLoopHandling get_ReferenceLoopHandling() ;

/// @brief Method set_ReferenceLoopHandling addr 0x24c8550 size 0x68 virtual false final false
 void set_ReferenceLoopHandling(Newtonsoft::Json::ReferenceLoopHandling value) ;

/// @brief Method get_MissingMemberHandling addr 0x24c85b8 size 0x50 virtual false final false
 Newtonsoft::Json::MissingMemberHandling get_MissingMemberHandling() ;

/// @brief Method set_MissingMemberHandling addr 0x24c8608 size 0x68 virtual false final false
 void set_MissingMemberHandling(Newtonsoft::Json::MissingMemberHandling value) ;

/// @brief Method get_ObjectCreationHandling addr 0x24c8670 size 0x50 virtual false final false
 Newtonsoft::Json::ObjectCreationHandling get_ObjectCreationHandling() ;

/// @brief Method set_ObjectCreationHandling addr 0x24c86c0 size 0x68 virtual false final false
 void set_ObjectCreationHandling(Newtonsoft::Json::ObjectCreationHandling value) ;

/// @brief Method get_NullValueHandling addr 0x24c8728 size 0x50 virtual false final false
 Newtonsoft::Json::NullValueHandling get_NullValueHandling() ;

/// @brief Method set_NullValueHandling addr 0x24c8778 size 0x68 virtual false final false
 void set_NullValueHandling(Newtonsoft::Json::NullValueHandling value) ;

/// @brief Method get_DefaultValueHandling addr 0x24c87e0 size 0x50 virtual false final false
 Newtonsoft::Json::DefaultValueHandling get_DefaultValueHandling() ;

/// @brief Method set_DefaultValueHandling addr 0x24c8830 size 0x68 virtual false final false
 void set_DefaultValueHandling(Newtonsoft::Json::DefaultValueHandling value) ;

/// @brief Method get_Converters addr 0x24c8898 size 0x8 virtual false final false
 System::Collections::Generic::IList_1<Newtonsoft::Json::JsonConverter> get_Converters() ;

/// @brief Method set_Converters addr 0x24c88a0 size 0x8 virtual false final false
 void set_Converters(System::Collections::Generic::IList_1<Newtonsoft::Json::JsonConverter> value) ;

/// @brief Method get_PreserveReferencesHandling addr 0x24c88a8 size 0x50 virtual false final false
 Newtonsoft::Json::PreserveReferencesHandling get_PreserveReferencesHandling() ;

/// @brief Method set_PreserveReferencesHandling addr 0x24c88f8 size 0x68 virtual false final false
 void set_PreserveReferencesHandling(Newtonsoft::Json::PreserveReferencesHandling value) ;

/// @brief Method get_TypeNameHandling addr 0x24c8960 size 0x50 virtual false final false
 Newtonsoft::Json::TypeNameHandling get_TypeNameHandling() ;

/// @brief Method set_TypeNameHandling addr 0x24c89b0 size 0x68 virtual false final false
 void set_TypeNameHandling(Newtonsoft::Json::TypeNameHandling value) ;

/// @brief Method get_MetadataPropertyHandling addr 0x24c8a18 size 0x50 virtual false final false
 Newtonsoft::Json::MetadataPropertyHandling get_MetadataPropertyHandling() ;

/// @brief Method set_MetadataPropertyHandling addr 0x24c8a68 size 0x68 virtual false final false
 void set_MetadataPropertyHandling(Newtonsoft::Json::MetadataPropertyHandling value) ;

/// @brief Method get_TypeNameAssemblyFormat addr 0x24c8ad0 size 0x50 virtual false final false
 System::Runtime::Serialization::Formatters::FormatterAssemblyStyle get_TypeNameAssemblyFormat() ;

/// @brief Method set_TypeNameAssemblyFormat addr 0x24c8b20 size 0x68 virtual false final false
 void set_TypeNameAssemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) ;

/// @brief Method get_ConstructorHandling addr 0x24c8b88 size 0x50 virtual false final false
 Newtonsoft::Json::ConstructorHandling get_ConstructorHandling() ;

/// @brief Method set_ConstructorHandling addr 0x24c8bd8 size 0x68 virtual false final false
 void set_ConstructorHandling(Newtonsoft::Json::ConstructorHandling value) ;

/// @brief Method get_ContractResolver addr 0x24c8c40 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::IContractResolver get_ContractResolver() ;

/// @brief Method set_ContractResolver addr 0x24c8c48 size 0x8 virtual false final false
 void set_ContractResolver(Newtonsoft::Json::Serialization::IContractResolver value) ;

/// @brief Method get_EqualityComparer addr 0x24c8c50 size 0x8 virtual false final false
 System::Collections::IEqualityComparer get_EqualityComparer() ;

/// @brief Method set_EqualityComparer addr 0x24c8c58 size 0x8 virtual false final false
 void set_EqualityComparer(System::Collections::IEqualityComparer value) ;

/// @brief Method get_ReferenceResolver addr 0x24c8c60 size 0x20 virtual false final false
 Newtonsoft::Json::Serialization::IReferenceResolver get_ReferenceResolver() ;

/// @brief Method set_ReferenceResolver addr 0x24c8c80 size 0xc0 virtual false final false
 void set_ReferenceResolver(Newtonsoft::Json::Serialization::IReferenceResolver value) ;

/// @brief Method get_ReferenceResolverProvider addr 0x24c8d48 size 0x8 virtual false final false
 System::Func_1<Newtonsoft::Json::Serialization::IReferenceResolver> get_ReferenceResolverProvider() ;

/// @brief Method set_ReferenceResolverProvider addr 0x24c8d50 size 0x8 virtual false final false
 void set_ReferenceResolverProvider(System::Func_1<Newtonsoft::Json::Serialization::IReferenceResolver> value) ;

/// @brief Method get_TraceWriter addr 0x24c8d58 size 0x8 virtual false final false
 Newtonsoft::Json::Serialization::ITraceWriter get_TraceWriter() ;

/// @brief Method set_TraceWriter addr 0x24c8d60 size 0x8 virtual false final false
 void set_TraceWriter(Newtonsoft::Json::Serialization::ITraceWriter value) ;

/// @brief Method get_Binder addr 0x24c8d68 size 0x8 virtual false final false
 System::Runtime::Serialization::SerializationBinder get_Binder() ;

/// @brief Method set_Binder addr 0x24c8d70 size 0x8 virtual false final false
 void set_Binder(System::Runtime::Serialization::SerializationBinder value) ;

/// @brief Method get_Error addr 0x24c8d78 size 0x8 virtual false final false
 System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> get_Error() ;

/// @brief Method set_Error addr 0x24c8d80 size 0x8 virtual false final false
 void set_Error(System::EventHandler_1<Newtonsoft::Json::Serialization::ErrorEventArgs> value) ;

/// @brief Method get_Context addr 0x24c8d88 size 0x90 virtual false final false
 System::Runtime::Serialization::StreamingContext get_Context() ;

/// @brief Method set_Context addr 0x24c8e18 size 0x84 virtual false final false
 void set_Context(System::Runtime::Serialization::StreamingContext value) ;

/// @brief Method get_DateFormatString addr 0x24c8e9c size 0x50 virtual false final false
 ::StringW get_DateFormatString() ;

/// @brief Method set_DateFormatString addr 0x24c8eec size 0x10 virtual false final false
 void set_DateFormatString(::StringW value) ;

/// @brief Method get_MaxDepth addr 0x24c8efc size 0x8 virtual false final false
 System::Nullable_1<int32_t> get_MaxDepth() ;

/// @brief Method set_MaxDepth addr 0x24c8f04 size 0xc8 virtual false final false
 void set_MaxDepth(System::Nullable_1<int32_t> value) ;

/// @brief Method get_Formatting addr 0x24c8fcc size 0x50 virtual false final false
 Newtonsoft::Json::Formatting get_Formatting() ;

/// @brief Method set_Formatting addr 0x24c901c size 0x68 virtual false final false
 void set_Formatting(Newtonsoft::Json::Formatting value) ;

/// @brief Method get_DateFormatHandling addr 0x24c9084 size 0x50 virtual false final false
 Newtonsoft::Json::DateFormatHandling get_DateFormatHandling() ;

/// @brief Method set_DateFormatHandling addr 0x24c90d4 size 0x68 virtual false final false
 void set_DateFormatHandling(Newtonsoft::Json::DateFormatHandling value) ;

/// @brief Method get_DateTimeZoneHandling addr 0x24c913c size 0x54 virtual false final false
 Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling() ;

/// @brief Method set_DateTimeZoneHandling addr 0x24c9190 size 0x68 virtual false final false
 void set_DateTimeZoneHandling(Newtonsoft::Json::DateTimeZoneHandling value) ;

/// @brief Method get_DateParseHandling addr 0x24c91f8 size 0x50 virtual false final false
 Newtonsoft::Json::DateParseHandling get_DateParseHandling() ;

/// @brief Method set_DateParseHandling addr 0x24c9248 size 0x68 virtual false final false
 void set_DateParseHandling(Newtonsoft::Json::DateParseHandling value) ;

/// @brief Method get_FloatFormatHandling addr 0x24c92b0 size 0x50 virtual false final false
 Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling() ;

/// @brief Method set_FloatFormatHandling addr 0x24c9300 size 0x68 virtual false final false
 void set_FloatFormatHandling(Newtonsoft::Json::FloatFormatHandling value) ;

/// @brief Method get_FloatParseHandling addr 0x24c9368 size 0x50 virtual false final false
 Newtonsoft::Json::FloatParseHandling get_FloatParseHandling() ;

/// @brief Method set_FloatParseHandling addr 0x24c93b8 size 0x68 virtual false final false
 void set_FloatParseHandling(Newtonsoft::Json::FloatParseHandling value) ;

/// @brief Method get_StringEscapeHandling addr 0x24c9420 size 0x50 virtual false final false
 Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling() ;

/// @brief Method set_StringEscapeHandling addr 0x24c9470 size 0x68 virtual false final false
 void set_StringEscapeHandling(Newtonsoft::Json::StringEscapeHandling value) ;

/// @brief Method get_Culture addr 0x24c94d8 size 0x64 virtual false final false
 System::Globalization::CultureInfo get_Culture() ;

/// @brief Method set_Culture addr 0x24c953c size 0x8 virtual false final false
 void set_Culture(System::Globalization::CultureInfo value) ;

/// @brief Method get_CheckAdditionalContent addr 0x24c9544 size 0x5c virtual false final false
 bool get_CheckAdditionalContent() ;

/// @brief Method set_CheckAdditionalContent addr 0x24c95a0 size 0x68 virtual false final false
 void set_CheckAdditionalContent(bool value) ;

// Ctor Parameters []
explicit JsonSerializerSettings() ;

/// @brief Method .ctor addr 0x24c9688 size 0x1bc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
NEED_NO_BOX(Newtonsoft::Json::JsonSerializerSettings);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::JsonSerializerSettings, "Newtonsoft.Json", "JsonSerializerSettings");
NEED_NO_BOX(Newtonsoft::Json::Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Newtonsoft__Json__JsonSerializerSettings____c__DisplayClass90_0, "Newtonsoft.Json", "JsonSerializerSettings/<>c__DisplayClass90_0");
