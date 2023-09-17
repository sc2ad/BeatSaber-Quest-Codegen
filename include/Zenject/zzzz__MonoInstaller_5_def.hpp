#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TDerived>
class MonoInstaller_5;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TDerived>
class MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>;
}
// Type: Zenject::MonoInstaller`5
// Type: Zenject::MonoInstaller`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11088)), TypeDefinitionIndex(TypeDefinitionIndex(11085))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11085), inst: 5938 })
// CS Name: Zenject.MonoInstaller`5
class CORDL_TYPE MonoInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived> : public ::Zenject::MonoInstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoInstaller_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_5", modifiers: " const&", def_value: None }]
constexpr MonoInstaller_5(MonoInstaller_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_5", modifiers: "&&", def_value: None }]
constexpr MonoInstaller_5(MonoInstaller_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoInstaller_5(void* ptr) noexcept : ::Zenject::MonoInstallerBase(ptr) {
}


  constexpr MonoInstaller_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoInstaller_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoInstaller_5& operator=(MonoInstaller_5&& o) noexcept = default;
  constexpr MonoInstaller_5& operator=(MonoInstaller_5 const& o) noexcept = default;
                


// Methods

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::Zenject::DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) ;

// Ctor Parameters []
explicit MonoInstaller_5() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoInstaller_5, "Zenject", "MonoInstaller`5");
