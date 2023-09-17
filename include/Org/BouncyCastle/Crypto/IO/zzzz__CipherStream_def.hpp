#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
// Type: Org.BouncyCastle.Crypto.IO::CipherStream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(927))
// CS Name: Org.BouncyCastle.Crypto.IO.CipherStream
class CORDL_TYPE CipherStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~CipherStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherStream", modifiers: " const&", def_value: None }]
constexpr CipherStream(CipherStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherStream", modifiers: "&&", def_value: None }]
constexpr CipherStream(CipherStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CipherStream(void* ptr) noexcept : ::System::IO::Stream(ptr) {
}


  constexpr CipherStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CipherStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CipherStream& operator=(CipherStream&& o) noexcept = default;
  constexpr CipherStream& operator=(CipherStream const& o) noexcept = default;
                


// Fields

 ::System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_stream() const;

 ::Org::BouncyCastle::Crypto::IBufferedCipher __declspec(property(get=__get_inCipher, put=__set_inCipher))  inCipher;

constexpr void __set_inCipher(::Org::BouncyCastle::Crypto::IBufferedCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher __get_inCipher() const;

 ::Org::BouncyCastle::Crypto::IBufferedCipher __declspec(property(get=__get_outCipher, put=__set_outCipher))  outCipher;

constexpr void __set_outCipher(::Org::BouncyCastle::Crypto::IBufferedCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher __get_outCipher() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mInBuf, put=__set_mInBuf))  mInBuf;

constexpr void __set_mInBuf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mInBuf() const;

 int32_t __declspec(property(get=__get_mInPos, put=__set_mInPos))  mInPos;

constexpr void __set_mInPos(int32_t value) ;

constexpr int32_t __get_mInPos() const;

 bool __declspec(property(get=__get_inStreamEnded, put=__set_inStreamEnded))  inStreamEnded;

constexpr void __set_inStreamEnded(bool value) ;

constexpr bool __get_inStreamEnded() const;


// Properties

 ::Org::BouncyCastle::Crypto::IBufferedCipher __declspec(property(get=get_ReadCipher))  ReadCipher;

 ::Org::BouncyCastle::Crypto::IBufferedCipher __declspec(property(get=get_WriteCipher))  WriteCipher;

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "readCipher", ty: "::Org::BouncyCastle::Crypto::IBufferedCipher", modifiers: "", def_value: None }, CppParam { name: "writeCipher", ty: "::Org::BouncyCastle::Crypto::IBufferedCipher", modifiers: "", def_value: None }]
explicit CipherStream(::System::IO::Stream stream, ::Org::BouncyCastle::Crypto::IBufferedCipher readCipher, ::Org::BouncyCastle::Crypto::IBufferedCipher writeCipher) ;

/// @brief Method .ctor addr 0xe7afcc size 0x90 virtual false final false
 void _ctor(::System::IO::Stream stream, ::Org::BouncyCastle::Crypto::IBufferedCipher readCipher, ::Org::BouncyCastle::Crypto::IBufferedCipher writeCipher) ;

/// @brief Method get_ReadCipher addr 0xe7b05c size 0x8 virtual false final false
 ::Org::BouncyCastle::Crypto::IBufferedCipher get_ReadCipher() ;

/// @brief Method get_WriteCipher addr 0xe7b064 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crypto::IBufferedCipher get_WriteCipher() ;

/// @brief Method ReadByte addr 0xe7b06c size 0x9c virtual true final false
 int32_t ReadByte() ;

/// @brief Method Read addr 0xe7b14c size 0x14c virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method FillInBuf addr 0xe7b108 size 0x44 virtual false final false
 bool FillInBuf() ;

/// @brief Method ReadAndProcessBlock addr 0xe7b298 size 0x218 virtual false final false
 ::ArrayW<uint8_t> ReadAndProcessBlock() ;

/// @brief Method Write addr 0xe7b4b0 size 0x118 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteByte addr 0xe7b5c8 size 0x104 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method get_CanRead addr 0xe7b6cc size 0x40 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0xe7b70c size 0x40 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0xe7b74c size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0xe7b754 size 0x40 virtual true final true
 int64_t get_Length() ;

/// @brief Method get_Position addr 0xe7b794 size 0x40 virtual true final true
 int64_t get_Position() ;

/// @brief Method set_Position addr 0xe7b7d4 size 0x40 virtual true final true
 void set_Position(int64_t value) ;

/// @brief Method Close addr 0xe7b814 size 0x124 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0xe7b938 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Seek addr 0xe7b95c size 0x40 virtual true final true
 int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0xe7b99c size 0x40 virtual true final true
 void SetLength(int64_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::IO
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::CipherStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::CipherStream, "Org.BouncyCastle.Crypto.IO", "CipherStream");
