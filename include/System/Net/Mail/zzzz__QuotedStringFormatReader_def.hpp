#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net::Mail {
class QuotedStringFormatReader;
}
// Type: System.Net.Mail::QuotedStringFormatReader
namespace System::Net::Mail {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8231))
// CS Name: System.Net.Mail.QuotedStringFormatReader
class CORDL_TYPE QuotedStringFormatReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~QuotedStringFormatReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuotedStringFormatReader", modifiers: " const&", def_value: None }]
constexpr QuotedStringFormatReader(QuotedStringFormatReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuotedStringFormatReader", modifiers: "&&", def_value: None }]
constexpr QuotedStringFormatReader(QuotedStringFormatReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuotedStringFormatReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QuotedStringFormatReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuotedStringFormatReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuotedStringFormatReader& operator=(QuotedStringFormatReader&& o) noexcept = default;
  constexpr QuotedStringFormatReader& operator=(QuotedStringFormatReader const& o) noexcept = default;
                


// Methods

/// @brief Method ReadReverseQuoted addr 0x2770438 size 0x1cc virtual false final false
static int32_t ReadReverseQuoted(::StringW data, int32_t index, bool permitUnicode) ;

/// @brief Method ReadReverseUnQuoted addr 0x2770604 size 0x1a0 virtual false final false
static int32_t ReadReverseUnQuoted(::StringW data, int32_t index, bool permitUnicode, bool expectCommaDelimiter) ;

/// @brief Method IsValidQtext addr 0x2770848 size 0xb8 virtual false final false
static bool IsValidQtext(bool allowUnicode, char16_t ch) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mail
NEED_NO_BOX(System::Net::Mail::QuotedStringFormatReader);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mail::QuotedStringFormatReader, "System.Net.Mail", "QuotedStringFormatReader");
