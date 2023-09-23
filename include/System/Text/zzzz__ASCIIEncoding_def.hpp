#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class Decoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Encoder;
}
// Forward declare root types
namespace System::Text {
class ASCIIEncoding;
}
namespace System::Text {
class System__Text__ASCIIEncoding__ASCIIEncodingSealed;
}
// Type: System.Text::ASCIIEncoding
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2870))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2822))
// CS Name: System.Text.ASCIIEncoding
class CORDL_TYPE ASCIIEncoding : public System::Text::Encoding {
public:
// Declarations
using ASCIIEncodingSealed = System::Text::System__Text__ASCIIEncoding__ASCIIEncodingSealed;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ASCIIEncoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: " const&", def_value: None }]
constexpr ASCIIEncoding(ASCIIEncoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: "&&", def_value: None }]
constexpr ASCIIEncoding(ASCIIEncoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ASCIIEncoding(void* ptr) noexcept : System::Text::Encoding(ptr) {
}


  constexpr ASCIIEncoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ASCIIEncoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ASCIIEncoding& operator=(ASCIIEncoding&& o) noexcept = default;
  constexpr ASCIIEncoding& operator=(ASCIIEncoding const& o) noexcept = default;
                


// Fields

static System::Text::System__Text__ASCIIEncoding__ASCIIEncodingSealed __declspec(property(get=__get_s_default, put=__set_s_default))  s_default;

static void __set_s_default(System::Text::System__Text__ASCIIEncoding__ASCIIEncodingSealed value) ;

static System::Text::System__Text__ASCIIEncoding__ASCIIEncodingSealed __get_s_default() ;


// Methods

// Ctor Parameters []
explicit ASCIIEncoding() ;

/// @brief Method .ctor addr 0x24bf960 size 0xc virtual false final false
 void _ctor() ;

/// @brief Method SetDefaultFallbacks addr 0x24bf96c size 0x20 virtual true final false
 void SetDefaultFallbacks() ;

/// @brief Method GetByteCount addr 0x24bfac4 size 0x184 virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x24bfc48 size 0x90 virtual true final false
 int32_t GetByteCount(::StringW chars) ;

/// @brief Method GetByteCount addr 0x24bfcd8 size 0xd8 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count) ;

/// @brief Method GetBytes addr 0x24bfdb0 size 0x260 virtual true final false
 int32_t GetBytes(::StringW chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x24c0010 size 0x27c virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x24c028c size 0x100 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount) ;

/// @brief Method GetCharCount addr 0x24c038c size 0x184 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x24c0510 size 0xd8 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count) ;

/// @brief Method GetChars addr 0x24c05e8 size 0x27c virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x24c0864 size 0x100 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount) ;

/// @brief Method GetString addr 0x24c0964 size 0x1c8 virtual true final false
 ::StringW GetString(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount) ;

/// @brief Method GetByteCount addr 0x24c0b2c size 0x2f8 virtual true final false
 int32_t GetByteCount(void* chars, int32_t charCount, System::Text::EncoderNLS encoder) ;

/// @brief Method GetBytes addr 0x24c0ec0 size 0x42c virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, System::Text::EncoderNLS encoder) ;

/// @brief Method GetCharCount addr 0x24c12ec size 0x150 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, System::Text::DecoderNLS decoder) ;

/// @brief Method GetChars addr 0x24c1480 size 0x288 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, System::Text::DecoderNLS decoder) ;

/// @brief Method GetMaxByteCount addr 0x24c1718 size 0x108 virtual true final false
 int32_t GetMaxByteCount(int32_t charCount) ;

/// @brief Method GetMaxCharCount addr 0x24c1820 size 0x104 virtual true final false
 int32_t GetMaxCharCount(int32_t byteCount) ;

/// @brief Method GetDecoder addr 0x24c1924 size 0x60 virtual true final false
 System::Text::Decoder GetDecoder() ;

/// @brief Method GetEncoder addr 0x24c19c8 size 0x60 virtual true final false
 System::Text::Encoder GetEncoder() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
// Type: ::ASCIIEncodingSealed
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2822))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2821))
// CS Name: System.Text.ASCIIEncoding::ASCIIEncodingSealed
class CORDL_TYPE System__Text__ASCIIEncoding__ASCIIEncodingSealed : public System::Text::ASCIIEncoding {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~System__Text__ASCIIEncoding__ASCIIEncodingSealed() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__ASCIIEncoding__ASCIIEncodingSealed", modifiers: " const&", def_value: None }]
constexpr System__Text__ASCIIEncoding__ASCIIEncodingSealed(System__Text__ASCIIEncoding__ASCIIEncodingSealed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Text__ASCIIEncoding__ASCIIEncodingSealed", modifiers: "&&", def_value: None }]
constexpr System__Text__ASCIIEncoding__ASCIIEncodingSealed(System__Text__ASCIIEncoding__ASCIIEncodingSealed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Text__ASCIIEncoding__ASCIIEncodingSealed(void* ptr) noexcept : System::Text::ASCIIEncoding(ptr) {
}


  constexpr System__Text__ASCIIEncoding__ASCIIEncodingSealed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Text__ASCIIEncoding__ASCIIEncodingSealed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Text__ASCIIEncoding__ASCIIEncodingSealed& operator=(System__Text__ASCIIEncoding__ASCIIEncodingSealed&& o) noexcept = default;
  constexpr System__Text__ASCIIEncoding__ASCIIEncodingSealed& operator=(System__Text__ASCIIEncoding__ASCIIEncodingSealed const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit System__Text__ASCIIEncoding__ASCIIEncodingSealed() ;

/// @brief Method .ctor addr 0x24c1ae0 size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::ASCIIEncoding);
DEFINE_IL2CPP_ARG_TYPE(System::Text::ASCIIEncoding, "System.Text", "ASCIIEncoding");
NEED_NO_BOX(System::Text::System__Text__ASCIIEncoding__ASCIIEncodingSealed);
DEFINE_IL2CPP_ARG_TYPE(System::Text::System__Text__ASCIIEncoding__ASCIIEncodingSealed, "System.Text", "ASCIIEncoding/ASCIIEncodingSealed");
