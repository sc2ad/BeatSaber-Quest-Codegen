#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TDerived>
class ScriptableObjectInstaller_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TDerived>
class ScriptableObjectInstaller_1<TDerived>;
}
// Type: Zenject::ScriptableObjectInstaller`1
// Type: Zenject::ScriptableObjectInstaller`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11089)), TypeDefinitionIndex(TypeDefinitionIndex(11090))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11090), inst: 2 })
// CS Name: Zenject.ScriptableObjectInstaller`1
class CORDL_TYPE ScriptableObjectInstaller_1<TDerived> : public Zenject::ScriptableObjectInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScriptableObjectInstaller_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_1", modifiers: " const&", def_value: None }]
constexpr ScriptableObjectInstaller_1(ScriptableObjectInstaller_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectInstaller_1", modifiers: "&&", def_value: None }]
constexpr ScriptableObjectInstaller_1(ScriptableObjectInstaller_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScriptableObjectInstaller_1(void* ptr) noexcept : Zenject::ScriptableObjectInstaller(ptr) {
}


  constexpr ScriptableObjectInstaller_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScriptableObjectInstaller_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScriptableObjectInstaller_1& operator=(ScriptableObjectInstaller_1&& o) noexcept = default;
  constexpr ScriptableObjectInstaller_1& operator=(ScriptableObjectInstaller_1 const& o) noexcept = default;
                


// Methods

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(Zenject::DiContainer container) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::StringW resourcePath, Zenject::DiContainer container) ;

static Zenject::ScriptableObjectInstaller_1<TDerived> New_ctor() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ScriptableObjectInstaller_1, "Zenject", "ScriptableObjectInstaller`1");
