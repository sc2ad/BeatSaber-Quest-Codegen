#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace HMUI {
class HoverHint;
}
namespace GlobalNamespace {
class EditableBeatmapSelectionView;
}
namespace System {
class Action;
}
namespace Polyglot {
class LocalizedTextMeshProUGUI;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class GameServersFilterText;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class EditableModifiersSelectionView;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbySetupViewController;
}
// Type: ::LobbySetupViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5812))
// CS Name: LobbySetupViewController
class CORDL_TYPE LobbySetupViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x110};

virtual ~LobbySetupViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbySetupViewController", modifiers: " const&", def_value: None }]
constexpr LobbySetupViewController(LobbySetupViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbySetupViewController", modifiers: "&&", def_value: None }]
constexpr LobbySetupViewController(LobbySetupViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbySetupViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr LobbySetupViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbySetupViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbySetupViewController& operator=(LobbySetupViewController&& o) noexcept = default;
  constexpr LobbySetupViewController& operator=(LobbySetupViewController const& o) noexcept = default;
                


// Fields

/// @brief Field kStartTextKey offset 0
static constexpr ::ConstString  kStartTextKey{u"LOBBY_START_GAME"};

/// @brief Field kCancelTextKey offset 0
static constexpr ::ConstString  kCancelTextKey{u"BUTTON_CANCEL"};

/// @brief Field kReadyTextKey offset 0
static constexpr ::ConstString  kReadyTextKey{u"LOBBY_READY"};

/// @brief Field kUnreadyTextKey offset 0
static constexpr ::ConstString  kUnreadyTextKey{u"BUTTON_UNREADY"};

/// @brief Field kRetryTextKey offset 0
static constexpr ::ConstString  kRetryTextKey{u"BUTTON_RETRY"};

 UnityEngine::UI::Button __declspec(property(get=__get__startGameReadyButton, put=__set__startGameReadyButton))  _startGameReadyButton;

constexpr void __set__startGameReadyButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__startGameReadyButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__cancelGameUnreadyButton, put=__set__cancelGameUnreadyButton))  _cancelGameUnreadyButton;

constexpr void __set__cancelGameUnreadyButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__cancelGameUnreadyButton() const;

 Polyglot::LocalizedTextMeshProUGUI __declspec(property(get=__get__startReadyText, put=__set__startReadyText))  _startReadyText;

constexpr void __set__startReadyText(Polyglot::LocalizedTextMeshProUGUI value) ;

constexpr Polyglot::LocalizedTextMeshProUGUI __get__startReadyText() const;

 Polyglot::LocalizedTextMeshProUGUI __declspec(property(get=__get__cancelUnreadyText, put=__set__cancelUnreadyText))  _cancelUnreadyText;

constexpr void __set__cancelUnreadyText(Polyglot::LocalizedTextMeshProUGUI value) ;

constexpr Polyglot::LocalizedTextMeshProUGUI __get__cancelUnreadyText() const;

 GlobalNamespace::GameServersFilterText __declspec(property(get=__get__serverSettings, put=__set__serverSettings))  _serverSettings;

constexpr void __set__serverSettings(GlobalNamespace::GameServersFilterText value) ;

constexpr GlobalNamespace::GameServersFilterText __get__serverSettings() const;

 UnityEngine::GameObject __declspec(property(get=__get__suggestionHeader, put=__set__suggestionHeader))  _suggestionHeader;

