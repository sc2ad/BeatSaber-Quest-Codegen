#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace GlobalNamespace {
class ResultsTableView;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsViewController;
}
// Type: ::MultiplayerResultsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5815))
// CS Name: MultiplayerResultsViewController
class CORDL_TYPE MultiplayerResultsViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~MultiplayerResultsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsViewController", modifiers: " const&", def_value: None }]
constexpr MultiplayerResultsViewController(MultiplayerResultsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsViewController", modifiers: "&&", def_value: None }]
constexpr MultiplayerResultsViewController(MultiplayerResultsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerResultsViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr MultiplayerResultsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerResultsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerResultsViewController& operator=(MultiplayerResultsViewController&& o) noexcept = default;
  constexpr MultiplayerResultsViewController& operator=(MultiplayerResultsViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__levelClearedGO, put=__set__levelClearedGO))  _levelClearedGO;

constexpr void __set__levelClearedGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__levelClearedGO() const;

 UnityEngine::GameObject __declspec(property(get=__get__levelFailedGO, put=__set__levelFailedGO))  _levelFailedGO;

constexpr void __set__levelFailedGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__levelFailedGO() const;

 UnityEngine::GameObject __declspec(property(get=__get__levelResultsGO, put=__set__levelResultsGO))  _levelResultsGO;

constexpr void __set__levelResultsGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__levelResultsGO() const;

 GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get__levelBar() const;

 GlobalNamespace::ResultsTableView __declspec(property(get=__get__resultsTableView, put=__set__resultsTableView))  _resultsTableView;

constexpr void __set__resultsTableView(GlobalNamespace::ResultsTableView value) ;

constexpr GlobalNamespace::ResultsTableView __get__resultsTableView() const;

 UnityEngine::UI::Button __declspec(property(get=__get__backToLobbyButton, put=__set__backToLobbyButton))  _backToLobbyButton;

constexpr void __set__backToLobbyButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__backToLobbyButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__backToMenuButton, put=__set__backToMenuButton))  _backToMenuButton;

constexpr void __set__backToMenuButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__backToMenuButton() const;

 System::Action_1<GlobalNamespace::MultiplayerResultsViewController> __declspec(property(get=__get_backToLobbyPressedEvent, put=__set_backToLobbyPressedEvent))  backToLobbyPressedEvent;

constexpr void __set_backToLobbyPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController> value) ;

constexpr System::Action_1<GlobalNamespace::MultiplayerResultsViewController> __get_backToLobbyPressedEvent() const;

 System::Action_1<GlobalNamespace::MultiplayerResultsViewController> __declspec(property(get=__get_backToMenuPressedEvent, put=__set_backToMenuPressedEvent))  backToMenuPressedEvent;

constexpr void __set_backToMenuPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController> value) ;

constexpr System::Action_1<GlobalNamespace::MultiplayerResultsViewController> __get_backToMenuPressedEvent() const;


// Methods

/// @brief Method add_backToLobbyPressedEvent addr 0x2178b94 size 0xb0 virtual false final false
 void add_backToLobbyPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController> value) ;

/// @brief Method remove_backToLobbyPressedEvent addr 0x2178c44 size 0xb0 virtual false final false
 void remove_backToLobbyPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController> value) ;

/// @brief Method add_backToMenuPressedEvent addr 0x2178cf4 size 0xb0 virtual false final false
 void add_backToMenuPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController> value) ;

/// @brief Method remove_backToMenuPressedEvent addr 0x2178da4 size 0xb0 virtual false final false
 void remove_backToMenuPressedEvent(System::Action_1<GlobalNamespace::MultiplayerResultsViewController> value) ;

/// @brief Method Init addr 0x2178e54 size 0x180 virtual false final false
 void Init(GlobalNamespace::MultiplayerResultsData multiplayerResultsData, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, bool showBackToLobbyButton, bool showBackToMenuButton) ;

/// @brief Method DidActivate addr 0x2178fd4 size 0x108 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method BackToLobbyPressed addr 0x21790dc size 0x20 virtual false final false
 void BackToLobbyPressed() ;

/// @brief Method BackToMenuPressed addr 0x21790fc size 0x20 virtual false final false
 void BackToMenuPressed() ;

static GlobalNamespace::MultiplayerResultsViewController New_ctor() ;

/// @brief Method .ctor addr 0x217911c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsViewController, "", "MultiplayerResultsViewController");
