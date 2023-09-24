#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Net {
class IPEndPoint;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Type: LiteNetLib.Utils::NetDataReader
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14475))
// CS Name: LiteNetLib.Utils.NetDataReader
class CORDL_TYPE NetDataReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NetDataReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetDataReader", modifiers: " const&", def_value: None }]
constexpr NetDataReader(NetDataReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetDataReader", modifiers: "&&", def_value: None }]
constexpr NetDataReader(NetDataReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetDataReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetDataReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetDataReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetDataReader& operator=(NetDataReader&& o) noexcept = default;
  constexpr NetDataReader& operator=(NetDataReader const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__data() const;

 int32_t __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(int32_t value) ;

constexpr int32_t __get__position() const;

 int32_t __declspec(property(get=__get__dataSize, put=__set__dataSize))  _dataSize;

constexpr void __set__dataSize(int32_t value) ;

constexpr int32_t __get__dataSize() const;

 int32_t __declspec(property(get=__get__offset, put=__set__offset))  _offset;

constexpr void __set__offset(int32_t value) ;

constexpr int32_t __get__offset() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_RawData))  RawData;

 int32_t __declspec(property(get=get_RawDataSize))  RawDataSize;

 int32_t __declspec(property(get=get_UserDataOffset))  UserDataOffset;

 int32_t __declspec(property(get=get_UserDataSize))  UserDataSize;

 bool __declspec(property(get=get_IsNull))  IsNull;

 int32_t __declspec(property(get=get_Position))  Position;

 bool __declspec(property(get=get_EndOfData))  EndOfData;

 int32_t __declspec(property(get=get_AvailableBytes))  AvailableBytes;


// Methods

/// @brief Method get_RawData addr 0x2095174 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method get_RawDataSize addr 0x209517c size 0x8 virtual false final false
 int32_t get_RawDataSize() ;

/// @brief Method get_UserDataOffset addr 0x2095184 size 0x8 virtual false final false
 int32_t get_UserDataOffset() ;

/// @brief Method get_UserDataSize addr 0x209518c size 0xc virtual false final false
 int32_t get_UserDataSize() ;

/// @brief Method get_IsNull addr 0x208abb4 size 0x10 virtual false final false
 bool get_IsNull() ;

/// @brief Method get_Position addr 0x2095198 size 0x8 virtual false final false
 int32_t get_Position() ;

/// @brief Method get_EndOfData addr 0x20951a0 size 0x10 virtual false final false
 bool get_EndOfData() ;

/// @brief Method get_AvailableBytes addr 0x20951b0 size 0xc virtual false final false
 int32_t get_AvailableBytes() ;

/// @brief Method SkipBytes addr 0x20951bc size 0x10 virtual false final false
 void SkipBytes(int32_t count) ;

/// @brief Method SetSource addr 0x20951cc size 0x2c virtual false final false
 void SetSource(LiteNetLib::Utils::NetDataWriter dataWriter) ;

/// @brief Method SetSource addr 0x20951f8 size 0x28 virtual false final false
 void SetSource(::ArrayW<uint8_t> source) ;

/// @brief Method SetSource addr 0x2095220 size 0x28 virtual false final false
 void SetSource(::ArrayW<uint8_t> source, int32_t offset) ;

/// @brief Method SetSource addr 0x20875fc size 0x10 virtual false final false
 void SetSource(::ArrayW<uint8_t> source, int32_t offset, int32_t maxSize) ;

static LiteNetLib::Utils::NetDataReader New_ctor() ;

/// @brief Method .ctor addr 0x20874dc size 0x8 virtual false final false
 void _ctor() ;

static LiteNetLib::Utils::NetDataReader New_ctor(::ArrayW<uint8_t> source) ;

/// @brief Method .ctor addr 0x2095248 size 0x40 virtual false final false
 void _ctor(::ArrayW<uint8_t> source) ;

static LiteNetLib::Utils::NetDataReader New_ctor(::ArrayW<uint8_t> source, int32_t offset) ;

/// @brief Method .ctor addr 0x2095288 size 0x44 virtual false final false
 void _ctor(::ArrayW<uint8_t> source, int32_t offset) ;

static LiteNetLib::Utils::NetDataReader New_ctor(::ArrayW<uint8_t> source, int32_t offset, int32_t maxSize) ;

/// @brief Method .ctor addr 0x208f8c4 size 0x40 virtual false final false
 void _ctor(::ArrayW<uint8_t> source, int32_t offset, int32_t maxSize) ;

/// @brief Method GetNetEndPoint addr 0x20952cc size 0x78 virtual false final false
 System::Net::IPEndPoint GetNetEndPoint() ;

/// @brief Method GetByte addr 0x209549c size 0x40 virtual false final false
 uint8_t GetByte() ;

/// @brief Method GetSByte addr 0x20954dc size 0x40 virtual false final false
 int8_t GetSByte() ;

/// @brief Method GetBoolArray addr 0x209551c size 0xdc virtual false final false
 ::ArrayW<bool> GetBoolArray() ;

/// @brief Method GetUShortArray addr 0x20955f8 size 0xd8 virtual false final false
 ::ArrayW<uint16_t> GetUShortArray() ;

/// @brief Method GetShortArray addr 0x20956d0 size 0xd8 virtual false final false
 ::ArrayW<int16_t> GetShortArray() ;

/// @brief Method GetLongArray addr 0x20957a8 size 0xd8 virtual false final false
 ::ArrayW<int64_t> GetLongArray() ;

/// @brief Method GetULongArray addr 0x2095880 size 0xd8 virtual false final false
 ::ArrayW<uint64_t> GetULongArray() ;

/// @brief Method GetIntArray addr 0x2095958 size 0xd8 virtual false final false
 ::ArrayW<int32_t> GetIntArray() ;

/// @brief Method GetUIntArray addr 0x2095a30 size 0xd8 virtual false final false
 ::ArrayW<uint32_t> GetUIntArray() ;

/// @brief Method GetFloatArray addr 0x2095b08 size 0xd8 virtual false final false
 ::ArrayW<float_t> GetFloatArray() ;

/// @brief Method GetDoubleArray addr 0x2095be0 size 0xd8 virtual false final false
 ::ArrayW<double_t> GetDoubleArray() ;

/// @brief Method GetStringArray addr 0x2095cb8 size 0x120 virtual false final false
 ::ArrayW<::StringW> GetStringArray() ;

/// @brief Method GetStringArray addr 0x2095dd8 size 0x128 virtual false final false
 ::ArrayW<::StringW> GetStringArray(int32_t maxStringLength) ;

/// @brief Method GetBool addr 0x2095f00 size 0x48 virtual false final false
 bool GetBool() ;

/// @brief Method GetChar addr 0x2095f48 size 0x74 virtual false final false
 char16_t GetChar() ;

/// @brief Method GetUShort addr 0x2095fbc size 0x74 virtual false final false
 uint16_t GetUShort() ;

/// @brief Method GetShort addr 0x2096030 size 0x74 virtual false final false
 int16_t GetShort() ;

/// @brief Method GetLong addr 0x20960a4 size 0x74 virtual false final false
 int64_t GetLong() ;

/// @brief Method GetULong addr 0x2096118 size 0x74 virtual false final false
 uint64_t GetULong() ;

/// @brief Method GetInt addr 0x2095428 size 0x74 virtual false final false
 int32_t GetInt() ;

/// @brief Method GetUInt addr 0x209618c size 0x74 virtual false final false
 uint32_t GetUInt() ;

/// @brief Method GetFloat addr 0x2096200 size 0x74 virtual false final false
 float_t GetFloat() ;

/// @brief Method GetDouble addr 0x2096274 size 0x74 virtual false final false
 double_t GetDouble() ;

/// @brief Method GetString addr 0x2095344 size 0xe4 virtual false final false
 ::StringW GetString(int32_t maxLength) ;

/// @brief Method GetString addr 0x2084c9c size 0x9c virtual false final false
 ::StringW GetString() ;

/// @brief Method GetRemainingBytesSegment addr 0x20962e8 size 0x7c virtual false final false
 System::ArraySegment_1<uint8_t> GetRemainingBytesSegment() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T Get() ;

/// @brief Method GetRemainingBytes addr 0x2096364 size 0x88 virtual false final false
 ::ArrayW<uint8_t> GetRemainingBytes() ;

/// @brief Method GetBytes addr 0x20963ec size 0x48 virtual false final false
 void GetBytes(::ArrayW<uint8_t> destination, int32_t start, int32_t count) ;

/// @brief Method GetBytes addr 0x2096434 size 0x48 virtual false final false
 void GetBytes(::ArrayW<uint8_t> destination, int32_t count) ;

/// @brief Method GetSBytesWithLength addr 0x209647c size 0x90 virtual false final false
 ::ArrayW<int8_t> GetSBytesWithLength() ;

/// @brief Method GetBytesWithLength addr 0x209650c size 0x90 virtual false final false
 ::ArrayW<uint8_t> GetBytesWithLength() ;

/// @brief Method PeekByte addr 0x209659c size 0x34 virtual false final false
 uint8_t PeekByte() ;

/// @brief Method PeekSByte addr 0x20965d0 size 0x34 virtual false final false
 int8_t PeekSByte() ;

/// @brief Method PeekBool addr 0x2096604 size 0x3c virtual false final false
 bool PeekBool() ;

/// @brief Method PeekChar addr 0x2096640 size 0x64 virtual false final false
 char16_t PeekChar() ;

/// @brief Method PeekUShort addr 0x20966a4 size 0x64 virtual false final false
 uint16_t PeekUShort() ;

/// @brief Method PeekShort addr 0x2096708 size 0x64 virtual false final false
 int16_t PeekShort() ;

/// @brief Method PeekLong addr 0x209676c size 0x64 virtual false final false
 int64_t PeekLong() ;

/// @brief Method PeekULong addr 0x20967d0 size 0x64 virtual false final false
 uint64_t PeekULong() ;

/// @brief Method PeekInt addr 0x2096834 size 0x64 virtual false final false
 int32_t PeekInt() ;

/// @brief Method PeekUInt addr 0x2096898 size 0x64 virtual false final false
 uint32_t PeekUInt() ;

/// @brief Method PeekFloat addr 0x20968fc size 0x64 virtual false final false
 float_t PeekFloat() ;

/// @brief Method PeekDouble addr 0x2096960 size 0x64 virtual false final false
 double_t PeekDouble() ;

/// @brief Method PeekString addr 0x20969c4 size 0x11c virtual false final false
 ::StringW PeekString(int32_t maxLength) ;

/// @brief Method PeekString addr 0x2096ae0 size 0xcc virtual false final false
 ::StringW PeekString() ;

/// @brief Method TryGetByte addr 0x2096bac size 0x3c virtual false final false
 bool TryGetByte(ByRef<uint8_t> result) ;

/// @brief Method TryGetSByte addr 0x2096be8 size 0x3c virtual false final false
 bool TryGetSByte(ByRef<int8_t> result) ;

/// @brief Method TryGetBool addr 0x2096c24 size 0x3c virtual false final false
 bool TryGetBool(ByRef<bool> result) ;

/// @brief Method TryGetChar addr 0x2096c60 size 0x3c virtual false final false
 bool TryGetChar(ByRef<char16_t> result) ;

/// @brief Method TryGetShort addr 0x2096c9c size 0x3c virtual false final false
 bool TryGetShort(ByRef<int16_t> result) ;

/// @brief Method TryGetUShort addr 0x2096cd8 size 0x3c virtual false final false
 bool TryGetUShort(ByRef<uint16_t> result) ;

/// @brief Method TryGetInt addr 0x2096d14 size 0x3c virtual false final false
 bool TryGetInt(ByRef<int32_t> result) ;

/// @brief Method TryGetUInt addr 0x2096d50 size 0x3c virtual false final false
 bool TryGetUInt(ByRef<uint32_t> result) ;

/// @brief Method TryGetLong addr 0x2096d8c size 0x3c virtual false final false
 bool TryGetLong(ByRef<int64_t> result) ;

/// @brief Method TryGetULong addr 0x2096dc8 size 0x3c virtual false final false
 bool TryGetULong(ByRef<uint64_t> result) ;

/// @brief Method TryGetFloat addr 0x2096e04 size 0x38 virtual false final false
 bool TryGetFloat(ByRef<float_t> result) ;

/// @brief Method TryGetDouble addr 0x2096e3c size 0x38 virtual false final false
 bool TryGetDouble(ByRef<double_t> result) ;

/// @brief Method TryGetString addr 0x2096e74 size 0x64 virtual false final false
 bool TryGetString(ByRef<::StringW> result) ;

/// @brief Method TryGetStringArray addr 0x2096ed8 size 0xe0 virtual false final false
 bool TryGetStringArray(ByRef<::ArrayW<::StringW>> result) ;

/// @brief Method TryGetBytesWithLength addr 0x2096fb8 size 0x68 virtual false final false
 bool TryGetBytesWithLength(ByRef<::ArrayW<uint8_t>> result) ;

/// @brief Method Clear addr 0x2088cfc size 0x8 virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(LiteNetLib::Utils::NetDataReader);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetDataReader, "LiteNetLib.Utils", "NetDataReader");
