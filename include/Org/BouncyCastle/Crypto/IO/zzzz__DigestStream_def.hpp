#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class DigestStream;
}
// Type: Org.BouncyCastle.Crypto.IO::DigestStream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(929))
// CS Name: Org.BouncyCastle.Crypto.IO.DigestStream
class CORDL_TYPE DigestStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DigestStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestStream", modifiers: " const&", def_value: None }]
constexpr DigestStream(DigestStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestStream", modifiers: "&&", def_value: None }]
constexpr DigestStream(DigestStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigestStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr DigestStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigestStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigestStream& operator=(DigestStream&& o) noexcept = default;
  constexpr DigestStream& operator=(DigestStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_stream() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_inDigest, put=__set_inDigest))  inDigest;

constexpr void __set_inDigest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_inDigest() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_outDigest, put=__set_outDigest))  outDigest;

constexpr void __set_outDigest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_outDigest() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

static Org::BouncyCastle::Crypto::IO::DigestStream New_ctor(System::IO::Stream stream, Org::BouncyCastle::Crypto::IDigest readDigest, Org::BouncyCastle::Crypto::IDigest writeDigest) ;

/// @brief Method .ctor addr 0xe7bb94 size 0x80 virtual false final false
 void _ctor(System::IO::Stream stream, Org::BouncyCastle::Crypto::IDigest readDigest, Org::BouncyCastle::Crypto::IDigest writeDigest) ;

/// @brief Method ReadDigest addr 0xe7bc14 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IDigest ReadDigest() ;

/// @brief Method WriteDigest addr 0xe7bc1c size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IDigest WriteDigest() ;

/// @brief Method Read addr 0xe7bc24 size 0xfc virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadByte addr 0xe7bd20 size 0xd0 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Write addr 0xe7bdf0 size 0xf0 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteByte addr 0xe7bee0 size 0xc8 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method get_CanRead addr 0xe7bfa8 size 0x20 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0xe7bfc8 size 0x20 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0xe7bfe8 size 0x20 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0xe7c008 size 0x20 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0xe7c028 size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0xe7c048 size 0x24 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Close addr 0xe7c06c size 0x68 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0xe7c0d4 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Seek addr 0xe7c0f8 size 0x24 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0xe7c11c size 0x24 virtual true final false
 void SetLength(int64_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(Org::BouncyCastle::Crypto::IO::DigestStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IO::DigestStream, "Org.BouncyCastle.Crypto.IO", "DigestStream");
