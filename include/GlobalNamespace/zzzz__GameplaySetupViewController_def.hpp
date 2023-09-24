#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__GameplaySetupViewController__Panel;
}
namespace HMUI {
class SegmentedControl;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PlayerSettingsPanelController;
}
namespace GlobalNamespace {
class GameplayModifiersPanelController;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class EnvironmentOverrideSettingsPanelController;
}
namespace GlobalNamespace {
class ColorsOverrideSettingsPanelController;
}
namespace GlobalNamespace {
class MultiplayerSettingsPanelController;
}
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IRefreshable;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplaySetupViewController__Panel;
}
// Type: ::Panel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5732))
// CS Name: GameplaySetupViewController::Panel
class CORDL_TYPE GlobalNamespace__GameplaySetupViewController__Panel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameplaySetupViewController__Panel() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplaySetupViewController__Panel", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplaySetupViewController__Panel(GlobalNamespace__GameplaySetupViewController__Panel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplaySetupViewController__Panel", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplaySetupViewController__Panel(GlobalNamespace__GameplaySetupViewController__Panel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplaySetupViewController__Panel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameplaySetupViewController__Panel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplaySetupViewController__Panel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplaySetupViewController__Panel& operator=(GlobalNamespace__GameplaySetupViewController__Panel&& o) noexcept = default;
  constexpr GlobalNamespace__GameplaySetupViewController__Panel& operator=(GlobalNamespace__GameplaySetupViewController__Panel const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_title, put=__set_title))  title;

constexpr void __set_title(::StringW value) ;

constexpr ::StringW __get_title() const;

 GlobalNamespace::IRefreshable __declspec(property(get=__get_refreshable, put=__set_refreshable))  refreshable;

constexpr void __set_refreshable(GlobalNamespace::IRefreshable value) ;

constexpr GlobalNamespace::IRefreshable __get_refreshable() const;

 UnityEngine::GameObject __declspec(property(get=__get_gameObject, put=__set_gameObject))  gameObject;

constexpr void __set_gameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_gameObject() const;


// Methods

static GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel New_ctor(::StringW title, GlobalNamespace::IRefreshable refreshable, UnityEngine::GameObject gameObject) ;

/// @brief Method .ctor addr 0x215d640 size 0x3c virtual false final false
 void _ctor(::StringW title, GlobalNamespace::IRefreshable refreshable, UnityEngine::GameObject gameObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplaySetupViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5733))
// CS Name: GameplaySetupViewController
class CORDL_TYPE GameplaySetupViewController : public HMUI::ViewController {
public:
// Declarations
using Panel = GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~GameplaySetupViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplaySetupViewController", modifiers: " const&", def_value: None }]
constexpr GameplaySetupViewController(GameplaySetupViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplaySetupViewController", modifiers: "&&", def_value: None }]
constexpr GameplaySetupViewController(GameplaySetupViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplaySetupViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr GameplaySetupViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplaySetupViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplaySetupViewController& operator=(GameplaySetupViewController&& o) noexcept = default;
  constexpr GameplaySetupViewController& operator=(GameplaySetupViewController const& o) noexcept = default;
                


// Fields

 HMUI::TextSegmentedControl __declspec(property(get=__get__selectionSegmentedControl, put=__set__selectionSegmentedControl))  _selectionSegmentedControl;

constexpr void __set__selectionSegmentedControl(HMUI::TextSegmentedControl value) ;

constexpr HMUI::TextSegmentedControl __get__selectionSegmentedControl() const;

 GlobalNamespace::PlayerSettingsPanelController __declspec(property(get=__get__playerSettingsPanelController, put=__set__playerSettingsPanelController))  _playerSettingsPanelController;

constexpr void __set__playerSettingsPanelController(GlobalNamespace::PlayerSettingsPanelController value) ;

constexpr GlobalNamespace::PlayerSettingsPanelController __get__playerSettingsPanelController() const;

 GlobalNamespace::GameplayModifiersPanelController __declspec(property(get=__get__gameplayModifiersPanelController, put=__set__gameplayModifiersPanelController))  _gameplayModifiersPanelController;

constexpr void __set__gameplayModifiersPanelController(GlobalNamespace::GameplayModifiersPanelController value) ;

constexpr GlobalNamespace::GameplayModifiersPanelController __get__gameplayModifiersPanelController() const;

 GlobalNamespace::EnvironmentOverrideSettingsPanelController __declspec(property(get=__get__environmentOverrideSettingsPanelController, put=__set__environmentOverrideSettingsPanelController))  _environmentOverrideSettingsPanelController;

constexpr void __set__environmentOverrideSettingsPanelController(GlobalNamespace::EnvironmentOverrideSettingsPanelController value) ;

constexpr GlobalNamespace::EnvironmentOverrideSettingsPanelController __get__environmentOverrideSettingsPanelController() const;

 GlobalNamespace::ColorsOverrideSettingsPanelController __declspec(property(get=__get__colorsOverrideSettingsPanelController, put=__set__colorsOverrideSettingsPanelController))  _colorsOverrideSettingsPanelController;

constexpr void __set__colorsOverrideSettingsPanelController(GlobalNamespace::ColorsOverrideSettingsPanelController value) ;

constexpr GlobalNamespace::ColorsOverrideSettingsPanelController __get__colorsOverrideSettingsPanelController() const;

 GlobalNamespace::MultiplayerSettingsPanelController __declspec(property(get=__get__multiplayerSettingsPanelController, put=__set__multiplayerSettingsPanelController))  _multiplayerSettingsPanelController;

constexpr void __set__multiplayerSettingsPanelController(GlobalNamespace::MultiplayerSettingsPanelController value) ;

constexpr GlobalNamespace::MultiplayerSettingsPanelController __get__multiplayerSettingsPanelController() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 System::Action __declspec(property(get=__get_didChangeGameplayModifiersEvent, put=__set_didChangeGameplayModifiersEvent))  didChangeGameplayModifiersEvent;

constexpr void __set_didChangeGameplayModifiersEvent(System::Action value) ;

constexpr System::Action __get_didChangeGameplayModifiersEvent() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel> __declspec(property(get=__get__panels, put=__set__panels))  _panels;

constexpr void __set__panels(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel> __get__panels() const;

 int32_t __declspec(property(get=__get__activePanelIdx, put=__set__activePanelIdx))  _activePanelIdx;

constexpr void __set__activePanelIdx(int32_t value) ;

constexpr int32_t __get__activePanelIdx() const;

 bool __declspec(property(get=__get__showModifiers, put=__set__showModifiers))  _showModifiers;

constexpr void __set__showModifiers(bool value) ;

constexpr bool __get__showModifiers() const;

 bool __declspec(property(get=__get__showEnvironmentOverrideSettings, put=__set__showEnvironmentOverrideSettings))  _showEnvironmentOverrideSettings;

constexpr void __set__showEnvironmentOverrideSettings(bool value) ;

constexpr bool __get__showEnvironmentOverrideSettings() const;

 bool __declspec(property(get=__get__showColorSchemesSettings, put=__set__showColorSchemesSettings))  _showColorSchemesSettings;

constexpr void __set__showColorSchemesSettings(bool value) ;

constexpr bool __get__showColorSchemesSettings() const;

 bool __declspec(property(get=__get__showMultiplayer, put=__set__showMultiplayer))  _showMultiplayer;

constexpr void __set__showMultiplayer(bool value) ;

constexpr bool __get__showMultiplayer() const;

 bool __declspec(property(get=__get__shouldRefreshContent, put=__set__shouldRefreshContent))  _shouldRefreshContent;

constexpr void __set__shouldRefreshContent(bool value) ;

constexpr bool __get__shouldRefreshContent() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;


// Properties

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=get_playerSettings))  playerSettings;

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers))  gameplayModifiers;

 GlobalNamespace::OverrideEnvironmentSettings __declspec(property(get=get_environmentOverrideSettings))  environmentOverrideSettings;

 GlobalNamespace::ColorSchemesSettings __declspec(property(get=get_colorSchemesSettings))  colorSchemesSettings;


