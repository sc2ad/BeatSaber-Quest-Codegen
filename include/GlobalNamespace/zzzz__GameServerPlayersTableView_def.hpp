#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class AdditionalContentModel;
}
namespace GlobalNamespace {
class GameServerPlayerTableCell;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class TableCell;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayersTableView;
}
// Type: ::GameServerPlayersTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5868))
// CS Name: GameServerPlayersTableView
class CORDL_TYPE GameServerPlayersTableView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr operator  HMUI::HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~GameServerPlayersTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayersTableView", modifiers: " const&", def_value: None }]
constexpr GameServerPlayersTableView(GameServerPlayersTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayersTableView", modifiers: "&&", def_value: None }]
constexpr GameServerPlayersTableView(GameServerPlayersTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerPlayersTableView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameServerPlayersTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerPlayersTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerPlayersTableView& operator=(GameServerPlayersTableView&& o) noexcept = default;
  constexpr GameServerPlayersTableView& operator=(GameServerPlayersTableView const& o) noexcept = default;
                


// Fields

/// @brief Field kCellId offset 0
static constexpr ::ConstString  kCellId{u"Cell"};

/// @brief Field kNoSongsCellId offset 0
static constexpr ::ConstString  kNoSongsCellId{u"NoSongCell"};

/// @brief Field kNoModifiersCellId offset 0
static constexpr ::ConstString  kNoModifiersCellId{u"NoModifierCell"};

 HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(HMUI::TableView value) ;

constexpr HMUI::TableView __get__tableView() const;

 GlobalNamespace::GameServerPlayerTableCell __declspec(property(get=__get__gameServerPlayerCellPrefab, put=__set__gameServerPlayerCellPrefab))  _gameServerPlayerCellPrefab;

constexpr void __set__gameServerPlayerCellPrefab(GlobalNamespace::GameServerPlayerTableCell value) ;

constexpr GlobalNamespace::GameServerPlayerTableCell __get__gameServerPlayerCellPrefab() const;

 GlobalNamespace::GameServerPlayerTableCell __declspec(property(get=__get__gameServerPlayerCellWithoutSongsPrefab, put=__set__gameServerPlayerCellWithoutSongsPrefab))  _gameServerPlayerCellWithoutSongsPrefab;

constexpr void __set__gameServerPlayerCellWithoutSongsPrefab(GlobalNamespace::GameServerPlayerTableCell value) ;

constexpr GlobalNamespace::GameServerPlayerTableCell __get__gameServerPlayerCellWithoutSongsPrefab() const;

 GlobalNamespace::GameServerPlayerTableCell __declspec(property(get=__get__gameServerPlayerCellWithoutModifiersPrefab, put=__set__gameServerPlayerCellWithoutModifiersPrefab))  _gameServerPlayerCellWithoutModifiersPrefab;

constexpr void __set__gameServerPlayerCellWithoutModifiersPrefab(GlobalNamespace::GameServerPlayerTableCell value) ;

constexpr GlobalNamespace::GameServerPlayerTableCell __get__gameServerPlayerCellWithoutModifiersPrefab() const;

 UnityEngine::GameObject __declspec(property(get=__get__tableHeaderSongGo, put=__set__tableHeaderSongGo))  _tableHeaderSongGo;

constexpr void __set__tableHeaderSongGo(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__tableHeaderSongGo() const;

 UnityEngine::GameObject __declspec(property(get=__get__tableHeaderModifiersGo, put=__set__tableHeaderModifiersGo))  _tableHeaderModifiersGo;

constexpr void __set__tableHeaderModifiersGo(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__tableHeaderModifiersGo() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 GlobalNamespace::AdditionalContentModel __declspec(property(get=__get__additionalContentModel, put=__set__additionalContentModel))  _additionalContentModel;

constexpr void __set__additionalContentModel(GlobalNamespace::AdditionalContentModel value) ;

constexpr GlobalNamespace::AdditionalContentModel __get__additionalContentModel() const;

 System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> __declspec(property(get=__get_selectSuggestedLevelEvent, put=__set_selectSuggestedLevelEvent))  selectSuggestedLevelEvent;

constexpr void __set_selectSuggestedLevelEvent(System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> value) ;

constexpr System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> __get_selectSuggestedLevelEvent() const;

 System::Action_1<GlobalNamespace::GameplayModifiers> __declspec(property(get=__get_selectSuggestedGameplayModifiersEvent, put=__set_selectSuggestedGameplayModifiersEvent))  selectSuggestedGameplayModifiersEvent;

constexpr void __set_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers> value) ;

constexpr System::Action_1<GlobalNamespace::GameplayModifiers> __get_selectSuggestedGameplayModifiersEvent() const;

 System::Action_1<::StringW> __declspec(property(get=__get_kickPlayerEvent, put=__set_kickPlayerEvent))  kickPlayerEvent;

constexpr void __set_kickPlayerEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_kickPlayerEvent() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 bool __declspec(property(get=__get__hasKickPermissions, put=__set__hasKickPermissions))  _hasKickPermissions;

constexpr void __set__hasKickPermissions(bool value) ;

constexpr bool __get__hasKickPermissions() const;

 bool __declspec(property(get=__get__allowSelection, put=__set__allowSelection))  _allowSelection;

constexpr void __set__allowSelection(bool value) ;

constexpr bool __get__allowSelection() const;

 bool __declspec(property(get=__get__showSongSelection, put=__set__showSongSelection))  _showSongSelection;

constexpr void __set__showSongSelection(bool value) ;

constexpr bool __get__showSongSelection() const;

 bool __declspec(property(get=__get__showModifierSelection, put=__set__showModifierSelection))  _showModifierSelection;

constexpr void __set__showModifierSelection(bool value) ;

constexpr bool __get__showModifierSelection() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__selectedPlayer, put=__set__selectedPlayer))  _selectedPlayer;

constexpr void __set__selectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__selectedPlayer() const;

 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__sortedConnectedPlayers, put=__set__sortedConnectedPlayers))  _sortedConnectedPlayers;

