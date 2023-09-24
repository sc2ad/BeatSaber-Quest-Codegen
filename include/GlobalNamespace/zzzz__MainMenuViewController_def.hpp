#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
struct GlobalNamespace__MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class MusicPackPromoBanner;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
// Type: ::MenuButton
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5785))
// CS Name: MainMenuViewController::MenuButton
struct CORDL_TYPE GlobalNamespace__MainMenuViewController__MenuButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MainMenuViewController__MenuButton(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MainMenuViewController__MenuButton(GlobalNamespace__MainMenuViewController__MenuButton const&) = default;
                    constexpr GlobalNamespace__MainMenuViewController__MenuButton(GlobalNamespace__MainMenuViewController__MenuButton&&) = default;
                    constexpr GlobalNamespace__MainMenuViewController__MenuButton& operator=(GlobalNamespace__MainMenuViewController__MenuButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MainMenuViewController__MenuButton& operator=(GlobalNamespace__MainMenuViewController__MenuButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MainMenuViewController__MenuButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MainMenuViewController__MenuButton_Unwrapped : int32_t {
__SoloFreePlay = 0,
__Party = 1,
__BeatmapEditor = 2,
__SoloCampaign = 3,
__FloorAdjust = 4,
__Quit = 5,
__Multiplayer = 6,
__Options = 7,
__HowToPlay = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MainMenuViewController__MenuButton_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MainMenuViewController__MenuButton_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SoloFreePlay offset 0
static GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton const SoloFreePlay;

/// @brief Field Party offset 0
static GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton const Party;

/// @brief Field BeatmapEditor offset 0
static GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton const BeatmapEditor;

/// @brief Field SoloCampaign offset 0
static GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton const SoloCampaign;

/// @brief Field FloorAdjust offset 0
static GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton const FloorAdjust;

/// @brief Field Quit offset 0
static GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton const Quit;

/// @brief Field Multiplayer offset 0
static GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton const Multiplayer;

/// @brief Field Options offset 0
static GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton const Options;

/// @brief Field HowToPlay offset 0
static GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton const HowToPlay;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MainMenuViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5786))
// CS Name: MainMenuViewController
class CORDL_TYPE MainMenuViewController : public HMUI::ViewController {
public:
// Declarations
using MenuButton = GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~MainMenuViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainMenuViewController", modifiers: " const&", def_value: None }]
constexpr MainMenuViewController(MainMenuViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainMenuViewController", modifiers: "&&", def_value: None }]
constexpr MainMenuViewController(MainMenuViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainMenuViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr MainMenuViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainMenuViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainMenuViewController& operator=(MainMenuViewController&& o) noexcept = default;
  constexpr MainMenuViewController& operator=(MainMenuViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__soloButton, put=__set__soloButton))  _soloButton;

constexpr void __set__soloButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__soloButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__partyButton, put=__set__partyButton))  _partyButton;

constexpr void __set__partyButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__partyButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__campaignButton, put=__set__campaignButton))  _campaignButton;

constexpr void __set__campaignButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__campaignButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__quitButton, put=__set__quitButton))  _quitButton;

constexpr void __set__quitButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__quitButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__howToPlayButton, put=__set__howToPlayButton))  _howToPlayButton;

constexpr void __set__howToPlayButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__howToPlayButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__beatmapEditorButton, put=__set__beatmapEditorButton))  _beatmapEditorButton;

constexpr void __set__beatmapEditorButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__beatmapEditorButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__multiplayerButton, put=__set__multiplayerButton))  _multiplayerButton;

constexpr void __set__multiplayerButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__multiplayerButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__optionsButton, put=__set__optionsButton))  _optionsButton;

constexpr void __set__optionsButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__optionsButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__musicPackPromoButton, put=__set__musicPackPromoButton))  _musicPackPromoButton;

constexpr void __set__musicPackPromoButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__musicPackPromoButton() const;

 GlobalNamespace::MusicPackPromoBanner __declspec(property(get=__get__musicPackPromoBanner, put=__set__musicPackPromoBanner))  _musicPackPromoBanner;

