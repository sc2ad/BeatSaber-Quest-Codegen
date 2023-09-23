#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoder;
}
// Forward declare root types
namespace System::Text {
class System__Text__UTF8Encoding__UTF8Decoder;
}
namespace System::Text {
class System__Text__UTF8Encoding__UTF8Encoder;
}
namespace System::Text {
class System__Text__UTF8Encoding__UTF8EncodingSealed;
}
namespace System::Text {
class UTF8Encoding;
}
// Type: System.Text::UTF8Encoding
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2870))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2861))
// CS Name: System.Text.UTF8Encoding
class CORDL_TYPE UTF8Encoding : public System::Text::Encoding {
public:
// Declarations
using UTF8Decoder = System::Text::System__Text__UTF8Encoding__UTF8Decoder;

using UTF8Encoder = System::Text::System__Text__UTF8Encoding__UTF8Encoder;

using UTF8EncodingSealed = System::Text::System__Text__UTF8Encoding__UTF8EncodingSealed;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UTF8Encoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding", modifiers: " const&", def_value: None }]
constexpr UTF8Encoding(UTF8Encoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding", modifiers: "&&", def_value: None }]
constexpr UTF8Encoding(UTF8Encoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UTF8Encoding(void* ptr) noexcept : System::Text::Encoding(ptr) {
}


  constexpr UTF8Encoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UTF8Encoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UTF8Encoding& operator=(UTF8Encoding&& o) noexcept = default;
  constexpr UTF8Encoding& operator=(UTF8Encoding const& o) noexcept = default;
                


// Fields

static System::Text::System__Text__UTF8Encoding__UTF8EncodingSealed __declspec(property(get=__get_s_default, put=__set_s_default))  s_default;

static void __set_s_default(System::Text::System__Text__UTF8Encoding__UTF8EncodingSealed value) ;

static System::Text::System__Text__UTF8Encoding__UTF8EncodingSealed __get_s_default() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_preamble, put=__set_s_preamble))  s_preamble;

static void __set_s_preamble(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_preamble() ;

 bool __declspec(property(get=__get__emitUTF8Identifier, put=__set__emitUTF8Identifier))  _emitUTF8Identifier;

constexpr void __set__emitUTF8Identifier(bool value) ;

constexpr bool __get__emitUTF8Identifier() const;

 bool __declspec(property(get=__get__isThrowException, put=__set__isThrowException))  _isThrowException;

constexpr void __set__isThrowException(bool value) ;

constexpr bool __get__isThrowException() const;


// Properties

 System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_Preamble))  Preamble;


// Methods

// Ctor Parameters []
explicit UTF8Encoding() ;

/// @brief Method .ctor addr 0x22d4c00 size 0x20 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "encoderShouldEmitUTF8Identifier", ty: "bool", modifiers: "", def_value: None }]
explicit UTF8Encoding(bool encoderShouldEmitUTF8Identifier) ;

/// @brief Method .ctor addr 0x22d4c20 size 0x30 virtual false final false
 void _ctor(bool encoderShouldEmitUTF8Identifier) ;

// Ctor Parameters [CppParam { name: "encoderShouldEmitUTF8Identifier", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "throwOnInvalidBytes", ty: "bool", modifiers: "", def_value: None }]
explicit UTF8Encoding(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) ;

/// @brief Method .ctor addr 0x22d4c50 size 0x60 virtual false final false
 void _ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) ;

/// @brief Method SetDefaultFallbacks addr 0x22d4cb0 size 0xd4 virtual true final false
 void SetDefaultFallbacks() ;

/// @brief Method GetByteCount addr 0x22d4d84 size 0x184 virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x22d4f08 size 0x90 virtual true final false
 int32_t GetByteCount(::StringW chars) ;

/// @brief Method GetByteCount addr 0x22d4f98 size 0xd8 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count) ;

/// @brief Method GetBytes addr 0x22d5070 size 0x260 virtual true final false
 int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22d52d0 size 0x27c virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22d554c size 0x100 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount) ;

/// @brief Method GetCharCount addr 0x22d564c size 0x184 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x22d57d0 size 0xd8 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count) ;

/// @brief Method GetChars addr 0x22d58a8 size 0x27c virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x22d5b24 size 0x100 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount) ;

/// @brief Method GetString addr 0x22d5c24 size 0x1c8 virtual true final false
 ::StringW GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x22d5dec size 0x60c virtual true final false
 int32_t GetByteCount(void* chars, int32_t count, System::Text::EncoderNLS baseEncoder) ;

/// @brief Method PtrDiff addr 0x22d640c size 0xc virtual false final false
static int32_t PtrDiff(void* a, void* b) ;

