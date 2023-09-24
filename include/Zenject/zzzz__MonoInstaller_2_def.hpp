#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TDerived>
class MonoInstaller_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TDerived>
class MonoInstaller_2<TParam1,TDerived>;
}
// Type: Zenject::MonoInstaller`2
// Type: Zenject::MonoInstaller`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11088)), TypeDefinitionIndex(TypeDefinitionIndex(11082))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11082), inst: 80 })
// CS Name: Zenject.MonoInstaller`2
class CORDL_TYPE MonoInstaller_2<TParam1,TDerived> : public Zenject::MonoInstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoInstaller_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_2", modifiers: " const&", def_value: None }]
constexpr MonoInstaller_2(MonoInstaller_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_2", modifiers: "&&", def_value: None }]
constexpr MonoInstaller_2(MonoInstaller_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoInstaller_2(void* ptr) noexcept : Zenject::MonoInstallerBase(ptr) {
}


  constexpr MonoInstaller_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoInstaller_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoInstaller_2& operator=(MonoInstaller_2&& o) noexcept = default;
  constexpr MonoInstaller_2& operator=(MonoInstaller_2 const& o) noexcept = default;
                


// Methods

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(Zenject::DiContainer container, TParam1 p1) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::StringW resourcePath, Zenject::DiContainer container, TParam1 p1) ;

static Zenject::MonoInstaller_2<TParam1,TDerived> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_2, "Zenject", "MonoInstaller`2");
