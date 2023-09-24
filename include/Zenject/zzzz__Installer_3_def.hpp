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
template<typename TParam1,typename TParam2,typename TDerived>
class Installer_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TDerived>
class Installer_3<TParam1,TParam2,TDerived>;
}
// Type: Zenject::Installer`3
// Type: Zenject::Installer`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11075)), TypeDefinitionIndex(TypeDefinitionIndex(11079))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11075), inst: 5155 })
// CS Name: Zenject.Installer`3
class CORDL_TYPE Installer_3<TParam1,TParam2,TDerived> : public Zenject::InstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Installer_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer_3", modifiers: " const&", def_value: None }]
constexpr Installer_3(Installer_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Installer_3", modifiers: "&&", def_value: None }]
constexpr Installer_3(Installer_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Installer_3(void* ptr) noexcept : Zenject::InstallerBase(ptr) {
}


  constexpr Installer_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Installer_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Installer_3& operator=(Installer_3&& o) noexcept = default;
  constexpr Installer_3& operator=(Installer_3 const& o) noexcept = default;
                


// Methods

/// @brief Method Install addr 0x0 size 0xffffffffffffffff virtual false final false
static void Install(Zenject::DiContainer container, TParam1 p1, TParam2 p2) ;

static Zenject::Installer_3<TParam1,TParam2,TDerived> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Installer_3, "Zenject", "Installer`3");
