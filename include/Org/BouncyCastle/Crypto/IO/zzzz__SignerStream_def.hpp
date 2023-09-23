#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class SignerStream;
}
// Type: Org.BouncyCastle.Crypto.IO::SignerStream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(933))
// CS Name: Org.BouncyCastle.Crypto.IO.SignerStream
class CORDL_TYPE SignerStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SignerStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerStream", modifiers: " const&", def_value: None }]
constexpr SignerStream(SignerStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerStream", modifiers: "&&", def_value: None }]
constexpr SignerStream(SignerStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr SignerStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerStream& operator=(SignerStream&& o) noexcept = default;
  constexpr SignerStream& operator=(SignerStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_stream() const;

 Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get_inSigner, put=__set_inSigner))  inSigner;

constexpr void __set_inSigner(Org::BouncyCastle::Crypto::ISigner value) ;

constexpr Org::BouncyCastle::Crypto::ISigner __get_inSigner() const;

 Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get_outSigner, put=__set_outSigner))  outSigner;

constexpr void __set_outSigner(Org::BouncyCastle::Crypto::ISigner value) ;

constexpr Org::BouncyCastle::Crypto::ISigner __get_outSigner() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "readSigner", ty: "Org::BouncyCastle::Crypto::ISigner", modifiers: "", def_value: None }, CppParam { name: "writeSigner", ty: "Org::BouncyCastle::Crypto::ISigner", modifiers: "", def_value: None }]
explicit SignerStream(System::IO::Stream stream, Org::BouncyCastle::Crypto::ISigner readSigner, Org::BouncyCastle::Crypto::ISigner writeSigner) ;

/// @brief Method .ctor addr 0xe7ca5c size 0x80 virtual false final false
 void _ctor(System::IO::Stream stream, Org::BouncyCastle::Crypto::ISigner readSigner, Org::BouncyCastle::Crypto::ISigner writeSigner) ;

/// @brief Method ReadSigner addr 0xe7cadc size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::ISigner ReadSigner() ;

/// @brief Method WriteSigner addr 0xe7cae4 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::ISigner WriteSigner() ;

/// @brief Method Read addr 0xe7caec size 0xfc virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadByte addr 0xe7cbe8 size 0xd0 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Write addr 0xe7ccb8 size 0xf0 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteByte addr 0xe7cda8 size 0xc8 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method get_CanRead addr 0xe7ce70 size 0x20 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0xe7ce90 size 0x20 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0xe7ceb0 size 0x20 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0xe7ced0 size 0x20 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0xe7cef0 size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0xe7cf10 size 0x24 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Close addr 0xe7cf34 size 0x68 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0xe7cf9c size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Seek addr 0xe7cfc0 size 0x24 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0xe7cfe4 size 0x24 virtual true final false
 void SetLength(int64_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(Org::BouncyCastle::Crypto::IO::SignerStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IO::SignerStream, "Org.BouncyCastle.Crypto.IO", "SignerStream");
