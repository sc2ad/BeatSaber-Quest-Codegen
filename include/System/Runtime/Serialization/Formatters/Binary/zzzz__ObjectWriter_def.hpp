#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationObjectManager;
}
namespace System::Collections {
class Queue;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization {
class ObjectIDGenerator;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
namespace System {
class Array;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class NameInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class InternalFE;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectWriter
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3285))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter
class CORDL_TYPE ObjectWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~ObjectWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectWriter", modifiers: " const&", def_value: None }]
constexpr ObjectWriter(ObjectWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjectWriter", modifiers: "&&", def_value: None }]
constexpr ObjectWriter(ObjectWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjectWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjectWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjectWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjectWriter& operator=(ObjectWriter&& o) noexcept = default;
  constexpr ObjectWriter& operator=(ObjectWriter const& o) noexcept = default;
                


// Fields

 System::Collections::Queue __declspec(property(get=__get_m_objectQueue, put=__set_m_objectQueue))  m_objectQueue;

constexpr void __set_m_objectQueue(System::Collections::Queue value) ;

constexpr System::Collections::Queue __get_m_objectQueue() const;

 System::Runtime::Serialization::ObjectIDGenerator __declspec(property(get=__get_m_idGenerator, put=__set_m_idGenerator))  m_idGenerator;

constexpr void __set_m_idGenerator(System::Runtime::Serialization::ObjectIDGenerator value) ;

constexpr System::Runtime::Serialization::ObjectIDGenerator __get_m_idGenerator() const;

 int32_t __declspec(property(get=__get_m_currentId, put=__set_m_currentId))  m_currentId;

constexpr void __set_m_currentId(int32_t value) ;

constexpr int32_t __get_m_currentId() const;

 System::Runtime::Serialization::ISurrogateSelector __declspec(property(get=__get_m_surrogates, put=__set_m_surrogates))  m_surrogates;

constexpr void __set_m_surrogates(System::Runtime::Serialization::ISurrogateSelector value) ;

constexpr System::Runtime::Serialization::ISurrogateSelector __get_m_surrogates() const;

 System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_m_context, put=__set_m_context))  m_context;

constexpr void __set_m_context(System::Runtime::Serialization::StreamingContext value) ;

constexpr System::Runtime::Serialization::StreamingContext __get_m_context() const;

