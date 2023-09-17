#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class MenuDestination;
}
// Type: ::MenuDestination
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4184))
// CS Name: MenuDestination
class CORDL_TYPE MenuDestination : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MenuDestination() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuDestination", modifiers: " const&", def_value: None }]
constexpr MenuDestination(MenuDestination const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuDestination", modifiers: "&&", def_value: None }]
constexpr MenuDestination(MenuDestination&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuDestination(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MenuDestination& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuDestination& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuDestination& operator=(MenuDestination&& o) noexcept = default;
  constexpr MenuDestination& operator=(MenuDestination const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MenuDestination() ;

/// @brief Method .ctor addr 0x21bd468 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MenuDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuDestination, "", "MenuDestination");
