#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScriptableObjectInstallerBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TDerived>
class ScriptableObjectInstaller_5;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TDerived>
class ScriptableObjectInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived>;
}
// Type: Zenject::ScriptableObjectInstaller`5
// Type: Zenject::ScriptableObjectInstaller`5
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11094)), TypeDefinitionIndex(TypeDefinitionIndex(11096))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11094), inst: 5938 })
// CS Name: Zenject.ScriptableObjectInstaller`5
class CORDL_TYPE ScriptableObjectInstaller_5<TParam1,TParam2,TParam3,TParam4,TDerived> : public Zenject::ScriptableObjectInstallerBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScriptableObjectInstaller_5() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_5", modifiers: " const&", def_value: None }]
constexpr ScriptableObjectInstaller_5(ScriptableObjectInstaller_5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_5", modifiers: "&&", def_value: None }]
constexpr ScriptableObjectInstaller_5(ScriptableObjectInstaller_5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableObjectInstaller_5(void* ptr) noexcept : Zenject::ScriptableObjectInstallerBase(ptr) {
}


  constexpr ScriptableObjectInstaller_5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableObjectInstaller_5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableObjectInstaller_5& operator=(ScriptableObjectInstaller_5&& o) noexcept = default;
  constexpr ScriptableObjectInstaller_5& operator=(ScriptableObjectInstaller_5 const& o) noexcept = default;
                


// Methods

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(Zenject::DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::StringW resourcePath, Zenject::DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) ;

// Ctor Parameters []
explicit ScriptableObjectInstaller_5() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ScriptableObjectInstaller_5, "Zenject", "ScriptableObjectInstaller`5");