constexpr void __set__suggestionHeader(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__suggestionHeader() const;

 GlobalNamespace::EditableBeatmapSelectionView __declspec(property(get=__get__beatmapSelectionView, put=__set__beatmapSelectionView))  _beatmapSelectionView;

constexpr void __set__beatmapSelectionView(GlobalNamespace::EditableBeatmapSelectionView value) ;

constexpr GlobalNamespace::EditableBeatmapSelectionView __get__beatmapSelectionView() const;

 GlobalNamespace::EditableModifiersSelectionView __declspec(property(get=__get__modifiersSelectionView, put=__set__modifiersSelectionView))  _modifiersSelectionView;

constexpr void __set__modifiersSelectionView(GlobalNamespace::EditableModifiersSelectionView value) ;

constexpr GlobalNamespace::EditableModifiersSelectionView __get__modifiersSelectionView() const;

 HMUI::HoverHint __declspec(property(get=__get__cantStartGameHoverHint, put=__set__cantStartGameHoverHint))  _cantStartGameHoverHint;

constexpr void __set__cantStartGameHoverHint(HMUI::HoverHint value) ;

constexpr HMUI::HoverHint __get__cantStartGameHoverHint() const;

 UnityEngine::GameObject __declspec(property(get=__get__playerMissingLevelHoverHintWrapper, put=__set__playerMissingLevelHoverHintWrapper))  _playerMissingLevelHoverHintWrapper;

constexpr void __set__playerMissingLevelHoverHintWrapper(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__playerMissingLevelHoverHintWrapper() const;

 HMUI::HoverHint __declspec(property(get=__get__playersMissingLevelHoverHint, put=__set__playersMissingLevelHoverHint))  _playersMissingLevelHoverHint;

constexpr void __set__playersMissingLevelHoverHint(HMUI::HoverHint value) ;

constexpr HMUI::HoverHint __get__playersMissingLevelHoverHint() const;

 UnityEngine::GameObject __declspec(property(get=__get__spectatorWarningTextWrapper, put=__set__spectatorWarningTextWrapper))  _spectatorWarningTextWrapper;

constexpr void __set__spectatorWarningTextWrapper(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__spectatorWarningTextWrapper() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;

 System::Action __declspec(property(get=__get_selectBeatmapEvent, put=__set_selectBeatmapEvent))  selectBeatmapEvent;

constexpr void __set_selectBeatmapEvent(System::Action value) ;

constexpr System::Action __get_selectBeatmapEvent() const;

 System::Action __declspec(property(get=__get_selectModifiersEvent, put=__set_selectModifiersEvent))  selectModifiersEvent;

constexpr void __set_selectModifiersEvent(System::Action value) ;

constexpr System::Action __get_selectModifiersEvent() const;

 System::Action __declspec(property(get=__get_startGameOrReadyEvent, put=__set_startGameOrReadyEvent))  startGameOrReadyEvent;

constexpr void __set_startGameOrReadyEvent(System::Action value) ;

constexpr System::Action __get_startGameOrReadyEvent() const;

 System::Action __declspec(property(get=__get_cancelGameOrUnreadyEvent, put=__set_cancelGameOrUnreadyEvent))  cancelGameOrUnreadyEvent;

constexpr void __set_cancelGameOrUnreadyEvent(System::Action value) ;

constexpr System::Action __get_cancelGameOrUnreadyEvent() const;

 System::Action __declspec(property(get=__get_clearSuggestedBeatmapEvent, put=__set_clearSuggestedBeatmapEvent))  clearSuggestedBeatmapEvent;

constexpr void __set_clearSuggestedBeatmapEvent(System::Action value) ;

constexpr System::Action __get_clearSuggestedBeatmapEvent() const;

 System::Action __declspec(property(get=__get_clearSuggestedModifiersEvent, put=__set_clearSuggestedModifiersEvent))  clearSuggestedModifiersEvent;

constexpr void __set_clearSuggestedModifiersEvent(System::Action value) ;

constexpr System::Action __get_clearSuggestedModifiersEvent() const;

 bool __declspec(property(get=__get__isPartyOwner, put=__set__isPartyOwner))  _isPartyOwner;

constexpr void __set__isPartyOwner(bool value) ;

constexpr bool __get__isPartyOwner() const;

 bool __declspec(property(get=__get__isQuickStart, put=__set__isQuickStart))  _isQuickStart;

constexpr void __set__isQuickStart(bool value) ;

constexpr bool __get__isQuickStart() const;


// Methods

/// @brief Method add_selectBeatmapEvent addr 0x2177074 size 0x9c virtual false final false
 void add_selectBeatmapEvent(System::Action value) ;

/// @brief Method remove_selectBeatmapEvent addr 0x2177110 size 0x9c virtual false final false
 void remove_selectBeatmapEvent(System::Action value) ;

/// @brief Method add_selectModifiersEvent addr 0x21771ac size 0x9c virtual false final false
 void add_selectModifiersEvent(System::Action value) ;

/// @brief Method remove_selectModifiersEvent addr 0x2177248 size 0x9c virtual false final false
 void remove_selectModifiersEvent(System::Action value) ;

/// @brief Method add_startGameOrReadyEvent addr 0x21772e4 size 0x9c virtual false final false
 void add_startGameOrReadyEvent(System::Action value) ;

/// @brief Method remove_startGameOrReadyEvent addr 0x2177380 size 0x9c virtual false final false
 void remove_startGameOrReadyEvent(System::Action value) ;

/// @brief Method add_cancelGameOrUnreadyEvent addr 0x217741c size 0x9c virtual false final false
 void add_cancelGameOrUnreadyEvent(System::Action value) ;

/// @brief Method remove_cancelGameOrUnreadyEvent addr 0x21774b8 size 0x9c virtual false final false
 void remove_cancelGameOrUnreadyEvent(System::Action value) ;

/// @brief Method add_clearSuggestedBeatmapEvent addr 0x2177554 size 0x9c virtual false final false
 void add_clearSuggestedBeatmapEvent(System::Action value) ;

/// @brief Method remove_clearSuggestedBeatmapEvent addr 0x21775f0 size 0x9c virtual false final false
 void remove_clearSuggestedBeatmapEvent(System::Action value) ;

/// @brief Method add_clearSuggestedModifiersEvent addr 0x217768c size 0xa0 virtual false final false
 void add_clearSuggestedModifiersEvent(System::Action value) ;

/// @brief Method remove_clearSuggestedModifiersEvent addr 0x217772c size 0xa0 virtual false final false
 void remove_clearSuggestedModifiersEvent(System::Action value) ;

/// @brief Method Setup addr 0x21777cc size 0x1f4 virtual false final false
 void Setup(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, bool isPartyOwner, bool allowSongSelection, bool allowModifierSelection, bool isManaged, bool isQuickStart) ;

/// @brief Method SetLobbyPlayerData addr 0x2177a28 size 0x3bc virtual false final false
 void SetLobbyPlayerData(GlobalNamespace::ILobbyPlayerData lobbyPlayerData) ;

/// @brief Method SetPlayersMissingLevelText addr 0x2177e08 size 0x58 virtual false final false
 void SetPlayersMissingLevelText(::StringW playersMissingLevelText) ;

/// @brief Method SetPlayerActiveState addr 0x2177de4 size 0x24 virtual false final false
 void SetPlayerActiveState(bool isActive) ;

/// @brief Method SetStartGameEnabled addr 0x2177e60 size 0x68 virtual false final false
 void SetStartGameEnabled(GlobalNamespace::CannotStartGameReason cannotStartGameReason) ;

/// @brief Method SetLobbyState addr 0x2177ec8 size 0xe0 virtual false final false
 void SetLobbyState(GlobalNamespace::MultiplayerLobbyState lobbyState) ;

/// @brief Method DidActivate addr 0x2178068 size 0x298 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method OnDestroy addr 0x2178300 size 0x1c virtual true final false
 void OnDestroy() ;

// Ctor Parameters []
explicit LobbySetupViewController() ;

/// @brief Method .ctor addr 0x217831c size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__44_0 addr 0x2178384 size 0x1c virtual false final false
 void _DidActivate_b__44_0() ;

/// @brief Method <DidActivate>b__44_1 addr 0x21783a0 size 0x1c virtual false final false
 void _DidActivate_b__44_1() ;

/// @brief Method <DidActivate>b__44_2 addr 0x21783bc size 0x1c virtual false final false
 void _DidActivate_b__44_2() ;

/// @brief Method <DidActivate>b__44_3 addr 0x21783d8 size 0x1c virtual false final false
 void _DidActivate_b__44_3() ;

/// @brief Method <DidActivate>b__44_4 addr 0x21783f4 size 0x1c virtual false final false
 void _DidActivate_b__44_4() ;

/// @brief Method <DidActivate>b__44_5 addr 0x2178410 size 0x1c virtual false final false
 void _DidActivate_b__44_5() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LobbySetupViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbySetupViewController, "", "LobbySetupViewController");
