#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Buffers::Text {
class FormattingHelpers;
}
// Type: System.Buffers.Text::FormattingHelpers
namespace System::Buffers::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3877))
// CS Name: System.Buffers.Text.FormattingHelpers
class CORDL_TYPE FormattingHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FormattingHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattingHelpers", modifiers: " const&", def_value: None }]
constexpr FormattingHelpers(FormattingHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattingHelpers", modifiers: "&&", def_value: None }]
constexpr FormattingHelpers(FormattingHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormattingHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FormattingHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormattingHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormattingHelpers& operator=(FormattingHelpers&& o) noexcept = default;
  constexpr FormattingHelpers& operator=(FormattingHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method CountDigits addr 0x241e914 size 0xbc virtual false final false
static int32_t CountDigits(uint64_t value) ;

/// @brief Method CountDigits addr 0x241e9d0 size 0x6c virtual false final false
static int32_t CountDigits(uint32_t value) ;

/// @brief Method CountHexDigits addr 0x241ea3c size 0x48 virtual false final false
static int32_t CountHexDigits(uint64_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers::Text
NEED_NO_BOX(System::Buffers::Text::FormattingHelpers);
DEFINE_IL2CPP_ARG_TYPE(System::Buffers::Text::FormattingHelpers, "System.Buffers.Text", "FormattingHelpers");
