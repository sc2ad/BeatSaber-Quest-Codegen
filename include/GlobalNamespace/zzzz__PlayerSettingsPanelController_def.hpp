#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class ArcVisibilityTypeSettingsDropdown;
}
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace GlobalNamespace {
class PlayerHeightSettingsController;
}
namespace GlobalNamespace {
class NoteJumpStartBeatOffsetDropdown;
}
namespace GlobalNamespace {
class EventBinder;
}
namespace GlobalNamespace {
class EnvironmentEffectsFilterPresetDropdown;
}
namespace GlobalNamespace {
class NoteJumpDurationTypeSettingsDropdown;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace HMUI {
class ToggleBinder;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout;
}
namespace GlobalNamespace {
class PlayerSettingsPanelController;
}
// Type: ::PlayerSettingsPanelLayout
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5736))
// CS Name: PlayerSettingsPanelController::PlayerSettingsPanelLayout
struct CORDL_TYPE GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout(GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout const&) = default;
                    constexpr GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout(GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout&&) = default;
                    constexpr GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout& operator=(GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout& operator=(GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout_Unwrapped : int32_t {
__All = 0,
__Singleplayer = 1,
__Multiplayer = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All offset 0
static GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout const All;

/// @brief Field Singleplayer offset 0
static GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout const Singleplayer;

/// @brief Field Multiplayer offset 0
static GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout const Multiplayer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PlayerSettingsPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5737))
// CS Name: PlayerSettingsPanelController
class CORDL_TYPE PlayerSettingsPanelController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using PlayerSettingsPanelLayout = GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout;

/// @brief Convert operator to GlobalNamespace::IRefreshable
constexpr operator  GlobalNamespace::IRefreshable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x108};

virtual ~PlayerSettingsPanelController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSettingsPanelController", modifiers: " const&", def_value: None }]
constexpr PlayerSettingsPanelController(PlayerSettingsPanelController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSettingsPanelController", modifiers: "&&", def_value: None }]
constexpr PlayerSettingsPanelController(PlayerSettingsPanelController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerSettingsPanelController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerSettingsPanelController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerSettingsPanelController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerSettingsPanelController& operator=(PlayerSettingsPanelController&& o) noexcept = default;
  constexpr PlayerSettingsPanelController& operator=(PlayerSettingsPanelController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Toggle __declspec(property(get=__get__leftHandedToggle, put=__set__leftHandedToggle))  _leftHandedToggle;

constexpr void __set__leftHandedToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__leftHandedToggle() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__reduceDebrisToggle, put=__set__reduceDebrisToggle))  _reduceDebrisToggle;

constexpr void __set__reduceDebrisToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__reduceDebrisToggle() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__noTextsAndHudsToggle, put=__set__noTextsAndHudsToggle))  _noTextsAndHudsToggle;

constexpr void __set__noTextsAndHudsToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__noTextsAndHudsToggle() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__advanceHudToggle, put=__set__advanceHudToggle))  _advanceHudToggle;

constexpr void __set__advanceHudToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__advanceHudToggle() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__autoRestartToggle, put=__set__autoRestartToggle))  _autoRestartToggle;

constexpr void __set__autoRestartToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__autoRestartToggle() const;

 GlobalNamespace::PlayerHeightSettingsController __declspec(property(get=__get__playerHeightSettingsController, put=__set__playerHeightSettingsController))  _playerHeightSettingsController;

constexpr void __set__playerHeightSettingsController(GlobalNamespace::PlayerHeightSettingsController value) ;

constexpr GlobalNamespace::PlayerHeightSettingsController __get__playerHeightSettingsController() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__playerHeightSettingsCanvasGroup, put=__set__playerHeightSettingsCanvasGroup))  _playerHeightSettingsCanvasGroup;

constexpr void __set__playerHeightSettingsCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__playerHeightSettingsCanvasGroup() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__automaticPlayerHeightToggle, put=__set__automaticPlayerHeightToggle))  _automaticPlayerHeightToggle;

constexpr void __set__automaticPlayerHeightToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__automaticPlayerHeightToggle() const;

 GlobalNamespace::FormattedFloatListSettingsController __declspec(property(get=__get__sfxVolumeSettingsController, put=__set__sfxVolumeSettingsController))  _sfxVolumeSettingsController;

constexpr void __set__sfxVolumeSettingsController(GlobalNamespace::FormattedFloatListSettingsController value) ;

