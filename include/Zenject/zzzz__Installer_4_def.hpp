#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__InstallerBase_def.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TDerived>
class Installer_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TDerived>
class Installer_4<TParam1,TParam2,TParam3,TDerived>;
}
// Type: Zenject::Installer`4
// Type: Zenject::Installer`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11076)), TypeDefinitionIndex(TypeDefinitionIndex(11079))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11076), inst: 5937 })
// CS Name: Zenject.Installer`4
class CORDL_TYPE Installer_4<TParam1,TParam2,TParam3,TDerived> : public Zenject::InstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Installer_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer_4", modifiers: " const&", def_value: None }]
constexpr Installer_4(Installer_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer_4", modifiers: "&&", def_value: None }]
constexpr Installer_4(Installer_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Installer_4(void* ptr) noexcept : Zenject::InstallerBase(ptr) {
}


  constexpr Installer_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Installer_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Installer_4& operator=(Installer_4&& o) noexcept = default;
  constexpr Installer_4& operator=(Installer_4 const& o) noexcept = default;
                


// Methods

/// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
static void Install(Zenject::DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3) ;

static Zenject::Installer_4<TParam1,TParam2,TParam3,TDerived> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Installer_4, "Zenject", "Installer`4");
