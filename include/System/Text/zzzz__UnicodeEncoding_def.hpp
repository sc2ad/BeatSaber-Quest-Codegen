#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text {
class System__Text__UnicodeEncoding__Decoder;
}
namespace System::Text {
class UnicodeEncoding;
}
// Type: ::Decoder
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2831))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2862))
// CS Name: System.Text.UnicodeEncoding::Decoder
class CORDL_TYPE System__Text__UnicodeEncoding__Decoder : public System::Text::DecoderNLS {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Text__UnicodeEncoding__Decoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UnicodeEncoding__Decoder", modifiers: " const&", def_value: None }]
constexpr System__Text__UnicodeEncoding__Decoder(System__Text__UnicodeEncoding__Decoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UnicodeEncoding__Decoder", modifiers: "&&", def_value: None }]
constexpr System__Text__UnicodeEncoding__Decoder(System__Text__UnicodeEncoding__Decoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__UnicodeEncoding__Decoder(void* ptr) noexcept : System::Text::DecoderNLS(ptr) {
}


  constexpr System__Text__UnicodeEncoding__Decoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__UnicodeEncoding__Decoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__UnicodeEncoding__Decoder& operator=(System__Text__UnicodeEncoding__Decoder&& o) noexcept = default;
  constexpr System__Text__UnicodeEncoding__Decoder& operator=(System__Text__UnicodeEncoding__Decoder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_lastByte, put=__set_lastByte))  lastByte;

constexpr void __set_lastByte(int32_t value) ;

constexpr int32_t __get_lastByte() const;

 char16_t __declspec(property(get=__get_lastChar, put=__set_lastChar))  lastChar;

constexpr void __set_lastChar(char16_t value) ;

constexpr char16_t __get_lastChar() const;


// Properties

 bool __declspec(property(get=get_HasState))  HasState;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::UnicodeEncoding", modifiers: "", def_value: None }]
explicit System__Text__UnicodeEncoding__Decoder(System::Text::UnicodeEncoding encoding) ;

/// @brief Method .ctor addr 0x22dcad0 size 0x10 virtual false final false
 void _ctor(System::Text::UnicodeEncoding encoding) ;

/// @brief Method Reset addr 0x22dcae0 size 0x28 virtual true final false
 void Reset() ;

/// @brief Method get_HasState addr 0x22dcb08 size 0x24 virtual true final false
 bool get_HasState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: System.Text::UnicodeEncoding
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2870))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2863))
// CS Name: System.Text.UnicodeEncoding
class CORDL_TYPE UnicodeEncoding : public System::Text::Encoding {
public:
// Declarations
using Decoder = System::Text::System__Text__UnicodeEncoding__Decoder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnicodeEncoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: " const&", def_value: None }]
constexpr UnicodeEncoding(UnicodeEncoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: "&&", def_value: None }]
constexpr UnicodeEncoding(UnicodeEncoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnicodeEncoding(void* ptr) noexcept : System::Text::Encoding(ptr) {
}


  constexpr UnicodeEncoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnicodeEncoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnicodeEncoding& operator=(UnicodeEncoding&& o) noexcept = default;
  constexpr UnicodeEncoding& operator=(UnicodeEncoding const& o) noexcept = default;
                


// Fields

static System::Text::UnicodeEncoding __declspec(property(get=__get_s_bigEndianDefault, put=__set_s_bigEndianDefault))  s_bigEndianDefault;

static void __set_s_bigEndianDefault(System::Text::UnicodeEncoding value) ;

static System::Text::UnicodeEncoding __get_s_bigEndianDefault() ;

static System::Text::UnicodeEncoding __declspec(property(get=__get_s_littleEndianDefault, put=__set_s_littleEndianDefault))  s_littleEndianDefault;

static void __set_s_littleEndianDefault(System::Text::UnicodeEncoding value) ;

static System::Text::UnicodeEncoding __get_s_littleEndianDefault() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_bigEndianPreamble, put=__set_s_bigEndianPreamble))  s_bigEndianPreamble;

static void __set_s_bigEndianPreamble(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_bigEndianPreamble() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_littleEndianPreamble, put=__set_s_littleEndianPreamble))  s_littleEndianPreamble;

