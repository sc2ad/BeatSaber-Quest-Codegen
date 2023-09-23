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
class ZDeflaterOutputStream;
}
// Type: Org.BouncyCastle.Utilities.Zlib::ZDeflaterOutputStream
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1827))
// CS Name: Org.BouncyCastle.Utilities.Zlib.ZDeflaterOutputStream
class CORDL_TYPE ZDeflaterOutputStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ZDeflaterOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZDeflaterOutputStream", modifiers: " const&", def_value: None }]
constexpr ZDeflaterOutputStream(ZDeflaterOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZDeflaterOutputStream", modifiers: "&&", def_value: None }]
constexpr ZDeflaterOutputStream(ZDeflaterOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZDeflaterOutputStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr ZDeflaterOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZDeflaterOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZDeflaterOutputStream& operator=(ZDeflaterOutputStream&& o) noexcept = default;
  constexpr ZDeflaterOutputStream& operator=(ZDeflaterOutputStream const& o) noexcept = default;
                


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

 System::IO::Stream __declspec(property(get=__get_outp, put=__set_outp))  outp;

constexpr void __set_outp(System::IO::Stream value) ;

constexpr System::IO::Stream __get_outp() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;


// Methods

// Ctor Parameters [CppParam { name: "outp", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit ZDeflaterOutputStream(System::IO::Stream outp) ;

/// @brief Method .ctor addr 0x10de51c size 0xc virtual false final false
 void _ctor(System::IO::Stream outp) ;

// Ctor Parameters [CppParam { name: "outp", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: None }]
explicit ZDeflaterOutputStream(System::IO::Stream outp, int32_t level) ;

/// @brief Method .ctor addr 0x10de620 size 0x8 virtual false final false
 void _ctor(System::IO::Stream outp, int32_t level) ;

// Ctor Parameters [CppParam { name: "outp", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nowrap", ty: "bool", modifiers: "", def_value: None }]
explicit ZDeflaterOutputStream(System::IO::Stream outp, int32_t level, bool nowrap) ;

/// @brief Method .ctor addr 0x10de528 size 0xf8 virtual false final false
 void _ctor(System::IO::Stream outp, int32_t level, bool nowrap) ;

/// @brief Method get_CanRead addr 0x10de69c size 0x8 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0x10de6a4 size 0x8 virtual true final false
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0x10de6ac size 0x8 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_Length addr 0x10de6b4 size 0x8 virtual true final false
 int64_t get_Length() ;

/// @brief Method get_Position addr 0x10de6bc size 0x8 virtual true final false
 int64_t get_Position() ;

/// @brief Method set_Position addr 0x10de6c4 size 0x4 virtual true final false
 void set_Position(int64_t value) ;

/// @brief Method Write addr 0x10de6c8 size 0x138 virtual true final false
 void Write(::ArrayW<uint8_t> b, int32_t off, int32_t len) ;

/// @brief Method Seek addr 0x10de824 size 0x8 virtual true final false
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0x10de82c size 0x4 virtual true final false
 void SetLength(int64_t value) ;

/// @brief Method Read addr 0x10de830 size 0x8 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Flush addr 0x10de838 size 0x24 virtual true final false
 void Flush() ;

/// @brief Method WriteByte addr 0x10de85c size 0x40 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Finish addr 0x10de89c size 0x138 virtual false final false
 void Finish() ;

/// @brief Method End addr 0x10de9d4 size 0x54 virtual false final false
 void End() ;

/// @brief Method Close addr 0x10dea6c size 0x19c virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream, "Org.BouncyCastle.Utilities.Zlib", "ZDeflaterOutputStream");
