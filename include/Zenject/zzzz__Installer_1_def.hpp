#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__InstallerBase_def.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TDerived>
class Installer_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TDerived>
class Installer_1<TDerived>;
}
// Type: Zenject::Installer`1
// Type: Zenject::Installer`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11079)), TypeDefinitionIndex(TypeDefinitionIndex(11073))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11073), inst: 2 })
// CS Name: Zenject.Installer`1
class CORDL_TYPE Installer_1<TDerived> : public Zenject::InstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Installer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer_1", modifiers: " const&", def_value: None }]
constexpr Installer_1(Installer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer_1", modifiers: "&&", def_value: None }]
constexpr Installer_1(Installer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Installer_1(void* ptr) noexcept : Zenject::InstallerBase(ptr) {
}


  constexpr Installer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Installer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Installer_1& operator=(Installer_1&& o) noexcept = default;
  constexpr Installer_1& operator=(Installer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
static void Install(Zenject::DiContainer container) ;

static Zenject::Installer_1<TDerived> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Installer_1, "Zenject", "Installer`1");