/// @brief Method PtrDiff addr 0x22d6418 size 0x8 virtual false final false
static int32_t PtrDiff(void* a, void* b) ;

/// @brief Method InRange addr 0x22d63f8 size 0x14 virtual false final false
static bool InRange(int32_t ch, int32_t start, int32_t end) ;

/// @brief Method GetBytes addr 0x22d6420 size 0x748 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, System::Text::EncoderNLS baseEncoder) ;

/// @brief Method GetCharCount addr 0x22d6b68 size 0x540 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, System::Text::DecoderNLS baseDecoder) ;

/// @brief Method GetChars addr 0x22d70e8 size 0x784 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, System::Text::DecoderNLS baseDecoder) ;

/// @brief Method FallbackInvalidByteSequence addr 0x22d786c size 0x74 virtual false final false
 bool FallbackInvalidByteSequence(ByRef<void*> pSrc, int32_t ch, System::Text::DecoderFallbackBuffer fallback, ByRef<void*> pTarget) ;

/// @brief Method FallbackInvalidByteSequence addr 0x22d70a8 size 0x40 virtual false final false
 int32_t FallbackInvalidByteSequence(void* pSrc, int32_t ch, System::Text::DecoderFallbackBuffer fallback) ;

/// @brief Method GetBytesUnknown addr 0x22d78e0 size 0x1f4 virtual false final false
 ::ArrayW<uint8_t> GetBytesUnknown(ByRef<void*> pSrc, int32_t ch) ;

/// @brief Method GetDecoder addr 0x22d7ad4 size 0x64 virtual true final false
 System::Text::Decoder GetDecoder() ;

/// @brief Method GetEncoder addr 0x22d7b40 size 0x64 virtual true final false
 System::Text::Encoder GetEncoder() ;

/// @brief Method GetMaxByteCount addr 0x22d7bac size 0x108 virtual true final false
 int32_t GetMaxByteCount(int32_t charCount) ;

/// @brief Method GetMaxCharCount addr 0x22d7cb4 size 0x108 virtual true final false
 int32_t GetMaxCharCount(int32_t byteCount) ;

/// @brief Method GetPreamble addr 0x22d7dbc size 0xd4 virtual true final false
 ::ArrayW<uint8_t> GetPreamble() ;

/// @brief Method get_Preamble addr 0x22d7e90 size 0x160 virtual true final false
 System::ReadOnlySpan_1<uint8_t> get_Preamble() ;

