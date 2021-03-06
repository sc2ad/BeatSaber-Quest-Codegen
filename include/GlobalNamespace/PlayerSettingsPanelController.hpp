// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IRefreshable
#include "GlobalNamespace/IRefreshable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeightSettingsController
  class PlayerHeightSettingsController;
  // Forward declaring type: FormattedFloatListSettingsController
  class FormattedFloatListSettingsController;
  // Forward declaring type: NoteJumpStartBeatOffsetDropdown
  class NoteJumpStartBeatOffsetDropdown;
  // Forward declaring type: EnvironmentEffectsFilterPresetDropdown
  class EnvironmentEffectsFilterPresetDropdown;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xAA
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSettingsPanelController
  class PlayerSettingsPanelController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IRefreshable*/ {
    public:
    // Nested type: GlobalNamespace::PlayerSettingsPanelController::PlayerSettingsPanelLayout
    struct PlayerSettingsPanelLayout;
    // private UnityEngine.UI.Toggle _leftHandedToggle
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Toggle* leftHandedToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _reduceDebrisToggle
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Toggle* reduceDebrisToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _noTextsAndHudsToggle
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Toggle* noTextsAndHudsToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _advanceHudToggle
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Toggle* advanceHudToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _autoRestartToggle
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Toggle* autoRestartToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private PlayerHeightSettingsController _playerHeightSettingsController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::PlayerHeightSettingsController* playerHeightSettingsController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeightSettingsController*) == 0x8);
    // private UnityEngine.UI.Toggle _automaticPlayerHeightToggle
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::UI::Toggle* automaticPlayerHeightToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private FormattedFloatListSettingsController _sfxVolumeSettingsController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::FormattedFloatListSettingsController* sfxVolumeSettingsController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FormattedFloatListSettingsController*) == 0x8);
    // private FormattedFloatListSettingsController _saberTrailIntensitySettingsController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::FormattedFloatListSettingsController* saberTrailIntensitySettingsController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FormattedFloatListSettingsController*) == 0x8);
    // private NoteJumpStartBeatOffsetDropdown _noteJumpStartBeatOffsetDropdown
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::NoteJumpStartBeatOffsetDropdown* noteJumpStartBeatOffsetDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteJumpStartBeatOffsetDropdown*) == 0x8);
    // private EnvironmentEffectsFilterPresetDropdown _environmentEffectsFilterDefaultPresetDropdown
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* environmentEffectsFilterDefaultPresetDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*) == 0x8);
    // private EnvironmentEffectsFilterPresetDropdown _environmentEffectsFilterExpertPlusPresetDropdown
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* environmentEffectsFilterExpertPlusPresetDropdown;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*) == 0x8);
    // private UnityEngine.UI.Toggle _hideNoteSpawnEffectToggle
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Toggle* hideNoteSpawnEffectToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _adaptiveSfxToggle
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Toggle* adaptiveSfxToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // [SpaceAttribute] Offset: 0xE24CD4
    // private UnityEngine.CanvasGroup _singleplayerOnlyCanvasGroup
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::CanvasGroup* singleplayerOnlyCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE24D0C
    // private System.Action didChangePlayerSettingsEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* didChangePlayerSettingsEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private PlayerSpecificSettings _playerSpecificSettings
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xA0
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private System.Boolean _dirty
    // Size: 0x1
    // Offset: 0xA8
    bool dirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _refreshed
    // Size: 0x1
    // Offset: 0xA9
    bool refreshed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerSettingsPanelController
    PlayerSettingsPanelController(UnityEngine::UI::Toggle* leftHandedToggle_ = {}, UnityEngine::UI::Toggle* reduceDebrisToggle_ = {}, UnityEngine::UI::Toggle* noTextsAndHudsToggle_ = {}, UnityEngine::UI::Toggle* advanceHudToggle_ = {}, UnityEngine::UI::Toggle* autoRestartToggle_ = {}, GlobalNamespace::PlayerHeightSettingsController* playerHeightSettingsController_ = {}, UnityEngine::UI::Toggle* automaticPlayerHeightToggle_ = {}, GlobalNamespace::FormattedFloatListSettingsController* sfxVolumeSettingsController_ = {}, GlobalNamespace::FormattedFloatListSettingsController* saberTrailIntensitySettingsController_ = {}, GlobalNamespace::NoteJumpStartBeatOffsetDropdown* noteJumpStartBeatOffsetDropdown_ = {}, GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* environmentEffectsFilterDefaultPresetDropdown_ = {}, GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* environmentEffectsFilterExpertPlusPresetDropdown_ = {}, UnityEngine::UI::Toggle* hideNoteSpawnEffectToggle_ = {}, UnityEngine::UI::Toggle* adaptiveSfxToggle_ = {}, UnityEngine::CanvasGroup* singleplayerOnlyCanvasGroup_ = {}, System::Action* didChangePlayerSettingsEvent_ = {}, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, bool dirty_ = {}, bool refreshed_ = {}) noexcept : leftHandedToggle{leftHandedToggle_}, reduceDebrisToggle{reduceDebrisToggle_}, noTextsAndHudsToggle{noTextsAndHudsToggle_}, advanceHudToggle{advanceHudToggle_}, autoRestartToggle{autoRestartToggle_}, playerHeightSettingsController{playerHeightSettingsController_}, automaticPlayerHeightToggle{automaticPlayerHeightToggle_}, sfxVolumeSettingsController{sfxVolumeSettingsController_}, saberTrailIntensitySettingsController{saberTrailIntensitySettingsController_}, noteJumpStartBeatOffsetDropdown{noteJumpStartBeatOffsetDropdown_}, environmentEffectsFilterDefaultPresetDropdown{environmentEffectsFilterDefaultPresetDropdown_}, environmentEffectsFilterExpertPlusPresetDropdown{environmentEffectsFilterExpertPlusPresetDropdown_}, hideNoteSpawnEffectToggle{hideNoteSpawnEffectToggle_}, adaptiveSfxToggle{adaptiveSfxToggle_}, singleplayerOnlyCanvasGroup{singleplayerOnlyCanvasGroup_}, didChangePlayerSettingsEvent{didChangePlayerSettingsEvent_}, playerSpecificSettings{playerSpecificSettings_}, toggleBinder{toggleBinder_}, dirty{dirty_}, refreshed{refreshed_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRefreshable
    operator GlobalNamespace::IRefreshable() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRefreshable*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kDisabledSectionAlpha
    static constexpr const float kDisabledSectionAlpha = 0.2;
    // Get static field: static private System.Single kDisabledSectionAlpha
    static float _get_kDisabledSectionAlpha();
    // Set static field: static private System.Single kDisabledSectionAlpha
    static void _set_kDisabledSectionAlpha(float value);
    // public System.Void add_didChangePlayerSettingsEvent(System.Action value)
    // Offset: 0x1059458
    void add_didChangePlayerSettingsEvent(System::Action* value);
    // public System.Void remove_didChangePlayerSettingsEvent(System.Action value)
    // Offset: 0x10594FC
    void remove_didChangePlayerSettingsEvent(System::Action* value);
    // public PlayerSpecificSettings get_playerSpecificSettings()
    // Offset: 0x1058F5C
    GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();
    // public System.Void SetData(PlayerSpecificSettings playerSpecificSettings)
    // Offset: 0x1058CA0
    void SetData(GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);
    // public System.Void SetLayout(PlayerSettingsPanelController/PlayerSettingsPanelLayout layout)
    // Offset: 0x1058C70
    void SetLayout(GlobalNamespace::PlayerSettingsPanelController::PlayerSettingsPanelLayout layout);
    // protected System.Void Awake()
    // Offset: 0x105960C
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x1059A34
    void OnDestroy();
    // public System.Void Refresh()
    // Offset: 0x1058CE4
    void Refresh();
    // private System.Void HandleSFXVolumeSettingsControllerValueDidChange(FormattedFloatListSettingsController settingsController, System.Single value)
    // Offset: 0x1059D0C
    void HandleSFXVolumeSettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController* settingsController, float value);
    // private System.Void HandleSaberTrailIntensitySettingsControllerValueDidChange(FormattedFloatListSettingsController settingsController, System.Single value)
    // Offset: 0x1059D4C
    void HandleSaberTrailIntensitySettingsControllerValueDidChange(GlobalNamespace::FormattedFloatListSettingsController* settingsController, float value);
    // private System.Void HandlePlayerHeightSettingsControllerValueDidChange(System.Single value)
    // Offset: 0x1059D6C
    void HandlePlayerHeightSettingsControllerValueDidChange(float value);
    // private System.Void HandleNoteJumpStartBeatOffsetPositionSelected(System.Int32 idx)
    // Offset: 0x1059D8C
    void HandleNoteJumpStartBeatOffsetPositionSelected(int idx);
    // private System.Void HandleLightReductionAmountSelected(System.Int32 obj)
    // Offset: 0x1059DAC
    void HandleLightReductionAmountSelected(int obj);
    // private System.Void HandleAdvancedHudToggleChanged(System.Boolean on)
    // Offset: 0x1059DCC
    void HandleAdvancedHudToggleChanged(bool on);
    // private System.Void HandleNoTextsAndHudsToggleChanged(System.Boolean on)
    // Offset: 0x1059E24
    void HandleNoTextsAndHudsToggleChanged(bool on);
    // private System.Void SetIsDirty()
    // Offset: 0x1059D2C
    void SetIsDirty();
    // private System.Void SetSection(UnityEngine.CanvasGroup sectionCanvasGroup, System.Boolean block)
    // Offset: 0x10595A0
    void SetSection(UnityEngine::CanvasGroup* sectionCanvasGroup, bool block);
    // private System.Void <Awake>b__28_0(System.Boolean on)
    // Offset: 0x1059E84
    void $Awake$b__28_0(bool on);
    // private System.Void <Awake>b__28_1(System.Boolean on)
    // Offset: 0x1059EA4
    void $Awake$b__28_1(bool on);
    // private System.Void <Awake>b__28_2(System.Boolean on)
    // Offset: 0x1059EC4
    void $Awake$b__28_2(bool on);
    // private System.Void <Awake>b__28_3(System.Boolean on)
    // Offset: 0x1059EE4
    void $Awake$b__28_3(bool on);
    // private System.Void <Awake>b__28_4(System.Boolean on)
    // Offset: 0x1059F04
    void $Awake$b__28_4(bool on);
    // private System.Void <Awake>b__28_5(System.Boolean on)
    // Offset: 0x1059F24
    void $Awake$b__28_5(bool on);
    // public System.Void .ctor()
    // Offset: 0x1059E7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSettingsPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSettingsPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSettingsPanelController*, creationType>()));
    }
  }; // PlayerSettingsPanelController
  #pragma pack(pop)
  static check_size<sizeof(PlayerSettingsPanelController), 169 + sizeof(bool)> __GlobalNamespace_PlayerSettingsPanelControllerSizeCheck;
  static_assert(sizeof(PlayerSettingsPanelController) == 0xAA);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSettingsPanelController*, "", "PlayerSettingsPanelController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent
