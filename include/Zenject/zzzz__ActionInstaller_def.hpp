#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__Installer_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ActionInstaller;
}
// Type: Zenject::ActionInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11073)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11073), inst: 3765 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11288))
// CS Name: Zenject.ActionInstaller
class CORDL_TYPE ActionInstaller : public Zenject::Installer_1<Zenject::ActionInstaller> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ActionInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "ActionInstaller", modifiers: " const&", def_value: None }]
constexpr ActionInstaller(ActionInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ActionInstaller", modifiers: "&&", def_value: None }]
constexpr ActionInstaller(ActionInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ActionInstaller(void* ptr) noexcept : Zenject::Installer_1<Zenject::ActionInstaller>(ptr) {
}


  constexpr ActionInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ActionInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ActionInstaller& operator=(ActionInstaller&& o) noexcept = default;
  constexpr ActionInstaller& operator=(ActionInstaller const& o) noexcept = default;
                


// Fields

 System::Action_1<Zenject::DiContainer> __declspec(property(get=__get__installMethod, put=__set__installMethod))  _installMethod;

constexpr void __set__installMethod(System::Action_1<Zenject::DiContainer> value) ;

constexpr System::Action_1<Zenject::DiContainer> __get__installMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "installMethod", ty: "System::Action_1<Zenject::DiContainer>", modifiers: "", def_value: None }]
explicit ActionInstaller(System::Action_1<Zenject::DiContainer> installMethod) ;

/// @brief Method .ctor addr 0x2d925c8 size 0x5c virtual false final false
 void _ctor(System::Action_1<Zenject::DiContainer> installMethod) ;

/// @brief Method InstallBindings addr 0x2da37d0 size 0x28 virtual true final false
 void InstallBindings() ;

/// @brief Method __zenCreate addr 0x2da37f8 size 0xb4 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2da38ac size 0x274 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ActionInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ActionInstaller, "Zenject", "ActionInstaller");
