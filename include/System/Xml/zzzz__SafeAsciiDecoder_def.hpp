#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class SafeAsciiDecoder;
}
// Type: System.Xml::SafeAsciiDecoder
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2823))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11498))
// CS Name: System.Xml.SafeAsciiDecoder
class CORDL_TYPE SafeAsciiDecoder : public ::System::Text::Decoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SafeAsciiDecoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeAsciiDecoder", modifiers: " const&", def_value: None }]
constexpr SafeAsciiDecoder(SafeAsciiDecoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeAsciiDecoder", modifiers: "&&", def_value: None }]
constexpr SafeAsciiDecoder(SafeAsciiDecoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeAsciiDecoder(void* ptr) noexcept : ::System::Text::Decoder(ptr) {
}


  constexpr SafeAsciiDecoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeAsciiDecoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeAsciiDecoder& operator=(SafeAsciiDecoder&& o) noexcept = default;
  constexpr SafeAsciiDecoder& operator=(SafeAsciiDecoder const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SafeAsciiDecoder() ;

/// @brief Method .ctor addr 0x2712154 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetCharCount addr 0x271215c size 0x8 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetChars addr 0x2712164 size 0x70 virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method Convert addr 0x27121d4 size 0x88 virtual true final false
 void Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush, ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::SafeAsciiDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::SafeAsciiDecoder, "System.Xml", "SafeAsciiDecoder");
