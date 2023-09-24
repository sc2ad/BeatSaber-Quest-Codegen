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
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class MacStream;
}
// Type: Org.BouncyCastle.Crypto.IO::MacStream
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(931))
// CS Name: Org.BouncyCastle.Crypto.IO.MacStream
class CORDL_TYPE MacStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MacStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacStream", modifiers: " const&", def_value: None }]
constexpr MacStream(MacStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacStream", modifiers: "&&", def_value: None }]
constexpr MacStream(MacStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr MacStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacStream& operator=(MacStream&& o) noexcept = default;
  constexpr MacStream& operator=(MacStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_stream() const;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_inMac, put=__set_inMac))  inMac;

constexpr void __set_inMac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_inMac() const;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_outMac, put=__set_outMac))  outMac;

constexpr void __set_outMac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_outMac() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

static Org::BouncyCastle::Crypto::IO::MacStream New_ctor(System::IO::Stream stream, Org::BouncyCastle::Crypto::IMac readMac, Org::BouncyCastle::Crypto::IMac writeMac) ;

/// @brief Method .ctor addr 0xe7c2f8 size 0x80 virtual false final false
 void _ctor(System::IO::Stream stream, Org::BouncyCastle::Crypto::IMac readMac, Org::BouncyCastle::Crypto::IMac writeMac) ;

/// @brief Method ReadMac addr 0xe7c378 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IMac ReadMac() ;

/// @brief Method WriteMac addr 0xe7c380 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IMac WriteMac() ;

/// @brief Method Read addr 0xe7c388 size 0xfc virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method ReadByte addr 0xe7c484 size 0xd0 virtual true final false
 int32_t ReadByte() ;

/// @brief Method Write addr 0xe7c554 size 0xf0 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method WriteByte addr 0xe7c644 size 0xc8 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method get_CanRead addr 0xe7c70c size 0x20 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0xe7c72c size 0x20 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_CanSeek addr 0xe7c74c size 0x20 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_Length addr 0xe7c76c size 0x20 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0xe7c78c size 0x20 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0xe7c7ac size 0x24 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Close addr 0xe7c7d0 size 0x68 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0xe7c838 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method Seek addr 0xe7c85c size 0x24 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0xe7c880 size 0x24 virtual true final false
 void SetLength(int64_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(Org::BouncyCastle::Crypto::IO::MacStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IO::MacStream, "Org.BouncyCastle.Crypto.IO", "MacStream");
