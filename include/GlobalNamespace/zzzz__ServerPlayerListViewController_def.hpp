#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace HMUI {
class HoverHint;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class GameServerPlayersTableView;
}
namespace HMUI {
class ButtonBinder;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerPlayerListViewController;
}
// Type: ::ServerPlayerListViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5819))
// CS Name: ServerPlayerListViewController
class CORDL_TYPE ServerPlayerListViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~ServerPlayerListViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerPlayerListViewController", modifiers: " const&", def_value: None }]
constexpr ServerPlayerListViewController(ServerPlayerListViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerPlayerListViewController", modifiers: "&&", def_value: None }]
constexpr ServerPlayerListViewController(ServerPlayerListViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerPlayerListViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr ServerPlayerListViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerPlayerListViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerPlayerListViewController& operator=(ServerPlayerListViewController&& o) noexcept = default;
  constexpr ServerPlayerListViewController& operator=(ServerPlayerListViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameServerPlayersTableView __declspec(property(get=__get__gameServerPlayersTableView, put=__set__gameServerPlayersTableView))  _gameServerPlayersTableView;

constexpr void __set__gameServerPlayersTableView(GlobalNamespace::GameServerPlayersTableView value) ;

constexpr GlobalNamespace::GameServerPlayersTableView __get__gameServerPlayersTableView() const;

 UnityEngine::UI::Button __declspec(property(get=__get__invitePlayerButton, put=__set__invitePlayerButton))  _invitePlayerButton;

constexpr void __set__invitePlayerButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__invitePlayerButton() const;

 HMUI::HoverHint __declspec(property(get=__get__cantInvitePlayerHoverHint, put=__set__cantInvitePlayerHoverHint))  _cantInvitePlayerHoverHint;

constexpr void __set__cantInvitePlayerHoverHint(HMUI::HoverHint value) ;

constexpr HMUI::HoverHint __get__cantInvitePlayerHoverHint() const;

 GlobalNamespace::IInvitePlatformHandler __declspec(property(get=__get__invitePlatformHandler, put=__set__invitePlatformHandler))  _invitePlatformHandler;

constexpr void __set__invitePlatformHandler(GlobalNamespace::IInvitePlatformHandler value) ;

constexpr GlobalNamespace::IInvitePlatformHandler __get__invitePlatformHandler() const;

 GlobalNamespace::ILobbyPlayersDataModel __declspec(property(get=__get__lobbyPlayersDataModel, put=__set__lobbyPlayersDataModel))  _lobbyPlayersDataModel;

constexpr void __set__lobbyPlayersDataModel(GlobalNamespace::ILobbyPlayersDataModel value) ;

constexpr GlobalNamespace::ILobbyPlayersDataModel __get__lobbyPlayersDataModel() const;

 GlobalNamespace::ILobbyStateDataModel __declspec(property(get=__get__lobbyStateDataModel, put=__set__lobbyStateDataModel))  _lobbyStateDataModel;

constexpr void __set__lobbyStateDataModel(GlobalNamespace::ILobbyStateDataModel value) ;

constexpr GlobalNamespace::ILobbyStateDataModel __get__lobbyStateDataModel() const;

 GlobalNamespace::LobbyPlayerPermissionsModel __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel))  _lobbyPlayerPermissionsModel;

constexpr void __set__lobbyPlayerPermissionsModel(GlobalNamespace::LobbyPlayerPermissionsModel value) ;

constexpr GlobalNamespace::LobbyPlayerPermissionsModel __get__lobbyPlayerPermissionsModel() const;

 GlobalNamespace::ILobbyGameStateController __declspec(property(get=__get__lobbyGameStateController, put=__set__lobbyGameStateController))  _lobbyGameStateController;

constexpr void __set__lobbyGameStateController(GlobalNamespace::ILobbyGameStateController value) ;

constexpr GlobalNamespace::ILobbyGameStateController __get__lobbyGameStateController() const;

 System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> __declspec(property(get=__get_selectSuggestedBeatmapEvent, put=__set_selectSuggestedBeatmapEvent))  selectSuggestedBeatmapEvent;

constexpr void __set_selectSuggestedBeatmapEvent(System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> value) ;

constexpr System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> __get_selectSuggestedBeatmapEvent() const;

 System::Action_1<GlobalNamespace::GameplayModifiers> __declspec(property(get=__get_selectSuggestedGameplayModifiersEvent, put=__set_selectSuggestedGameplayModifiersEvent))  selectSuggestedGameplayModifiersEvent;

constexpr void __set_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers> value) ;

