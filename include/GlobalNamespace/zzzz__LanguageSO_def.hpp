#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "Polyglot/zzzz__Language_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class LanguageSO;
}
// Type: ::LanguageSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15530)), TypeDefinitionIndex(TypeDefinitionIndex(13904)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 3717 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5935))
// CS Name: LanguageSO
class CORDL_TYPE LanguageSO : public ::GlobalNamespace::ObservableVariableSO_1<::Polyglot::Language> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LanguageSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguageSO", modifiers: " const&", def_value: None }]
constexpr LanguageSO(LanguageSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguageSO", modifiers: "&&", def_value: None }]
constexpr LanguageSO(LanguageSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LanguageSO(void* ptr) noexcept : ::GlobalNamespace::ObservableVariableSO_1<::Polyglot::Language>(ptr) {
}


  constexpr LanguageSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LanguageSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LanguageSO& operator=(LanguageSO&& o) noexcept = default;
  constexpr LanguageSO& operator=(LanguageSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit LanguageSO() ;

/// @brief Method .ctor addr 0x2198674 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LanguageSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageSO, "", "LanguageSO");
