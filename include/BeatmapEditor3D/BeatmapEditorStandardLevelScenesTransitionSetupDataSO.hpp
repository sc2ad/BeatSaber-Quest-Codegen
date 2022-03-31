// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelScenesTransitionSetupDataSO
#include "GlobalNamespace/LevelScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: BeatmapEditor3D
namespace BeatmapEditor3D {
  // Forward declaring type: BeatmapEditorStandardLevelScenesTransitionSetupDataSO
  class BeatmapEditorStandardLevelScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, "BeatmapEditor3D", "BeatmapEditorStandardLevelScenesTransitionSetupDataSO");
// Type namespace: BeatmapEditor3D
namespace BeatmapEditor3D {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEditor3D.BeatmapEditorStandardLevelScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEditorStandardLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private SceneInfo _standardGameplaySceneInfo
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SceneInfo* standardGameplaySceneInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _beatmapEditorGameplaySceneInfo
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::SceneInfo* beatmapEditorGameplaySceneInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SceneInfo*) == 0x8);
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private System.Action`2<BeatmapEditor3D.BeatmapEditorStandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> didFinishEvent
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*) == 0x8);
    public:
    // Get instance field reference: private SceneInfo _standardGameplaySceneInfo
    ::GlobalNamespace::SceneInfo*& dyn__standardGameplaySceneInfo();
    // Get instance field reference: private SceneInfo _beatmapEditorGameplaySceneInfo
    ::GlobalNamespace::SceneInfo*& dyn__beatmapEditorGameplaySceneInfo();
    // Get instance field reference: private SceneInfo _gameCoreSceneInfo
    ::GlobalNamespace::SceneInfo*& dyn__gameCoreSceneInfo();
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    ::GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // Get instance field reference: private System.Action`2<BeatmapEditor3D.BeatmapEditorStandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> didFinishEvent
    ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`2<BeatmapEditor3D.BeatmapEditorStandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> value)
    // Offset: 0x14C61A4
    void add_didFinishEvent(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<BeatmapEditor3D.BeatmapEditorStandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> value)
    // Offset: 0x14C6248
    void remove_didFinishEvent(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* value);
    // public System.Void Init(IDifficultyBeatmap difficultyBeatmap, IPreviewBeatmapLevel previewBeatmapLevel, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.Boolean useFirstPersonFlyingController, System.Action beforeSceneSwitchCallback, System.Action`2<BeatmapEditor3D.BeatmapEditorStandardLevelScenesTransitionSetupDataSO,LevelCompletionResults> levelFinishedCallback)
    // Offset: 0x14C62EC
    void Init(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, bool useFirstPersonFlyingController, ::System::Action* beforeSceneSwitchCallback, ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);
    // public System.Void Finish(LevelCompletionResults levelCompletionResults)
    // Offset: 0x14C6AE0
    void Finish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0x14C6B58
    // Implemented from: LevelScenesTransitionSetupDataSO
    // Base method: System.Void LevelScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEditorStandardLevelScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // BeatmapEditor3D.BeatmapEditorStandardLevelScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEditorStandardLevelScenesTransitionSetupDataSO), 88 + sizeof(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*)> __BeatmapEditor3D_BeatmapEditorStandardLevelScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(BeatmapEditorStandardLevelScenesTransitionSetupDataSO) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::*)(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*)>(&BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("BeatmapEditor3D", "BeatmapEditorStandardLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::*)(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*)>(&BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("BeatmapEditor3D", "BeatmapEditorStandardLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::IPreviewBeatmapLevel*, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, bool, ::System::Action*, ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*>*)>(&BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* previewBeatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* playerSpecificSettings = &::il2cpp_utils::GetClassFromName("", "PlayerSpecificSettings")->byval_arg;
    static auto* practiceSettings = &::il2cpp_utils::GetClassFromName("", "PracticeSettings")->byval_arg;
    static auto* useFirstPersonFlyingController = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* beforeSceneSwitchCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* levelFinishedCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("BeatmapEditor3D", "BeatmapEditorStandardLevelScenesTransitionSetupDataSO"), ::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{difficultyBeatmap, previewBeatmapLevel, gameplayModifiers, playerSpecificSettings, practiceSettings, useFirstPersonFlyingController, beforeSceneSwitchCallback, levelFinishedCallback});
  }
};
// Writing MetadataGetter for method: BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::*)(::GlobalNamespace::LevelCompletionResults*)>(&BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::Finish)> {
  static const MethodInfo* get() {
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelCompletionResults});
  }
};
// Writing MetadataGetter for method: BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
