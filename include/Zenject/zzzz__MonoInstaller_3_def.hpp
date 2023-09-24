#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TDerived>
class MonoInstaller_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TDerived>
class MonoInstaller_3<TParam1,TParam2,TDerived>;
}
// Type: Zenject::MonoInstaller`3
// Type: Zenject::MonoInstaller`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11088)), TypeDefinitionIndex(TypeDefinitionIndex(11083))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11083), inst: 5155 })
// CS Name: Zenject.MonoInstaller`3
class CORDL_TYPE MonoInstaller_3<TParam1,TParam2,TDerived> : public Zenject::MonoInstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoInstaller_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_3", modifiers: " const&", def_value: None }]
constexpr MonoInstaller_3(MonoInstaller_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_3", modifiers: "&&", def_value: None }]
constexpr MonoInstaller_3(MonoInstaller_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoInstaller_3(void* ptr) noexcept : Zenject::MonoInstallerBase(ptr) {
}


  constexpr MonoInstaller_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoInstaller_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoInstaller_3& operator=(MonoInstaller_3&& o) noexcept = default;
  constexpr MonoInstaller_3& operator=(MonoInstaller_3 const& o) noexcept = default;
                


// Methods

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(Zenject::DiContainer container, TParam1 p1, TParam2 p2) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::StringW resourcePath, Zenject::DiContainer container, TParam1 p1, TParam2 p2) ;

static Zenject::MonoInstaller_3<TParam1,TParam2,TDerived> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_3, "Zenject", "MonoInstaller`3");
