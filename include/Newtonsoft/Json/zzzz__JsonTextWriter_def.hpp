#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
struct TimeSpan;
}
namespace System {
class Uri;
}
namespace System {
struct Guid;
}
namespace Newtonsoft::Json {
struct JsonToken;
}
namespace System {
struct DateTime;
}
namespace Newtonsoft::Json::Utilities {
class Base64Encoder;
}
namespace System {
struct Decimal;
}
namespace System::IO {
class TextWriter;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
namespace System {
struct DateTimeOffset;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonTextWriter;
}
// Type: Newtonsoft.Json::JsonTextWriter
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11785))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11769))
// CS Name: Newtonsoft.Json.JsonTextWriter
class CORDL_TYPE JsonTextWriter : public ::Newtonsoft::Json::JsonWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~JsonTextWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextWriter", modifiers: " const&", def_value: None }]
constexpr JsonTextWriter(JsonTextWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonTextWriter", modifiers: "&&", def_value: None }]
constexpr JsonTextWriter(JsonTextWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonTextWriter(void* ptr) noexcept : ::Newtonsoft::Json::JsonWriter(ptr) {
}


  constexpr JsonTextWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonTextWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonTextWriter& operator=(JsonTextWriter&& o) noexcept = default;
  constexpr JsonTextWriter& operator=(JsonTextWriter const& o) noexcept = default;
                


// Fields

 ::System::IO::TextWriter __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(::System::IO::TextWriter value) ;

constexpr ::System::IO::TextWriter __get__writer() const;

 ::Newtonsoft::Json::Utilities::Base64Encoder __declspec(property(get=__get__base64Encoder, put=__set__base64Encoder))  _base64Encoder;

constexpr void __set__base64Encoder(::Newtonsoft::Json::Utilities::Base64Encoder value) ;

constexpr ::Newtonsoft::Json::Utilities::Base64Encoder __get__base64Encoder() const;

 char16_t __declspec(property(get=__get__indentChar, put=__set__indentChar))  _indentChar;

constexpr void __set__indentChar(char16_t value) ;

constexpr char16_t __get__indentChar() const;

 int32_t __declspec(property(get=__get__indentation, put=__set__indentation))  _indentation;

constexpr void __set__indentation(int32_t value) ;

constexpr int32_t __get__indentation() const;

 char16_t __declspec(property(get=__get__quoteChar, put=__set__quoteChar))  _quoteChar;

constexpr void __set__quoteChar(char16_t value) ;

constexpr char16_t __get__quoteChar() const;

 bool __declspec(property(get=__get__quoteName, put=__set__quoteName))  _quoteName;

constexpr void __set__quoteName(bool value) ;

constexpr bool __get__quoteName() const;

 ::ArrayW<bool> __declspec(property(get=__get__charEscapeFlags, put=__set__charEscapeFlags))  _charEscapeFlags;

constexpr void __set__charEscapeFlags(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__charEscapeFlags() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__writeBuffer, put=__set__writeBuffer))  _writeBuffer;

constexpr void __set__writeBuffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__writeBuffer() const;

 ::Newtonsoft::Json::IArrayPool_1<char16_t> __declspec(property(get=__get__arrayPool, put=__set__arrayPool))  _arrayPool;

constexpr void __set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t> value) ;

constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t> __get__arrayPool() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__indentChars, put=__set__indentChars))  _indentChars;

constexpr void __set__indentChars(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__indentChars() const;


// Properties

 ::Newtonsoft::Json::Utilities::Base64Encoder __declspec(property(get=get_Base64Encoder))  Base64Encoder;

 ::Newtonsoft::Json::IArrayPool_1<char16_t> __declspec(property(get=get_ArrayPool, put=set_ArrayPool))  ArrayPool;

 int32_t __declspec(property(get=get_Indentation, put=set_Indentation))  Indentation;

 char16_t __declspec(property(get=get_QuoteChar, put=set_QuoteChar))  QuoteChar;

 char16_t __declspec(property(get=get_IndentChar, put=set_IndentChar))  IndentChar;

 bool __declspec(property(get=get_QuoteName, put=set_QuoteName))  QuoteName;


// Methods

/// @brief Method get_Base64Encoder addr 0x24d12a4 size 0x74 virtual false final false
 ::Newtonsoft::Json::Utilities::Base64Encoder get_Base64Encoder() ;

/// @brief Method get_ArrayPool addr 0x24d1318 size 0x8 virtual false final false
 ::Newtonsoft::Json::IArrayPool_1<char16_t> get_ArrayPool() ;

/// @brief Method set_ArrayPool addr 0x24d1320 size 0x60 virtual false final false
 void set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t> value) ;

