#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScriptableObjectInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
template<typename TParam1,typename TParam2,typename TParam3,typename TDerived>
class ScriptableObjectInstaller_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TDerived>
class ScriptableObjectInstaller_4<TParam1,TParam2,TParam3,TDerived>;
}
// Type: Zenject::ScriptableObjectInstaller`4
// Type: Zenject::ScriptableObjectInstaller`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11096)), TypeDefinitionIndex(TypeDefinitionIndex(11093))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11093), inst: 5937 })
// CS Name: Zenject.ScriptableObjectInstaller`4
class CORDL_TYPE ScriptableObjectInstaller_4<TParam1,TParam2,TParam3,TDerived> : public ::Zenject::ScriptableObjectInstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScriptableObjectInstaller_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_4", modifiers: " const&", def_value: None }]
constexpr ScriptableObjectInstaller_4(ScriptableObjectInstaller_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_4", modifiers: "&&", def_value: None }]
constexpr ScriptableObjectInstaller_4(ScriptableObjectInstaller_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableObjectInstaller_4(void* ptr) noexcept : ::Zenject::ScriptableObjectInstallerBase(ptr) {
}


  constexpr ScriptableObjectInstaller_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableObjectInstaller_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableObjectInstaller_4& operator=(ScriptableObjectInstaller_4&& o) noexcept = default;
  constexpr ScriptableObjectInstaller_4& operator=(ScriptableObjectInstaller_4 const& o) noexcept = default;
                


// Methods

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::Zenject::DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::StringW resourcePath, ::Zenject::DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3) ;

// Ctor Parameters []
explicit ScriptableObjectInstaller_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ScriptableObjectInstaller_4, "Zenject", "ScriptableObjectInstaller`4");
