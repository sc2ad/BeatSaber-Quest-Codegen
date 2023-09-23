#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class TabBarViewController;
}
namespace GlobalNamespace {
class MainSettingsMenuViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsMenuViewControllersInstaller;
}
// Type: ::MainSettingsMenuViewControllersInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5482))
// CS Name: MainSettingsMenuViewControllersInstaller
class CORDL_TYPE MainSettingsMenuViewControllersInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MainSettingsMenuViewControllersInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewControllersInstaller", modifiers: " const&", def_value: None }]
constexpr MainSettingsMenuViewControllersInstaller(MainSettingsMenuViewControllersInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewControllersInstaller", modifiers: "&&", def_value: None }]
constexpr MainSettingsMenuViewControllersInstaller(MainSettingsMenuViewControllersInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainSettingsMenuViewControllersInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr MainSettingsMenuViewControllersInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainSettingsMenuViewControllersInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainSettingsMenuViewControllersInstaller& operator=(MainSettingsMenuViewControllersInstaller&& o) noexcept = default;
  constexpr MainSettingsMenuViewControllersInstaller& operator=(MainSettingsMenuViewControllersInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainSettingsMenuViewController __declspec(property(get=__get__defaultSettingsMenuViewController, put=__set__defaultSettingsMenuViewController))  _defaultSettingsMenuViewController;

constexpr void __set__defaultSettingsMenuViewController(GlobalNamespace::MainSettingsMenuViewController value) ;

constexpr GlobalNamespace::MainSettingsMenuViewController __get__defaultSettingsMenuViewController() const;

 GlobalNamespace::MainSettingsMenuViewController __declspec(property(get=__get__oculusPCSettingsMenuViewController, put=__set__oculusPCSettingsMenuViewController))  _oculusPCSettingsMenuViewController;

constexpr void __set__oculusPCSettingsMenuViewController(GlobalNamespace::MainSettingsMenuViewController value) ;

constexpr GlobalNamespace::MainSettingsMenuViewController __get__oculusPCSettingsMenuViewController() const;

 GlobalNamespace::MainSettingsMenuViewController __declspec(property(get=__get__questSettingsMenuViewController, put=__set__questSettingsMenuViewController))  _questSettingsMenuViewController;

constexpr void __set__questSettingsMenuViewController(GlobalNamespace::MainSettingsMenuViewController value) ;

constexpr GlobalNamespace::MainSettingsMenuViewController __get__questSettingsMenuViewController() const;

 GlobalNamespace::MainSettingsMenuViewController __declspec(property(get=__get__psvrSettingsMenuViewController, put=__set__psvrSettingsMenuViewController))  _psvrSettingsMenuViewController;

constexpr void __set__psvrSettingsMenuViewController(GlobalNamespace::MainSettingsMenuViewController value) ;

constexpr GlobalNamespace::MainSettingsMenuViewController __get__psvrSettingsMenuViewController() const;

 GlobalNamespace::MainSettingsMenuViewController __declspec(property(get=__get__psvr2SettingsMenuViewController, put=__set__psvr2SettingsMenuViewController))  _psvr2SettingsMenuViewController;

constexpr void __set__psvr2SettingsMenuViewController(GlobalNamespace::MainSettingsMenuViewController value) ;

constexpr GlobalNamespace::MainSettingsMenuViewController __get__psvr2SettingsMenuViewController() const;

 GlobalNamespace::TabBarViewController __declspec(property(get=__get__tabBarViewControllerPrefab, put=__set__tabBarViewControllerPrefab))  _tabBarViewControllerPrefab;

constexpr void __set__tabBarViewControllerPrefab(GlobalNamespace::TabBarViewController value) ;

constexpr GlobalNamespace::TabBarViewController __get__tabBarViewControllerPrefab() const;


// Methods

/// @brief Method InstallBindings addr 0x211a06c size 0xb4 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MainSettingsMenuViewControllersInstaller() ;

/// @brief Method .ctor addr 0x211a120 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MainSettingsMenuViewControllersInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsMenuViewControllersInstaller, "", "MainSettingsMenuViewControllersInstaller");
