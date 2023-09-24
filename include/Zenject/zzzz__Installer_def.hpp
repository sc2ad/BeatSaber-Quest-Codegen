#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__InstallerBase_def.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class Installer;
}
// Type: Zenject::Installer
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11079))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11072))
// CS Name: Zenject.Installer
class CORDL_TYPE Installer : public Zenject::InstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Installer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer", modifiers: " const&", def_value: None }]
constexpr Installer(Installer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer", modifiers: "&&", def_value: None }]
constexpr Installer(Installer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Installer(void* ptr) noexcept : Zenject::InstallerBase(ptr) {
}


  constexpr Installer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Installer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Installer& operator=(Installer&& o) noexcept = default;
  constexpr Installer& operator=(Installer const& o) noexcept = default;
                


// Methods

static Zenject::Installer New_ctor() ;

/// @brief Method .ctor addr 0x2d7b504 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7b514 size 0x178 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::Installer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Installer, "Zenject", "Installer");
