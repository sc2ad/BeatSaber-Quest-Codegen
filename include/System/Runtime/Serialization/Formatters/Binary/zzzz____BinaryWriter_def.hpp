#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodReturn;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMap;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveUnTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryMethodCall;
}
namespace System::Collections {
class Hashtable;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMapTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberReference;
}
namespace System {
struct Decimal;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTime;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class NameInfo;
}
namespace System {
class Type;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssembly;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterTypeStyle;
}
namespace System {
class Array;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObject;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectString;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryArray;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Type: System.Runtime.Serialization.Formatters.Binary::__BinaryWriter
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3275))
// CS Name: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
class CORDL_TYPE __BinaryWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~__BinaryWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "__BinaryWriter", modifiers: " const&", def_value: None }]
constexpr __BinaryWriter(__BinaryWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "__BinaryWriter", modifiers: "&&", def_value: None }]
constexpr __BinaryWriter(__BinaryWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit __BinaryWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr __BinaryWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr __BinaryWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr __BinaryWriter& operator=(__BinaryWriter&& o) noexcept = default;
  constexpr __BinaryWriter& operator=(__BinaryWriter const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_sout, put=__set_sout))  sout;

constexpr void __set_sout(System::IO::Stream value) ;

constexpr System::IO::Stream __get_sout() const;

 System::Runtime::Serialization::Formatters::FormatterTypeStyle __declspec(property(get=__get_formatterTypeStyle, put=__set_formatterTypeStyle))  formatterTypeStyle;

constexpr void __set_formatterTypeStyle(System::Runtime::Serialization::Formatters::FormatterTypeStyle value) ;

constexpr System::Runtime::Serialization::Formatters::FormatterTypeStyle __get_formatterTypeStyle() const;

 System::Collections::Hashtable __declspec(property(get=__get_objectMapTable, put=__set_objectMapTable))  objectMapTable;

