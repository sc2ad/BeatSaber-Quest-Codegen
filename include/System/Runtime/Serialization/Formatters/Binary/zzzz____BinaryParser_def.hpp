#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct Decimal;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectProgress;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObject;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectString;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectNull;
}
namespace System::Text {
class Encoding;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMap;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MessageEnd;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveUnTyped;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberReference;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTime;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SizedArray;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainString;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System::IO {
class BinaryReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMapTyped;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Type: System.Runtime.Serialization.Formatters.Binary::__BinaryParser
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3286))
// CS Name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser
class CORDL_TYPE __BinaryParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~__BinaryParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "__BinaryParser", modifiers: " const&", def_value: None }]
constexpr __BinaryParser(__BinaryParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "__BinaryParser", modifiers: "&&", def_value: None }]
constexpr __BinaryParser(__BinaryParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit __BinaryParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr __BinaryParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr __BinaryParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr __BinaryParser& operator=(__BinaryParser&& o) noexcept = default;
  constexpr __BinaryParser& operator=(__BinaryParser const& o) noexcept = default;
                


// Fields

 System::Runtime::Serialization::Formatters::Binary::ObjectReader __declspec(property(get=__get_objectReader, put=__set_objectReader))  objectReader;

constexpr void __set_objectReader(System::Runtime::Serialization::Formatters::Binary::ObjectReader value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::ObjectReader __get_objectReader() const;

 System::IO::Stream __declspec(property(get=__get_input, put=__set_input))  input;

constexpr void __set_input(System::IO::Stream value) ;

constexpr System::IO::Stream __get_input() const;

 int64_t __declspec(property(get=__get_topId, put=__set_topId))  topId;

constexpr void __set_topId(int64_t value) ;

constexpr int64_t __get_topId() const;

 int64_t __declspec(property(get=__get_headerId, put=__set_headerId))  headerId;

constexpr void __set_headerId(int64_t value) ;

constexpr int64_t __get_headerId() const;

 System::Runtime::Serialization::Formatters::Binary::SizedArray __declspec(property(get=__get_objectMapIdTable, put=__set_objectMapIdTable))  objectMapIdTable;

constexpr void __set_objectMapIdTable(System::Runtime::Serialization::Formatters::Binary::SizedArray value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SizedArray __get_objectMapIdTable() const;

 System::Runtime::Serialization::Formatters::Binary::SizedArray __declspec(property(get=__get_assemIdToAssemblyTable, put=__set_assemIdToAssemblyTable))  assemIdToAssemblyTable;

constexpr void __set_assemIdToAssemblyTable(System::Runtime::Serialization::Formatters::Binary::SizedArray value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SizedArray __get_assemIdToAssemblyTable() const;

 System::Runtime::Serialization::Formatters::Binary::SerStack __declspec(property(get=__get_stack, put=__set_stack))  stack;

constexpr void __set_stack(System::Runtime::Serialization::Formatters::Binary::SerStack value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerStack __get_stack() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum __declspec(property(get=__get_expectedType, put=__set_expectedType))  expectedType;

constexpr void __set_expectedType(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum __get_expectedType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_expectedTypeInformation, put=__set_expectedTypeInformation))  expectedTypeInformation;

constexpr void __set_expectedTypeInformation(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_expectedTypeInformation() const;

 System::Runtime::Serialization::Formatters::Binary::ParseRecord __declspec(property(get=__get_PRS, put=__set_PRS))  PRS;

constexpr void __set_PRS(System::Runtime::Serialization::Formatters::Binary::ParseRecord value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::ParseRecord __get_PRS() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo __declspec(property(get=__get_systemAssemblyInfo, put=__set_systemAssemblyInfo))  systemAssemblyInfo;

constexpr void __set_systemAssemblyInfo(System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo __get_systemAssemblyInfo() const;

 System::IO::BinaryReader __declspec(property(get=__get_dataReader, put=__set_dataReader))  dataReader;

constexpr void __set_dataReader(System::IO::BinaryReader value) ;

constexpr System::IO::BinaryReader __get_dataReader() const;

static System::Text::Encoding __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

static void __set_encoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_encoding() ;

 System::Runtime::Serialization::Formatters::Binary::SerStack __declspec(property(get=__get_opPool, put=__set_opPool))  opPool;

constexpr void __set_opPool(System::Runtime::Serialization::Formatters::Binary::SerStack value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerStack __get_opPool() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryObject __declspec(property(get=__get_binaryObject, put=__set_binaryObject))  binaryObject;

constexpr void __set_binaryObject(System::Runtime::Serialization::Formatters::Binary::BinaryObject value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObject __get_binaryObject() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap __declspec(property(get=__get_bowm, put=__set_bowm))  bowm;

constexpr void __set_bowm(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap __get_bowm() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped __declspec(property(get=__get_bowmt, put=__set_bowmt))  bowmt;

constexpr void __set_bowmt(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped __get_bowmt() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryObjectString __declspec(property(get=__get_objectString, put=__set_objectString))  objectString;

constexpr void __set_objectString(System::Runtime::Serialization::Formatters::Binary::BinaryObjectString value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryObjectString __get_objectString() const;

 System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString __declspec(property(get=__get_crossAppDomainString, put=__set_crossAppDomainString))  crossAppDomainString;

constexpr void __set_crossAppDomainString(System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString __get_crossAppDomainString() const;

 System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped __declspec(property(get=__get_memberPrimitiveTyped, put=__set_memberPrimitiveTyped))  memberPrimitiveTyped;

constexpr void __set_memberPrimitiveTyped(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped __get_memberPrimitiveTyped() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_byteBuffer, put=__set_byteBuffer))  byteBuffer;

constexpr void __set_byteBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_byteBuffer() const;

 System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped __declspec(property(get=__get_memberPrimitiveUnTyped, put=__set_memberPrimitiveUnTyped))  memberPrimitiveUnTyped;

constexpr void __set_memberPrimitiveUnTyped(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped __get_memberPrimitiveUnTyped() const;

 System::Runtime::Serialization::Formatters::Binary::MemberReference __declspec(property(get=__get_memberReference, put=__set_memberReference))  memberReference;

constexpr void __set_memberReference(System::Runtime::Serialization::Formatters::Binary::MemberReference value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::MemberReference __get_memberReference() const;

 System::Runtime::Serialization::Formatters::Binary::ObjectNull __declspec(property(get=__get_objectNull, put=__set_objectNull))  objectNull;

constexpr void __set_objectNull(System::Runtime::Serialization::Formatters::Binary::ObjectNull value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::ObjectNull __get_objectNull() const;

static System::Runtime::Serialization::Formatters::Binary::MessageEnd __declspec(property(get=__get_messageEnd, put=__set_messageEnd))  messageEnd;

static void __set_messageEnd(System::Runtime::Serialization::Formatters::Binary::MessageEnd value) ;

static System::Runtime::Serialization::Formatters::Binary::MessageEnd __get_messageEnd() ;


// Properties

 System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo __declspec(property(get=get_SystemAssemblyInfo))  SystemAssemblyInfo;

 System::Runtime::Serialization::Formatters::Binary::SizedArray __declspec(property(get=get_ObjectMapIdTable))  ObjectMapIdTable;

 System::Runtime::Serialization::Formatters::Binary::SizedArray __declspec(property(get=get_AssemIdToAssemblyTable))  AssemIdToAssemblyTable;

 System::Runtime::Serialization::Formatters::Binary::ParseRecord __declspec(property(get=get_prs))  prs;


// Methods

static System::Runtime::Serialization::Formatters::Binary::__BinaryParser New_ctor(System::IO::Stream stream, System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader) ;

/// @brief Method .ctor addr 0x2365c04 size 0x10c virtual false final false
 void _ctor(System::IO::Stream stream, System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader) ;

/// @brief Method get_SystemAssemblyInfo addr 0x2365d10 size 0xac virtual false final false
 System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo get_SystemAssemblyInfo() ;

/// @brief Method get_ObjectMapIdTable addr 0x2365dbc size 0x68 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::SizedArray get_ObjectMapIdTable() ;

/// @brief Method get_AssemIdToAssemblyTable addr 0x2365e90 size 0x6c virtual false final false
 System::Runtime::Serialization::Formatters::Binary::SizedArray get_AssemIdToAssemblyTable() ;

/// @brief Method get_prs addr 0x2365f74 size 0x6c virtual false final false
 System::Runtime::Serialization::Formatters::Binary::ParseRecord get_prs() ;

/// @brief Method Run addr 0x235f6a0 size 0x5d4 virtual false final false
 void Run() ;

/// @brief Method ReadBegin addr 0x2365fe8 size 0x4 virtual false final false
 void ReadBegin() ;

/// @brief Method ReadEnd addr 0x2367d6c size 0x4 virtual false final false
 void ReadEnd() ;

/// @brief Method ReadBoolean addr 0x23680f8 size 0x20 virtual false final false
 bool ReadBoolean() ;

/// @brief Method ReadByte addr 0x2368118 size 0x20 virtual false final false
 uint8_t ReadByte() ;

/// @brief Method ReadBytes addr 0x2368138 size 0x24 virtual false final false
 ::ArrayW<uint8_t> ReadBytes(int32_t length) ;

/// @brief Method ReadBytes addr 0x236815c size 0x7c virtual false final false
 void ReadBytes(::ArrayW<uint8_t> byteA, int32_t offset, int32_t size) ;

/// @brief Method ReadChar addr 0x23681d8 size 0x20 virtual false final false
 char16_t ReadChar() ;

/// @brief Method ReadChars addr 0x23681f8 size 0x24 virtual false final false
 ::ArrayW<char16_t> ReadChars(int32_t length) ;

/// @brief Method ReadDecimal addr 0x236821c size 0xb4 virtual false final false
 System::Decimal ReadDecimal() ;

/// @brief Method ReadSingle addr 0x23682d0 size 0x24 virtual false final false
 float_t ReadSingle() ;

/// @brief Method ReadDouble addr 0x23682f4 size 0x24 virtual false final false
 double_t ReadDouble() ;

/// @brief Method ReadInt16 addr 0x2368318 size 0x24 virtual false final false
 int16_t ReadInt16() ;

/// @brief Method ReadInt32 addr 0x236833c size 0x24 virtual false final false
 int32_t ReadInt32() ;

/// @brief Method ReadInt64 addr 0x2368360 size 0x24 virtual false final false
 int64_t ReadInt64() ;

/// @brief Method ReadSByte addr 0x2368384 size 0x20 virtual false final false
 int8_t ReadSByte() ;

/// @brief Method ReadString addr 0x23683a4 size 0x24 virtual false final false
 ::StringW ReadString() ;

/// @brief Method ReadTimeSpan addr 0x23683c8 size 0x24 virtual false final false
 System::TimeSpan ReadTimeSpan() ;

/// @brief Method ReadDateTime addr 0x23683ec size 0x7c virtual false final false
 System::DateTime ReadDateTime() ;

/// @brief Method ReadUInt16 addr 0x2368468 size 0x24 virtual false final false
 uint16_t ReadUInt16() ;

/// @brief Method ReadUInt32 addr 0x236848c size 0x24 virtual false final false
 uint32_t ReadUInt32() ;

/// @brief Method ReadUInt64 addr 0x23684b0 size 0x24 virtual false final false
 uint64_t ReadUInt64() ;

/// @brief Method ReadSerializationHeaderRecord addr 0x2365fec size 0xc0 virtual false final false
 void ReadSerializationHeaderRecord() ;

/// @brief Method ReadAssembly addr 0x23660ac size 0x274 virtual false final false
 void ReadAssembly(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method ReadObject addr 0x2366320 size 0x358 virtual false final false
 void ReadObject() ;

/// @brief Method ReadCrossAppDomainMap addr 0x2366678 size 0x1cc virtual false final false
 void ReadCrossAppDomainMap() ;

/// @brief Method ReadObjectWithMap addr 0x2366844 size 0xa0 virtual false final false
 void ReadObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method ReadObjectWithMap addr 0x2368734 size 0x40c virtual false final false
 void ReadObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap record) ;

/// @brief Method ReadObjectWithMapTyped addr 0x23668e4 size 0x90 virtual false final false
 void ReadObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method ReadObjectWithMapTyped addr 0x2368b40 size 0x42c virtual false final false
 void ReadObjectWithMapTyped(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped record) ;

/// @brief Method ReadObjectString addr 0x2366974 size 0x584 virtual false final false
 void ReadObjectString(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method ReadMemberPrimitiveTyped addr 0x2367494 size 0x384 virtual false final false
 void ReadMemberPrimitiveTyped() ;

/// @brief Method ReadArray addr 0x2366ef8 size 0x59c virtual false final false
 void ReadArray(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method ReadArrayAsBytes addr 0x2368f6c size 0x338 virtual false final false
 void ReadArrayAsBytes(System::Runtime::Serialization::Formatters::Binary::ParseRecord pr) ;

/// @brief Method ReadMemberPrimitiveUnTyped addr 0x2367d70 size 0x2a8 virtual false final false
 void ReadMemberPrimitiveUnTyped() ;

/// @brief Method ReadMemberReference addr 0x2367818 size 0x1e8 virtual false final false
 void ReadMemberReference() ;

/// @brief Method ReadObjectNull addr 0x2367a00 size 0x1f4 virtual false final false
 void ReadObjectNull(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) ;

/// @brief Method ReadMessageEnd addr 0x2367bf4 size 0x178 virtual false final false
 void ReadMessageEnd() ;

/// @brief Method ReadValue addr 0x23692a4 size 0x420 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadValue(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) ;

/// @brief Method GetOp addr 0x2368648 size 0xa8 virtual false final false
 System::Runtime::Serialization::Formatters::Binary::ObjectProgress GetOp() ;

/// @brief Method PutOp addr 0x2368070 size 0x88 virtual false final false
 void PutOp(System::Runtime::Serialization::Formatters::Binary::ObjectProgress op) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::__BinaryParser);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::__BinaryParser, "System.Runtime.Serialization.Formatters.Binary", "__BinaryParser");
