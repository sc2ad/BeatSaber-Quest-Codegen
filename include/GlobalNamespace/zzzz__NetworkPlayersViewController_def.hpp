#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class NetworkPlayersTableView;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayersViewController;
}
// Type: ::NetworkPlayersViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5820))
// CS Name: NetworkPlayersViewController
class CORDL_TYPE NetworkPlayersViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~NetworkPlayersViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersViewController", modifiers: " const&", def_value: None }]
constexpr NetworkPlayersViewController(NetworkPlayersViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersViewController", modifiers: "&&", def_value: None }]
constexpr NetworkPlayersViewController(NetworkPlayersViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkPlayersViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr NetworkPlayersViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkPlayersViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkPlayersViewController& operator=(NetworkPlayersViewController&& o) noexcept = default;
  constexpr NetworkPlayersViewController& operator=(NetworkPlayersViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NetworkPlayersTableView __declspec(property(get=__get__networkPlayersTableView, put=__set__networkPlayersTableView))  _networkPlayersTableView;

constexpr void __set__networkPlayersTableView(::GlobalNamespace::NetworkPlayersTableView value) ;

constexpr ::GlobalNamespace::NetworkPlayersTableView __get__networkPlayersTableView() const;

 bool __declspec(property(get=__get__refreshIsNeeded, put=__set__refreshIsNeeded))  _refreshIsNeeded;

constexpr void __set__refreshIsNeeded(bool value) ;

constexpr bool __get__refreshIsNeeded() const;

 ::System::Action_1<::GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_onJoinRequestEvent, put=__set_onJoinRequestEvent))  onJoinRequestEvent;

constexpr void __set_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer> __get_onJoinRequestEvent() const;

 ::System::Action_1<::GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_onInviteRequestEvent, put=__set_onInviteRequestEvent))  onInviteRequestEvent;

constexpr void __set_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer> __get_onInviteRequestEvent() const;


// Properties

 ::StringW __declspec(property(get=get_myPartyTitle))  myPartyTitle;

 ::StringW __declspec(property(get=get_otherPlayersTitle))  otherPlayersTitle;

 ::GlobalNamespace::INetworkPlayerModel __declspec(property(get=get_networkPlayerModel))  networkPlayerModel;


// Methods

/// @brief Method get_myPartyTitle addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_myPartyTitle() ;

/// @brief Method get_otherPlayersTitle addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_otherPlayersTitle() ;

/// @brief Method get_networkPlayerModel addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::INetworkPlayerModel get_networkPlayerModel() ;

/// @brief Method add_onJoinRequestEvent addr 0x217b138 size 0xb0 virtual false final false
 void add_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_onJoinRequestEvent addr 0x217b1e8 size 0xb0 virtual false final false
 void remove_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method add_onInviteRequestEvent addr 0x217b298 size 0xb0 virtual false final false
 void add_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_onInviteRequestEvent addr 0x217b348 size 0xb0 virtual false final false
 void remove_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method DidActivate addr 0x217b3f8 size 0x2e8 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method NetworkPlayersViewControllerDidActivate addr 0x217b870 size 0x4 virtual true final false
 void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy) ;

/// @brief Method DidDeactivate addr 0x217b874 size 0x2b4 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method NetworkPlayersViewControllerDidDeactivate addr 0x217bb28 size 0x4 virtual true final false
 void NetworkPlayersViewControllerDidDeactivate(bool removedFromHierarchy) ;

/// @brief Method OnDestroy addr 0x2171d6c size 0x8 virtual true final false
 void OnDestroy() ;

/// @brief Method HandlePartyChanged addr 0x217bb2c size 0x18 virtual false final false
 void HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel playerModel) ;

/// @brief Method HandleJoinRequest addr 0x217bb44 size 0x1c virtual false final false
 void HandleJoinRequest(::GlobalNamespace::INetworkPlayer player) ;

/// @brief Method HandleInviteRequest addr 0x217bb60 size 0x1c virtual false final false
 void HandleInviteRequest(::GlobalNamespace::INetworkPlayer player) ;

/// @brief Method Refresh addr 0x217b6e0 size 0x190 virtual false final false
 void Refresh() ;

// Ctor Parameters []
explicit NetworkPlayersViewController() ;

/// @brief Method .ctor addr 0x2171d9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayersViewController, "", "NetworkPlayersViewController");
