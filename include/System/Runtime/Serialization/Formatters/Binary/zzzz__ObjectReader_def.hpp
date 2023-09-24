#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class NameCache;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Remoting::Messaging {
class HeaderHandler;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::Serialization {
class ObjectManager;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class InternalFE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System {
class Type;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class IntSizedArray;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly;
}
// Type: ::TypeNAssembly
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3282))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectReader::TypeNAssembly
class CORDL_TYPE System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly", modifiers: " const&", def_value: None }]
constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly(System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly", modifiers: "&&", def_value: None }]
constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly(System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly& operator=(System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly&& o) noexcept = default;
  constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly& operator=(System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;

 ::StringW __declspec(property(get=__get_assemblyName, put=__set_assemblyName))  assemblyName;

constexpr void __set_assemblyName(::StringW value) ;

constexpr ::StringW __get_assemblyName() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly New_ctor() ;

/// @brief Method .ctor addr 0x23632ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
// Type: ::TopLevelAssemblyTypeResolver
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3283))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectReader::TopLevelAssemblyTypeResolver
class CORDL_TYPE System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver", modifiers: " const&", def_value: None }]
constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver(System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver", modifiers: "&&", def_value: None }]
constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver(System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver& operator=(System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver&& o) noexcept = default;
  constexpr System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver& operator=(System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver const& o) noexcept = default;
                


// Fields

 System::Reflection::Assembly __declspec(property(get=__get_m_topLevelAssembly, put=__set_m_topLevelAssembly))  m_topLevelAssembly;

constexpr void __set_m_topLevelAssembly(System::Reflection::Assembly value) ;

constexpr System::Reflection::Assembly __get_m_topLevelAssembly() const;


// Methods

static System::Runtime::Serialization::Formatters::Binary::System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver New_ctor(System::Reflection::Assembly topLevelAssembly) ;

/// @brief Method .ctor addr 0x2363384 size 0x28 virtual false final false
 void _ctor(System::Reflection::Assembly topLevelAssembly) ;

/// @brief Method ResolveType addr 0x2363560 size 0x68 virtual false final false
 System::Type ResolveType(System::Reflection::Assembly assembly, ::StringW simpleTypeName, bool ignoreCase) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectReader
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3284))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectReader
class CORDL_TYPE ObjectReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TopLevelAssemblyTypeResolver = System::Runtime::Serialization::Formatters::Binary::System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver;

using TypeNAssembly = System::Runtime::Serialization::Formatters::Binary::System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~ObjectReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectReader", modifiers: " const&", def_value: None }]
constexpr ObjectReader(ObjectReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectReader", modifiers: "&&", def_value: None }]
constexpr ObjectReader(ObjectReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectReader& operator=(ObjectReader&& o) noexcept = default;
  constexpr ObjectReader& operator=(ObjectReader const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_m_stream, put=__set_m_stream))  m_stream;

constexpr void __set_m_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_m_stream() const;

 System::Runtime::Serialization::ISurrogateSelector __declspec(property(get=__get_m_surrogates, put=__set_m_surrogates))  m_surrogates;

constexpr void __set_m_surrogates(System::Runtime::Serialization::ISurrogateSelector value) ;

constexpr System::Runtime::Serialization::ISurrogateSelector __get_m_surrogates() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_m_context, put=__set_m_context))  m_context;

constexpr void __set_m_context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get_m_context() const;

 System::Runtime::Serialization::ObjectManager __declspec(property(get=__get_m_objectManager, put=__set_m_objectManager))  m_objectManager;

constexpr void __set_m_objectManager(System::Runtime::Serialization::ObjectManager value) ;

constexpr System::Runtime::Serialization::ObjectManager __get_m_objectManager() const;

 System::Runtime::Serialization::Formatters::Binary::InternalFE __declspec(property(get=__get_formatterEnums, put=__set_formatterEnums))  formatterEnums;

constexpr void __set_formatterEnums(System::Runtime::Serialization::Formatters::Binary::InternalFE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalFE __get_formatterEnums() const;

 System::Runtime::Serialization::SerializationBinder __declspec(property(get=__get_m_binder, put=__set_m_binder))  m_binder;

constexpr void __set_m_binder(System::Runtime::Serialization::SerializationBinder value) ;

constexpr System::Runtime::Serialization::SerializationBinder __get_m_binder() const;

 int64_t __declspec(property(get=__get_topId, put=__set_topId))  topId;

constexpr void __set_topId(int64_t value) ;

constexpr int64_t __get_topId() const;

 bool __declspec(property(get=__get_bSimpleAssembly, put=__set_bSimpleAssembly))  bSimpleAssembly;

constexpr void __set_bSimpleAssembly(bool value) ;

constexpr bool __get_bSimpleAssembly() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_handlerObject, put=__set_handlerObject))  handlerObject;

constexpr void __set_handlerObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_handlerObject() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_topObject, put=__set_m_topObject))  m_topObject;

