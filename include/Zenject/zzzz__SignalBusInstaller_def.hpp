#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SignalBusInstaller;
}
// Type: Zenject::SignalBusInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11073)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11073), inst: 3766 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10609))
// CS Name: Zenject.SignalBusInstaller
class CORDL_TYPE SignalBusInstaller : public Zenject::Installer_1<Zenject::SignalBusInstaller> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SignalBusInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalBusInstaller", modifiers: " const&", def_value: None }]
constexpr SignalBusInstaller(SignalBusInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalBusInstaller", modifiers: "&&", def_value: None }]
constexpr SignalBusInstaller(SignalBusInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalBusInstaller(void* ptr) noexcept : Zenject::Installer_1<Zenject::SignalBusInstaller>(ptr) {
}


  constexpr SignalBusInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalBusInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalBusInstaller& operator=(SignalBusInstaller&& o) noexcept = default;
  constexpr SignalBusInstaller& operator=(SignalBusInstaller const& o) noexcept = default;
                


// Methods

/// @brief Method InstallBindings addr 0x2d4c8ec size 0x180 virtual true final false
 void InstallBindings() ;

static Zenject::SignalBusInstaller New_ctor() ;

/// @brief Method .ctor addr 0x2d4ca88 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d4cad0 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d4cb28 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SignalBusInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalBusInstaller, "Zenject", "SignalBusInstaller");
