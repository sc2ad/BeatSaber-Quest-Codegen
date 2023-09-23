#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayersViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace HMUI {
class ToggleBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendsViewController;
}
// Type: ::FriendsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5820))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5729))
// CS Name: FriendsViewController
class CORDL_TYPE FriendsViewController : public GlobalNamespace::NetworkPlayersViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~FriendsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FriendsViewController", modifiers: " const&", def_value: None }]
constexpr FriendsViewController(FriendsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FriendsViewController", modifiers: "&&", def_value: None }]
constexpr FriendsViewController(FriendsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FriendsViewController(void* ptr) noexcept : GlobalNamespace::NetworkPlayersViewController(ptr) {
}


  constexpr FriendsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FriendsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FriendsViewController& operator=(FriendsViewController&& o) noexcept = default;
  constexpr FriendsViewController& operator=(FriendsViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Toggle __declspec(property(get=__get__enableOpenPartyToggle, put=__set__enableOpenPartyToggle))  _enableOpenPartyToggle;

constexpr void __set__enableOpenPartyToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__enableOpenPartyToggle() const;

 GlobalNamespace::PlatformNetworkPlayerModel __declspec(property(get=__get__networkPlayerModel, put=__set__networkPlayerModel))  _networkPlayerModel;

constexpr void __set__networkPlayerModel(GlobalNamespace::PlatformNetworkPlayerModel value) ;

constexpr GlobalNamespace::PlatformNetworkPlayerModel __get__networkPlayerModel() const;

 GlobalNamespace::INetworkConfig __declspec(property(get=__get__networkConfig, put=__set__networkConfig))  _networkConfig;

constexpr void __set__networkConfig(GlobalNamespace::INetworkConfig value) ;

constexpr GlobalNamespace::INetworkConfig __get__networkConfig() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;

 bool __declspec(property(get=__get__allowAnyoneToJoin, put=__set__allowAnyoneToJoin))  _allowAnyoneToJoin;

constexpr void __set__allowAnyoneToJoin(bool value) ;

constexpr bool __get__allowAnyoneToJoin() const;


// Properties

 ::StringW __declspec(property(get=get_myPartyTitle))  myPartyTitle;

 ::StringW __declspec(property(get=get_otherPlayersTitle))  otherPlayersTitle;

 GlobalNamespace::INetworkPlayerModel __declspec(property(get=get_networkPlayerModel))  networkPlayerModel;


// Methods

/// @brief Method get_myPartyTitle addr 0x215b670 size 0x40 virtual true final false
 ::StringW get_myPartyTitle() ;

/// @brief Method get_otherPlayersTitle addr 0x215b6b0 size 0x40 virtual true final false
 ::StringW get_otherPlayersTitle() ;

/// @brief Method get_networkPlayerModel addr 0x215b6f0 size 0x8 virtual true final false
 GlobalNamespace::INetworkPlayerModel get_networkPlayerModel() ;

/// @brief Method NetworkPlayersViewControllerDidActivate addr 0x215b6f8 size 0x10c virtual true final false
 void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy) ;

/// @brief Method DidDeactivate addr 0x215b984 size 0x44 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x215b9c8 size 0x28 virtual true final false
 void OnDestroy() ;

/// @brief Method HandleOpenPartyToggleChanged addr 0x215b9f0 size 0x10 virtual false final false
 void HandleOpenPartyToggleChanged(bool openParty) ;

/// @brief Method RefreshParty addr 0x215b804 size 0x180 virtual false final false
 void RefreshParty(bool overrideHide) ;

// Ctor Parameters []
explicit FriendsViewController() ;

/// @brief Method .ctor addr 0x215ba00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FriendsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FriendsViewController, "", "FriendsViewController");
