#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Decoder;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class ICloneable;
}
namespace System::Text {
class EncoderFallback;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Globalization {
class CodePageDataItem;
}
namespace System::Text {
class DecoderFallback;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class Encoding;
}
namespace System::Text {
class System__Text__Encoding__DefaultDecoder;
}
namespace System::Text {
class System__Text__Encoding__DefaultEncoder;
}
namespace System::Text {
class System__Text__Encoding__EncodingByteBuffer;
}
namespace System::Text {
class System__Text__Encoding__EncodingCharBuffer;
}
// Type: ::DefaultEncoder
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2834))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2866))
// CS Name: System.Text.Encoding::DefaultEncoder
class CORDL_TYPE System__Text__Encoding__DefaultEncoder : public System::Text::Encoder {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IObjectReference
constexpr operator  System::Runtime::Serialization::IObjectReference() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Text__Encoding__DefaultEncoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__Encoding__DefaultEncoder", modifiers: " const&", def_value: None }]
constexpr System__Text__Encoding__DefaultEncoder(System__Text__Encoding__DefaultEncoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__Encoding__DefaultEncoder", modifiers: "&&", def_value: None }]
constexpr System__Text__Encoding__DefaultEncoder(System__Text__Encoding__DefaultEncoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__Encoding__DefaultEncoder(void* ptr) noexcept : System::Text::Encoder(ptr) {
}


  constexpr System__Text__Encoding__DefaultEncoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__Encoding__DefaultEncoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__Encoding__DefaultEncoder& operator=(System__Text__Encoding__DefaultEncoder&& o) noexcept = default;
  constexpr System__Text__Encoding__DefaultEncoder& operator=(System__Text__Encoding__DefaultEncoder const& o) noexcept = default;
                


// Fields

 System::Text::Encoding __declspec(property(get=__get_m_encoding, put=__set_m_encoding))  m_encoding;

constexpr void __set_m_encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get_m_encoding() const;

 bool __declspec(property(get=__get_m_hasInitializedEncoding, put=__set_m_hasInitializedEncoding))  m_hasInitializedEncoding;

constexpr void __set_m_hasInitializedEncoding(bool value) ;

constexpr bool __get_m_hasInitializedEncoding() const;

 char16_t __declspec(property(get=__get_charLeftOver, put=__set_charLeftOver))  charLeftOver;

constexpr void __set_charLeftOver(char16_t value) ;

constexpr char16_t __get_charLeftOver() const;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit System__Text__Encoding__DefaultEncoder(System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x22e0f40 size 0x30 virtual false final false
 void _ctor(System::Text::Encoding encoding) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit System__Text__Encoding__DefaultEncoder(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x22e15b0 size 0x358 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetRealObject addr 0x22e1908 size 0xb8 virtual true final true
 ::bs_hook::Il2CppWrapperType GetRealObject(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x22e19c0 size 0xa4 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetByteCount addr 0x22e1a64 size 0x20 virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count, bool flush) ;

/// @brief Method GetByteCount addr 0x22e1a84 size 0x24 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count, bool flush) ;

/// @brief Method GetBytes addr 0x22e1aa8 size 0x24 virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, bool flush) ;

/// @brief Method GetBytes addr 0x22e1acc size 0x24 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, bool flush) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::DefaultDecoder
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2823))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2867))
// CS Name: System.Text.Encoding::DefaultDecoder
class CORDL_TYPE System__Text__Encoding__DefaultDecoder : public System::Text::Decoder {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::IObjectReference
constexpr operator  System::Runtime::Serialization::IObjectReference() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Text__Encoding__DefaultDecoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__Encoding__DefaultDecoder", modifiers: " const&", def_value: None }]
constexpr System__Text__Encoding__DefaultDecoder(System__Text__Encoding__DefaultDecoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__Encoding__DefaultDecoder", modifiers: "&&", def_value: None }]
constexpr System__Text__Encoding__DefaultDecoder(System__Text__Encoding__DefaultDecoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__Encoding__DefaultDecoder(void* ptr) noexcept : System::Text::Decoder(ptr) {
}


  constexpr System__Text__Encoding__DefaultDecoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__Encoding__DefaultDecoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__Encoding__DefaultDecoder& operator=(System__Text__Encoding__DefaultDecoder&& o) noexcept = default;
  constexpr System__Text__Encoding__DefaultDecoder& operator=(System__Text__Encoding__DefaultDecoder const& o) noexcept = default;
                


// Fields

 System::Text::Encoding __declspec(property(get=__get_m_encoding, put=__set_m_encoding))  m_encoding;

constexpr void __set_m_encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get_m_encoding() const;

 bool __declspec(property(get=__get_m_hasInitializedEncoding, put=__set_m_hasInitializedEncoding))  m_hasInitializedEncoding;

constexpr void __set_m_hasInitializedEncoding(bool value) ;

constexpr bool __get_m_hasInitializedEncoding() const;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit System__Text__Encoding__DefaultDecoder(System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x22e0cbc size 0x30 virtual false final false
 void _ctor(System::Text::Encoding encoding) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit System__Text__Encoding__DefaultDecoder(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x22e1af0 size 0x2b8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetRealObject addr 0x22e1da8 size 0x4c virtual true final true
 ::bs_hook::Il2CppWrapperType GetRealObject(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x22e1df4 size 0xa4 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetCharCount addr 0x22e1e98 size 0x10 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x22e1ea8 size 0x24 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count, bool flush) ;

/// @brief Method GetCharCount addr 0x22e1ecc size 0x24 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, bool flush) ;

/// @brief Method GetChars addr 0x22e1ef0 size 0x10 virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x22e1f00 size 0x24 virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, bool flush) ;

/// @brief Method GetChars addr 0x22e1f24 size 0x24 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, bool flush) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::EncodingCharBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2868))
// CS Name: System.Text.Encoding::EncodingCharBuffer
class CORDL_TYPE System__Text__Encoding__EncodingCharBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~System__Text__Encoding__EncodingCharBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__Encoding__EncodingCharBuffer", modifiers: " const&", def_value: None }]
constexpr System__Text__Encoding__EncodingCharBuffer(System__Text__Encoding__EncodingCharBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__Encoding__EncodingCharBuffer", modifiers: "&&", def_value: None }]
constexpr System__Text__Encoding__EncodingCharBuffer(System__Text__Encoding__EncodingCharBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__Encoding__EncodingCharBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Text__Encoding__EncodingCharBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__Encoding__EncodingCharBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__Encoding__EncodingCharBuffer& operator=(System__Text__Encoding__EncodingCharBuffer&& o) noexcept = default;
  constexpr System__Text__Encoding__EncodingCharBuffer& operator=(System__Text__Encoding__EncodingCharBuffer const& o) noexcept = default;
                


// Fields

 void* __declspec(property(get=__get_chars, put=__set_chars))  chars;

constexpr void __set_chars(void* value) ;

constexpr void* __get_chars() const;

 void* __declspec(property(get=__get_charStart, put=__set_charStart))  charStart;

constexpr void __set_charStart(void* value) ;

constexpr void* __get_charStart() const;

 void* __declspec(property(get=__get_charEnd, put=__set_charEnd))  charEnd;

constexpr void __set_charEnd(void* value) ;

constexpr void* __get_charEnd() const;

 int32_t __declspec(property(get=__get_charCountResult, put=__set_charCountResult))  charCountResult;

constexpr void __set_charCountResult(int32_t value) ;

constexpr int32_t __get_charCountResult() const;

 System::Text::Encoding __declspec(property(get=__get_enc, put=__set_enc))  enc;

constexpr void __set_enc(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get_enc() const;

 System::Text::DecoderNLS __declspec(property(get=__get_decoder, put=__set_decoder))  decoder;

constexpr void __set_decoder(System::Text::DecoderNLS value) ;

constexpr System::Text::DecoderNLS __get_decoder() const;

 void* __declspec(property(get=__get_byteStart, put=__set_byteStart))  byteStart;

constexpr void __set_byteStart(void* value) ;

constexpr void* __get_byteStart() const;

 void* __declspec(property(get=__get_byteEnd, put=__set_byteEnd))  byteEnd;

constexpr void __set_byteEnd(void* value) ;

constexpr void* __get_byteEnd() const;

 void* __declspec(property(get=__get_bytes, put=__set_bytes))  bytes;

constexpr void __set_bytes(void* value) ;

constexpr void* __get_bytes() const;

 System::Text::DecoderFallbackBuffer __declspec(property(get=__get_fallbackBuffer, put=__set_fallbackBuffer))  fallbackBuffer;

constexpr void __set_fallbackBuffer(System::Text::DecoderFallbackBuffer value) ;

constexpr System::Text::DecoderFallbackBuffer __get_fallbackBuffer() const;


// Properties

 bool __declspec(property(get=get_MoreData))  MoreData;

 int32_t __declspec(property(get=get_BytesUsed))  BytesUsed;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "enc", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "decoder", ty: "System::Text::DecoderNLS", modifiers: "", def_value: None }, CppParam { name: "charStart", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "charCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "byteStart", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "byteCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__Text__Encoding__EncodingCharBuffer(System::Text::Encoding enc, System::Text::DecoderNLS decoder, void* charStart, int32_t charCount, void* byteStart, int32_t byteCount) ;

/// @brief Method .ctor addr 0x22e1f48 size 0xa8 virtual false final false
 void _ctor(System::Text::Encoding enc, System::Text::DecoderNLS decoder, void* charStart, int32_t charCount, void* byteStart, int32_t byteCount) ;

/// @brief Method AddChar addr 0x22e1ff0 size 0x70 virtual false final false
 bool AddChar(char16_t ch, int32_t numBytes) ;

/// @brief Method AddChar addr 0x22e2060 size 0x8 virtual false final false
 bool AddChar(char16_t ch) ;

/// @brief Method AdjustBytes addr 0x22e2068 size 0x10 virtual false final false
 void AdjustBytes(int32_t count) ;

/// @brief Method get_MoreData addr 0x22e2078 size 0x10 virtual false final false
 bool get_MoreData() ;

/// @brief Method GetNextByte addr 0x22e2088 size 0x24 virtual false final false
 uint8_t GetNextByte() ;

/// @brief Method get_BytesUsed addr 0x22e20ac size 0x10 virtual false final false
 int32_t get_BytesUsed() ;

/// @brief Method Fallback addr 0x22e20bc size 0x78 virtual false final false
 bool Fallback(uint8_t fallbackByte) ;

/// @brief Method Fallback addr 0x22e2134 size 0xdc virtual false final false
 bool Fallback(::ArrayW<uint8_t> byteBuffer) ;

/// @brief Method get_Count addr 0x22e2210 size 0x8 virtual false final false
 int32_t get_Count() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::EncodingByteBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2869))
// CS Name: System.Text.Encoding::EncodingByteBuffer
class CORDL_TYPE System__Text__Encoding__EncodingByteBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~System__Text__Encoding__EncodingByteBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__Encoding__EncodingByteBuffer", modifiers: " const&", def_value: None }]
constexpr System__Text__Encoding__EncodingByteBuffer(System__Text__Encoding__EncodingByteBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__Encoding__EncodingByteBuffer", modifiers: "&&", def_value: None }]
constexpr System__Text__Encoding__EncodingByteBuffer(System__Text__Encoding__EncodingByteBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__Encoding__EncodingByteBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Text__Encoding__EncodingByteBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__Encoding__EncodingByteBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__Encoding__EncodingByteBuffer& operator=(System__Text__Encoding__EncodingByteBuffer&& o) noexcept = default;
  constexpr System__Text__Encoding__EncodingByteBuffer& operator=(System__Text__Encoding__EncodingByteBuffer const& o) noexcept = default;
                


// Fields

 void* __declspec(property(get=__get_bytes, put=__set_bytes))  bytes;

constexpr void __set_bytes(void* value) ;

constexpr void* __get_bytes() const;

 void* __declspec(property(get=__get_byteStart, put=__set_byteStart))  byteStart;

constexpr void __set_byteStart(void* value) ;

constexpr void* __get_byteStart() const;

 void* __declspec(property(get=__get_byteEnd, put=__set_byteEnd))  byteEnd;

constexpr void __set_byteEnd(void* value) ;

constexpr void* __get_byteEnd() const;

 void* __declspec(property(get=__get_chars, put=__set_chars))  chars;

constexpr void __set_chars(void* value) ;

constexpr void* __get_chars() const;

 void* __declspec(property(get=__get_charStart, put=__set_charStart))  charStart;

constexpr void __set_charStart(void* value) ;

constexpr void* __get_charStart() const;

 void* __declspec(property(get=__get_charEnd, put=__set_charEnd))  charEnd;

constexpr void __set_charEnd(void* value) ;

constexpr void* __get_charEnd() const;

 int32_t __declspec(property(get=__get_byteCountResult, put=__set_byteCountResult))  byteCountResult;

constexpr void __set_byteCountResult(int32_t value) ;

constexpr int32_t __get_byteCountResult() const;

 System::Text::Encoding __declspec(property(get=__get_enc, put=__set_enc))  enc;

constexpr void __set_enc(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get_enc() const;

 System::Text::EncoderNLS __declspec(property(get=__get_encoder, put=__set_encoder))  encoder;

constexpr void __set_encoder(System::Text::EncoderNLS value) ;

constexpr System::Text::EncoderNLS __get_encoder() const;

 System::Text::EncoderFallbackBuffer __declspec(property(get=__get_fallbackBuffer, put=__set_fallbackBuffer))  fallbackBuffer;

constexpr void __set_fallbackBuffer(System::Text::EncoderFallbackBuffer value) ;

constexpr System::Text::EncoderFallbackBuffer __get_fallbackBuffer() const;


// Properties

 bool __declspec(property(get=get_MoreData))  MoreData;

 int32_t __declspec(property(get=get_CharsUsed))  CharsUsed;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "inEncoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }, CppParam { name: "inEncoder", ty: "System::Text::EncoderNLS", modifiers: "", def_value: None }, CppParam { name: "inByteStart", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "inByteCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "inCharStart", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "inCharCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__Text__Encoding__EncodingByteBuffer(System::Text::Encoding inEncoding, System::Text::EncoderNLS inEncoder, void* inByteStart, int32_t inByteCount, void* inCharStart, int32_t inCharCount) ;

/// @brief Method .ctor addr 0x22e2218 size 0x204 virtual false final false
 void _ctor(System::Text::Encoding inEncoding, System::Text::EncoderNLS inEncoder, void* inByteStart, int32_t inByteCount, void* inCharStart, int32_t inCharCount) ;

/// @brief Method AddByte addr 0x22e241c size 0x50 virtual false final false
 bool AddByte(uint8_t b, int32_t moreBytesExpected) ;

/// @brief Method AddByte addr 0x22e24ec size 0x8 virtual false final false
 bool AddByte(uint8_t b1) ;

/// @brief Method AddByte addr 0x22e24f4 size 0x8 virtual false final false
 bool AddByte(uint8_t b1, uint8_t b2) ;

/// @brief Method AddByte addr 0x22e24fc size 0x48 virtual false final false
 bool AddByte(uint8_t b1, uint8_t b2, int32_t moreBytesExpected) ;

/// @brief Method MovePrevious addr 0x22e246c size 0x80 virtual false final false
 void MovePrevious(bool bThrow) ;

/// @brief Method get_MoreData addr 0x22e2544 size 0x48 virtual false final false
 bool get_MoreData() ;

/// @brief Method GetNextChar addr 0x22e258c size 0x50 virtual false final false
 char16_t GetNextChar() ;

/// @brief Method get_CharsUsed addr 0x22e25dc size 0x18 virtual false final false
 int32_t get_CharsUsed() ;

/// @brief Method get_Count addr 0x22e25f4 size 0x8 virtual false final false
 int32_t get_Count() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: System.Text::Encoding
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2870))
// CS Name: System.Text.Encoding
class CORDL_TYPE Encoding : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EncodingByteBuffer = System::Text::System__Text__Encoding__EncodingByteBuffer;

using EncodingCharBuffer = System::Text::System__Text__Encoding__EncodingCharBuffer;

using DefaultDecoder = System::Text::System__Text__Encoding__DefaultDecoder;

using DefaultEncoder = System::Text::System__Text__Encoding__DefaultEncoder;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Encoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "Encoding", modifiers: " const&", def_value: None }]
constexpr Encoding(Encoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Encoding", modifiers: "&&", def_value: None }]
constexpr Encoding(Encoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Encoding(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Encoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Encoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Encoding& operator=(Encoding&& o) noexcept = default;
  constexpr Encoding& operator=(Encoding const& o) noexcept = default;
                


// Fields

static System::Text::Encoding __declspec(property(get=__get_defaultEncoding, put=__set_defaultEncoding))  defaultEncoding;

static void __set_defaultEncoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_defaultEncoding() ;

static System::Text::Encoding __declspec(property(get=__get_unicodeEncoding, put=__set_unicodeEncoding))  unicodeEncoding;

static void __set_unicodeEncoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_unicodeEncoding() ;

static System::Text::Encoding __declspec(property(get=__get_bigEndianUnicode, put=__set_bigEndianUnicode))  bigEndianUnicode;

static void __set_bigEndianUnicode(System::Text::Encoding value) ;

static System::Text::Encoding __get_bigEndianUnicode() ;

static System::Text::Encoding __declspec(property(get=__get_utf7Encoding, put=__set_utf7Encoding))  utf7Encoding;

static void __set_utf7Encoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_utf7Encoding() ;

static System::Text::Encoding __declspec(property(get=__get_utf8Encoding, put=__set_utf8Encoding))  utf8Encoding;

static void __set_utf8Encoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_utf8Encoding() ;

static System::Text::Encoding __declspec(property(get=__get_utf32Encoding, put=__set_utf32Encoding))  utf32Encoding;

static void __set_utf32Encoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_utf32Encoding() ;

static System::Text::Encoding __declspec(property(get=__get_asciiEncoding, put=__set_asciiEncoding))  asciiEncoding;

static void __set_asciiEncoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_asciiEncoding() ;

static System::Text::Encoding __declspec(property(get=__get_latin1Encoding, put=__set_latin1Encoding))  latin1Encoding;

static void __set_latin1Encoding(System::Text::Encoding value) ;

static System::Text::Encoding __get_latin1Encoding() ;

static System::Collections::Generic::Dictionary_2<int32_t,System::Text::Encoding> __declspec(property(get=__get_encodings, put=__set_encodings))  encodings;

static void __set_encodings(System::Collections::Generic::Dictionary_2<int32_t,System::Text::Encoding> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,System::Text::Encoding> __get_encodings() ;

 int32_t __declspec(property(get=__get_m_codePage, put=__set_m_codePage))  m_codePage;

constexpr void __set_m_codePage(int32_t value) ;

constexpr int32_t __get_m_codePage() const;

 System::Globalization::CodePageDataItem __declspec(property(get=__get_dataItem, put=__set_dataItem))  dataItem;

constexpr void __set_dataItem(System::Globalization::CodePageDataItem value) ;

constexpr System::Globalization::CodePageDataItem __get_dataItem() const;

 bool __declspec(property(get=__get_m_deserializedFromEverett, put=__set_m_deserializedFromEverett))  m_deserializedFromEverett;

constexpr void __set_m_deserializedFromEverett(bool value) ;

constexpr bool __get_m_deserializedFromEverett() const;

 bool __declspec(property(get=__get_m_isReadOnly, put=__set_m_isReadOnly))  m_isReadOnly;

constexpr void __set_m_isReadOnly(bool value) ;

constexpr bool __get_m_isReadOnly() const;

 System::Text::EncoderFallback __declspec(property(get=__get_encoderFallback, put=__set_encoderFallback))  encoderFallback;

constexpr void __set_encoderFallback(System::Text::EncoderFallback value) ;

constexpr System::Text::EncoderFallback __get_encoderFallback() const;

 System::Text::DecoderFallback __declspec(property(get=__get_decoderFallback, put=__set_decoderFallback))  decoderFallback;

constexpr void __set_decoderFallback(System::Text::DecoderFallback value) ;

constexpr System::Text::DecoderFallback __get_decoderFallback() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_InternalSyncObject, put=__set_s_InternalSyncObject))  s_InternalSyncObject;

static void __set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_InternalSyncObject() ;


// Properties

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_InternalSyncObject))  InternalSyncObject;

 System::ReadOnlySpan_1<uint8_t> __declspec(property(get=get_Preamble))  Preamble;

 ::StringW __declspec(property(get=get_EncodingName))  EncodingName;

 ::StringW __declspec(property(get=get_WebName))  WebName;

 System::Text::EncoderFallback __declspec(property(get=get_EncoderFallback, put=set_EncoderFallback))  EncoderFallback;

 System::Text::DecoderFallback __declspec(property(get=get_DecoderFallback, put=set_DecoderFallback))  DecoderFallback;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

static System::Text::Encoding __declspec(property(get=get_ASCII))  ASCII;

static System::Text::Encoding __declspec(property(get=get_Latin1))  Latin1;

 int32_t __declspec(property(get=get_CodePage))  CodePage;

static System::Text::Encoding __declspec(property(get=get_Default))  Default;

static System::Text::Encoding __declspec(property(get=get_Unicode))  Unicode;

static System::Text::Encoding __declspec(property(get=get_BigEndianUnicode))  BigEndianUnicode;

static System::Text::Encoding __declspec(property(get=get_UTF7))  UTF7;

static System::Text::Encoding __declspec(property(get=get_UTF8))  UTF8;

static System::Text::Encoding __declspec(property(get=get_UTF32))  UTF32;


// Methods

// Ctor Parameters []
explicit Encoding() ;

/// @brief Method .ctor addr 0x22ddbec size 0x30 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "codePage", ty: "int32_t", modifiers: "", def_value: None }]
explicit Encoding(int32_t codePage) ;

/// @brief Method .ctor addr 0x22ddc1c size 0x8c virtual false final false
 void _ctor(int32_t codePage) ;

/// @brief Method SetDefaultFallbacks addr 0x22ddca8 size 0x98 virtual true final false
 void SetDefaultFallbacks() ;

/// @brief Method OnDeserializing addr 0x22ddd40 size 0x10 virtual false final false
 void OnDeserializing() ;

/// @brief Method OnDeserialized addr 0x22ddd50 size 0x3c virtual false final false
 void OnDeserialized() ;

/// @brief Method OnDeserializing addr 0x22ddd8c size 0x10 virtual false final false
 void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method OnDeserialized addr 0x22ddd9c size 0x3c virtual false final false
 void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method OnSerializing addr 0x22dddd8 size 0x8 virtual false final false
 void OnSerializing(System::Runtime::Serialization::StreamingContext ctx) ;

/// @brief Method DeserializeEncoding addr 0x22ddde0 size 0x400 virtual false final false
 void DeserializeEncoding(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method SerializeEncoding addr 0x22de1e0 size 0x1ac virtual false final false
 void SerializeEncoding(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_InternalSyncObject addr 0x22de38c size 0xa0 virtual false final false
static ::bs_hook::Il2CppWrapperType get_InternalSyncObject() ;

/// @brief Method GetEncoding addr 0x22de42c size 0x8ec virtual false final false
static System::Text::Encoding GetEncoding(int32_t codepage) ;

/// @brief Method GetEncoding addr 0x22df8a8 size 0x104 virtual false final false
static System::Text::Encoding GetEncoding(int32_t codepage, System::Text::EncoderFallback encoderFallback, System::Text::DecoderFallback decoderFallback) ;

/// @brief Method GetEncoding addr 0x22dfb3c size 0x9c virtual false final false
static System::Text::Encoding GetEncoding(::StringW name) ;

/// @brief Method GetPreamble addr 0x22dfbd8 size 0x58 virtual true final false
 ::ArrayW<uint8_t> GetPreamble() ;

/// @brief Method get_Preamble addr 0x22dfc30 size 0x54 virtual true final false
 System::ReadOnlySpan_1<uint8_t> get_Preamble() ;

/// @brief Method GetDataItem addr 0x22dfc84 size 0x128 virtual false final false
 void GetDataItem() ;

/// @brief Method get_EncodingName addr 0x22dfdac size 0xc virtual true final false
 ::StringW get_EncodingName() ;

/// @brief Method get_WebName addr 0x22dfdb8 size 0x30 virtual true final false
 ::StringW get_WebName() ;

/// @brief Method get_EncoderFallback addr 0x22dfde8 size 0x8 virtual false final false
 System::Text::EncoderFallback get_EncoderFallback() ;

/// @brief Method set_EncoderFallback addr 0x22df9ac size 0xc8 virtual false final false
 void set_EncoderFallback(System::Text::EncoderFallback value) ;

/// @brief Method get_DecoderFallback addr 0x22dfdf0 size 0x8 virtual false final false
 System::Text::DecoderFallback get_DecoderFallback() ;

/// @brief Method set_DecoderFallback addr 0x22dfa74 size 0xc8 virtual false final false
 void set_DecoderFallback(System::Text::DecoderFallback value) ;

/// @brief Method Clone addr 0x22dfdf8 size 0x88 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_IsReadOnly addr 0x22dfe80 size 0x8 virtual false final false
 bool get_IsReadOnly() ;

/// @brief Method get_ASCII addr 0x22df04c size 0xa8 virtual false final false
static System::Text::Encoding get_ASCII() ;

/// @brief Method get_Latin1 addr 0x22df0f4 size 0xa8 virtual false final false
static System::Text::Encoding get_Latin1() ;

/// @brief Method GetByteCount addr 0x22dfe88 size 0x8c virtual true final false
 int32_t GetByteCount(::StringW s) ;

/// @brief Method GetByteCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x22dff14 size 0x174 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count) ;

/// @brief Method GetByteCount addr 0x22e0088 size 0x10 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count, System::Text::EncoderNLS encoder) ;

/// @brief Method GetBytes addr 0x22e0098 size 0x94 virtual true final false
 ::ArrayW<uint8_t> GetBytes(::ArrayW<char16_t> chars) ;

/// @brief Method GetBytes addr 0x22e012c size 0xb8 virtual true final false
 ::ArrayW<uint8_t> GetBytes(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method GetBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22e01e4 size 0x104 virtual true final false
 ::ArrayW<uint8_t> GetBytes(::StringW s) ;

/// @brief Method GetBytes addr 0x22e02e8 size 0xb0 virtual true final false
 int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22e0398 size 0x10 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, System::Text::EncoderNLS encoder) ;

/// @brief Method GetBytes addr 0x22e03a8 size 0x22c virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount) ;

/// @brief Method GetCharCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x22e05d4 size 0x178 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count) ;

/// @brief Method GetCharCount addr 0x22e074c size 0x10 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, System::Text::DecoderNLS decoder) ;

/// @brief Method GetChars addr 0x22e075c size 0xbc virtual true final false
 ::ArrayW<char16_t> GetChars(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetChars addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x22e0818 size 0x22c virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount) ;

/// @brief Method GetChars addr 0x22e0a44 size 0x10 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, System::Text::DecoderNLS decoder) ;

/// @brief Method GetString addr 0x22e0a54 size 0xec virtual false final false
 ::StringW GetString(void* bytes, int32_t byteCount) ;

/// @brief Method GetChars addr 0x22e0b40 size 0xa4 virtual true final false
 int32_t GetChars(System::ReadOnlySpan_1<uint8_t> bytes, System::Span_1<char16_t> chars) ;

/// @brief Method GetString addr 0x22e0be4 size 0x64 virtual false final false
 ::StringW GetString(System::ReadOnlySpan_1<uint8_t> bytes) ;

/// @brief Method get_CodePage addr 0x22e0c48 size 0x8 virtual true final false
 int32_t get_CodePage() ;

/// @brief Method GetDecoder addr 0x22e0c50 size 0x6c virtual true final false
 System::Text::Decoder GetDecoder() ;

/// @brief Method CreateDefaultEncoding addr 0x22e0cec size 0x60 virtual false final false
static System::Text::Encoding CreateDefaultEncoding() ;

/// @brief Method setReadOnly addr 0x22e0ec8 size 0xc virtual false final false
 void setReadOnly(bool value) ;

/// @brief Method get_Default addr 0x22ded18 size 0x7c virtual false final false
static System::Text::Encoding get_Default() ;

/// @brief Method GetEncoder addr 0x22e0ed4 size 0x6c virtual true final false
 System::Text::Encoder GetEncoder() ;

/// @brief Method GetMaxByteCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetMaxByteCount(int32_t charCount) ;

/// @brief Method GetMaxCharCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetMaxCharCount(int32_t byteCount) ;

/// @brief Method GetString addr 0x22e0f70 size 0x94 virtual true final false
 ::StringW GetString(::ArrayW<uint8_t> bytes) ;

/// @brief Method GetString addr 0x22e1004 size 0x28 virtual true final false
 ::StringW GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method get_Unicode addr 0x22ded94 size 0xb0 virtual false final false
static System::Text::Encoding get_Unicode() ;

/// @brief Method get_BigEndianUnicode addr 0x22dee44 size 0xb0 virtual false final false
static System::Text::Encoding get_BigEndianUnicode() ;

/// @brief Method get_UTF7 addr 0x22deef4 size 0xa8 virtual false final false
static System::Text::Encoding get_UTF7() ;

/// @brief Method get_UTF8 addr 0x22dda4c size 0xac virtual false final false
static System::Text::Encoding get_UTF8() ;

/// @brief Method get_UTF32 addr 0x22def9c size 0xb0 virtual false final false
static System::Text::Encoding get_UTF32() ;

/// @brief Method Equals addr 0x22e102c size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x22e10fc size 0x58 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetBestFitUnicodeToBytesData addr 0x22e1154 size 0x58 virtual true final false
 ::ArrayW<char16_t> GetBestFitUnicodeToBytesData() ;

/// @brief Method GetBestFitBytesToUnicodeData addr 0x22e11ac size 0x58 virtual true final false
 ::ArrayW<char16_t> GetBestFitBytesToUnicodeData() ;

/// @brief Method ThrowBytesOverflow addr 0x22e1204 size 0x108 virtual false final false
 void ThrowBytesOverflow() ;

/// @brief Method ThrowBytesOverflow addr 0x22e130c size 0x7c virtual false final false
 void ThrowBytesOverflow(System::Text::EncoderNLS encoder, bool nothingEncoded) ;

/// @brief Method ThrowCharsOverflow addr 0x22e1388 size 0x108 virtual false final false
 void ThrowCharsOverflow() ;

/// @brief Method ThrowCharsOverflow addr 0x22e1490 size 0x7c virtual false final false
 void ThrowCharsOverflow(System::Text::DecoderNLS decoder, bool nothingDecoded) ;

/// @brief Method GetBytes addr 0x22e150c size 0xa4 virtual true final false
 int32_t GetBytes(System::ReadOnlySpan_1<char16_t> chars, System::Span_1<uint8_t> bytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::Encoding);
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding, "System.Text", "Encoding");
NEED_NO_BOX(System::Text::System__Text__Encoding__DefaultDecoder);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__Encoding__DefaultDecoder, "System.Text", "Encoding/DefaultDecoder");
NEED_NO_BOX(System::Text::System__Text__Encoding__DefaultEncoder);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__Encoding__DefaultEncoder, "System.Text", "Encoding/DefaultEncoder");
NEED_NO_BOX(System::Text::System__Text__Encoding__EncodingByteBuffer);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__Encoding__EncodingByteBuffer, "System.Text", "Encoding/EncodingByteBuffer");
NEED_NO_BOX(System::Text::System__Text__Encoding__EncodingCharBuffer);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__Encoding__EncodingCharBuffer, "System.Text", "Encoding/EncodingCharBuffer");
