#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class Ucs4Decoder;
}
// Type: System.Xml::Ucs4Decoder
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2823))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11504))
// CS Name: System.Xml.Ucs4Decoder
class CORDL_TYPE Ucs4Decoder : public System::Text::Decoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Ucs4Decoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder", modifiers: " const&", def_value: None }]
constexpr Ucs4Decoder(Ucs4Decoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder", modifiers: "&&", def_value: None }]
constexpr Ucs4Decoder(Ucs4Decoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ucs4Decoder(void* ptr) noexcept : System::Text::Decoder(ptr) {
}


  constexpr Ucs4Decoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ucs4Decoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ucs4Decoder& operator=(Ucs4Decoder&& o) noexcept = default;
  constexpr Ucs4Decoder& operator=(Ucs4Decoder const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_lastBytes, put=__set_lastBytes))  lastBytes;

constexpr void __set_lastBytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_lastBytes() const;

 int32_t __declspec(property(get=__get_lastBytesCount, put=__set_lastBytesCount))  lastBytesCount;

constexpr void __set_lastBytesCount(int32_t value) ;

constexpr int32_t __get_lastBytesCount() const;


// Methods

/// @brief Method GetCharCount addr 0x2712940 size 0x1c virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetFullChars addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetFullChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x271295c size 0x178 virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method Convert addr 0x2712ad4 size 0x1f4 virtual true final false
 void Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush, ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed) ;

/// @brief Method Ucs4ToUTF16 addr 0x2712cc8 size 0x58 virtual false final false
 void Ucs4ToUTF16(uint32_t code, ::ArrayW<char16_t> chars, int32_t charIndex) ;

static System::Xml::Ucs4Decoder New_ctor() ;

/// @brief Method .ctor addr 0x2712d20 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::Ucs4Decoder);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Ucs4Decoder, "System.Xml", "Ucs4Decoder");
