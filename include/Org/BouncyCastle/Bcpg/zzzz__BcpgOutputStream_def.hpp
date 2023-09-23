#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgObject;
}
namespace Org::BouncyCastle::Bcpg {
class ContainedPacket;
}
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Type: Org.BouncyCastle.Bcpg::BcpgOutputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(555))
// CS Name: Org.BouncyCastle.Bcpg.BcpgOutputStream
class CORDL_TYPE BcpgOutputStream : public Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BcpgOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "BcpgOutputStream", modifiers: " const&", def_value: None }]
constexpr BcpgOutputStream(BcpgOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BcpgOutputStream", modifiers: "&&", def_value: None }]
constexpr BcpgOutputStream(BcpgOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BcpgOutputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr BcpgOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BcpgOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BcpgOutputStream& operator=(BcpgOutputStream&& o) noexcept = default;
  constexpr BcpgOutputStream& operator=(BcpgOutputStream const& o) noexcept = default;
                


// Fields

/// @brief Field BufferSizePower offset 0
static constexpr int32_t  BufferSizePower{16};

 System::IO::Stream __declspec(property(get=__get_outStr, put=__set_outStr))  outStr;

constexpr void __set_outStr(System::IO::Stream value) ;

constexpr System::IO::Stream __get_outStr() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_partialBuffer, put=__set_partialBuffer))  partialBuffer;

constexpr void __set_partialBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_partialBuffer() const;

 int32_t __declspec(property(get=__get_partialBufferLength, put=__set_partialBufferLength))  partialBufferLength;

constexpr void __set_partialBufferLength(int32_t value) ;

constexpr int32_t __get_partialBufferLength() const;

 int32_t __declspec(property(get=__get_partialPower, put=__set_partialPower))  partialPower;

constexpr void __set_partialPower(int32_t value) ;

constexpr int32_t __get_partialPower() const;

 int32_t __declspec(property(get=__get_partialOffset, put=__set_partialOffset))  partialOffset;

constexpr void __set_partialOffset(int32_t value) ;

constexpr int32_t __get_partialOffset() const;


// Methods

/// @brief Method Wrap addr 0x11455a4 size 0x90 virtual false final false
static Org::BouncyCastle::Bcpg::BcpgOutputStream Wrap(System::IO::Stream outStr) ;

// Ctor Parameters [CppParam { name: "outStr", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit BcpgOutputStream(System::IO::Stream outStr) ;

/// @brief Method .ctor addr 0x11454fc size 0x78 virtual false final false
 void _ctor(System::IO::Stream outStr) ;

// Ctor Parameters [CppParam { name: "outStr", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tag", ty: "Org::BouncyCastle::Bcpg::PacketTag", modifiers: "", def_value: None }]
explicit BcpgOutputStream(System::IO::Stream outStr, Org::BouncyCastle::Bcpg::PacketTag tag) ;

/// @brief Method .ctor addr 0x1145634 size 0x90 virtual false final false
 void _ctor(System::IO::Stream outStr, Org::BouncyCastle::Bcpg::PacketTag tag) ;

// Ctor Parameters [CppParam { name: "outStr", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tag", ty: "Org::BouncyCastle::Bcpg::PacketTag", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "oldFormat", ty: "bool", modifiers: "", def_value: None }]
explicit BcpgOutputStream(System::IO::Stream outStr, Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length, bool oldFormat) ;

/// @brief Method .ctor addr 0x1145838 size 0x130 virtual false final false
 void _ctor(System::IO::Stream outStr, Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length, bool oldFormat) ;

// Ctor Parameters [CppParam { name: "outStr", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tag", ty: "Org::BouncyCastle::Bcpg::PacketTag", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int64_t", modifiers: "", def_value: None }]
explicit BcpgOutputStream(System::IO::Stream outStr, Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length) ;

/// @brief Method .ctor addr 0x1145968 size 0x9c virtual false final false
 void _ctor(System::IO::Stream outStr, Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length) ;

// Ctor Parameters [CppParam { name: "outStr", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tag", ty: "Org::BouncyCastle::Bcpg::PacketTag", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BcpgOutputStream(System::IO::Stream outStr, Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t> buffer) ;

/// @brief Method .ctor addr 0x1145a04 size 0x128 virtual false final false
 void _ctor(System::IO::Stream outStr, Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t> buffer) ;

/// @brief Method WriteNewPacketLength addr 0x1145b2c size 0xe0 virtual false final false
 void WriteNewPacketLength(int64_t bodyLen) ;

/// @brief Method WriteHeader addr 0x11456c4 size 0x174 virtual false final false
 void WriteHeader(Org::BouncyCastle::Bcpg::PacketTag tag, bool oldPackets, bool partial, int64_t bodyLen) ;

/// @brief Method PartialFlush addr 0x1145c0c size 0x80 virtual false final false
 void PartialFlush(bool isLast) ;

/// @brief Method WritePartial addr 0x1145c8c size 0x68 virtual false final false
 void WritePartial(uint8_t b) ;

/// @brief Method WritePartial addr 0x1145cf4 size 0xec virtual false final false
 void WritePartial(::ArrayW<uint8_t> buffer, int32_t off, int32_t len) ;

/// @brief Method WriteByte addr 0x1145de0 size 0x34 virtual true final false
 void WriteByte(uint8_t value) ;

/// @brief Method Write addr 0x1145e14 size 0x34 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteShort addr 0x1145e48 size 0x94 virtual true final false
 void WriteShort(int16_t n) ;

/// @brief Method WriteInt addr 0x1145edc size 0xb4 virtual true final false
 void WriteInt(int32_t n) ;

/// @brief Method WriteLong addr 0x1145f90 size 0xf4 virtual true final false
 void WriteLong(int64_t n) ;

/// @brief Method WritePacket addr 0x1146084 size 0x28 virtual false final false
 void WritePacket(Org::BouncyCastle::Bcpg::ContainedPacket p) ;

/// @brief Method WritePacket addr 0x11460ac size 0x48 virtual false final false
 void WritePacket(Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t> body, bool oldFormat) ;

/// @brief Method WriteObject addr 0x1145574 size 0x28 virtual false final false
 void WriteObject(Org::BouncyCastle::Bcpg::BcpgObject bcpgObject) ;

/// @brief Method WriteObjects addr 0x11460f4 size 0x6c virtual false final false
 void WriteObjects(::ArrayW<Org::BouncyCastle::Bcpg::BcpgObject> v) ;

/// @brief Method Flush addr 0x1146160 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Finish addr 0x1146184 size 0x40 virtual false final false
 void Finish() ;

/// @brief Method Close addr 0x11461c4 size 0x8c virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::BcpgOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::BcpgOutputStream, "Org.BouncyCastle.Bcpg", "BcpgOutputStream");