constexpr void __set_objectMapTable(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_objectMapTable() const;

 System::Runtime::Serialization::Formatters::Binary::ObjectWriter __declspec(property(get=__get_objectWriter, put=__set_objectWriter))  objectWriter;

constexpr void __set_objectWriter(System::Runtime::Serialization::Formatters::Binary::ObjectWriter value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::ObjectWriter __get_objectWriter() const;

 System::IO::BinaryWriter __declspec(property(get=__get_dataWriter, put=__set_dataWriter))  dataWriter;

constexpr void __set_dataWriter(System::IO::BinaryWriter value) ;

constexpr System::IO::BinaryWriter __get_dataWriter() const;

 int32_t __declspec(property(get=__get_m_nestedObjectCount, put=__set_m_nestedObjectCount))  m_nestedObjectCount;

constexpr void __set_m_nestedObjectCount(int32_t value) ;

constexpr int32_t __get_m_nestedObjectCount() const;

 int32_t __declspec(property(get=__get_nullCount, put=__set_nullCount))  nullCount;

constexpr void __set_nullCount(int32_t value) ;

constexpr int32_t __get_nullCount() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall __declspec(property(get=__get_binaryMethodCall, put=__set_binaryMethodCall))  binaryMethodCall;

constexpr void __set_binaryMethodCall(System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall __get_binaryMethodCall() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn __declspec(property(get=__get_binaryMethodReturn, put=__set_binaryMethodReturn))  binaryMethodReturn;

constexpr void __set_binaryMethodReturn(System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn __get_binaryMethodReturn() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryObject __declspec(property(get=__get_binaryObject, put=__set_binaryObject))  binaryObject;

constexpr void __set_binaryObject(System::Runtime::Serialization::Formatters::Binary::BinaryObject value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObject __get_binaryObject() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap __declspec(property(get=__get_binaryObjectWithMap, put=__set_binaryObjectWithMap))  binaryObjectWithMap;

constexpr void __set_binaryObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap __get_binaryObjectWithMap() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped __declspec(property(get=__get_binaryObjectWithMapTyped, put=__set_binaryObjectWithMapTyped))  binaryObjectWithMapTyped;

constexpr void __set_binaryObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped __get_binaryObjectWithMapTyped() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryObjectString __declspec(property(get=__get_binaryObjectString, put=__set_binaryObjectString))  binaryObjectString;

constexpr void __set_binaryObjectString(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObjectString __get_binaryObjectString() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryArray __declspec(property(get=__get_binaryArray, put=__set_binaryArray))  binaryArray;

constexpr void __set_binaryArray(System::Runtime::Serialization::Formatters::Binary::BinaryArray value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryArray __get_binaryArray() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_byteBuffer, put=__set_byteBuffer))  byteBuffer;

constexpr void __set_byteBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_byteBuffer() const;

 int32_t __declspec(property(get=__get_chunkSize, put=__set_chunkSize))  chunkSize;

constexpr void __set_chunkSize(int32_t value) ;

constexpr int32_t __get_chunkSize() const;

 System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped __declspec(property(get=__get_memberPrimitiveUnTyped, put=__set_memberPrimitiveUnTyped))  memberPrimitiveUnTyped;

constexpr void __set_memberPrimitiveUnTyped(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped __get_memberPrimitiveUnTyped() const;

 System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped __declspec(property(get=__get_memberPrimitiveTyped, put=__set_memberPrimitiveTyped))  memberPrimitiveTyped;

constexpr void __set_memberPrimitiveTyped(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped __get_memberPrimitiveTyped() const;

 System::Runtime::Serialization::Formatters::Binary::ObjectNull __declspec(property(get=__get_objectNull, put=__set_objectNull))  objectNull;

constexpr void __set_objectNull(System::Runtime::Serialization::Formatters::Binary::ObjectNull value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::ObjectNull __get_objectNull() const;

 System::Runtime::Serialization::Formatters::Binary::MemberReference __declspec(property(get=__get_memberReference, put=__set_memberReference))  memberReference;

constexpr void __set_memberReference(System::Runtime::Serialization::Formatters::Binary::MemberReference value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::MemberReference __get_memberReference() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryAssembly __declspec(property(get=__get_binaryAssembly, put=__set_binaryAssembly))  binaryAssembly;

constexpr void __set_binaryAssembly(System::Runtime::Serialization::Formatters::Binary::BinaryAssembly value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryAssembly __get_binaryAssembly() const;


// Methods

// Ctor Parameters [CppParam { name: "sout", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "objectWriter", ty: "System::Runtime::Serialization::Formatters::Binary::ObjectWriter", modifiers: "", def_value: None }, CppParam { name: "formatterTypeStyle", ty: "System::Runtime::Serialization::Formatters::FormatterTypeStyle", modifiers: "", def_value: None }]
explicit __BinaryWriter(System::IO::Stream sout, System::Runtime::Serialization::Formatters::Binary::ObjectWriter objectWriter, System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle) ;

/// @brief Method .ctor addr 0x235a098 size 0xb8 virtual false final false
 void _ctor(System::IO::Stream sout, System::Runtime::Serialization::Formatters::Binary::ObjectWriter objectWriter, System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle) ;

/// @brief Method WriteBegin addr 0x235a438 size 0x4 virtual false final false
 void WriteBegin() ;

/// @brief Method WriteEnd addr 0x235a43c size 0x20 virtual false final false
 void WriteEnd() ;

/// @brief Method WriteBoolean addr 0x235a45c size 0x24 virtual false final false
 void WriteBoolean(bool value) ;

/// @brief Method WriteByte addr 0x23547c4 size 0x20 virtual false final false
 void WriteByte(uint8_t value) ;

/// @brief Method WriteBytes addr 0x235a480 size 0x20 virtual false final false
 void WriteBytes(::ArrayW<uint8_t> value) ;

/// @brief Method WriteBytes addr 0x235a4a0 size 0x20 virtual false final false
 void WriteBytes(::ArrayW<uint8_t> byteA, int32_t offset, int32_t size) ;

/// @brief Method WriteChar addr 0x235a4c0 size 0x24 virtual false final false
 void WriteChar(char16_t value) ;

/// @brief Method WriteChars addr 0x235a4e4 size 0x24 virtual false final false
 void WriteChars(::ArrayW<char16_t> value) ;

/// @brief Method WriteDecimal addr 0x235a508 size 0xc0 virtual false final false
 void WriteDecimal(System::Decimal value) ;

/// @brief Method WriteSingle addr 0x235a5c8 size 0x24 virtual false final false
 void WriteSingle(float_t value) ;

/// @brief Method WriteDouble addr 0x235a5ec size 0x24 virtual false final false
 void WriteDouble(double_t value) ;

/// @brief Method WriteInt16 addr 0x235a610 size 0x24 virtual false final false
 void WriteInt16(int16_t value) ;

/// @brief Method WriteInt32 addr 0x2354808 size 0x24 virtual false final false
 void WriteInt32(int32_t value) ;

/// @brief Method WriteInt64 addr 0x235a634 size 0x24 virtual false final false
 void WriteInt64(int64_t value) ;

/// @brief Method WriteSByte addr 0x235a658 size 0x20 virtual false final false
 void WriteSByte(int8_t value) ;

/// @brief Method WriteString addr 0x23547e4 size 0x24 virtual false final false
 void WriteString(::StringW value) ;

/// @brief Method WriteTimeSpan addr 0x235a678 size 0x24 virtual false final false
 void WriteTimeSpan(System::TimeSpan value) ;

/// @brief Method WriteDateTime addr 0x235a69c size 0x24 virtual false final false
 void WriteDateTime(System::DateTime value) ;

/// @brief Method WriteUInt16 addr 0x235a6c0 size 0x24 virtual false final false
 void WriteUInt16(uint16_t value) ;

/// @brief Method WriteUInt32 addr 0x235a6e4 size 0x24 virtual false final false
 void WriteUInt32(uint32_t value) ;

/// @brief Method WriteUInt64 addr 0x235a708 size 0x24 virtual false final false
 void WriteUInt64(uint64_t value) ;

/// @brief Method WriteObjectEnd addr 0x235a72c size 0x4 virtual false final false
 void WriteObjectEnd(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo) ;

/// @brief Method WriteSerializationHeaderEnd addr 0x235a730 size 0x5c virtual false final false
 void WriteSerializationHeaderEnd() ;

/// @brief Method WriteSerializationHeader addr 0x235a78c size 0x98 virtual false final false
 void WriteSerializationHeader(int32_t topId, int32_t headerId, int32_t minorVersion, int32_t majorVersion) ;

/// @brief Method WriteMethodCall addr 0x235a824 size 0x80 virtual false final false
 void WriteMethodCall() ;

/// @brief Method WriteMethodReturn addr 0x235a8a4 size 0x80 virtual false final false
 void WriteMethodReturn() ;

/// @brief Method WriteObject addr 0x235a924 size 0x4a8 virtual false final false
 void WriteObject(System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<System::Type> memberTypes, ::ArrayW<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo> memberObjectInfos) ;

/// @brief Method WriteObjectString addr 0x235afd8 size 0x90 virtual false final false
 void WriteObjectString(int32_t objectId, ::StringW value) ;

/// @brief Method WriteSingleArray addr 0x235b068 size 0x2fc virtual false final false
 void WriteSingleArray(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayElemTypeNameInfo, int32_t length, int32_t lowerBound, System::Array array) ;

/// @brief Method WriteArrayAsBytes addr 0x235b364 size 0x22c virtual false final false
 void WriteArrayAsBytes(System::Array array, int32_t typeLength) ;

/// @brief Method WriteJaggedArray addr 0x235b590 size 0x190 virtual false final false
 void WriteJaggedArray(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayElemTypeNameInfo, int32_t length, int32_t lowerBound) ;

/// @brief Method WriteRectangleArray addr 0x235b720 size 0x158 virtual false final false
 void WriteRectangleArray(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayElemTypeNameInfo, int32_t rank, ::ArrayW<int32_t> lengthA, ::ArrayW<int32_t> lowerBoundA) ;

/// @brief Method WriteObjectByteArray addr 0x235b878 size 0x60 virtual false final false
 void WriteObjectByteArray(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo arrayElemTypeNameInfo, int32_t length, int32_t lowerBound, ::ArrayW<uint8_t> byteA) ;

/// @brief Method WriteMember addr 0x235b8d8 size 0x108 virtual false final false
 void WriteMember(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteNullMember addr 0x235b9e0 size 0xa0 virtual false final false
 void WriteNullMember(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo) ;

/// @brief Method WriteMemberObjectRef addr 0x235ba80 size 0x94 virtual false final false
 void WriteMemberObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, int32_t idRef) ;

/// @brief Method WriteMemberNested addr 0x235bb14 size 0x1c virtual false final false
 void WriteMemberNested(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo) ;

/// @brief Method WriteMemberString addr 0x235bb30 size 0x48 virtual false final false
 void WriteMemberString(System::Runtime::Serialization::Formatters::Binary::NameInfo memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::StringW value) ;

/// @brief Method WriteItem addr 0x235bb78 size 0x40 virtual false final false
 void WriteItem(System::Runtime::Serialization::Formatters::Binary::NameInfo itemNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteNullItem addr 0x235bbb8 size 0x10 virtual false final false
 void WriteNullItem(System::Runtime::Serialization::Formatters::Binary::NameInfo itemNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo typeNameInfo) ;

/// @brief Method WriteDelayedNullItem addr 0x235bbc8 size 0x10 virtual false final false
 void WriteDelayedNullItem() ;

/// @brief Method WriteItemEnd addr 0x235bbd8 size 0x4 virtual false final false
 void WriteItemEnd() ;

/// @brief Method InternalWriteItemNull addr 0x235adcc size 0x90 virtual false final false
 void InternalWriteItemNull() ;

/// @brief Method WriteItemObjectRef addr 0x235bbdc size 0x30 virtual false final false
 void WriteItemObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo nameInfo, int32_t idRef) ;

/// @brief Method WriteAssembly addr 0x235bc0c size 0xd4 virtual false final false
 void WriteAssembly(System::Type type, ::StringW assemblyString, int32_t assemId, bool isNew) ;

/// @brief Method WriteValue addr 0x23550c4 size 0x664 virtual false final false
 void WriteValue(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter, "System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter");