/// @brief Method get_Indentation addr 0x24d1380 size 0x8 virtual false final false
 int32_t get_Indentation() ;

/// @brief Method set_Indentation addr 0x24d1388 size 0x60 virtual false final false
 void set_Indentation(int32_t value) ;

/// @brief Method get_QuoteChar addr 0x24d13e8 size 0x8 virtual false final false
 char16_t get_QuoteChar() ;

/// @brief Method set_QuoteChar addr 0x24d13f0 size 0x70 virtual false final false
 void set_QuoteChar(char16_t value) ;

/// @brief Method get_IndentChar addr 0x24d14cc size 0x8 virtual false final false
 char16_t get_IndentChar() ;

/// @brief Method set_IndentChar addr 0x24d14d4 size 0x18 virtual false final false
 void set_IndentChar(char16_t value) ;

/// @brief Method get_QuoteName addr 0x24d14ec size 0x8 virtual false final false
 bool get_QuoteName() ;

/// @brief Method set_QuoteName addr 0x24d14f4 size 0xc virtual false final false
 void set_QuoteName(bool value) ;

// Ctor Parameters [CppParam { name: "textWriter", ty: "::System::IO::TextWriter", modifiers: "", def_value: None }]
explicit JsonTextWriter(::System::IO::TextWriter textWriter) ;

/// @brief Method .ctor addr 0x24d1500 size 0xe0 virtual false final false
 void _ctor(::System::IO::TextWriter textWriter) ;

/// @brief Method Flush addr 0x24d15e0 size 0x20 virtual true final false
 void Flush() ;

/// @brief Method Close addr 0x24d1600 size 0x50 virtual true final false
 void Close() ;

/// @brief Method WriteStartObject addr 0x24d1650 size 0x3c virtual true final false
 void WriteStartObject() ;

/// @brief Method WriteStartArray addr 0x24d168c size 0x3c virtual true final false
 void WriteStartArray() ;

/// @brief Method WriteStartConstructor addr 0x24d16c8 size 0xac virtual true final false
 void WriteStartConstructor(::StringW name) ;

/// @brief Method WriteEnd addr 0x24d1774 size 0xd8 virtual true final false
 void WriteEnd(::Newtonsoft::Json::JsonToken token) ;

/// @brief Method WritePropertyName addr 0x24d1880 size 0x50 virtual true final false
 void WritePropertyName(::StringW name) ;

/// @brief Method WritePropertyName addr 0x24d19a4 size 0xc4 virtual true final false
 void WritePropertyName(::StringW name, bool escape) ;

/// @brief Method OnStringEscapeHandlingChanged addr 0x24d1a68 size 0x4 virtual true final false
 void OnStringEscapeHandlingChanged() ;

/// @brief Method UpdateCharEscapeFlags addr 0x24d1460 size 0x6c virtual false final false
 void UpdateCharEscapeFlags() ;

/// @brief Method WriteIndent addr 0x24d1a6c size 0x104 virtual true final false
 void WriteIndent() ;

/// @brief Method WriteValueDelimiter addr 0x24d1b70 size 0x28 virtual true final false
 void WriteValueDelimiter() ;

/// @brief Method WriteIndentSpace addr 0x24d1b98 size 0x28 virtual true final false
 void WriteIndentSpace() ;

/// @brief Method WriteValueInternal addr 0x24d1bc0 size 0x24 virtual false final false
 void WriteValueInternal(::StringW value, ::Newtonsoft::Json::JsonToken token) ;

/// @brief Method WriteValue addr 0x24d1be4 size 0x8 virtual true final false
 void WriteValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method WriteNull addr 0x24d1bec size 0x84 virtual true final false
 void WriteNull() ;

/// @brief Method WriteUndefined addr 0x24d1c70 size 0x84 virtual true final false
 void WriteUndefined() ;

