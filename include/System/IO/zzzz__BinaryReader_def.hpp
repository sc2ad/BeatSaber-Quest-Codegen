#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Text {
class Encoding;
}
namespace System::Text {
class Decoder;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::IO {
class BinaryReader;
}
// Type: System.IO::BinaryReader
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3606))
// CS Name: System.IO.BinaryReader
class CORDL_TYPE BinaryReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BinaryReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryReader", modifiers: " const&", def_value: None }]
constexpr BinaryReader(BinaryReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryReader", modifiers: "&&", def_value: None }]
constexpr BinaryReader(BinaryReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryReader& operator=(BinaryReader&& o) noexcept = default;
  constexpr BinaryReader& operator=(BinaryReader const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_m_stream, put=__set_m_stream))  m_stream;

constexpr void __set_m_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_m_stream() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_buffer, put=__set_m_buffer))  m_buffer;

constexpr void __set_m_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_buffer() const;

 System::Text::Decoder __declspec(property(get=__get_m_decoder, put=__set_m_decoder))  m_decoder;

constexpr void __set_m_decoder(System::Text::Decoder value) ;

constexpr System::Text::Decoder __get_m_decoder() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_charBytes, put=__set_m_charBytes))  m_charBytes;

constexpr void __set_m_charBytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_charBytes() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_m_singleChar, put=__set_m_singleChar))  m_singleChar;

constexpr void __set_m_singleChar(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_m_singleChar() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_m_charBuffer, put=__set_m_charBuffer))  m_charBuffer;

constexpr void __set_m_charBuffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_m_charBuffer() const;

 int32_t __declspec(property(get=__get_m_maxCharsSize, put=__set_m_maxCharsSize))  m_maxCharsSize;

constexpr void __set_m_maxCharsSize(int32_t value) ;

constexpr int32_t __get_m_maxCharsSize() const;

 bool __declspec(property(get=__get_m_2BytesPerChar, put=__set_m_2BytesPerChar))  m_2BytesPerChar;

constexpr void __set_m_2BytesPerChar(bool value) ;

constexpr bool __get_m_2BytesPerChar() const;

 bool __declspec(property(get=__get_m_isMemoryStream, put=__set_m_isMemoryStream))  m_isMemoryStream;

constexpr void __set_m_isMemoryStream(bool value) ;

constexpr bool __get_m_isMemoryStream() const;

 bool __declspec(property(get=__get_m_leaveOpen, put=__set_m_leaveOpen))  m_leaveOpen;

constexpr void __set_m_leaveOpen(bool value) ;

constexpr bool __get_m_leaveOpen() const;


// Properties

 System::IO::Stream __declspec(property(get=get_BaseStream))  BaseStream;


// Methods

static System::IO::BinaryReader New_ctor(System::IO::Stream input) ;

/// @brief Method .ctor addr 0x23c8884 size 0x78 virtual false final false
 void _ctor(System::IO::Stream input) ;

static System::IO::BinaryReader New_ctor(System::IO::Stream input, System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x23c8b7c size 0x8 virtual false final false
 void _ctor(System::IO::Stream input, System::Text::Encoding encoding) ;

static System::IO::BinaryReader New_ctor(System::IO::Stream input, System::Text::Encoding encoding, bool leaveOpen) ;

/// @brief Method .ctor addr 0x23c88fc size 0x280 virtual false final false
 void _ctor(System::IO::Stream input, System::Text::Encoding encoding, bool leaveOpen) ;

/// @brief Method get_BaseStream addr 0x23c8b84 size 0x8 virtual true final false
 System::IO::Stream get_BaseStream() ;

/// @brief Method Close addr 0x23c8b8c size 0x10 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x23c8b9c size 0x44 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Dispose addr 0x23c8be0 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Read addr 0x23c8bf0 size 0x18 virtual true final false
 int32_t Read() ;

/// @brief Method ReadBoolean addr 0x23c8e70 size 0x48 virtual true final false
 bool ReadBoolean() ;

/// @brief Method ReadByte addr 0x23c8eb8 size 0x34 virtual true final false
 uint8_t ReadByte() ;

/// @brief Method ReadSByte addr 0x23c8eec size 0x40 virtual true final false
 int8_t ReadSByte() ;

/// @brief Method ReadChar addr 0x23c8f2c size 0x24 virtual true final false
 char16_t ReadChar() ;

/// @brief Method ReadInt16 addr 0x23c8f50 size 0x48 virtual true final false
 int16_t ReadInt16() ;

/// @brief Method ReadUInt16 addr 0x23c8f98 size 0x48 virtual true final false
 uint16_t ReadUInt16() ;

/// @brief Method ReadInt32 addr 0x23c8fe0 size 0xf4 virtual true final false
 int32_t ReadInt32() ;

/// @brief Method ReadUInt32 addr 0x23c90d4 size 0x70 virtual true final false
 uint32_t ReadUInt32() ;

/// @brief Method ReadInt64 addr 0x23c9144 size 0xb0 virtual true final false
 int64_t ReadInt64() ;

/// @brief Method ReadUInt64 addr 0x23c91f4 size 0xb0 virtual true final false
 uint64_t ReadUInt64() ;

/// @brief Method ReadSingle addr 0x23c92a4 size 0x30 virtual true final false
 float_t ReadSingle() ;

/// @brief Method ReadDouble addr 0x23c92d4 size 0x30 virtual true final false
 double_t ReadDouble() ;

/// @brief Method ReadDecimal addr 0x23c9304 size 0x214 virtual true final false
 System::Decimal ReadDecimal() ;

/// @brief Method ReadString addr 0x23c9518 size 0x298 virtual true final false
 ::StringW ReadString() ;

/// @brief Method InternalReadChars addr 0x23c9858 size 0x2f8 virtual false final false
 int32_t InternalReadChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

/// @brief Method InternalReadOneChar addr 0x23c8c08 size 0x268 virtual false final false
 int32_t InternalReadOneChar() ;

/// @brief Method ReadChars addr 0x23c9b50 size 0x160 virtual true final false
 ::ArrayW<char16_t> ReadChars(int32_t count) ;

/// @brief Method Read addr 0x23c9cb0 size 0x184 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) ;

/// @brief Method ReadBytes addr 0x23c9e34 size 0x190 virtual true final false
 ::ArrayW<uint8_t> ReadBytes(int32_t count) ;

/// @brief Method FillBuffer addr 0x23c9fc4 size 0x124 virtual true final false
 void FillBuffer(int32_t numBytes) ;

/// @brief Method Read7BitEncodedInt addr 0x23c97b0 size 0xa8 virtual false final false
 int32_t Read7BitEncodedInt() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::BinaryReader);
DEFINE_IL2CPP_ARG_TYPE(System::IO::BinaryReader, "System.IO", "BinaryReader");