// Il2CppName: add_didChangePlayerSettingsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(System::Action*)>(&GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "add_didChangePlayerSettingsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent
// Il2CppName: remove_didChangePlayerSettingsEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(System::Action*)>(&GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "remove_didChangePlayerSettingsEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings
// Il2CppName: get_playerSpecificSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerSpecificSettings* (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "get_playerSpecificSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::PlayerSpecificSettings*)>(&GlobalNamespace::PlayerSettingsPanelController::SetData)> {
  static const MethodInfo* get() {
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerSpecificSettings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::SetLayout
// Il2CppName: SetLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::PlayerSettingsPanelController::PlayerSettingsPanelLayout)>(&GlobalNamespace::PlayerSettingsPanelController::SetLayout)> {
  static const MethodInfo* get() {
    static auto* layout = &::il2cpp_utils::GetClassFromName("", "PlayerSettingsPanelController/PlayerSettingsPanelLayout")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "SetLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange
// Il2CppName: HandleSFXVolumeSettingsControllerValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::FormattedFloatListSettingsController*, float)>(&GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange)> {
  static const MethodInfo* get() {
    static auto* settingsController = &::il2cpp_utils::GetClassFromName("", "FormattedFloatListSettingsController")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "HandleSFXVolumeSettingsControllerValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settingsController, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange
// Il2CppName: HandleSaberTrailIntensitySettingsControllerValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(GlobalNamespace::FormattedFloatListSettingsController*, float)>(&GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange)> {
  static const MethodInfo* get() {
    static auto* settingsController = &::il2cpp_utils::GetClassFromName("", "FormattedFloatListSettingsController")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "HandleSaberTrailIntensitySettingsControllerValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settingsController, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange
// Il2CppName: HandlePlayerHeightSettingsControllerValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(float)>(&GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "HandlePlayerHeightSettingsControllerValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected
// Il2CppName: HandleNoteJumpStartBeatOffsetPositionSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(int)>(&GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "HandleNoteJumpStartBeatOffsetPositionSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected
// Il2CppName: HandleLightReductionAmountSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(int)>(&GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "HandleLightReductionAmountSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged
// Il2CppName: HandleAdvancedHudToggleChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "HandleAdvancedHudToggleChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged
// Il2CppName: HandleNoTextsAndHudsToggleChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "HandleNoTextsAndHudsToggleChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::SetIsDirty
// Il2CppName: SetIsDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)()>(&GlobalNamespace::PlayerSettingsPanelController::SetIsDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "SetIsDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::SetSection
// Il2CppName: SetSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(UnityEngine::CanvasGroup*, bool)>(&GlobalNamespace::PlayerSettingsPanelController::SetSection)> {
  static const MethodInfo* get() {
    static auto* sectionCanvasGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "CanvasGroup")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "SetSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sectionCanvasGroup, block});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_0
// Il2CppName: <Awake>b__28_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_0)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "<Awake>b__28_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_1
// Il2CppName: <Awake>b__28_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_1)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "<Awake>b__28_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_2
// Il2CppName: <Awake>b__28_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_2)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "<Awake>b__28_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_3
// Il2CppName: <Awake>b__28_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_3)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "<Awake>b__28_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_4
// Il2CppName: <Awake>b__28_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_4)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "<Awake>b__28_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_5
// Il2CppName: <Awake>b__28_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&GlobalNamespace::PlayerSettingsPanelController::$Awake$b__28_5)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSettingsPanelController*), "<Awake>b__28_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSettingsPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
