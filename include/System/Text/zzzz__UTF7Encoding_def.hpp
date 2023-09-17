#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class UTF7Encoding;
}
namespace System::Text {
class ____System__Text__UTF7Encoding__Decoder;
}
namespace System::Text {
class ____System__Text__UTF7Encoding__DecoderUTF7Fallback;
}
namespace System::Text {
class ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer;
}
namespace System::Text {
class ____System__Text__UTF7Encoding__Encoder;
}
// Type: ::Decoder
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2831))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2853))
// CS Name: System.Text.UTF7Encoding::Decoder
class CORDL_TYPE ____System__Text__UTF7Encoding__Decoder : public ::System::Text::DecoderNLS {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Text__UTF7Encoding__Decoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__UTF7Encoding__Decoder", modifiers: " const&", def_value: None }]
constexpr ____System__Text__UTF7Encoding__Decoder(____System__Text__UTF7Encoding__Decoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__UTF7Encoding__Decoder", modifiers: "&&", def_value: None }]
constexpr ____System__Text__UTF7Encoding__Decoder(____System__Text__UTF7Encoding__Decoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Text__UTF7Encoding__Decoder(void* ptr) noexcept : ::System::Text::DecoderNLS(ptr) {
}


  constexpr ____System__Text__UTF7Encoding__Decoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Text__UTF7Encoding__Decoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Text__UTF7Encoding__Decoder& operator=(____System__Text__UTF7Encoding__Decoder&& o) noexcept = default;
  constexpr ____System__Text__UTF7Encoding__Decoder& operator=(____System__Text__UTF7Encoding__Decoder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_bits, put=__set_bits))  bits;

constexpr void __set_bits(int32_t value) ;

constexpr int32_t __get_bits() const;

 int32_t __declspec(property(get=__get_bitCount, put=__set_bitCount))  bitCount;

constexpr void __set_bitCount(int32_t value) ;

constexpr int32_t __get_bitCount() const;

 bool __declspec(property(get=__get_firstByte, put=__set_firstByte))  firstByte;

constexpr void __set_firstByte(bool value) ;

constexpr bool __get_firstByte() const;


// Properties

 bool __declspec(property(get=get_HasState))  HasState;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "::System::Text::UTF7Encoding", modifiers: "", def_value: None }]
explicit ____System__Text__UTF7Encoding__Decoder(::System::Text::UTF7Encoding encoding) ;

/// @brief Method .ctor addr 0x22d478c size 0x8 virtual false final false
 void _ctor(::System::Text::UTF7Encoding encoding) ;

/// @brief Method Reset addr 0x22d49b0 size 0x28 virtual true final false
 void Reset() ;

/// @brief Method get_HasState addr 0x22d49d8 size 0x10 virtual true final false
 bool get_HasState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::Encoder
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2842))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2854))
// CS Name: System.Text.UTF7Encoding::Encoder
class CORDL_TYPE ____System__Text__UTF7Encoding__Encoder : public ::System::Text::EncoderNLS {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____System__Text__UTF7Encoding__Encoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__UTF7Encoding__Encoder", modifiers: " const&", def_value: None }]
constexpr ____System__Text__UTF7Encoding__Encoder(____System__Text__UTF7Encoding__Encoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__UTF7Encoding__Encoder", modifiers: "&&", def_value: None }]
constexpr ____System__Text__UTF7Encoding__Encoder(____System__Text__UTF7Encoding__Encoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Text__UTF7Encoding__Encoder(void* ptr) noexcept : ::System::Text::EncoderNLS(ptr) {
}


  constexpr ____System__Text__UTF7Encoding__Encoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Text__UTF7Encoding__Encoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Text__UTF7Encoding__Encoder& operator=(____System__Text__UTF7Encoding__Encoder&& o) noexcept = default;
  constexpr ____System__Text__UTF7Encoding__Encoder& operator=(____System__Text__UTF7Encoding__Encoder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_bits, put=__set_bits))  bits;

constexpr void __set_bits(int32_t value) ;

constexpr int32_t __get_bits() const;

 int32_t __declspec(property(get=__get_bitCount, put=__set_bitCount))  bitCount;

constexpr void __set_bitCount(int32_t value) ;

constexpr int32_t __get_bitCount() const;


// Properties

 bool __declspec(property(get=get_HasState))  HasState;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "::System::Text::UTF7Encoding", modifiers: "", def_value: None }]
explicit ____System__Text__UTF7Encoding__Encoder(::System::Text::UTF7Encoding encoding) ;

/// @brief Method .ctor addr 0x22d47f8 size 0x8 virtual false final false
 void _ctor(::System::Text::UTF7Encoding encoding) ;

/// @brief Method Reset addr 0x22d49e8 size 0x24 virtual true final false
 void Reset() ;