constexpr GlobalNamespace::FormattedFloatListSettingsController __get__sfxVolumeSettingsController() const;

 GlobalNamespace::FormattedFloatListSettingsController __declspec(property(get=__get__saberTrailIntensitySettingsController, put=__set__saberTrailIntensitySettingsController))  _saberTrailIntensitySettingsController;

constexpr void __set__saberTrailIntensitySettingsController(GlobalNamespace::FormattedFloatListSettingsController value) ;

constexpr GlobalNamespace::FormattedFloatListSettingsController __get__saberTrailIntensitySettingsController() const;

 GlobalNamespace::NoteJumpDurationTypeSettingsDropdown __declspec(property(get=__get__noteJumpDurationTypeSettingsDropdown, put=__set__noteJumpDurationTypeSettingsDropdown))  _noteJumpDurationTypeSettingsDropdown;

constexpr void __set__noteJumpDurationTypeSettingsDropdown(GlobalNamespace::NoteJumpDurationTypeSettingsDropdown value) ;

constexpr GlobalNamespace::NoteJumpDurationTypeSettingsDropdown __get__noteJumpDurationTypeSettingsDropdown() const;

 GlobalNamespace::FormattedFloatListSettingsController __declspec(property(get=__get__noteJumpFixedDurationSettingsController, put=__set__noteJumpFixedDurationSettingsController))  _noteJumpFixedDurationSettingsController;

constexpr void __set__noteJumpFixedDurationSettingsController(GlobalNamespace::FormattedFloatListSettingsController value) ;

constexpr GlobalNamespace::FormattedFloatListSettingsController __get__noteJumpFixedDurationSettingsController() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__noteJumpFixedDurationSettingsCanvasGroup, put=__set__noteJumpFixedDurationSettingsCanvasGroup))  _noteJumpFixedDurationSettingsCanvasGroup;

constexpr void __set__noteJumpFixedDurationSettingsCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__noteJumpFixedDurationSettingsCanvasGroup() const;

 GlobalNamespace::NoteJumpStartBeatOffsetDropdown __declspec(property(get=__get__noteJumpStartBeatOffsetDropdown, put=__set__noteJumpStartBeatOffsetDropdown))  _noteJumpStartBeatOffsetDropdown;

constexpr void __set__noteJumpStartBeatOffsetDropdown(GlobalNamespace::NoteJumpStartBeatOffsetDropdown value) ;

constexpr GlobalNamespace::NoteJumpStartBeatOffsetDropdown __get__noteJumpStartBeatOffsetDropdown() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__noteJumpStartBeatOffsetCanvasGroup, put=__set__noteJumpStartBeatOffsetCanvasGroup))  _noteJumpStartBeatOffsetCanvasGroup;

constexpr void __set__noteJumpStartBeatOffsetCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__noteJumpStartBeatOffsetCanvasGroup() const;

 GlobalNamespace::EnvironmentEffectsFilterPresetDropdown __declspec(property(get=__get__environmentEffectsFilterDefaultPresetDropdown, put=__set__environmentEffectsFilterDefaultPresetDropdown))  _environmentEffectsFilterDefaultPresetDropdown;

constexpr void __set__environmentEffectsFilterDefaultPresetDropdown(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown value) ;

constexpr GlobalNamespace::EnvironmentEffectsFilterPresetDropdown __get__environmentEffectsFilterDefaultPresetDropdown() const;

 GlobalNamespace::EnvironmentEffectsFilterPresetDropdown __declspec(property(get=__get__environmentEffectsFilterExpertPlusPresetDropdown, put=__set__environmentEffectsFilterExpertPlusPresetDropdown))  _environmentEffectsFilterExpertPlusPresetDropdown;

constexpr void __set__environmentEffectsFilterExpertPlusPresetDropdown(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown value) ;

constexpr GlobalNamespace::EnvironmentEffectsFilterPresetDropdown __get__environmentEffectsFilterExpertPlusPresetDropdown() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__hideNoteSpawnEffectToggle, put=__set__hideNoteSpawnEffectToggle))  _hideNoteSpawnEffectToggle;

constexpr void __set__hideNoteSpawnEffectToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__hideNoteSpawnEffectToggle() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__adaptiveSfxToggle, put=__set__adaptiveSfxToggle))  _adaptiveSfxToggle;

constexpr void __set__adaptiveSfxToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__adaptiveSfxToggle() const;

 GlobalNamespace::ArcVisibilityTypeSettingsDropdown __declspec(property(get=__get__arcsVisibilityTypeSettingsDropdown, put=__set__arcsVisibilityTypeSettingsDropdown))  _arcsVisibilityTypeSettingsDropdown;

