#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class ZOutputStream;
}
// Type: Org.BouncyCastle.Utilities.Zlib::ZOutputStream
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1297))
// CS Name: Org.BouncyCastle.Utilities.Zlib.ZOutputStream
class CORDL_TYPE ZOutputStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ZOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZOutputStream", modifiers: " const&", def_value: None }]
constexpr ZOutputStream(ZOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZOutputStream", modifiers: "&&", def_value: None }]
constexpr ZOutputStream(ZOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZOutputStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr ZOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZOutputStream& operator=(ZOutputStream&& o) noexcept = default;
  constexpr ZOutputStream& operator=(ZOutputStream const& o) noexcept = default;
                


// Fields

/// @brief Field BufferSize offset 0
static constexpr int32_t  BufferSize{4096};

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

 bool __declspec(property(get=__get_compress, put=__set_compress))  compress;

constexpr void __set_compress(bool value) ;

constexpr bool __get_compress() const;

 System::IO::Stream __declspec(property(get=__get_output, put=__set_output))  output;

constexpr void __set_output(System::IO::Stream value) ;

constexpr System::IO::Stream __get_output() const;

 bool __declspec(property(get=__get_closed, put=__set_closed))  closed;

constexpr void __set_closed(bool value) ;

constexpr bool __get_closed() const;


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanSeek))  CanSeek;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 int32_t __declspec(property(get=get_FlushMode, put=set_FlushMode))  FlushMode;

 int64_t __declspec(property(get=get_Length))  Length;

 int64_t __declspec(property(get=get_Position, put=set_Position))  Position;

 int64_t __declspec(property(get=get_TotalIn))  TotalIn;

 int64_t __declspec(property(get=get_TotalOut))  TotalOut;


// Methods

/// @brief Method GetDefaultZStream addr 0xf16078 size 0x70 virtual false final false
static Org::BouncyCastle::Utilities::Zlib::ZStream GetDefaultZStream(bool nowrap) ;

// Ctor Parameters [CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit ZOutputStream(System::IO::Stream output) ;

/// @brief Method .ctor addr 0xf160e8 size 0x30 virtual false final false
 void _ctor(System::IO::Stream output) ;

// Ctor Parameters [CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "nowrap", ty: "bool", modifiers: "", def_value: None }]
explicit ZOutputStream(System::IO::Stream output, bool nowrap) ;

/// @brief Method .ctor addr 0xf16118 size 0x30 virtual false final false
 void _ctor(System::IO::Stream output, bool nowrap) ;

// Ctor Parameters [CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "z", ty: "Org::BouncyCastle::Utilities::Zlib::ZStream", modifiers: "", def_value: None }]
explicit ZOutputStream(System::IO::Stream output, Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method .ctor addr 0xf15f60 size 0x114 virtual false final false
 void _ctor(System::IO::Stream output, Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

// Ctor Parameters [CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: None }]
explicit ZOutputStream(System::IO::Stream output, int32_t level) ;

/// @brief Method .ctor addr 0xf16148 size 0x8 virtual false final false
 void _ctor(System::IO::Stream output, int32_t level) ;

// Ctor Parameters [CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "level", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nowrap", ty: "bool", modifiers: "", def_value: None }]
explicit ZOutputStream(System::IO::Stream output, int32_t level, bool nowrap) ;

/// @brief Method .ctor addr 0xf16150 size 0x100 virtual false final false
 void _ctor(System::IO::Stream output, int32_t level, bool nowrap) ;

/// @brief Method get_CanRead addr 0xf16250 size 0x8 virtual true final true
 bool get_CanRead() ;

/// @brief Method get_CanSeek addr 0xf16258 size 0x8 virtual true final true
 bool get_CanSeek() ;

/// @brief Method get_CanWrite addr 0xf16260 size 0x10 virtual true final true
 bool get_CanWrite() ;

/// @brief Method Close addr 0xf16270 size 0x2c virtual true final false
 void Close() ;

/// @brief Method DoClose addr 0xf1629c size 0x1a8 virtual false final false
 void DoClose() ;

/// @brief Method End addr 0xf16444 size 0x4c virtual true final false
 void End() ;

/// @brief Method Finish addr 0xf16490 size 0x16c virtual true final false
 void Finish() ;

/// @brief Method Flush addr 0xf165fc size 0x24 virtual true final false
 void Flush() ;

/// @brief Method get_FlushMode addr 0xf16620 size 0x8 virtual true final false
 int32_t get_FlushMode() ;

/// @brief Method set_FlushMode addr 0xf16628 size 0x8 virtual true final false
 void set_FlushMode(int32_t value) ;

/// @brief Method get_Length addr 0xf16630 size 0x40 virtual true final true
 int64_t get_Length() ;

/// @brief Method get_Position addr 0xf16670 size 0x40 virtual true final true
 int64_t get_Position() ;

/// @brief Method set_Position addr 0xf166b0 size 0x40 virtual true final true
 void set_Position(int64_t value) ;

/// @brief Method Read addr 0xf166f0 size 0x40 virtual true final true
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Seek addr 0xf16730 size 0x40 virtual true final true
 int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) ;

/// @brief Method SetLength addr 0xf16770 size 0x40 virtual true final true
 void SetLength(int64_t value) ;

/// @brief Method get_TotalIn addr 0xf167b0 size 0x1c virtual true final false
 int64_t get_TotalIn() ;

/// @brief Method get_TotalOut addr 0xf167cc size 0x1c virtual true final false
 int64_t get_TotalOut() ;

/// @brief Method Write addr 0xf167e8 size 0x168 virtual true final false
 void Write(::ArrayW<uint8_t> b, int32_t off, int32_t len) ;

/// @brief Method WriteByte addr 0xf16950 size 0x40 virtual true final false
 void WriteByte(uint8_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::ZOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::ZOutputStream, "Org.BouncyCastle.Utilities.Zlib", "ZOutputStream");
