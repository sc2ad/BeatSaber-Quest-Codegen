// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatLineManager
  class BeatLineManager;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
  // Forward declaring type: NoteCutScoreSpawner
  class NoteCutScoreSpawner;
  // Forward declaring type: BadNoteCutEffectSpawner
  class BadNoteCutEffectSpawner;
  // Forward declaring type: MissedNoteEffectSpawner
  class MissedNoteEffectSpawner;
  // Forward declaring type: EffectPoolsManualInstaller
  class EffectPoolsManualInstaller;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: PerceivedLoudnessPerLevelModel
  class PerceivedLoudnessPerLevelModel;
  // Forward declaring type: RelativeSfxVolumePerLevelModel
  class RelativeSfxVolumePerLevelModel;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: SongTimeTweeningManager
  class SongTimeTweeningManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameplayCoreInstaller
  class GameplayCoreInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayCoreInstaller*, "", "GameplayCoreInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: GameplayCoreInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayCoreInstaller : public ::Zenject::MonoInstaller {
    public:
    public:
    // private BeatLineManager _beatLineManagerPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatLineManager* beatLineManagerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatLineManager*) == 0x8);
    // private Tweening.SongTimeTweeningManager _songTimeTweeningManager
    // Size: 0x8
    // Offset: 0x28
    ::Tweening::SongTimeTweeningManager* songTimeTweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::SongTimeTweeningManager*) == 0x8);
    // [SpaceAttribute] Offset: 0x111B1E4
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioManagerSO*) == 0x8);
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // private NoteCutScoreSpawner _noteCutScoreSpawnerPrefab
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::NoteCutScoreSpawner* noteCutScoreSpawnerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutScoreSpawner*) == 0x8);
    // private BadNoteCutEffectSpawner _badNoteCutEffectSpawnerPrefab
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BadNoteCutEffectSpawner* badNoteCutEffectSpawnerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BadNoteCutEffectSpawner*) == 0x8);
    // private MissedNoteEffectSpawner _missedNoteEffectSpawnerPrefab
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MissedNoteEffectSpawner* missedNoteEffectSpawnerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissedNoteEffectSpawner*) == 0x8);
    // [SpaceAttribute] Offset: 0x111B25C
    // private EffectPoolsManualInstaller _effectPoolsManualInstaller
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::EffectPoolsManualInstaller* effectPoolsManualInstaller;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EffectPoolsManualInstaller*) == 0x8);
    // [InjectAttribute] Offset: 0x111B294
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0x111B2A4
    // private readonly PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::PerceivedLoudnessPerLevelModel* perceivedLoudnessPerLevelModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PerceivedLoudnessPerLevelModel*) == 0x8);
    // [InjectAttribute] Offset: 0x111B2B4
    // private readonly RelativeSfxVolumePerLevelModel _relativeSfxVolumePerLevelModel
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::RelativeSfxVolumePerLevelModel* relativeSfxVolumePerLevelModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RelativeSfxVolumePerLevelModel*) == 0x8);
    public:
    // Get instance field reference: private BeatLineManager _beatLineManagerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatLineManager*& dyn__beatLineManagerPrefab();
    // Get instance field reference: private Tweening.SongTimeTweeningManager _songTimeTweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::SongTimeTweeningManager*& dyn__songTimeTweeningManager();
    // Get instance field reference: private AudioManagerSO _audioManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioManagerSO*& dyn__audioManager();
    // Get instance field reference: private PlayerHeightDetector _playerHeightDetectorPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerHeightDetector*& dyn__playerHeightDetectorPrefab();
    // Get instance field reference: private NoteCutScoreSpawner _noteCutScoreSpawnerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutScoreSpawner*& dyn__noteCutScoreSpawnerPrefab();
    // Get instance field reference: private BadNoteCutEffectSpawner _badNoteCutEffectSpawnerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BadNoteCutEffectSpawner*& dyn__badNoteCutEffectSpawnerPrefab();
    // Get instance field reference: private MissedNoteEffectSpawner _missedNoteEffectSpawnerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissedNoteEffectSpawner*& dyn__missedNoteEffectSpawnerPrefab();
    // Get instance field reference: private EffectPoolsManualInstaller _effectPoolsManualInstaller
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EffectPoolsManualInstaller*& dyn__effectPoolsManualInstaller();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // Get instance field reference: private readonly PerceivedLoudnessPerLevelModel _perceivedLoudnessPerLevelModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& dyn__perceivedLoudnessPerLevelModel();
    // Get instance field reference: private readonly RelativeSfxVolumePerLevelModel _relativeSfxVolumePerLevelModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RelativeSfxVolumePerLevelModel*& dyn__relativeSfxVolumePerLevelModel();
    // public System.Void .ctor()
    // Offset: 0x1453870
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayCoreInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplayCoreInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayCoreInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x1452184
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // GameplayCoreInstaller
  #pragma pack(pop)
  static check_size<sizeof(GameplayCoreInstaller), 112 + sizeof(::GlobalNamespace::RelativeSfxVolumePerLevelModel*)> __GlobalNamespace_GameplayCoreInstallerSizeCheck;
  static_assert(sizeof(GameplayCoreInstaller) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayCoreInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameplayCoreInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayCoreInstaller::*)()>(&GlobalNamespace::GameplayCoreInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayCoreInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