/// @brief Method Equals addr 0x22d7ff0 size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x22d80c0 size 0x60 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::UTF8EncodingSealed
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2861))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2858))
// CS Name: System.Text.UTF8Encoding::UTF8EncodingSealed
class CORDL_TYPE System__Text__UTF8Encoding__UTF8EncodingSealed : public System::Text::UTF8Encoding {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~System__Text__UTF8Encoding__UTF8EncodingSealed() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UTF8Encoding__UTF8EncodingSealed", modifiers: " const&", def_value: None }]
constexpr System__Text__UTF8Encoding__UTF8EncodingSealed(System__Text__UTF8Encoding__UTF8EncodingSealed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UTF8Encoding__UTF8EncodingSealed", modifiers: "&&", def_value: None }]
constexpr System__Text__UTF8Encoding__UTF8EncodingSealed(System__Text__UTF8Encoding__UTF8EncodingSealed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__UTF8Encoding__UTF8EncodingSealed(void* ptr) noexcept : System::Text::UTF8Encoding(ptr) {
}


  constexpr System__Text__UTF8Encoding__UTF8EncodingSealed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__UTF8Encoding__UTF8EncodingSealed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__UTF8Encoding__UTF8EncodingSealed& operator=(System__Text__UTF8Encoding__UTF8EncodingSealed&& o) noexcept = default;
  constexpr System__Text__UTF8Encoding__UTF8EncodingSealed& operator=(System__Text__UTF8Encoding__UTF8EncodingSealed const& o) noexcept = default;
                


// Properties

 System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_Preamble))  Preamble;


// Methods

// Ctor Parameters [CppParam { name: "encoderShouldEmitUTF8Identifier", ty: "bool", modifiers: "", def_value: None }]
explicit System__Text__UTF8Encoding__UTF8EncodingSealed(bool encoderShouldEmitUTF8Identifier) ;

/// @brief Method .ctor addr 0x22d81f0 size 0x78 virtual false final false
 void _ctor(bool encoderShouldEmitUTF8Identifier) ;

/// @brief Method get_Preamble addr 0x22d8268 size 0xd4 virtual true final false
 System::ReadOnlySpan_1<uint8_t> get_Preamble() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::UTF8Encoder
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2842))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2859))
// CS Name: System.Text.UTF8Encoding::UTF8Encoder
class CORDL_TYPE System__Text__UTF8Encoding__UTF8Encoder : public System::Text::EncoderNLS {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~System__Text__UTF8Encoding__UTF8Encoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UTF8Encoding__UTF8Encoder", modifiers: " const&", def_value: None }]
constexpr System__Text__UTF8Encoding__UTF8Encoder(System__Text__UTF8Encoding__UTF8Encoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UTF8Encoding__UTF8Encoder", modifiers: "&&", def_value: None }]
constexpr System__Text__UTF8Encoding__UTF8Encoder(System__Text__UTF8Encoding__UTF8Encoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__UTF8Encoding__UTF8Encoder(void* ptr) noexcept : System::Text::EncoderNLS(ptr) {
}


  constexpr System__Text__UTF8Encoding__UTF8Encoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__UTF8Encoding__UTF8Encoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__UTF8Encoding__UTF8Encoder& operator=(System__Text__UTF8Encoding__UTF8Encoder&& o) noexcept = default;
  constexpr System__Text__UTF8Encoding__UTF8Encoder& operator=(System__Text__UTF8Encoding__UTF8Encoder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_surrogateChar, put=__set_surrogateChar))  surrogateChar;

constexpr void __set_surrogateChar(int32_t value) ;

constexpr int32_t __get_surrogateChar() const;


// Properties

 bool __declspec(property(get=get_HasState))  HasState;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::UTF8Encoding", modifiers: "", def_value: None }]
explicit System__Text__UTF8Encoding__UTF8Encoder(System::Text::UTF8Encoding encoding) ;

/// @brief Method .ctor addr 0x22d7ba4 size 0x8 virtual false final false
 void _ctor(System::Text::UTF8Encoding encoding) ;

/// @brief Method Reset addr 0x22d833c size 0x20 virtual true final false
 void Reset() ;

/// @brief Method get_HasState addr 0x22d835c size 0x10 virtual true final false
 bool get_HasState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::UTF8Decoder
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2831))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2860))
// CS Name: System.Text.UTF8Encoding::UTF8Decoder
class CORDL_TYPE System__Text__UTF8Encoding__UTF8Decoder : public System::Text::DecoderNLS {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Text__UTF8Encoding__UTF8Decoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UTF8Encoding__UTF8Decoder", modifiers: " const&", def_value: None }]
constexpr System__Text__UTF8Encoding__UTF8Decoder(System__Text__UTF8Encoding__UTF8Decoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__UTF8Encoding__UTF8Decoder", modifiers: "&&", def_value: None }]
constexpr System__Text__UTF8Encoding__UTF8Decoder(System__Text__UTF8Encoding__UTF8Decoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__UTF8Encoding__UTF8Decoder(void* ptr) noexcept : System::Text::DecoderNLS(ptr) {
}


  constexpr System__Text__UTF8Encoding__UTF8Decoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__UTF8Encoding__UTF8Decoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__UTF8Encoding__UTF8Decoder& operator=(System__Text__UTF8Encoding__UTF8Decoder&& o) noexcept = default;
  constexpr System__Text__UTF8Encoding__UTF8Decoder& operator=(System__Text__UTF8Encoding__UTF8Decoder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_bits, put=__set_bits))  bits;

constexpr void __set_bits(int32_t value) ;

constexpr int32_t __get_bits() const;


// Properties

 bool __declspec(property(get=get_HasState))  HasState;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::UTF8Encoding", modifiers: "", def_value: None }]
explicit System__Text__UTF8Encoding__UTF8Decoder(System::Text::UTF8Encoding encoding) ;

/// @brief Method .ctor addr 0x22d7b38 size 0x8 virtual false final false
 void _ctor(System::Text::UTF8Encoding encoding) ;

/// @brief Method Reset addr 0x22d836c size 0x20 virtual true final false
 void Reset() ;

/// @brief Method get_HasState addr 0x22d838c size 0x10 virtual true final false
 bool get_HasState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::System__Text__UTF8Encoding__UTF8Decoder);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__UTF8Encoding__UTF8Decoder, "System.Text", "UTF8Encoding/UTF8Decoder");
NEED_NO_BOX(System::Text::System__Text__UTF8Encoding__UTF8Encoder);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__UTF8Encoding__UTF8Encoder, "System.Text", "UTF8Encoding/UTF8Encoder");
NEED_NO_BOX(System::Text::System__Text__UTF8Encoding__UTF8EncodingSealed);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__UTF8Encoding__UTF8EncodingSealed, "System.Text", "UTF8Encoding/UTF8EncodingSealed");
NEED_NO_BOX(System::Text::UTF8Encoding);
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF8Encoding, "System.Text", "UTF8Encoding");
