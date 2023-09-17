#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System {
class PasteArguments;
}
// Type: System::PasteArguments
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7715))
// CS Name: System.PasteArguments
class CORDL_TYPE PasteArguments : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PasteArguments() = default;

// Ctor Parameters [CppParam { name: "", ty: "PasteArguments", modifiers: " const&", def_value: None }]
constexpr PasteArguments(PasteArguments const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PasteArguments", modifiers: "&&", def_value: None }]
constexpr PasteArguments(PasteArguments&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PasteArguments(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PasteArguments& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PasteArguments& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PasteArguments& operator=(PasteArguments&& o) noexcept = default;
  constexpr PasteArguments& operator=(PasteArguments const& o) noexcept = default;
                


// Methods

/// @brief Method AppendArgument addr 0x27b4d08 size 0x1dc virtual false final false
static void AppendArgument(::System::Text::StringBuilder stringBuilder, ::StringW argument) ;

/// @brief Method ContainsNoWhitespaceOrQuotes addr 0x27b4ee4 size 0xc0 virtual false final false
static bool ContainsNoWhitespaceOrQuotes(::StringW s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::PasteArguments);
DEFINE_IL2CPP_ARG_TYPE(::System::PasteArguments, "System", "PasteArguments");