constexpr void __set__musicPackPromoBanner(GlobalNamespace::MusicPackPromoBanner value) ;

constexpr GlobalNamespace::MusicPackPromoBanner __get__musicPackPromoBanner() const;

 GlobalNamespace::DlcPromoPanelModel __declspec(property(get=__get__dlcPromoPanelModel, put=__set__dlcPromoPanelModel))  _dlcPromoPanelModel;

constexpr void __set__dlcPromoPanelModel(GlobalNamespace::DlcPromoPanelModel value) ;

constexpr GlobalNamespace::DlcPromoPanelModel __get__dlcPromoPanelModel() const;

 GlobalNamespace::AppStaticSettingsSO __declspec(property(get=__get__appStaticSettings, put=__set__appStaticSettings))  _appStaticSettings;

constexpr void __set__appStaticSettings(GlobalNamespace::AppStaticSettingsSO value) ;

constexpr GlobalNamespace::AppStaticSettingsSO __get__appStaticSettings() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton> value) ;

constexpr System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton> __get_didFinishEvent() const;

 System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get_musicPackPromoButtonWasPressedEvent, put=__set_musicPackPromoButtonWasPressedEvent))  musicPackPromoButtonWasPressedEvent;

constexpr void __set_musicPackPromoButtonWasPressedEvent(System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> __get_musicPackPromoButtonWasPressedEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x2171da4 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton> value) ;

/// @brief Method remove_didFinishEvent addr 0x2171e54 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController,GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton> value) ;

/// @brief Method add_musicPackPromoButtonWasPressedEvent addr 0x2171f04 size 0xb0 virtual false final false
 void add_musicPackPromoButtonWasPressedEvent(System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> value) ;

/// @brief Method remove_musicPackPromoButtonWasPressedEvent addr 0x2171fb4 size 0xb0 virtual false final false
 void remove_musicPackPromoButtonWasPressedEvent(System::Action_2<GlobalNamespace::IBeatmapLevelPack,GlobalNamespace::IPreviewBeatmapLevel> value) ;

/// @brief Method DidActivate addr 0x2172064 size 0x528 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method PackPromoButtonWasPressed addr 0x217258c size 0x5c virtual false final false
 void PackPromoButtonWasPressed() ;

/// @brief Method HandleMenuButton addr 0x21725e8 size 0x1b0 virtual false final false
 void HandleMenuButton(GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton menuButton) ;

static GlobalNamespace::MainMenuViewController New_ctor() ;

/// @brief Method .ctor addr 0x2172798 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__20_0 addr 0x21727a0 size 0x8 virtual false final false
 void _DidActivate_b__20_0() ;

/// @brief Method <DidActivate>b__20_1 addr 0x21727a8 size 0x8 virtual false final false
 void _DidActivate_b__20_1() ;

/// @brief Method <DidActivate>b__20_2 addr 0x21727b0 size 0x8 virtual false final false
 void _DidActivate_b__20_2() ;

/// @brief Method <DidActivate>b__20_3 addr 0x21727b8 size 0x8 virtual false final false
 void _DidActivate_b__20_3() ;

/// @brief Method <DidActivate>b__20_4 addr 0x21727c0 size 0x8 virtual false final false
 void _DidActivate_b__20_4() ;

/// @brief Method <DidActivate>b__20_5 addr 0x21727c8 size 0x8 virtual false final false
 void _DidActivate_b__20_5() ;

/// @brief Method <DidActivate>b__20_6 addr 0x21727d0 size 0x8 virtual false final false
 void _DidActivate_b__20_6() ;

/// @brief Method <DidActivate>b__20_7 addr 0x21727d8 size 0x8 virtual false final false
 void _DidActivate_b__20_7() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MainMenuViewController__MenuButton, "", "MainMenuViewController/MenuButton");
NEED_NO_BOX(GlobalNamespace::MainMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuViewController, "", "MainMenuViewController");
