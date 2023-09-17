#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayersViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace HMUI {
class ToggleBinder;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class LocalNetworkPlayerModel;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalNetworkPlayersViewController;
}
// Type: ::LocalNetworkPlayersViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5820))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5784))
// CS Name: LocalNetworkPlayersViewController
class CORDL_TYPE LocalNetworkPlayersViewController : public ::GlobalNamespace::NetworkPlayersViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~LocalNetworkPlayersViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalNetworkPlayersViewController", modifiers: " const&", def_value: None }]
constexpr LocalNetworkPlayersViewController(LocalNetworkPlayersViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalNetworkPlayersViewController", modifiers: "&&", def_value: None }]
constexpr LocalNetworkPlayersViewController(LocalNetworkPlayersViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalNetworkPlayersViewController(void* ptr) noexcept : ::GlobalNamespace::NetworkPlayersViewController(ptr) {
}


  constexpr LocalNetworkPlayersViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalNetworkPlayersViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalNetworkPlayersViewController& operator=(LocalNetworkPlayersViewController&& o) noexcept = default;
  constexpr LocalNetworkPlayersViewController& operator=(LocalNetworkPlayersViewController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__enableNetworkingToggle, put=__set__enableNetworkingToggle))  _enableNetworkingToggle;

constexpr void __set__enableNetworkingToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__enableNetworkingToggle() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__enableOpenPartyToggle, put=__set__enableOpenPartyToggle))  _enableOpenPartyToggle;

constexpr void __set__enableOpenPartyToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__enableOpenPartyToggle() const;

 ::GlobalNamespace::LocalNetworkPlayerModel __declspec(property(get=__get__localNetworkPlayerModel, put=__set__localNetworkPlayerModel))  _localNetworkPlayerModel;

constexpr void __set__localNetworkPlayerModel(::GlobalNamespace::LocalNetworkPlayerModel value) ;

constexpr ::GlobalNamespace::LocalNetworkPlayerModel __get__localNetworkPlayerModel() const;

 ::GlobalNamespace::INetworkConfig __declspec(property(get=__get__networkConfig, put=__set__networkConfig))  _networkConfig;

constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig value) ;

constexpr ::GlobalNamespace::INetworkConfig __get__networkConfig() const;

 ::HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(::HMUI::ToggleBinder value) ;

constexpr ::HMUI::ToggleBinder __get__toggleBinder() const;

 bool __declspec(property(get=__get__enableBroadcasting, put=__set__enableBroadcasting))  _enableBroadcasting;

constexpr void __set__enableBroadcasting(bool value) ;

constexpr bool __get__enableBroadcasting() const;

 bool __declspec(property(get=__get__allowAnyoneToJoin, put=__set__allowAnyoneToJoin))  _allowAnyoneToJoin;

constexpr void __set__allowAnyoneToJoin(bool value) ;

constexpr bool __get__allowAnyoneToJoin() const;


// Properties

 ::StringW __declspec(property(get=get_myPartyTitle))  myPartyTitle;

 ::StringW __declspec(property(get=get_otherPlayersTitle))  otherPlayersTitle;

 ::GlobalNamespace::INetworkPlayerModel __declspec(property(get=get_networkPlayerModel))  networkPlayerModel;


// Methods

/// @brief Method get_myPartyTitle addr 0x21719b4 size 0x40 virtual true final false
 ::StringW get_myPartyTitle() ;

/// @brief Method get_otherPlayersTitle addr 0x21719f4 size 0x40 virtual true final false
 ::StringW get_otherPlayersTitle() ;

/// @brief Method get_networkPlayerModel addr 0x2171a34 size 0x8 virtual true final false
 ::GlobalNamespace::INetworkPlayerModel get_networkPlayerModel() ;

/// @brief Method NetworkPlayersViewControllerDidActivate addr 0x2171a3c size 0x150 virtual true final false
 void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy) ;

/// @brief Method DidDeactivate addr 0x2171d34 size 0x10 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x2171d44 size 0x28 virtual true final false
 void OnDestroy() ;

/// @brief Method HandleNetworkingToggleChanged addr 0x2171d74 size 0x10 virtual false final false
 void HandleNetworkingToggleChanged(bool enabled) ;

/// @brief Method HandleOpenPartyToggleChanged addr 0x2171d84 size 0x10 virtual false final false
 void HandleOpenPartyToggleChanged(bool openParty) ;

/// @brief Method RefreshParty addr 0x2171b8c size 0x1a8 virtual false final false
 void RefreshParty(bool overrideHide) ;

// Ctor Parameters []
explicit LocalNetworkPlayersViewController() ;

/// @brief Method .ctor addr 0x2171d94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LocalNetworkPlayersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalNetworkPlayersViewController, "", "LocalNetworkPlayersViewController");
