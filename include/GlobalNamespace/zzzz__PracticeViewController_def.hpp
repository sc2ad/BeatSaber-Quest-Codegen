#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cmath>
namespace HMUI {
class TimeSlider;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class RangeValuesTextSlider;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class PercentSlider;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
// Forward declare root types
namespace GlobalNamespace {
class PracticeViewController;
}
// Type: ::PracticeViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5827))
// CS Name: PracticeViewController
class CORDL_TYPE PracticeViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~PracticeViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PracticeViewController", modifiers: " const&", def_value: None }]
constexpr PracticeViewController(PracticeViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PracticeViewController", modifiers: "&&", def_value: None }]
constexpr PracticeViewController(PracticeViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PracticeViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr PracticeViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PracticeViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PracticeViewController& operator=(PracticeViewController&& o) noexcept = default;
  constexpr PracticeViewController& operator=(PracticeViewController const& o) noexcept = default;
                


// Fields

 HMUI::TimeSlider __declspec(property(get=__get__songStartSlider, put=__set__songStartSlider))  _songStartSlider;

constexpr void __set__songStartSlider(HMUI::TimeSlider value) ;

constexpr HMUI::TimeSlider __get__songStartSlider() const;

 HMUI::PercentSlider __declspec(property(get=__get__speedSlider, put=__set__speedSlider))  _speedSlider;

constexpr void __set__speedSlider(HMUI::PercentSlider value) ;

constexpr HMUI::PercentSlider __get__speedSlider() const;

 GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get__levelBar() const;

 UnityEngine::UI::Button __declspec(property(get=__get__playButton, put=__set__playButton))  _playButton;

constexpr void __set__playButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__playButton() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::SongPreviewPlayer __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer))  _songPreviewPlayer;

constexpr void __set__songPreviewPlayer(GlobalNamespace::SongPreviewPlayer value) ;

constexpr GlobalNamespace::SongPreviewPlayer __get__songPreviewPlayer() const;

 GlobalNamespace::PerceivedLoudnessPerLevelModel __declspec(property(get=__get__perceivedLoudnessPerLevelModel, put=__set__perceivedLoudnessPerLevelModel))  _perceivedLoudnessPerLevelModel;

constexpr void __set__perceivedLoudnessPerLevelModel(GlobalNamespace::PerceivedLoudnessPerLevelModel value) ;

constexpr GlobalNamespace::PerceivedLoudnessPerLevelModel __get__perceivedLoudnessPerLevelModel() const;

/// @brief Field kWaitBeforePlayPreviewAfterPreviewStartValueChanged offset 0
static constexpr float_t  kWaitBeforePlayPreviewAfterPreviewStartValueChanged{1};

/// @brief Field kMinValueChangeToInstantPlayPreview offset 0
static constexpr float_t  kMinValueChangeToInstantPlayPreview{3};

 System::Action __declspec(property(get=__get_didPressPlayButtonEvent, put=__set_didPressPlayButtonEvent))  didPressPlayButtonEvent;

constexpr void __set_didPressPlayButtonEvent(System::Action value) ;

constexpr System::Action __get_didPressPlayButtonEvent() const;

 GlobalNamespace::PracticeSettings __declspec(property(get=__get__practiceSettings, put=__set__practiceSettings))  _practiceSettings;

constexpr void __set__practiceSettings(GlobalNamespace::PracticeSettings value) ;

constexpr GlobalNamespace::PracticeSettings __get__practiceSettings() const;

 float_t __declspec(property(get=__get__currentPlayingStartTime, put=__set__currentPlayingStartTime))  _currentPlayingStartTime;

constexpr void __set__currentPlayingStartTime(float_t value) ;

constexpr float_t __get__currentPlayingStartTime() const;

 float_t __declspec(property(get=__get__maxStartSongTime, put=__set__maxStartSongTime))  _maxStartSongTime;

constexpr void __set__maxStartSongTime(float_t value) ;

constexpr float_t __get__maxStartSongTime() const;

 GlobalNamespace::IBeatmapLevel __declspec(property(get=__get__level, put=__set__level))  _level;

constexpr void __set__level(GlobalNamespace::IBeatmapLevel value) ;

constexpr GlobalNamespace::IBeatmapLevel __get__level() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__beatmapDifficulty, put=__set__beatmapDifficulty))  _beatmapDifficulty;

constexpr void __set__beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__beatmapDifficulty() const;


// Properties

 GlobalNamespace::PracticeSettings __declspec(property(get=get_practiceSettings))  practiceSettings;


// Methods

/// @brief Method add_didPressPlayButtonEvent addr 0x217dd90 size 0x9c virtual false final false
 void add_didPressPlayButtonEvent(System::Action value) ;

/// @brief Method remove_didPressPlayButtonEvent addr 0x217de2c size 0x9c virtual false final false
 void remove_didPressPlayButtonEvent(System::Action value) ;

/// @brief Method get_practiceSettings addr 0x217dec8 size 0x8 virtual false final false
 GlobalNamespace::PracticeSettings get_practiceSettings() ;

/// @brief Method Init addr 0x217ded0 size 0x1c4 virtual false final false
 void Init(GlobalNamespace::IBeatmapLevel level, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty) ;

/// @brief Method DidActivate addr 0x217e094 size 0x188 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x217e264 size 0xf8 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method PlayPreview addr 0x217e35c size 0x1f0 virtual false final false
 void PlayPreview() ;

/// @brief Method RefreshUI addr 0x217e21c size 0x48 virtual false final false
 void RefreshUI() ;

/// @brief Method HandleSpeedSliderValueDidChange addr 0x217e54c size 0x1c virtual false final false
 void HandleSpeedSliderValueDidChange(HMUI::RangeValuesTextSlider slider, float_t value) ;

/// @brief Method HandleSongStartSliderValueDidChange addr 0x217e568 size 0x38 virtual false final false
 void HandleSongStartSliderValueDidChange(HMUI::RangeValuesTextSlider slider, float_t value) ;

/// @brief Method PlayButtonPressed addr 0x217e5a0 size 0x48 virtual false final false
 void PlayButtonPressed() ;

static GlobalNamespace::PracticeViewController New_ctor() ;

/// @brief Method .ctor addr 0x217e5e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PracticeViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PracticeViewController, "", "PracticeViewController");