constexpr void __set__arcsVisibilityTypeSettingsDropdown(GlobalNamespace::ArcVisibilityTypeSettingsDropdown value) ;

constexpr GlobalNamespace::ArcVisibilityTypeSettingsDropdown __get__arcsVisibilityTypeSettingsDropdown() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__arcHapticFeedbackCanvasGroup, put=__set__arcHapticFeedbackCanvasGroup))  _arcHapticFeedbackCanvasGroup;

constexpr void __set__arcHapticFeedbackCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__arcHapticFeedbackCanvasGroup() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__arcsHapticFeedbackToggle, put=__set__arcsHapticFeedbackToggle))  _arcsHapticFeedbackToggle;

constexpr void __set__arcsHapticFeedbackToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__arcsHapticFeedbackToggle() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__singleplayerOnlyCanvasGroup, put=__set__singleplayerOnlyCanvasGroup))  _singleplayerOnlyCanvasGroup;

constexpr void __set__singleplayerOnlyCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__singleplayerOnlyCanvasGroup() const;

 UnityEngine::GameObject __declspec(property(get=__get__arcVisibilityWarning, put=__set__arcVisibilityWarning))  _arcVisibilityWarning;

constexpr void __set__arcVisibilityWarning(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__arcVisibilityWarning() const;

 System::Action __declspec(property(get=__get_didChangePlayerSettingsEvent, put=__set_didChangePlayerSettingsEvent))  didChangePlayerSettingsEvent;

constexpr void __set_didChangePlayerSettingsEvent(System::Action value) ;

constexpr System::Action __get_didChangePlayerSettingsEvent() const;

/// @brief Field kDisabledSectionAlpha offset 0
static constexpr float_t  kDisabledSectionAlpha{0.2};

 GlobalNamespace::ArcVisibilityType __declspec(property(get=__get__currentArcType, put=__set__currentArcType))  _currentArcType;

constexpr void __set__currentArcType(GlobalNamespace::ArcVisibilityType value) ;

constexpr GlobalNamespace::ArcVisibilityType __get__currentArcType() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get__playerSpecificSettings, put=__set__playerSpecificSettings))  _playerSpecificSettings;

constexpr void __set__playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get__playerSpecificSettings() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;

 bool __declspec(property(get=__get__dirty, put=__set__dirty))  _dirty;

constexpr void __set__dirty(bool value) ;

constexpr bool __get__dirty() const;

 bool __declspec(property(get=__get__refreshed, put=__set__refreshed))  _refreshed;

constexpr void __set__refreshed(bool value) ;

constexpr bool __get__refreshed() const;

 GlobalNamespace::EventBinder __declspec(property(get=__get__eventBinder, put=__set__eventBinder))  _eventBinder;

constexpr void __set__eventBinder(GlobalNamespace::EventBinder value) ;

constexpr GlobalNamespace::EventBinder __get__eventBinder() const;


// Properties

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=get_playerSpecificSettings))  playerSpecificSettings;


// Methods

/// @brief Method add_didChangePlayerSettingsEvent addr 0x215d2b4 size 0x9c virtual false final false
 void add_didChangePlayerSettingsEvent(System::Action value) ;

/// @brief Method remove_didChangePlayerSettingsEvent addr 0x215e0b4 size 0x9c virtual false final false
 void remove_didChangePlayerSettingsEvent(System::Action value) ;

/// @brief Method get_playerSpecificSettings addr 0x215c4b4 size 0x3a0 virtual false final false
 GlobalNamespace::PlayerSpecificSettings get_playerSpecificSettings() ;

/// @brief Method SetData addr 0x215d134 size 0xc virtual false final false
 void SetData(GlobalNamespace::PlayerSpecificSettings playerSpecificSettings) ;

/// @brief Method SetLayout addr 0x215c9e4 size 0x24 virtual false final false
 void SetLayout(GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout layout) ;

/// @brief Method Awake addr 0x215e1b8 size 0x60 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x215e218 size 0x3d4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x215e5ec size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x215e624 size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method UnsubscribeAllUICallbacks addr 0x215e5f0 size 0x34 virtual false final false
 void UnsubscribeAllUICallbacks() ;

/// @brief Method Refresh addr 0x215dce4 size 0x2f8 virtual true final true
 void Refresh() ;

/// @brief Method HandleSFXVolumeSettingsControllerValueDidChange addr 0x215e744 size 0x24 virtual false final false
 void HandleSFXVolumeSettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController settingsController, float_t value) ;

