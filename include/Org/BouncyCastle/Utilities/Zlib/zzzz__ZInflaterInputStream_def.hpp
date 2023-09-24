#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class ZInflaterInputStream;
}
// Type: Org.BouncyCastle.Utilities.Zlib::ZInflaterInputStream
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1828))
// CS Name: Org.BouncyCastle.Utilities.Zlib.ZInflaterInputStream
class CORDL_TYPE ZInflaterInputStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ZInflaterInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZInflaterInputStream", modifiers: " const&", def_value: None }]
constexpr ZInflaterInputStream(ZInflaterInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZInflaterInputStream", modifiers: "&&", def_value: None }]
constexpr ZInflaterInputStream(ZInflaterInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZInflaterInputStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr ZInflaterInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZInflaterInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZInflaterInputStream& operator=(ZInflaterInputStream&& o) noexcept = default;
  constexpr ZInflaterInputStream& operator=(ZInflaterInputStream const& o) noexcept = default;
                


// Fields

/// @brief Field BUFSIZE offset 0
static constexpr int32_t  BUFSIZE{4192};

 Org::BouncyCastle::Utilities::Zlib::ZStream __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(Org::BouncyCastle::Utilities::Zlib::ZStream value) ;

constexpr Org::BouncyCastle::Utilities::Zlib::ZStream __get_z() const;

 int32_t __declspec(property(get=__get_flushLevel, put=__set_flushLevel))  flushLevel;

constexpr void __set_flushLevel(int32_t value) ;

constexpr int32_t __get_flushLevel() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf1, put=__set_buf1))  buf1;

constexpr void __set_buf1(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf1() const;

 System::IO::Stream __declspec(property(get=__get_inp, put=__set_inp))  inp;

constexpr void __set_inp(System::IO::Stream value) ;

constexpr System::IO::Stream __get_inp() const;

 bool __declspec(property(get=__get_nomoreinput, put=__set_nomoreinput))  nomoreinput;

constexpr void __set_nomoreinput(bool value) ;

constexpr bool __get_nomoreinput() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

static Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream New_ctor(System::IO::Stream inp) ;

/// @brief Method .ctor addr 0x10dec08 size 0x8 virtual false final false
 void _ctor(System::IO::Stream inp) ;

static Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream New_ctor(System::IO::Stream inp, bool nowrap) ;

/// @brief Method .ctor addr 0x10dec10 size 0x108 virtual false final false
 void _ctor(System::IO::Stream inp, bool nowrap) ;

/// @brief Method get_CanRead addr 0x10ded24 size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x10ded2c size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x10ded34 size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x10ded3c size 0x8 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x10ded44 size 0x8 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x10ded4c size 0x4 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Write addr 0x10ded50 size 0x4 virtual true final false
 void Write(::ArrayW<uint8_t> b, int32_t off, int32_t len) ;

/// @brief Method Seek addr 0x10ded54 size 0x8 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x10ded5c size 0x4 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Read addr 0x10ded60 size 0x19c virtual true final false
 int32_t Read(::ArrayW<uint8_t> b, int32_t off, int32_t len) ;

/// @brief Method Flush addr 0x10def18 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method WriteByte addr 0x10def3c size 0x4 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Close addr 0x10def40 size 0x78 virtual true final false
 void Close() ;

/// @brief Method ReadByte addr 0x10defd8 size 0x58 virtual true final false
 int32_t ReadByte() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream, "Org.BouncyCastle.Utilities.Zlib", "ZInflaterInputStream");
