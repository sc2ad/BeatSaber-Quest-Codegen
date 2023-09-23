#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class Crc24;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ArmoredInputStream;
}
// Type: Org.BouncyCastle.Bcpg::ArmoredInputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(550))
// CS Name: Org.BouncyCastle.Bcpg.ArmoredInputStream
class CORDL_TYPE ArmoredInputStream : public Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ArmoredInputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArmoredInputStream", modifiers: " const&", def_value: None }]
constexpr ArmoredInputStream(ArmoredInputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArmoredInputStream", modifiers: "&&", def_value: None }]
constexpr ArmoredInputStream(ArmoredInputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArmoredInputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseInputStream(ptr) {
}


  constexpr ArmoredInputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArmoredInputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArmoredInputStream& operator=(ArmoredInputStream&& o) noexcept = default;
  constexpr ArmoredInputStream& operator=(ArmoredInputStream const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_decodingTable, put=__set_decodingTable))  decodingTable;

static void __set_decodingTable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_decodingTable() ;

 System::IO::Stream __declspec(property(get=__get_input, put=__set_input))  input;

constexpr void __set_input(System::IO::Stream value) ;

constexpr System::IO::Stream __get_input() const;

 bool __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(bool value) ;

constexpr bool __get_start() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_outBuf, put=__set_outBuf))  outBuf;

constexpr void __set_outBuf(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_outBuf() const;

 int32_t __declspec(property(get=__get_bufPtr, put=__set_bufPtr))  bufPtr;

constexpr void __set_bufPtr(int32_t value) ;

constexpr int32_t __get_bufPtr() const;

 Org::BouncyCastle::Bcpg::Crc24 __declspec(property(get=__get_crc, put=__set_crc))  crc;

constexpr void __set_crc(Org::BouncyCastle::Bcpg::Crc24 value) ;

constexpr Org::BouncyCastle::Bcpg::Crc24 __get_crc() const;

 bool __declspec(property(get=__get_crcFound, put=__set_crcFound))  crcFound;

constexpr void __set_crcFound(bool value) ;

constexpr bool __get_crcFound() const;

 bool __declspec(property(get=__get_hasHeaders, put=__set_hasHeaders))  hasHeaders;

constexpr void __set_hasHeaders(bool value) ;

constexpr bool __get_hasHeaders() const;

 ::StringW __declspec(property(get=__get_header, put=__set_header))  header;

constexpr void __set_header(::StringW value) ;

constexpr ::StringW __get_header() const;

 bool __declspec(property(get=__get_newLineFound, put=__set_newLineFound))  newLineFound;

constexpr void __set_newLineFound(bool value) ;

constexpr bool __get_newLineFound() const;

 bool __declspec(property(get=__get_clearText, put=__set_clearText))  clearText;

constexpr void __set_clearText(bool value) ;

constexpr bool __get_clearText() const;

 bool __declspec(property(get=__get_restart, put=__set_restart))  restart;

constexpr void __set_restart(bool value) ;

constexpr bool __get_restart() const;

 System::Collections::IList __declspec(property(get=__get_headerList, put=__set_headerList))  headerList;

constexpr void __set_headerList(System::Collections::IList value) ;

constexpr System::Collections::IList __get_headerList() const;

 int32_t __declspec(property(get=__get_lastC, put=__set_lastC))  lastC;

constexpr void __set_lastC(int32_t value) ;

constexpr int32_t __get_lastC() const;

 bool __declspec(property(get=__get_isEndOfStream, put=__set_isEndOfStream))  isEndOfStream;

constexpr void __set_isEndOfStream(bool value) ;

constexpr bool __get_isEndOfStream() const;


// Methods

/// @brief Method Decode addr 0x113f2d8 size 0x208 virtual false final false
 int32_t Decode(int32_t in0, int32_t in1, int32_t in2, int32_t in3, ::ArrayW<int32_t> result) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit ArmoredInputStream(System::IO::Stream input) ;

/// @brief Method .ctor addr 0x113f4e0 size 0x8 virtual false final false
 void _ctor(System::IO::Stream input) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "hasHeaders", ty: "bool", modifiers: "", def_value: None }]
explicit ArmoredInputStream(System::IO::Stream input, bool hasHeaders) ;

/// @brief Method .ctor addr 0x113f4e8 size 0x124 virtual false final false
 void _ctor(System::IO::Stream input, bool hasHeaders) ;

/// @brief Method ParseHeaders addr 0x113f620 size 0x434 virtual false final false
 bool ParseHeaders() ;

/// @brief Method IsClearText addr 0x113fa54 size 0x8 virtual false final false
 bool IsClearText() ;

/// @brief Method IsEndOfStream addr 0x113fa5c size 0x8 virtual false final false
 bool IsEndOfStream() ;

/// @brief Method GetArmorHeaderLine addr 0x113fa64 size 0x8 virtual false final false
 ::StringW GetArmorHeaderLine() ;

/// @brief Method GetArmorHeaders addr 0x113fa6c size 0x26c virtual false final false
 ::ArrayW<::StringW> GetArmorHeaders() ;

/// @brief Method ReadIgnoreSpace addr 0x113fcd8 size 0x44 virtual false final false
 int32_t ReadIgnoreSpace() ;

/// @brief Method ReadIgnoreWhitespace addr 0x113fd1c size 0x60 virtual false final false
 int32_t ReadIgnoreWhitespace() ;

/// @brief Method ReadByteClearText addr 0x113fd7c size 0xd8 virtual false final false
 int32_t ReadByteClearText() ;

/// @brief Method ReadClearText addr 0x113fe54 size 0x148 virtual false final false
 int32_t ReadClearText(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method DoReadByte addr 0x113ff9c size 0x298 virtual false final false
 int32_t DoReadByte() ;

/// @brief Method ReadByte addr 0x1140234 size 0x9c virtual true final false
 int32_t ReadByte() ;

/// @brief Method Read addr 0x1140318 size 0x1cc virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) ;

/// @brief Method Close addr 0x11404e4 size 0x68 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(Org::BouncyCastle::Bcpg::ArmoredInputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::ArmoredInputStream, "Org.BouncyCastle.Bcpg", "ArmoredInputStream");
