// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: SaberActivityCounter
  class SaberActivityCounter;
  // Forward declaring type: BeatmapObjectExecutionRatingsRecorder
  class BeatmapObjectExecutionRatingsRecorder;
  // Forward declaring type: MultiplierValuesRecorder
  class MultiplierValuesRecorder;
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: PrepareLevelCompletionResults
  // [TokenAttribute] Offset: FFFFFFFF
  class PrepareLevelCompletionResults : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private GameplayModifiersModelSO _gameplayModifiersModelSO
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModelSO;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A70C
    // private readonly SaberActivityCounter _saberActivityCounter
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SaberActivityCounter* saberActivityCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberActivityCounter*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A71C
    // private readonly BeatmapObjectExecutionRatingsRecorder _beatmapObjectExecutionRatingsRecorder
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* beatmapObjectExecutionRatingsRecorder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A72C
    // private readonly MultiplierValuesRecorder _multiplierValuesRecorder
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplierValuesRecorder* multiplierValuesRecorder;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplierValuesRecorder*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A73C
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A74C
    // private readonly GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A75C
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A76C
    // private readonly IReadonlyBeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A77C
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A78C
    // private readonly GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModelSO
    GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModelSO();
    // Get instance field reference: private readonly SaberActivityCounter _saberActivityCounter
    GlobalNamespace::SaberActivityCounter*& dyn__saberActivityCounter();
    // Get instance field reference: private readonly BeatmapObjectExecutionRatingsRecorder _beatmapObjectExecutionRatingsRecorder
    GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*& dyn__beatmapObjectExecutionRatingsRecorder();
    // Get instance field reference: private readonly MultiplierValuesRecorder _multiplierValuesRecorder
    GlobalNamespace::MultiplierValuesRecorder*& dyn__multiplierValuesRecorder();
    // Get instance field reference: private readonly IScoreController _scoreController
    GlobalNamespace::IScoreController*& dyn__scoreController();
    // Get instance field reference: private readonly GameEnergyCounter _gameEnergyCounter
    GlobalNamespace::GameEnergyCounter*& dyn__gameEnergyCounter();
    // Get instance field reference: private readonly GameSongController _gameSongController
    GlobalNamespace::GameSongController*& dyn__gameSongController();
    // Get instance field reference: private readonly IReadonlyBeatmapData _beatmapData
    GlobalNamespace::IReadonlyBeatmapData*& dyn__beatmapData();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly GameplayModifiers _gameplayModifiers
    GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // public LevelCompletionResults FillLevelCompletionResults(LevelCompletionResults/LevelEndStateType levelEndStateType, LevelCompletionResults/LevelEndAction levelEndAction)
    // Offset: 0x11BD164
    GlobalNamespace::LevelCompletionResults* FillLevelCompletionResults(GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType, GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction);
    // public System.Void .ctor()
    // Offset: 0x11BD51C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrepareLevelCompletionResults* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PrepareLevelCompletionResults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrepareLevelCompletionResults*, creationType>()));
    }
  }; // PrepareLevelCompletionResults
  #pragma pack(pop)
  static check_size<sizeof(PrepareLevelCompletionResults), 96 + sizeof(GlobalNamespace::GameplayModifiers*)> __GlobalNamespace_PrepareLevelCompletionResultsSizeCheck;
  static_assert(sizeof(PrepareLevelCompletionResults) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PrepareLevelCompletionResults*, "", "PrepareLevelCompletionResults");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults
// Il2CppName: FillLevelCompletionResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LevelCompletionResults* (GlobalNamespace::PrepareLevelCompletionResults::*)(GlobalNamespace::LevelCompletionResults::LevelEndStateType, GlobalNamespace::LevelCompletionResults::LevelEndAction)>(&GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults)> {
  static const MethodInfo* get() {
    static auto* levelEndStateType = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults/LevelEndStateType")->byval_arg;
    static auto* levelEndAction = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults/LevelEndAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrepareLevelCompletionResults*), "FillLevelCompletionResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelEndStateType, levelEndAction});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrepareLevelCompletionResults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
