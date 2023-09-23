#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Decoder;
}
// Forward declare root types
namespace System::Text {
class EncodingNLS;
}
// Type: System.Text::EncodingNLS
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2870))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2845))
// CS Name: System.Text.EncodingNLS
class CORDL_TYPE EncodingNLS : public System::Text::Encoding {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~EncodingNLS() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodingNLS", modifiers: " const&", def_value: None }]
constexpr EncodingNLS(EncodingNLS const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodingNLS", modifiers: "&&", def_value: None }]
constexpr EncodingNLS(EncodingNLS&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncodingNLS(void* ptr) noexcept : System::Text::Encoding(ptr) {
}


  constexpr EncodingNLS& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncodingNLS& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncodingNLS& operator=(EncodingNLS&& o) noexcept = default;
  constexpr EncodingNLS& operator=(EncodingNLS const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "codePage", ty: "int32_t", modifiers: "", def_value: None }]
explicit EncodingNLS(int32_t codePage) ;

/// @brief Method .ctor addr 0x22ca080 size 0x8 virtual false final false
 void _ctor(int32_t codePage) ;

/// @brief Method GetByteCount addr 0x22ca088 size 0x184 virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count) ;

/// @brief Method GetByteCount addr 0x22ca20c size 0x90 virtual true final false
 int32_t GetByteCount(::StringW s) ;

/// @brief Method GetByteCount addr 0x22ca29c size 0xd8 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count) ;

/// @brief Method GetBytes addr 0x22ca374 size 0x260 virtual true final false
 int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22ca5d4 size 0x27c virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex) ;

/// @brief Method GetBytes addr 0x22ca850 size 0x100 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount) ;

/// @brief Method GetCharCount addr 0x22ca950 size 0x184 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x22caad4 size 0xd8 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count) ;

/// @brief Method GetChars addr 0x22cabac size 0x27c virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x22cae28 size 0x100 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount) ;

/// @brief Method GetString addr 0x22caf28 size 0x1c8 virtual true final false
 ::StringW GetString(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetDecoder addr 0x22cb0f0 size 0x64 virtual true final false
 System::Text::Decoder GetDecoder() ;

/// @brief Method GetEncoder addr 0x22cb154 size 0x64 virtual true final false
 System::Text::Encoder GetEncoder() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncodingNLS);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncodingNLS, "System.Text", "EncodingNLS");
