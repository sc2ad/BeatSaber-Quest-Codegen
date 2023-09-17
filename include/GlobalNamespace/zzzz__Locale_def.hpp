#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class Locale;
}
// Type: ::Locale
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13947))
// CS Name: Locale
class CORDL_TYPE Locale : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Locale() = default;

// Ctor Parameters [CppParam { name: "", ty: "Locale", modifiers: " const&", def_value: None }]
constexpr Locale(Locale const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Locale", modifiers: "&&", def_value: None }]
constexpr Locale(Locale&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Locale(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Locale& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Locale& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Locale& operator=(Locale&& o) noexcept = default;
  constexpr Locale& operator=(Locale const& o) noexcept = default;
                


// Methods

/// @brief Method GetText addr 0x227f504 size 0x4 virtual false final false
static ::StringW GetText(::StringW msg) ;

/// @brief Method GetText addr 0x227f508 size 0x8 virtual false final false
static ::StringW GetText(::StringW fmt, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::Locale);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Locale, "", "Locale");
