#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Xml {
class UTF16Decoder;
}
// Type: System.Xml::UTF16Decoder
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2823))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11497))
// CS Name: System.Xml.UTF16Decoder
class CORDL_TYPE UTF16Decoder : public ::System::Text::Decoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UTF16Decoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "UTF16Decoder", modifiers: " const&", def_value: None }]
constexpr UTF16Decoder(UTF16Decoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UTF16Decoder", modifiers: "&&", def_value: None }]
constexpr UTF16Decoder(UTF16Decoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UTF16Decoder(void* ptr) noexcept : ::System::Text::Decoder(ptr) {
}


  constexpr UTF16Decoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UTF16Decoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UTF16Decoder& operator=(UTF16Decoder&& o) noexcept = default;
  constexpr UTF16Decoder& operator=(UTF16Decoder const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_bigEndian, put=__set_bigEndian))  bigEndian;

constexpr void __set_bigEndian(bool value) ;

constexpr bool __get_bigEndian() const;

 int32_t __declspec(property(get=__get_lastByte, put=__set_lastByte))  lastByte;

constexpr void __set_lastByte(int32_t value) ;

constexpr int32_t __get_lastByte() const;


// Methods

// Ctor Parameters [CppParam { name: "bigEndian", ty: "bool", modifiers: "", def_value: None }]
explicit UTF16Decoder(bool bigEndian) ;

/// @brief Method .ctor addr 0x2711b58 size 0x30 virtual false final false
 void _ctor(bool bigEndian) ;

/// @brief Method GetCharCount addr 0x2711b88 size 0x10 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x2711b98 size 0xec virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count, bool flush) ;

/// @brief Method GetChars addr 0x2711c84 size 0x238 virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method Convert addr 0x2711ebc size 0x298 virtual true final false
 void Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush, ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::UTF16Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::UTF16Decoder, "System.Xml", "UTF16Decoder");
