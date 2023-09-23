#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
struct SeekOrigin;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueue;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueueStream;
}
// Type: Org.BouncyCastle.Crypto.Tls::ByteQueueStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1184))
// CS Name: Org.BouncyCastle.Crypto.Tls.ByteQueueStream
class CORDL_TYPE ByteQueueStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ByteQueueStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteQueueStream", modifiers: " const&", def_value: None }]
constexpr ByteQueueStream(ByteQueueStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ByteQueueStream", modifiers: "&&", def_value: None }]
constexpr ByteQueueStream(ByteQueueStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ByteQueueStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr ByteQueueStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ByteQueueStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ByteQueueStream& operator=(ByteQueueStream&& o) noexcept = default;
  constexpr ByteQueueStream& operator=(ByteQueueStream const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::ByteQueue __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(Org::BouncyCastle::Crypto::Tls::ByteQueue value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ByteQueue __get_buffer() const;


// Properties

 int32_t __declspec(property(get=get_Available))  Available;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters []
explicit ByteQueueStream() ;

/// @brief Method .ctor addr 0xecedd4 size 0x90 virtual false final false
 void _ctor() ;

/// @brief Method get_Available addr 0xecee64 size 0x1c virtual true final false
 int32_t get_Available() ;

/// @brief Method get_CanRead addr 0xecee80 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0xecee88 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0xecee90 size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method Flush addr 0xecee98 size 0x4 virtual true final false
 void Flush() ;

/// @brief Method get_Length addr 0xecee9c size 0x40 virtual true final false
 int64_t get_Length() ;

/// @brief Method Peek addr 0xeceedc size 0xa0 virtual true final false
 int32_t Peek(::ArrayW<uint8_t> buf) ;

/// @brief Method get_Position addr 0xecef7c size 0x40 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0xecefbc size 0x40 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Read addr 0xeceffc size 0x28 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buf) ;

/// @brief Method Read addr 0xecf024 size 0xb8 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method ReadByte addr 0xecf0dc size 0x48 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Seek addr 0xecf124 size 0x40 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0xecf164 size 0x40 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Skip addr 0xecf1a4 size 0x90 virtual true final false
 int32_t Skip(int32_t n) ;

/// @brief Method Write addr 0xecf234 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> buf) ;

/// @brief Method Write addr 0xecf258 size 0x18 virtual true final false
 void Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method WriteByte addr 0xecf270 size 0x88 virtual true final false
 void WriteByte(uint8_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::ByteQueueStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::ByteQueueStream, "Org.BouncyCastle.Crypto.Tls", "ByteQueueStream");
