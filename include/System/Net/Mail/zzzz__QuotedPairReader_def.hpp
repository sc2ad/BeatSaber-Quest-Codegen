#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net::Mail {
class QuotedPairReader;
}
// Type: System.Net.Mail::QuotedPairReader
namespace System::Net::Mail {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8230))
// CS Name: System.Net.Mail.QuotedPairReader
class CORDL_TYPE QuotedPairReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~QuotedPairReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuotedPairReader", modifiers: " const&", def_value: None }]
constexpr QuotedPairReader(QuotedPairReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuotedPairReader", modifiers: "&&", def_value: None }]
constexpr QuotedPairReader(QuotedPairReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuotedPairReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr QuotedPairReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuotedPairReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuotedPairReader& operator=(QuotedPairReader&& o) noexcept = default;
  constexpr QuotedPairReader& operator=(QuotedPairReader const& o) noexcept = default;
                


// Methods

/// @brief Method CountQuotedChars addr 0x276f23c size 0x194 virtual false final false
static int32_t CountQuotedChars(::StringW data, int32_t index, bool permitUnicodeEscaping) ;

/// @brief Method CountBackslashes addr 0x27707a4 size 0xa4 virtual false final false
static int32_t CountBackslashes(::StringW data, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mail
NEED_NO_BOX(System::Net::Mail::QuotedPairReader);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Mail::QuotedPairReader, "System.Net.Mail", "QuotedPairReader");