constexpr void __set_m_topObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_topObject() const;

 ::ArrayW<System::Runtime::Remoting::Messaging::Header> __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(::ArrayW<System::Runtime::Remoting::Messaging::Header> value) ;

constexpr ::ArrayW<System::Runtime::Remoting::Messaging::Header> __get_headers() const;

 System::Runtime::Remoting::Messaging::HeaderHandler __declspec(property(get=__get_handler, put=__set_handler))  handler;

constexpr void __set_handler(System::Runtime::Remoting::Messaging::HeaderHandler value) ;

constexpr System::Runtime::Remoting::Messaging::HeaderHandler __get_handler() const;

 System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit __declspec(property(get=__get_serObjectInfoInit, put=__set_serObjectInfoInit))  serObjectInfoInit;

constexpr void __set_serObjectInfoInit(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit __get_serObjectInfoInit() const;

 System::Runtime::Serialization::IFormatterConverter __declspec(property(get=__get_m_formatterConverter, put=__set_m_formatterConverter))  m_formatterConverter;

constexpr void __set_m_formatterConverter(System::Runtime::Serialization::IFormatterConverter value) ;

constexpr System::Runtime::Serialization::IFormatterConverter __get_m_formatterConverter() const;

 System::Runtime::Serialization::Formatters::Binary::SerStack __declspec(property(get=__get_stack, put=__set_stack))  stack;

constexpr void __set_stack(System::Runtime::Serialization::Formatters::Binary::SerStack value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerStack __get_stack() const;

 System::Runtime::Serialization::Formatters::Binary::SerStack __declspec(property(get=__get_valueFixupStack, put=__set_valueFixupStack))  valueFixupStack;

constexpr void __set_valueFixupStack(System::Runtime::Serialization::Formatters::Binary::SerStack value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerStack __get_valueFixupStack() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_crossAppDomainArray, put=__set_crossAppDomainArray))  crossAppDomainArray;

constexpr void __set_crossAppDomainArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_crossAppDomainArray() const;

 bool __declspec(property(get=__get_bFullDeserialization, put=__set_bFullDeserialization))  bFullDeserialization;

constexpr void __set_bFullDeserialization(bool value) ;

constexpr bool __get_bFullDeserialization() const;

 bool __declspec(property(get=__get_bOldFormatDetected, put=__set_bOldFormatDetected))  bOldFormatDetected;

constexpr void __set_bOldFormatDetected(bool value) ;

constexpr bool __get_bOldFormatDetected() const;

 System::Runtime::Serialization::Formatters::Binary::IntSizedArray __declspec(property(get=__get_valTypeObjectIdTable, put=__set_valTypeObjectIdTable))  valTypeObjectIdTable;

constexpr void __set_valTypeObjectIdTable(System::Runtime::Serialization::Formatters::Binary::IntSizedArray value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::IntSizedArray __get_valTypeObjectIdTable() const;

 System::Runtime::Serialization::Formatters::Binary::NameCache __declspec(property(get=__get_typeCache, put=__set_typeCache))  typeCache;

constexpr void __set_typeCache(System::Runtime::Serialization::Formatters::Binary::NameCache value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::NameCache __get_typeCache() const;

 ::StringW __declspec(property(get=__get_previousAssemblyString, put=__set_previousAssemblyString))  previousAssemblyString;

constexpr void __set_previousAssemblyString(::StringW value) ;

constexpr ::StringW __get_previousAssemblyString() const;

 ::StringW __declspec(property(get=__get_previousName, put=__set_previousName))  previousName;

constexpr void __set_previousName(::StringW value) ;

constexpr ::StringW __get_previousName() const;

 System::Type __declspec(property(get=__get_previousType, put=__set_previousType))  previousType;

constexpr void __set_previousType(System::Type value) ;

constexpr System::Type __get_previousType() const;


// Properties

 System::Runtime::Serialization::Formatters::Binary::SerStack __declspec(property(get=get_ValueFixupStack))  ValueFixupStack;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_TopObject, put=set_TopObject))  TopObject;


// Methods

/// @brief Method get_ValueFixupStack addr 0x235f1d8 size 0x80 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::SerStack get_ValueFixupStack() ;

/// @brief Method get_TopObject addr 0x235f258 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_TopObject() ;

/// @brief Method set_TopObject addr 0x235f260 size 0x14 virtual false final false
 void set_TopObject(::bs_hook::Il2CppWrapperType value) ;

static System::Runtime::Serialization::Formatters::Binary::ObjectReader New_ctor(System::IO::Stream stream, System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::InternalFE formatterEnums, System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method .ctor addr 0x235f274 size 0x114 virtual false final false
 void _ctor(System::IO::Stream stream, System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::InternalFE formatterEnums, System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method Deserialize addr 0x235f390 size 0x310 virtual false final false
 ::bs_hook::Il2CppWrapperType Deserialize(System::Runtime::Remoting::Messaging::HeaderHandler handler, System::Runtime::Serialization::Formatters::Binary::__BinaryParser serParser, bool fCheck) ;

/// @brief Method HasSurrogate addr 0x235fc74 size 0xd4 virtual false final false
 bool HasSurrogate(System::Type t) ;

/// @brief Method CheckSerializable addr 0x235fd48 size 0x138 virtual false final false
 void CheckSerializable(System::Type t) ;

/// @brief Method InitFullDeserialization addr 0x235fe80 size 0x110 virtual false final false
 void InitFullDeserialization() ;

/// @brief Method CrossAppDomainArray addr 0x235ff90 size 0x30 virtual false final false
 ::bs_hook::Il2CppWrapperType CrossAppDomainArray(int32_t index) ;

/// @brief Method CreateReadObjectInfo addr 0x235ffc0 size 0x34 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo CreateReadObjectInfo(System::Type objectType) ;

/// @brief Method CreateReadObjectInfo addr 0x235fff4 size 0x44 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo CreateReadObjectInfo(System::Type objectType, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Type> memberTypes) ;

/// @brief Method Parse addr 0x2360038 size 0x144 virtual false final false
 void Parse(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseError addr 0x2360c84 size 0x2d8 virtual false final false
 void ParseError(System::Runtime::Serialization::Formatters::Binary::ParseRecord processing, System::Runtime::Serialization::Formatters::Binary::ParseRecord onStack) ;

/// @brief Method ParseSerializedStreamHeader addr 0x236017c size 0x18 virtual false final false
 void ParseSerializedStreamHeader(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseSerializedStreamHeaderEnd addr 0x2360194 size 0x18 virtual false final false
 void ParseSerializedStreamHeaderEnd(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseObject addr 0x23601ac size 0x314 virtual false final false
 void ParseObject(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseObjectEnd addr 0x23604c0 size 0x230 virtual false final false
 void ParseObjectEnd(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseArray addr 0x2361058 size 0x68c virtual false final false
 void ParseArray(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method NextRectangleMap addr 0x2361a74 size 0xc4 virtual false final false
 void NextRectangleMap(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseArrayMember addr 0x2361b38 size 0x79c virtual false final false
 void ParseArrayMember(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseArrayMemberEnd addr 0x2362704 size 0x28 virtual false final false
 void ParseArrayMemberEnd(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseMember addr 0x23606f0 size 0x4d8 virtual false final false
 void ParseMember(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseMemberEnd addr 0x2360bc8 size 0xbc virtual false final false
 void ParseMemberEnd(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ParseString addr 0x2362308 size 0x40 virtual false final false
 void ParseString(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr, System::Runtime::Serialization::Formatters::Binary::ParseRecord parentPr) ;

/// @brief Method RegisterObject addr 0x2361724 size 0x8 virtual false final false
 void RegisterObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::Formatters::Binary::ParseRecord pr, System::Runtime::Serialization::Formatters::Binary::ParseRecord objectPr) ;

/// @brief Method RegisterObject addr 0x2362770 size 0x124 virtual false final false
 void RegisterObject(::bs_hook::Il2CppWrapperType obj, System::Runtime::Serialization::Formatters::Binary::ParseRecord pr, System::Runtime::Serialization::Formatters::Binary::ParseRecord objectPr, bool bIsString) ;

/// @brief Method GetId addr 0x2362894 size 0xdc virtual false final false
 int64_t GetId(int64_t objectId) ;

/// @brief Method Bind addr 0x2362b04 size 0x58 virtual false final false
 System::Type Bind(::StringW assemblyString, ::StringW typeString) ;

/// @brief Method FastBindToType addr 0x2362b5c size 0x2f0 virtual false final false
 System::Type FastBindToType(::StringW assemblyName, ::StringW typeName) ;

/// @brief Method ResolveSimpleAssemblyName addr 0x2362ef4 size 0x60 virtual false final false
static System::Reflection::Assembly ResolveSimpleAssemblyName(System::Reflection::AssemblyName assemblyName) ;

/// @brief Method GetSimplyNamedTypeFromAssembly addr 0x2362f54 size 0x254 virtual false final false
static void GetSimplyNamedTypeFromAssembly(System::Reflection::Assembly assm, ::StringW typeName, ByRef<System::Type> type) ;

/// @brief Method GetType addr 0x23633ac size 0x1b4 virtual false final false
 System::Type GetType(System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo, ::StringW name) ;

/// @brief Method CheckTypeForwardedTo addr 0x23631a8 size 0x144 virtual false final false
static void CheckTypeForwardedTo(System::Reflection::Assembly sourceAssembly, System::Reflection::Assembly destAssembly, System::Type resolvedType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::ObjectReader);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectReader, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader");
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::System__Runtime__Serialization__Formatters__Binary__ObjectReader__TopLevelAssemblyTypeResolver, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TopLevelAssemblyTypeResolver");
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::System__Runtime__Serialization__Formatters__Binary__ObjectReader__TypeNAssembly, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TypeNAssembly");