constexpr void __set__sortedConnectedPlayers(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __get__sortedConnectedPlayers() const;

 GlobalNamespace::ILobbyPlayersDataModel __declspec(property(get=__get__lobbyPlayersDataModel, put=__set__lobbyPlayersDataModel))  _lobbyPlayersDataModel;

constexpr void __set__lobbyPlayersDataModel(GlobalNamespace::ILobbyPlayersDataModel value) ;

constexpr GlobalNamespace::ILobbyPlayersDataModel __get__lobbyPlayersDataModel() const;


// Properties

 ::StringW __declspec(property(get=get_currentCellId))  currentCellId;


// Methods

/// @brief Method add_selectSuggestedLevelEvent addr 0x217a2a8 size 0xb0 virtual false final false
 void add_selectSuggestedLevelEvent(System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> value) ;

/// @brief Method remove_selectSuggestedLevelEvent addr 0x217acdc size 0xb0 virtual false final false
 void remove_selectSuggestedLevelEvent(System::Action_1<GlobalNamespace::PreviewDifficultyBeatmap> value) ;

/// @brief Method add_selectSuggestedGameplayModifiersEvent addr 0x217a358 size 0xb0 virtual false final false
 void add_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method remove_selectSuggestedGameplayModifiersEvent addr 0x217ad8c size 0xb0 virtual false final false
 void remove_selectSuggestedGameplayModifiersEvent(System::Action_1<GlobalNamespace::GameplayModifiers> value) ;

/// @brief Method add_kickPlayerEvent addr 0x217a408 size 0xb0 virtual false final false
 void add_kickPlayerEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_kickPlayerEvent addr 0x217ae3c size 0xb0 virtual false final false
 void remove_kickPlayerEvent(System::Action_1<::StringW> value) ;

/// @brief Method CellSize addr 0x2186858 size 0xc virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x2186864 size 0x48 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method get_currentCellId addr 0x21868ac size 0x84 virtual false final false
 ::StringW get_currentCellId() ;

/// @brief Method GetCurrentPrefab addr 0x2186930 size 0x9c virtual false final false
 GlobalNamespace::GameServerPlayerTableCell GetCurrentPrefab() ;

/// @brief Method CellForIdx addr 0x21869cc size 0x500 virtual true final true
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t idx) ;

/// @brief Method TryGetLobbyPlayerData addr 0x2186ecc size 0x164 virtual false final false
 bool TryGetLobbyPlayerData(int32_t idx, ByRef<GlobalNamespace::IConnectedPlayer> player, ByRef<GlobalNamespace::ILobbyPlayerData> playerData) ;

/// @brief Method HandleCellUseBeatmap addr 0x2187030 size 0x268 virtual false final false
 void HandleCellUseBeatmap(int32_t idx) ;

/// @brief Method HandleCellUseModifiers addr 0x2187298 size 0x254 virtual false final false
 void HandleCellUseModifiers(int32_t idx) ;

/// @brief Method HandleCellKickPlayer addr 0x21874ec size 0xfc virtual false final false
 void HandleCellKickPlayer(int32_t idx) ;

/// @brief Method SetData addr 0x217aef8 size 0xbc virtual false final false
 void SetData(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> sortedPlayers, GlobalNamespace::ILobbyPlayersDataModel lobbyPlayersDataModel, bool hasKickPermissions, bool allowSelection, bool showSongSelection, bool showModifierSelection, bool clearSelection) ;

/// @brief Method Init addr 0x21875e8 size 0x3c virtual false final false
 void Init() ;

// Ctor Parameters []
explicit GameServerPlayersTableView() ;

/// @brief Method .ctor addr 0x2187624 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServerPlayersTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerPlayersTableView, "", "GameServerPlayersTableView");
