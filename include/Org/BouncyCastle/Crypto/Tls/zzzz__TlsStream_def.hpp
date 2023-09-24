#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
struct SeekOrigin;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsProtocol;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStream;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1330))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsStream
class CORDL_TYPE TlsStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TlsStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsStream", modifiers: " const&", def_value: None }]
constexpr TlsStream(TlsStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsStream", modifiers: "&&", def_value: None }]
constexpr TlsStream(TlsStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr TlsStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsStream& operator=(TlsStream&& o) noexcept = default;
  constexpr TlsStream& operator=(TlsStream const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsProtocol __declspec(property(get=__get_handler, put=__set_handler))  handler;

constexpr void __set_handler(Org::BouncyCastle::Crypto::Tls::TlsProtocol value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsProtocol __get_handler() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

static Org::BouncyCastle::Crypto::Tls::TlsStream New_ctor(Org::BouncyCastle::Crypto::Tls::TlsProtocol handler) ;

/// @brief Method .ctor addr 0xf2c22c size 0x6c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsProtocol handler) ;

/// @brief Method get_CanRead addr 0xf2c298 size 0x30 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0xf2c2c8 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0xf2c2d0 size 0x30 virtual true final false
 bool get_CanWrite() ;

/// @brief Method Close addr 0xf2c300 size 0x34 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0xf2c334 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method get_Length addr 0xf2c358 size 0x40 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0xf2c398 size 0x40 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0xf2c3d8 size 0x40 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Read addr 0xf2c418 size 0x24 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method ReadByte addr 0xf2c43c size 0x98 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Seek addr 0xf2c4d4 size 0x40 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0xf2c514 size 0x40 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Write addr 0xf2c554 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method WriteByte addr 0xf2c578 size 0x94 virtual true final false
 void WriteByte(uint8_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsStream, "Org.BouncyCastle.Crypto.Tls", "TlsStream");