/// @brief Method HandleArcVisibilityDropdownDidSelectCellWithIdx addr 0x215e78c size 0x60 virtual false final false
 void HandleArcVisibilityDropdownDidSelectCellWithIdx(int32_t idx, GlobalNamespace::ArcVisibilityType arcVisibilityType) ;

/// @brief Method HandleSaberTrailIntensitySettingsControllerValueDidChange addr 0x215e7ec size 0x24 virtual false final false
 void HandleSaberTrailIntensitySettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController settingsController, float_t value) ;

/// @brief Method HandlePlayerHeightSettingsControllerValueDidChange addr 0x215e810 size 0x24 virtual false final false
 void HandlePlayerHeightSettingsControllerValueDidChange(float_t value) ;

/// @brief Method HandleNoteJumpStartBeatOffsetPositionSelected addr 0x215e834 size 0x24 virtual false final false
 void HandleNoteJumpStartBeatOffsetPositionSelected(int32_t idx, float_t startBeatOffset) ;

/// @brief Method HandleLightReductionAmountSelected addr 0x215e858 size 0x24 virtual false final false
 void HandleLightReductionAmountSelected(int32_t obj, GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset) ;

/// @brief Method HandleAdvancedHudToggleChanged addr 0x215e87c size 0x50 virtual false final false
 void HandleAdvancedHudToggleChanged(bool on) ;

/// @brief Method HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx addr 0x215e8cc size 0x3c virtual false final false
 void HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx(int32_t idx, GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings) ;

/// @brief Method HandleNoteJumpFixedDurationSettingsControllerValueDidChange addr 0x215e908 size 0x24 virtual false final false
 void HandleNoteJumpFixedDurationSettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController formattedFloatListSettingsController, float_t value) ;

/// @brief Method HandleNoTextsAndHudsToggleChanged addr 0x215e92c size 0x50 virtual false final false
 void HandleNoTextsAndHudsToggleChanged(bool on) ;

/// @brief Method SetIsDirty addr 0x215e768 size 0x24 virtual false final false
 void SetIsDirty() ;

/// @brief Method RefreshNoteJumpUI addr 0x215e628 size 0x3c virtual false final false
 void RefreshNoteJumpUI(GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings) ;

/// @brief Method SetSectionDisabled addr 0x215e150 size 0x68 virtual false final false
 void SetSectionDisabled(UnityEngine::CanvasGroup sectionCanvasGroup, bool disable) ;

/// @brief Method RefreshArcsWarning addr 0x215e664 size 0xe0 virtual false final false
 void RefreshArcsWarning(GlobalNamespace::ArcVisibilityType arcVisibilityType, bool forceRebuild) ;

// Ctor Parameters []
explicit PlayerSettingsPanelController() ;

/// @brief Method .ctor addr 0x215e97c size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method <OnEnable>b__40_0 addr 0x215e9e4 size 0x24 virtual false final false
 void _OnEnable_b__40_0(bool on) ;

/// @brief Method <OnEnable>b__40_1 addr 0x215ea08 size 0x24 virtual false final false
 void _OnEnable_b__40_1(bool on) ;

/// @brief Method <OnEnable>b__40_2 addr 0x215ea2c size 0x24 virtual false final false
 void _OnEnable_b__40_2(bool on) ;

/// @brief Method <OnEnable>b__40_3 addr 0x215ea50 size 0x24 virtual false final false
 void _OnEnable_b__40_3(bool on) ;

/// @brief Method <OnEnable>b__40_4 addr 0x215ea74 size 0x24 virtual false final false
 void _OnEnable_b__40_4(bool on) ;

/// @brief Method <OnEnable>b__40_5 addr 0x215ea98 size 0x44 virtual false final false
 void _OnEnable_b__40_5(bool on) ;

/// @brief Method <OnEnable>b__40_6 addr 0x215eadc size 0x24 virtual false final false
 void _OnEnable_b__40_6(bool on) ;

/// @brief Method <OnEnable>b__40_7 addr 0x215eb00 size 0x39c virtual false final false
 void _OnEnable_b__40_7() ;

/// @brief Method <OnEnable>b__40_8 addr 0x215ee9c size 0x490 virtual false final false
 void _OnEnable_b__40_8() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PlayerSettingsPanelController__PlayerSettingsPanelLayout, "", "PlayerSettingsPanelController/PlayerSettingsPanelLayout");
NEED_NO_BOX(GlobalNamespace::PlayerSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSettingsPanelController, "", "PlayerSettingsPanelController");
