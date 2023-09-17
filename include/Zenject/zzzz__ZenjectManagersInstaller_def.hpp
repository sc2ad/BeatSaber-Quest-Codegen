#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ZenjectManagersInstaller;
}
// Type: Zenject::ZenjectManagersInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11073)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11073), inst: 3767 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11099))
// CS Name: Zenject.ZenjectManagersInstaller
class CORDL_TYPE ZenjectManagersInstaller : public ::Zenject::Installer_1<::Zenject::ZenjectManagersInstaller> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ZenjectManagersInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectManagersInstaller", modifiers: " const&", def_value: None }]
constexpr ZenjectManagersInstaller(ZenjectManagersInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectManagersInstaller", modifiers: "&&", def_value: None }]
constexpr ZenjectManagersInstaller(ZenjectManagersInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectManagersInstaller(void* ptr) noexcept : ::Zenject::Installer_1<::Zenject::ZenjectManagersInstaller>(ptr) {
}


  constexpr ZenjectManagersInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectManagersInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectManagersInstaller& operator=(ZenjectManagersInstaller&& o) noexcept = default;
  constexpr ZenjectManagersInstaller& operator=(ZenjectManagersInstaller const& o) noexcept = default;
                


// Methods

/// @brief Method InstallBindings addr 0x2d7c8f4 size 0x1bc virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit ZenjectManagersInstaller() ;

/// @brief Method .ctor addr 0x2d7cab0 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d7caf8 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7cb50 size 0x1c0 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ZenjectManagersInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectManagersInstaller, "Zenject", "ZenjectManagersInstaller");
