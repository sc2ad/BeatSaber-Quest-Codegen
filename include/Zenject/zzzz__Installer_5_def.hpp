#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__InstallerBase_def.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TDerived>
class Installer_5;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TDerived>
class Installer_5<TParam1,TParam2,TParam3,TParam4,TDerived>;
}
// Type: Zenject::Installer`5
// Type: Zenject::Installer`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11077)), TypeDefinitionIndex(TypeDefinitionIndex(11079))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11077), inst: 5938 })
// CS Name: Zenject.Installer`5
class CORDL_TYPE Installer_5<TParam1,TParam2,TParam3,TParam4,TDerived> : public ::Zenject::InstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Installer_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer_5", modifiers: " const&", def_value: None }]
constexpr Installer_5(Installer_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer_5", modifiers: "&&", def_value: None }]
constexpr Installer_5(Installer_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Installer_5(void* ptr) noexcept : ::Zenject::InstallerBase(ptr) {
}


  constexpr Installer_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Installer_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Installer_5& operator=(Installer_5&& o) noexcept = default;
  constexpr Installer_5& operator=(Installer_5 const& o) noexcept = default;
                


// Methods

/// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
static void Install(::Zenject::DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) ;

// Ctor Parameters []
explicit Installer_5() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::Installer_5, "Zenject", "Installer`5");