/// @brief Method get_HasState addr 0x22d4a0c size 0x20 virtual true final false
 bool get_HasState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::DecoderUTF7Fallback
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2829))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2855))
// CS Name: System.Text.UTF7Encoding::DecoderUTF7Fallback
class CORDL_TYPE ____System__Text__UTF7Encoding__DecoderUTF7Fallback : public ::System::Text::DecoderFallback {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Text__UTF7Encoding__DecoderUTF7Fallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__UTF7Encoding__DecoderUTF7Fallback", modifiers: " const&", def_value: None }]
constexpr ____System__Text__UTF7Encoding__DecoderUTF7Fallback(____System__Text__UTF7Encoding__DecoderUTF7Fallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__UTF7Encoding__DecoderUTF7Fallback", modifiers: "&&", def_value: None }]
constexpr ____System__Text__UTF7Encoding__DecoderUTF7Fallback(____System__Text__UTF7Encoding__DecoderUTF7Fallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Text__UTF7Encoding__DecoderUTF7Fallback(void* ptr) noexcept : ::System::Text::DecoderFallback(ptr) {
}


  constexpr ____System__Text__UTF7Encoding__DecoderUTF7Fallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Text__UTF7Encoding__DecoderUTF7Fallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Text__UTF7Encoding__DecoderUTF7Fallback& operator=(____System__Text__UTF7Encoding__DecoderUTF7Fallback&& o) noexcept = default;
  constexpr ____System__Text__UTF7Encoding__DecoderUTF7Fallback& operator=(____System__Text__UTF7Encoding__DecoderUTF7Fallback const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

// Ctor Parameters []
explicit ____System__Text__UTF7Encoding__DecoderUTF7Fallback() ;

/// @brief Method .ctor addr 0x22d2f0c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateFallbackBuffer addr 0x22d4a2c size 0x64 virtual true final false
 ::System::Text::DecoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x22d4aa0 size 0x8 virtual true final false
 int32_t get_MaxCharCount() ;

/// @brief Method Equals addr 0x22d4aa8 size 0x5c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x22d4b04 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::DecoderUTF7FallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2856))
// CS Name: System.Text.UTF7Encoding::DecoderUTF7FallbackBuffer
class CORDL_TYPE ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer", modifiers: " const&", def_value: None }]
constexpr ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer(____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer", modifiers: "&&", def_value: None }]
constexpr ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer(____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer(void* ptr) noexcept : ::System::Text::DecoderFallbackBuffer(ptr) {
}


  constexpr ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer& operator=(____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer&& o) noexcept = default;
  constexpr ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer& operator=(____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer const& o) noexcept = default;
                


// Fields

 char16_t __declspec(property(get=__get_cFallback, put=__set_cFallback))  cFallback;

constexpr void __set_cFallback(char16_t value) ;

constexpr char16_t __get_cFallback() const;

 int32_t __declspec(property(get=__get_iCount, put=__set_iCount))  iCount;

constexpr void __set_iCount(int32_t value) ;

constexpr int32_t __get_iCount() const;

 int32_t __declspec(property(get=__get_iSize, put=__set_iSize))  iSize;

constexpr void __set_iSize(int32_t value) ;

constexpr int32_t __get_iSize() const;


// Properties

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

// Ctor Parameters [CppParam { name: "fallback", ty: "::System::Text::____System__Text__UTF7Encoding__DecoderUTF7Fallback", modifiers: "", def_value: None }]
explicit ____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer(::System::Text::____System__Text__UTF7Encoding__DecoderUTF7Fallback fallback) ;

/// @brief Method .ctor addr 0x22d4a90 size 0x10 virtual false final false
 void _ctor(::System::Text::____System__Text__UTF7Encoding__DecoderUTF7Fallback fallback) ;

/// @brief Method Fallback addr 0x22d4b0c size 0x40 virtual true final false
 bool Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) ;

/// @brief Method GetNextChar addr 0x22d4b4c size 0x20 virtual true final false
 char16_t GetNextChar() ;

/// @brief Method get_Remaining addr 0x22d4b6c size 0xc virtual true final false
 int32_t get_Remaining() ;

/// @brief Method Reset addr 0x22d4b78 size 0x10 virtual true final false
 void Reset() ;

/// @brief Method InternalFallback addr 0x22d4b88 size 0x78 virtual true final false
 int32_t InternalFallback(::ArrayW<uint8_t> bytes, void* pBytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: System.Text::UTF7Encoding
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2870))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2857))
// CS Name: System.Text.UTF7Encoding
class CORDL_TYPE UTF7Encoding : public ::System::Text::Encoding {
public:
// Declarations
using DecoderUTF7FallbackBuffer = ::System::Text::____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer;

using DecoderUTF7Fallback = ::System::Text::____System__Text__UTF7Encoding__DecoderUTF7Fallback;

using Encoder = ::System::Text::____System__Text__UTF7Encoding__Encoder;

using Decoder = ::System::Text::____System__Text__UTF7Encoding__Decoder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~UTF7Encoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding", modifiers: " const&", def_value: None }]
constexpr UTF7Encoding(UTF7Encoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UTF7Encoding", modifiers: "&&", def_value: None }]
constexpr UTF7Encoding(UTF7Encoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UTF7Encoding(void* ptr) noexcept : ::System::Text::Encoding(ptr) {
}


  constexpr UTF7Encoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UTF7Encoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UTF7Encoding& operator=(UTF7Encoding&& o) noexcept = default;
  constexpr UTF7Encoding& operator=(UTF7Encoding const& o) noexcept = default;
                


// Fields

static ::System::Text::UTF7Encoding __declspec(property(get=__get_s_default, put=__set_s_default))  s_default;

static void __set_s_default(::System::Text::UTF7Encoding value) ;

static ::System::Text::UTF7Encoding __get_s_default() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get__base64Bytes, put=__set__base64Bytes))  _base64Bytes;

constexpr void __set__base64Bytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__base64Bytes() const;

 ::ArrayW<int8_t> __declspec(property(get=__get__base64Values, put=__set__base64Values))  _base64Values;

constexpr void __set__base64Values(::ArrayW<int8_t> value) ;

constexpr ::ArrayW<int8_t> __get__base64Values() const;

 ::ArrayW<bool> __declspec(property(get=__get__directEncode, put=__set__directEncode))  _directEncode;

constexpr void __set__directEncode(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__directEncode() const;

 bool __declspec(property(get=__get__allowOptionals, put=__set__allowOptionals))  _allowOptionals;

constexpr void __set__allowOptionals(bool value) ;

constexpr bool __get__allowOptionals() const;


// Methods

// Ctor Parameters []
explicit UTF7Encoding() ;

/// @brief Method .ctor addr 0x22d2b7c size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "allowOptionals", ty: "bool", modifiers: "", def_value: None }]
explicit UTF7Encoding(bool allowOptionals) ;

/// @brief Method .ctor addr 0x22d2ba0 size 0x30 virtual false final false
 void _ctor(bool allowOptionals) ;

/// @brief Method MakeTables addr 0x22d2bd0 size 0x284 virtual false final false
 void MakeTables() ;

/// @brief Method SetDefaultFallbacks addr 0x22d2e54 size 0xb8 virtual true final false
 void SetDefaultFallbacks() ;

/// @brief Method Equals addr 0x22d2f14 size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x22d2fe4 size 0x6c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetByteCount addr 0x22d3050 size 0x184 virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x22d31d4 size 0x90 virtual true final false
 int32_t GetByteCount(::StringW s) ;

/// @brief Method GetByteCount addr 0x22d3264 size 0xd8 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count) ;

/// @brief Method GetBytes addr 0x22d333c size 0x260 virtual true final false
 int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22d359c size 0x27c virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22d3818 size 0x100 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount) ;

/// @brief Method GetCharCount addr 0x22d3918 size 0x184 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x22d3a9c size 0xd8 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count) ;

/// @brief Method GetChars addr 0x22d3b74 size 0x27c virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x22d3df0 size 0x100 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount) ;

/// @brief Method GetString addr 0x22d3ef0 size 0x1c8 virtual true final false
 ::StringW GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x22d40b8 size 0x1c virtual true final false
 int32_t GetByteCount(void* chars, int32_t count, ::System::Text::EncoderNLS baseEncoder) ;

/// @brief Method GetBytes addr 0x22d40d4 size 0x39c virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, ::System::Text::EncoderNLS baseEncoder) ;

/// @brief Method GetCharCount addr 0x22d4470 size 0x1c virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, ::System::Text::DecoderNLS baseDecoder) ;

/// @brief Method GetChars addr 0x22d448c size 0x29c virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, ::System::Text::DecoderNLS baseDecoder) ;

/// @brief Method GetDecoder addr 0x22d4728 size 0x64 virtual true final false
 ::System::Text::Decoder GetDecoder() ;

/// @brief Method GetEncoder addr 0x22d4794 size 0x64 virtual true final false
 ::System::Text::Encoder GetEncoder() ;

/// @brief Method GetMaxByteCount addr 0x22d4800 size 0xc4 virtual true final false
 int32_t GetMaxByteCount(int32_t charCount) ;

/// @brief Method GetMaxCharCount addr 0x22d48c4 size 0x78 virtual true final false
 int32_t GetMaxCharCount(int32_t byteCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::UTF7Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF7Encoding, "System.Text", "UTF7Encoding");
NEED_NO_BOX(::System::Text::____System__Text__UTF7Encoding__Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::____System__Text__UTF7Encoding__Decoder, "System.Text", "UTF7Encoding/Decoder");
NEED_NO_BOX(::System::Text::____System__Text__UTF7Encoding__DecoderUTF7Fallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::____System__Text__UTF7Encoding__DecoderUTF7Fallback, "System.Text", "UTF7Encoding/DecoderUTF7Fallback");
NEED_NO_BOX(::System::Text::____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::____System__Text__UTF7Encoding__DecoderUTF7FallbackBuffer, "System.Text", "UTF7Encoding/DecoderUTF7FallbackBuffer");
NEED_NO_BOX(::System::Text::____System__Text__UTF7Encoding__Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::____System__Text__UTF7Encoding__Encoder, "System.Text", "UTF7Encoding/Encoder");