 System::Runtime::Serialization::Formatters::Binary::__BinaryWriter __declspec(property(get=__get_serWriter, put=__set_serWriter))  serWriter;

constexpr void __set_serWriter(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::__BinaryWriter __get_serWriter() const;

 System::Runtime::Serialization::SerializationObjectManager __declspec(property(get=__get_m_objectManager, put=__set_m_objectManager))  m_objectManager;

constexpr void __set_m_objectManager(System::Runtime::Serialization::SerializationObjectManager value) ;

constexpr System::Runtime::Serialization::SerializationObjectManager __get_m_objectManager() const;

 int64_t __declspec(property(get=__get_topId, put=__set_topId))  topId;

constexpr void __set_topId(int64_t value) ;

constexpr int64_t __get_topId() const;

 ::StringW __declspec(property(get=__get_topName, put=__set_topName))  topName;

constexpr void __set_topName(::StringW value) ;

constexpr ::StringW __get_topName() const;

 ::ArrayW<System::Runtime::Remoting::Messaging::Header> __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(::ArrayW<System::Runtime::Remoting::Messaging::Header> value) ;

constexpr ::ArrayW<System::Runtime::Remoting::Messaging::Header> __get_headers() const;

 System::Runtime::Serialization::Formatters::Binary::InternalFE __declspec(property(get=__get_formatterEnums, put=__set_formatterEnums))  formatterEnums;

constexpr void __set_formatterEnums(System::Runtime::Serialization::Formatters::Binary::InternalFE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalFE __get_formatterEnums() const;

 System::Runtime::Serialization::SerializationBinder __declspec(property(get=__get_m_binder, put=__set_m_binder))  m_binder;

constexpr void __set_m_binder(System::Runtime::Serialization::SerializationBinder value) ;

constexpr System::Runtime::Serialization::SerializationBinder __get_m_binder() const;

 System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit __declspec(property(get=__get_serObjectInfoInit, put=__set_serObjectInfoInit))  serObjectInfoInit;

constexpr void __set_serObjectInfoInit(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit __get_serObjectInfoInit() const;

 System::Runtime::Serialization::IFormatterConverter __declspec(property(get=__get_m_formatterConverter, put=__set_m_formatterConverter))  m_formatterConverter;

constexpr void __set_m_formatterConverter(System::Runtime::Serialization::IFormatterConverter value) ;

constexpr System::Runtime::Serialization::IFormatterConverter __get_m_formatterConverter() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_crossAppDomainArray, put=__set_crossAppDomainArray))  crossAppDomainArray;

constexpr void __set_crossAppDomainArray(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_crossAppDomainArray() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_previousObj, put=__set_previousObj))  previousObj;

constexpr void __set_previousObj(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_previousObj() const;

 int64_t __declspec(property(get=__get_previousId, put=__set_previousId))  previousId;

constexpr void __set_previousId(int64_t value) ;

constexpr int64_t __get_previousId() const;

 System::Type __declspec(property(get=__get_previousType, put=__set_previousType))  previousType;

constexpr void __set_previousType(System::Type value) ;

constexpr System::Type __get_previousType() const;

 System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __declspec(property(get=__get_previousCode, put=__set_previousCode))  previousCode;

constexpr void __set_previousCode(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE __get_previousCode() const;

 System::Collections::Hashtable __declspec(property(get=__get_assemblyToIdTable, put=__set_assemblyToIdTable))  assemblyToIdTable;

constexpr void __set_assemblyToIdTable(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_assemblyToIdTable() const;

 System::Runtime::Serialization::Formatters::Binary::SerStack __declspec(property(get=__get_niPool, put=__set_niPool))  niPool;

constexpr void __set_niPool(System::Runtime::Serialization::Formatters::Binary::SerStack value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerStack __get_niPool() const;


// Properties

 System::Runtime::Serialization::SerializationObjectManager __declspec(property(get=get_ObjectManager))  ObjectManager;


// Methods

// Ctor Parameters [CppParam { name: "selector", ty: "System::Runtime::Serialization::ISurrogateSelector", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }, CppParam { name: "formatterEnums", ty: "System::Runtime::Serialization::Formatters::Binary::InternalFE", modifiers: "", def_value: None }, CppParam { name: "binder", ty: "System::Runtime::Serialization::SerializationBinder", modifiers: "", def_value: None }]
explicit ObjectWriter(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::InternalFE formatterEnums, System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method .ctor addr 0x23635c8 size 0xf8 virtual false final false
 void _ctor(System::Runtime::Serialization::ISurrogateSelector selector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::InternalFE formatterEnums, System::Runtime::Serialization::SerializationBinder binder) ;

/// @brief Method Serialize addr 0x23636c0 size 0x3e4 virtual false final false
 void Serialize(::bs_hook::Il2CppWrapperType graph, ::ArrayW<System::Runtime::Remoting::Messaging::Header> inHeaders, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter serWriter, bool fCheck) ;

/// @brief Method get_ObjectManager addr 0x23642ec size 0x8 virtual false final false
 System::Runtime::Serialization::SerializationObjectManager get_ObjectManager() ;

/// @brief Method Write addr 0x2363de0 size 0x37c virtual false final false
 void Write(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo) ;

/// @brief Method Write addr 0x2364ae4 size 0x254 virtual false final false
 void Write(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Type> memberTypes, ::ArrayW<::bs_hook::Il2CppWrapperType> memberData, ::ArrayW<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo> memberObjectInfos) ;

/// @brief Method WriteMemberSetup addr 0x2364d58 size 0xdc virtual false final false
 void WriteMemberSetup(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::StringW memberName, System::Type memberType, ::bs_hook::Il2CppWrapperType memberData, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo memberObjectInfo) ;

/// @brief Method WriteMembers addr 0x2364e70 size 0x328 virtual false final false
 void WriteMembers(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberTypeNameInfo, ::bs_hook::Il2CppWrapperType memberData, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo memberObjectInfo) ;

/// @brief Method WriteArray addr 0x23642f4 size 0x74c virtual false final false
 void WriteArray(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo memberObjectInfo) ;

/// @brief Method WriteArrayMember addr 0x2365474 size 0x278 virtual false final false
 void WriteArrayMember(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayElemTypeNameInfo, ::bs_hook::Il2CppWrapperType data) ;

/// @brief Method WriteRectangle addr 0x23656ec size 0x23c virtual false final false
 void WriteRectangle(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, int32_t rank, ::ArrayW<int32_t> maxA, System::Array array, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayElemNameTypeInfo, ::ArrayW<int32_t> lowerBoundA) ;

/// @brief Method GetNext addr 0x2364174 size 0x178 virtual false final false
 ::bs_hook::Il2CppWrapperType GetNext(ByRef<int64_t> objID) ;

/// @brief Method InternalGetId addr 0x2363ac8 size 0xc4 virtual false final false
 int64_t InternalGetId(::bs_hook::Il2CppWrapperType obj, bool assignUniqueIdToValueType, System::Type type, ByRef<bool> isNew) ;

/// @brief Method Schedule addr 0x2365974 size 0xc virtual false final false
 int64_t Schedule(::bs_hook::Il2CppWrapperType obj, bool assignUniqueIdToValueType, System::Type type) ;

/// @brief Method Schedule addr 0x23652d8 size 0x8c virtual false final false
 int64_t Schedule(::bs_hook::Il2CppWrapperType obj, bool assignUniqueIdToValueType, System::Type type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo) ;

/// @brief Method WriteKnownValueClass addr 0x2365380 size 0xf4 virtual false final false
 bool WriteKnownValueClass(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::bs_hook::Il2CppWrapperType data) ;

/// @brief Method WriteObjectRef addr 0x2365364 size 0x1c virtual false final false
 void WriteObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo, int64_t objectId) ;

/// @brief Method WriteString addr 0x2365980 size 0x100 virtual false final false
 void WriteString(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::bs_hook::Il2CppWrapperType stringObject) ;

/// @brief Method CheckForNull addr 0x2365198 size 0xb8 virtual false final false
 bool CheckForNull(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::bs_hook::Il2CppWrapperType data) ;

/// @brief Method WriteSerializedStreamHeader addr 0x2363aa4 size 0x24 virtual false final false
 void WriteSerializedStreamHeader(int64_t topId, int64_t headerId) ;

/// @brief Method TypeToNameInfo addr 0x2365a80 size 0x94 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::NameInfo TypeToNameInfo(System::Type type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo) ;

/// @brief Method TypeToNameInfo addr 0x2364e34 size 0x3c virtual false final false
 System::Runtime::Serialization::Formatters::Binary::NameInfo TypeToNameInfo(System::Type type) ;

/// @brief Method TypeToNameInfo addr 0x2363d9c size 0x44 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::NameInfo TypeToNameInfo(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo) ;

/// @brief Method TypeToNameInfo addr 0x2365288 size 0x50 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::NameInfo TypeToNameInfo(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo) ;

/// @brief Method TypeToNameInfo addr 0x2365250 size 0x38 virtual false final false
 void TypeToNameInfo(System::Type type, System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo) ;

/// @brief Method MemberToNameInfo addr 0x2364d38 size 0x20 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::NameInfo MemberToNameInfo(::StringW name) ;

/// @brief Method ToCode addr 0x2364a64 size 0x80 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(System::Type type) ;

/// @brief Method GetAssemblyId addr 0x2363b8c size 0x210 virtual false final false
 int64_t GetAssemblyId(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo) ;

/// @brief Method GetType addr 0x2364a4c size 0x18 virtual false final false
 System::Type GetType(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetNameInfo addr 0x2365b14 size 0xb8 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::NameInfo GetNameInfo() ;

/// @brief Method CheckTypeFormat addr 0x2364a40 size 0xc virtual false final false
 bool CheckTypeFormat(System::Runtime::Serialization::Formatters::FormatterTypeStyle test, System::Runtime::Serialization::Formatters::FormatterTypeStyle want) ;

/// @brief Method PutNameInfo addr 0x236415c size 0x18 virtual false final false
 void PutNameInfo(System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::ObjectWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectWriter, "System.Runtime.Serialization.Formatters.Binary", "ObjectWriter");
