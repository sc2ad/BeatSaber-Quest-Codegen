#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
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
class MonoInstaller_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TDerived>
class MonoInstaller_1<TDerived>;
}
// Type: Zenject::MonoInstaller`1
// Type: Zenject::MonoInstaller`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TDerived>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080)), TypeDefinitionIndex(TypeDefinitionIndex(11081))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11081), inst: 2 })
// CS Name: Zenject.MonoInstaller`1
class CORDL_TYPE MonoInstaller_1<TDerived> : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoInstaller_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_1", modifiers: " const&", def_value: None }]
constexpr MonoInstaller_1(MonoInstaller_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstaller_1", modifiers: "&&", def_value: None }]
constexpr MonoInstaller_1(MonoInstaller_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoInstaller_1(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr MonoInstaller_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoInstaller_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoInstaller_1& operator=(MonoInstaller_1&& o) noexcept = default;
  constexpr MonoInstaller_1& operator=(MonoInstaller_1 const& o) noexcept = default;
                


// Methods

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(Zenject::DiContainer container) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::StringW resourcePath, Zenject::DiContainer container) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(Zenject::DiContainer container, ::ArrayW<::bs_hook::Il2CppWrapperType> extraArgs) ;

/// @brief Method InstallFromResource addr 0x0 size 0xffffffffffffffff virtual false final false
static TDerived InstallFromResource(::StringW resourcePath, Zenject::DiContainer container, ::ArrayW<::bs_hook::Il2CppWrapperType> extraArgs) ;

// Ctor Parameters []
explicit MonoInstaller_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_1, "Zenject", "MonoInstaller`1");
