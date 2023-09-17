#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace {
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
// Forward declare root types
namespace GlobalNamespace {
class JoinQuickPlayViewController;
}
// Type: ::JoinQuickPlayViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5811))
// CS Name: JoinQuickPlayViewController
class CORDL_TYPE JoinQuickPlayViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~JoinQuickPlayViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "JoinQuickPlayViewController", modifiers: " const&", def_value: None }]
constexpr JoinQuickPlayViewController(JoinQuickPlayViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JoinQuickPlayViewController", modifiers: "&&", def_value: None }]
constexpr JoinQuickPlayViewController(JoinQuickPlayViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JoinQuickPlayViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr JoinQuickPlayViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JoinQuickPlayViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JoinQuickPlayViewController& operator=(JoinQuickPlayViewController&& o) noexcept = default;
  constexpr JoinQuickPlayViewController& operator=(JoinQuickPlayViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapDifficultyDropdown __declspec(property(get=__get__beatmapDifficultyDropdown, put=__set__beatmapDifficultyDropdown))  _beatmapDifficultyDropdown;

constexpr void __set__beatmapDifficultyDropdown(::GlobalNamespace::BeatmapDifficultyDropdown value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyDropdown __get__beatmapDifficultyDropdown() const;

 ::GlobalNamespace::QuickPlaySongPacksDropdown __declspec(property(get=__get__songPacksDropdown, put=__set__songPacksDropdown))  _songPacksDropdown;

constexpr void __set__songPacksDropdown(::GlobalNamespace::QuickPlaySongPacksDropdown value) ;

constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown __get__songPacksDropdown() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__levelSelectionToggle, put=__set__levelSelectionToggle))  _levelSelectionToggle;

constexpr void __set__levelSelectionToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__levelSelectionToggle() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__joinButton, put=__set__joinButton))  _joinButton;

constexpr void __set__joinButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__joinButton() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__cancelJoinButton, put=__set__cancelJoinButton))  _cancelJoinButton;

constexpr void __set__cancelJoinButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__cancelJoinButton() const;

 ::System::Action_1<bool> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<bool> value) ;

constexpr ::System::Action_1<bool> __get_didFinishEvent() const;

 ::GlobalNamespace::MultiplayerModeSettings __declspec(property(get=__get__multiplayerModeSettings, put=__set__multiplayerModeSettings))  _multiplayerModeSettings;

constexpr void __set__multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings value) ;

constexpr ::GlobalNamespace::MultiplayerModeSettings __get__multiplayerModeSettings() const;


// Properties

 ::GlobalNamespace::MultiplayerModeSettings __declspec(property(get=get_multiplayerModeSettings))  multiplayerModeSettings;


// Methods

/// @brief Method add_didFinishEvent addr 0x2176cb0 size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_1<bool> value) ;

/// @brief Method remove_didFinishEvent addr 0x2176d60 size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_1<bool> value) ;

/// @brief Method get_multiplayerModeSettings addr 0x2176e10 size 0x8 virtual false final false
 ::GlobalNamespace::MultiplayerModeSettings get_multiplayerModeSettings() ;

/// @brief Method Setup addr 0x2176e18 size 0x90 virtual false final false
 void Setup(::GlobalNamespace::QuickPlaySetupData quickPlaySetupData, ::GlobalNamespace::MultiplayerModeSettings multiplayerModeSettings) ;

/// @brief Method DidActivate addr 0x2176ea8 size 0x128 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method ButtonPressed addr 0x2176fd0 size 0x8c virtual false final false
 void ButtonPressed(bool success) ;

// Ctor Parameters []
explicit JoinQuickPlayViewController() ;

/// @brief Method .ctor addr 0x217705c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__12_0 addr 0x2177064 size 0x8 virtual false final false
 void _DidActivate_b__12_0() ;

/// @brief Method <DidActivate>b__12_1 addr 0x217706c size 0x8 virtual false final false
 void _DidActivate_b__12_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::JoinQuickPlayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JoinQuickPlayViewController, "", "JoinQuickPlayViewController");