/// @brief Method WriteRaw addr 0x24d1cf4 size 0x40 virtual true final false
 void WriteRaw(::StringW json) ;

/// @brief Method WriteValue addr 0x24d1d34 size 0xa4 virtual true final false
 void WriteValue(::StringW value) ;

/// @brief Method WriteEscapedString addr 0x24d18d0 size 0xd4 virtual false final false
 void WriteEscapedString(::StringW value, bool quote) ;

/// @brief Method WriteValue addr 0x24d1e04 size 0x30 virtual true final false
 void WriteValue(int32_t value) ;

/// @brief Method WriteValue addr 0x24d1eac size 0x30 virtual true final false
 void WriteValue(uint32_t value) ;

/// @brief Method WriteValue addr 0x24d1edc size 0x30 virtual true final false
 void WriteValue(int64_t value) ;

/// @brief Method WriteValue addr 0x24d1f0c size 0x30 virtual true final false
 void WriteValue(uint64_t value) ;

/// @brief Method WriteValue addr 0x24d2024 size 0xa8 virtual true final false
 void WriteValue(float_t value) ;

/// @brief Method WriteValue addr 0x24d21bc size 0xf0 virtual true final false
 void WriteValue(::System::Nullable_1<float_t> value) ;

/// @brief Method WriteValue addr 0x24d22ac size 0xa8 virtual true final false
 void WriteValue(double_t value) ;

/// @brief Method WriteValue addr 0x24d2440 size 0xfc virtual true final false
 void WriteValue(::System::Nullable_1<double_t> value) ;

/// @brief Method WriteValue addr 0x24d253c size 0x94 virtual true final false
 void WriteValue(bool value) ;

/// @brief Method WriteValue addr 0x24d263c size 0x30 virtual true final false
 void WriteValue(int16_t value) ;

/// @brief Method WriteValue addr 0x24d266c size 0x30 virtual true final false
 void WriteValue(uint16_t value) ;

/// @brief Method WriteValue addr 0x24d269c size 0x94 virtual true final false
 void WriteValue(char16_t value) ;

/// @brief Method WriteValue addr 0x24d27bc size 0x30 virtual true final false
 void WriteValue(uint8_t value) ;

/// @brief Method WriteValue addr 0x24d27ec size 0x30 virtual true final false
 void WriteValue(int8_t value) ;

/// @brief Method WriteValue addr 0x24d281c size 0x9c virtual true final false
 void WriteValue(::System::Decimal value) ;

/// @brief Method WriteValue addr 0x24d2980 size 0x1f0 virtual true final false
 void WriteValue(::System::DateTime value) ;

/// @brief Method WriteValue addr 0x24d2b70 size 0xb8 virtual true final false
 void WriteValue(::ArrayW<uint8_t> value) ;

/// @brief Method WriteValue addr 0x24d2c28 size 0x1fc virtual true final false
 void WriteValue(::System::DateTimeOffset value) ;

/// @brief Method WriteValue addr 0x24d2e24 size 0xfc virtual true final false
 void WriteValue(::System::Guid value) ;

/// @brief Method WriteValue addr 0x24d2f20 size 0x94 virtual true final false
 void WriteValue(::System::TimeSpan value) ;

/// @brief Method WriteValue addr 0x24d2fb4 size 0xc0 virtual true final false
 void WriteValue(::System::Uri value) ;

/// @brief Method WriteComment addr 0x24d3074 size 0xb8 virtual true final false
 void WriteComment(::StringW text) ;

/// @brief Method WriteWhitespace addr 0x24d312c size 0x40 virtual true final false
 void WriteWhitespace(::StringW ws) ;

/// @brief Method EnsureWriteBuffer addr 0x24d1dd8 size 0x2c virtual false final false
 void EnsureWriteBuffer() ;

/// @brief Method WriteIntegerValue addr 0x24d1e34 size 0x78 virtual false final false
 void WriteIntegerValue(int64_t value) ;

/// @brief Method WriteIntegerValue addr 0x24d1f3c size 0xe8 virtual false final false
 void WriteIntegerValue(uint64_t uvalue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::JsonTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextWriter, "Newtonsoft.Json", "JsonTextWriter");
