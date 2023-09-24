#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class IInstaller;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class InstallerBase;
}
// Type: Zenject::InstallerBase
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11079))
// CS Name: Zenject.InstallerBase
class CORDL_TYPE InstallerBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IInstaller
constexpr operator  Zenject::IInstaller() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InstallerBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstallerBase", modifiers: " const&", def_value: None }]
constexpr InstallerBase(InstallerBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstallerBase", modifiers: "&&", def_value: None }]
constexpr InstallerBase(InstallerBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstallerBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InstallerBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstallerBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstallerBase& operator=(InstallerBase&& o) noexcept = default;
  constexpr InstallerBase& operator=(InstallerBase const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;


// Properties

 Zenject::DiContainer __declspec(property(get=get_Container))  Container;

 bool __declspec(property(get=get_IsEnabled))  IsEnabled;


// Methods

/// @brief Method get_Container addr 0x2d7b68c size 0x8 virtual false final false
 Zenject::DiContainer get_Container() ;

/// @brief Method get_IsEnabled addr 0x2d7b694 size 0x8 virtual true final false
 bool get_IsEnabled() ;

/// @brief Method InstallBindings addr 0x0 size 0xffffffffffffffff virtual true final false
 void InstallBindings() ;

static Zenject::InstallerBase New_ctor() ;

/// @brief Method .ctor addr 0x2d7b50c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenFieldSetter0 addr 0x2d7b69c size 0x134 virtual false final false
static void __zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7b7d0 size 0x2b0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::InstallerBase);
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstallerBase, "Zenject", "InstallerBase");
