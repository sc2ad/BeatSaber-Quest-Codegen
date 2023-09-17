#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Polyglot {
struct Language;
}
// Forward declare root types
namespace Polyglot {
class LanguageExtensions;
}
// Type: Polyglot::LanguageExtensions
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15531))
// CS Name: Polyglot.LanguageExtensions
class CORDL_TYPE LanguageExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LanguageExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguageExtensions", modifiers: " const&", def_value: None }]
constexpr LanguageExtensions(LanguageExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguageExtensions", modifiers: "&&", def_value: None }]
constexpr LanguageExtensions(LanguageExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LanguageExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LanguageExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LanguageExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LanguageExtensions& operator=(LanguageExtensions&& o) noexcept = default;
  constexpr LanguageExtensions& operator=(LanguageExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToSerializedName addr 0x2670810 size 0x1b0 virtual false final false
static ::StringW ToSerializedName(::Polyglot::Language lang) ;

/// @brief Method ToCultureInfoName addr 0x26709c0 size 0xe8 virtual false final false
static ::StringW ToCultureInfoName(::Polyglot::Language lang) ;

/// @brief Method ToLanguage addr 0x2670aa8 size 0x7e8 virtual false final false
static ::Polyglot::Language ToLanguage(::StringW serializedName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
} // end anonymous namespace
NEED_NO_BOX(::Polyglot::LanguageExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LanguageExtensions, "Polyglot", "LanguageExtensions");
