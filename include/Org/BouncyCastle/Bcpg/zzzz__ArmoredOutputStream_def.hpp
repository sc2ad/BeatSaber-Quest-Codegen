#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace System::Collections {
class IDictionary;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class Crc24;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ArmoredOutputStream;
}
// Type: Org.BouncyCastle.Bcpg::ArmoredOutputStream
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(551))
// CS Name: Org.BouncyCastle.Bcpg.ArmoredOutputStream
class CORDL_TYPE ArmoredOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ArmoredOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArmoredOutputStream", modifiers: " const&", def_value: None }]
constexpr ArmoredOutputStream(ArmoredOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArmoredOutputStream", modifiers: "&&", def_value: None }]
constexpr ArmoredOutputStream(ArmoredOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArmoredOutputStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr ArmoredOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArmoredOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArmoredOutputStream& operator=(ArmoredOutputStream&& o) noexcept = default;
  constexpr ArmoredOutputStream& operator=(ArmoredOutputStream const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_HeaderVersion, put=__set_HeaderVersion))  HeaderVersion;

static void __set_HeaderVersion(::StringW value) ;

static ::StringW __get_HeaderVersion() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_encodingTable, put=__set_encodingTable))  encodingTable;

static void __set_encodingTable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_encodingTable() ;

 ::System::IO::Stream __declspec(property(get=__get_outStream, put=__set_outStream))  outStream;

constexpr void __set_outStream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get_outStream() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_buf() const;

 int32_t __declspec(property(get=__get_bufPtr, put=__set_bufPtr))  bufPtr;

constexpr void __set_bufPtr(int32_t value) ;

constexpr int32_t __get_bufPtr() const;

 ::Org::BouncyCastle::Bcpg::Crc24 __declspec(property(get=__get_crc, put=__set_crc))  crc;

constexpr void __set_crc(::Org::BouncyCastle::Bcpg::Crc24 value) ;

constexpr ::Org::BouncyCastle::Bcpg::Crc24 __get_crc() const;

 int32_t __declspec(property(get=__get_chunkCount, put=__set_chunkCount))  chunkCount;

constexpr void __set_chunkCount(int32_t value) ;

constexpr int32_t __get_chunkCount() const;

 int32_t __declspec(property(get=__get_lastb, put=__set_lastb))  lastb;

constexpr void __set_lastb(int32_t value) ;

constexpr int32_t __get_lastb() const;

 bool __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(bool value) ;

constexpr bool __get_start() const;

 bool __declspec(property(get=__get_clearText, put=__set_clearText))  clearText;

constexpr void __set_clearText(bool value) ;

constexpr bool __get_clearText() const;

 bool __declspec(property(get=__get_newLine, put=__set_newLine))  newLine;

constexpr void __set_newLine(bool value) ;

constexpr bool __get_newLine() const;

 ::StringW __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::StringW value) ;

constexpr ::StringW __get_type() const;

static ::StringW __declspec(property(get=__get_nl, put=__set_nl))  nl;

static void __set_nl(::StringW value) ;

static ::StringW __get_nl() ;

static ::StringW __declspec(property(get=__get_headerStart, put=__set_headerStart))  headerStart;

static void __set_headerStart(::StringW value) ;

static ::StringW __get_headerStart() ;

static ::StringW __declspec(property(get=__get_headerTail, put=__set_headerTail))  headerTail;

static void __set_headerTail(::StringW value) ;

static ::StringW __get_headerTail() ;

static ::StringW __declspec(property(get=__get_footerStart, put=__set_footerStart))  footerStart;

static void __set_footerStart(::StringW value) ;

static ::StringW __get_footerStart() ;

static ::StringW __declspec(property(get=__get_footerTail, put=__set_footerTail))  footerTail;

static void __set_footerTail(::StringW value) ;

static ::StringW __get_footerTail() ;

static ::StringW __declspec(property(get=__get_Version, put=__set_Version))  Version;

static void __set_Version(::StringW value) ;

static ::StringW __get_Version() ;

 ::System::Collections::IDictionary __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_headers() const;


// Methods

/// @brief Method Encode addr 0x114054c size 0x2f4 virtual false final false
static void Encode(::System::IO::Stream outStream, ::ArrayW<int32_t> data, int32_t len) ;

// Ctor Parameters [CppParam { name: "outStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
explicit ArmoredOutputStream(::System::IO::Stream outStream) ;

/// @brief Method .ctor addr 0x1140840 size 0x12c virtual false final false
 void _ctor(::System::IO::Stream outStream) ;

// Ctor Parameters [CppParam { name: "outStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "headers", ty: "::System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit ArmoredOutputStream(::System::IO::Stream outStream, ::System::Collections::IDictionary headers) ;

/// @brief Method .ctor addr 0x1140c20 size 0x548 virtual false final false
 void _ctor(::System::IO::Stream outStream, ::System::Collections::IDictionary headers) ;

/// @brief Method SetHeader addr 0x114096c size 0x2b4 virtual false final false
 void SetHeader(::StringW name, ::StringW val) ;

/// @brief Method AddHeader addr 0x1141168 size 0x218 virtual false final false
 void AddHeader(::StringW name, ::StringW val) ;

/// @brief Method ResetHeaders addr 0x1141380 size 0x228 virtual false final false
 void ResetHeaders() ;

/// @brief Method BeginClearText addr 0x11415a8 size 0x1dc virtual false final false
 void BeginClearText(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

/// @brief Method EndClearText addr 0x11417c8 size 0x8 virtual false final false
 void EndClearText() ;

/// @brief Method WriteByte addr 0x11417d0 size 0xacc virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Close addr 0x1142338 size 0x38 virtual true final false
 void Close() ;

/// @brief Method DoClose addr 0x1142370 size 0x1ac virtual false final false
 void DoClose() ;

/// @brief Method WriteHeaderEntry addr 0x114229c size 0x9c virtual false final false
 void WriteHeaderEntry(::StringW name, ::StringW v) ;

/// @brief Method DoWrite addr 0x1141784 size 0x44 virtual false final false
 void DoWrite(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ArmoredOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ArmoredOutputStream, "Org.BouncyCastle.Bcpg", "ArmoredOutputStream");