// Methods

/// @brief Method add_didChangeGameplayModifiersEvent addr 0x215c364 size 0x9c virtual false final false
 void add_didChangeGameplayModifiersEvent(System::Action value) ;

/// @brief Method remove_didChangeGameplayModifiersEvent addr 0x215c400 size 0x9c virtual false final false
 void remove_didChangeGameplayModifiersEvent(System::Action value) ;

/// @brief Method get_playerSettings addr 0x215c49c size 0x18 virtual false final false
 GlobalNamespace::PlayerSpecificSettings get_playerSettings() ;

/// @brief Method get_gameplayModifiers addr 0x215c854 size 0x1c virtual false final false
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

/// @brief Method get_environmentOverrideSettings addr 0x215c870 size 0x24 virtual false final false
 GlobalNamespace::OverrideEnvironmentSettings get_environmentOverrideSettings() ;

/// @brief Method get_colorSchemesSettings addr 0x215c894 size 0x24 virtual false final false
 GlobalNamespace::ColorSchemesSettings get_colorSchemesSettings() ;

/// @brief Method Setup addr 0x215c8b8 size 0x8c virtual false final false
 void Setup(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings, bool showMultiplayer, GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout playerSettingsPanelLayout) ;

/// @brief Method Init addr 0x215c944 size 0xa0 virtual false final false
 void Init() ;

/// @brief Method DidActivate addr 0x215d140 size 0x174 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method OnDisable addr 0x215d350 size 0xd4 virtual false final false
 void OnDisable() ;

/// @brief Method HandleSelectionSegmentedControlDidSelectCell addr 0x215d424 size 0x8 virtual false final false
 void HandleSelectionSegmentedControlDidSelectCell(HMUI::SegmentedControl segmentedControl, int32_t cellIdx) ;

/// @brief Method HandlePlayerSettingsPanelControllerDidChangePlayerSettings addr 0x215d4dc size 0x38 virtual false final false
 void HandlePlayerSettingsPanelControllerDidChangePlayerSettings() ;

/// @brief Method HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers addr 0x215d514 size 0x54 virtual false final false
 void HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers() ;

/// @brief Method SetActivePanel addr 0x215d42c size 0xb0 virtual false final false
 void SetActivePanel(int32_t panelIdx) ;

/// @brief Method RefreshContent addr 0x215ca08 size 0x72c virtual false final false
 void RefreshContent() ;

/// @brief Method RefreshActivePanel addr 0x215d568 size 0xd8 virtual false final false
 void RefreshActivePanel() ;

static GlobalNamespace::GameplaySetupViewController New_ctor() ;

/// @brief Method .ctor addr 0x215d67c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplaySetupViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplaySetupViewController, "", "GameplaySetupViewController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplaySetupViewController__Panel, "", "GameplaySetupViewController/Panel");