constexpr System::Action_1<GlobalNamespace::GameplayModifiers> __get_selectSuggestedGameplayModifiersEvent() const;

 System::Action_1<::StringW> __declspec(property(get=__get_kickPlayerEvent, put=__set_kickPlayerEvent))  kickPlayerEvent;

constexpr void __set_kickPlayerEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_kickPlayerEvent() const;

 System::Action __declspec(property(get=__get_didOpenInvitePanelEvent, put=__set_didOpenInvitePanelEvent))  didOpenInvitePanelEvent;

constexpr void __set_didOpenInvitePanelEvent(System::Action value) ;

constexpr System::Action __get_didOpenInvitePanelEvent() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;


// Methods

/// @brief Method add_selectSuggestedBeatmapEvent addr 0x21799cc size 0xb0 virtual false final false
 void add_selectSuggestedBeatmapEvent(System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> value) ;

/// @brief Method remove_selectSuggestedBeatmapEvent addr 0x2179a7c size 0xb0 virtual false final false
 void remove_selectSuggestedBeatmapEvent(System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> value) ;

/// @brief Method add_selectSuggestedGameplayModifiersEvent addr 0x2179b2c size 0xb0 virtual false final false
 void add_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method remove_selectSuggestedGameplayModifiersEvent addr 0x2179bdc size 0xb0 virtual false final false
 void remove_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method add_kickPlayerEvent addr 0x2179c8c size 0xb0 virtual false final false
 void add_kickPlayerEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_kickPlayerEvent addr 0x2179d3c size 0xb0 virtual false final false
 void remove_kickPlayerEvent(System::Action_1<::StringW> value) ;

/// @brief Method add_didOpenInvitePanelEvent addr 0x2179dec size 0x9c virtual false final false
 void add_didOpenInvitePanelEvent(System::Action value) ;

/// @brief Method remove_didOpenInvitePanelEvent addr 0x2179e88 size 0x9c virtual false final false
 void remove_didOpenInvitePanelEvent(System::Action value) ;

/// @brief Method DidActivate addr 0x2179f24 size 0x384 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x217a9b0 size 0x32c virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleLobbyPlayersDataDidChange addr 0x217aeec size 0x4 virtual false final false
 void HandleLobbyPlayersDataDidChange(::StringW userId) ;

/// @brief Method HandleLobbyGameStateControllerLobbyStateChanged addr 0x217aef0 size 0x4 virtual false final false
 void HandleLobbyGameStateControllerLobbyStateChanged(GlobalNamespace::MultiplayerLobbyState _) ;

/// @brief Method HandleLobbyPlayerPermissionChanged addr 0x217aef4 size 0x4 virtual false final false
 void HandleLobbyPlayerPermissionChanged() ;

/// @brief Method SetDataToTable addr 0x217a7b0 size 0x200 virtual false final false
 void SetDataToTable() ;

/// @brief Method HandleSelectSuggestedLevel addr 0x217afb4 size 0x1c virtual false final false
 void HandleSelectSuggestedLevel(GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel) ;

/// @brief Method HandleSelectSuggestedGameplayModifiers addr 0x217afd0 size 0x1c virtual false final false
 void HandleSelectSuggestedGameplayModifiers(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method HandleKickPlayer addr 0x217afec size 0x1c virtual false final false
 void HandleKickPlayer(::StringW userId) ;

/// @brief Method HandleOpenPlatformInvitePanel addr 0x217b008 size 0xc8 virtual false final false
 void HandleOpenPlatformInvitePanel() ;

/// @brief Method TrySetInviteButtonEnabled addr 0x217a4b8 size 0x2f8 virtual false final false
 void TrySetInviteButtonEnabled() ;

// Ctor Parameters []
explicit ServerPlayerListViewController() ;

/// @brief Method .ctor addr 0x217b0d0 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ServerPlayerListViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerPlayerListViewController, "", "ServerPlayerListViewController");