static void __set_s_littleEndianPreamble(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_littleEndianPreamble() ;

 bool __declspec(property(get=__get_isThrowException, put=__set_isThrowException))  isThrowException;

constexpr void __set_isThrowException(bool value) ;

constexpr bool __get_isThrowException() const;

 bool __declspec(property(get=__get_bigEndian, put=__set_bigEndian))  bigEndian;

constexpr void __set_bigEndian(bool value) ;

constexpr bool __get_bigEndian() const;

 bool __declspec(property(get=__get_byteOrderMark, put=__set_byteOrderMark))  byteOrderMark;

constexpr void __set_byteOrderMark(bool value) ;

constexpr bool __get_byteOrderMark() const;

static uint64_t __declspec(property(get=__get_highLowPatternMask, put=__set_highLowPatternMask))  highLowPatternMask;

static void __set_highLowPatternMask(uint64_t value) ;

static uint64_t __get_highLowPatternMask() ;


// Properties

 System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_Preamble))  Preamble;


// Methods

// Ctor Parameters []
explicit UnicodeEncoding() ;

/// @brief Method .ctor addr 0x22d839c size 0x34 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bigEndian", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "byteOrderMark", ty: "bool", modifiers: "", def_value: None }]
explicit UnicodeEncoding(bool bigEndian, bool byteOrderMark) ;

/// @brief Method .ctor addr 0x22d83d0 size 0x48 virtual false final false
 void _ctor(bool bigEndian, bool byteOrderMark) ;

// Ctor Parameters [CppParam { name: "bigEndian", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "byteOrderMark", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "throwOnInvalidBytes", ty: "bool", modifiers: "", def_value: None }]
explicit UnicodeEncoding(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes) ;

/// @brief Method .ctor addr 0x22d8418 size 0x78 virtual false final false
 void _ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes) ;

/// @brief Method SetDefaultFallbacks addr 0x22d8490 size 0xd4 virtual true final false
 void SetDefaultFallbacks() ;

/// @brief Method GetByteCount addr 0x22d8564 size 0x184 virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x22d86e8 size 0x90 virtual true final false
 int32_t GetByteCount(::StringW s) ;

/// @brief Method GetByteCount addr 0x22d8778 size 0xd8 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count) ;

/// @brief Method GetBytes addr 0x22d8850 size 0x260 virtual true final false
 int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22d8ab0 size 0x27c virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22d8d2c size 0x100 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount) ;

/// @brief Method GetCharCount addr 0x22d8e2c size 0x184 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x22d8fb0 size 0xd8 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count) ;

/// @brief Method GetChars addr 0x22d9088 size 0x27c virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x22d9304 size 0x100 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount) ;

/// @brief Method GetString addr 0x22d9404 size 0x1c8 virtual true final false
 ::StringW GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x22d95cc size 0x56c virtual true final false
 int32_t GetByteCount(void* chars, int32_t count, System::Text::EncoderNLS encoder) ;

/// @brief Method GetBytes addr 0x22d9b38 size 0x734 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, System::Text::EncoderNLS encoder) ;

/// @brief Method GetCharCount addr 0x22da26c size 0x6c0 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, System::Text::DecoderNLS baseDecoder) ;

/// @brief Method GetChars addr 0x22da92c size 0x920 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, System::Text::DecoderNLS baseDecoder) ;

/// @brief Method GetEncoder addr 0x22db24c size 0x64 virtual true final false
 System::Text::Encoder GetEncoder() ;

/// @brief Method GetDecoder addr 0x22db2b0 size 0x64 virtual true final false
 System::Text::Decoder GetDecoder() ;

/// @brief Method GetPreamble addr 0x22db314 size 0xfc virtual true final false
 ::ArrayW<uint8_t> GetPreamble() ;

/// @brief Method get_Preamble addr 0x22db410 size 0x170 virtual true final false
 System::ReadOnlySpan_1<uint8_t> get_Preamble() ;

/// @brief Method GetMaxByteCount addr 0x22db580 size 0x108 virtual true final false
 int32_t GetMaxByteCount(int32_t charCount) ;

/// @brief Method GetMaxCharCount addr 0x22db688 size 0x10c virtual true final false
 int32_t GetMaxCharCount(int32_t byteCount) ;

/// @brief Method Equals addr 0x22db794 size 0x114 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x22db8a8 size 0x7c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::System__Text__UnicodeEncoding__Decoder);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__UnicodeEncoding__Decoder, "System.Text", "UnicodeEncoding/Decoder");
NEED_NO_BOX(System::Text::UnicodeEncoding);
DEFINE_IL2CPP_ARG_TYPE(System::Text::UnicodeEncoding, "System.Text", "UnicodeEncoding");
