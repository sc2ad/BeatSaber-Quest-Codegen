// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: SongController
#include "GlobalNamespace/SongController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSongController
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialSongController : public GlobalNamespace::SongController {
    public:
    // Nested type: GlobalNamespace::TutorialSongController::InitData
    class InitData;
    // Nested type: GlobalNamespace::TutorialSongController::TutorialObjectSpawnData
    class TutorialObjectSpawnData;
    // Nested type: GlobalNamespace::TutorialSongController::TutorialJumpingNoteSpawnData
    class TutorialJumpingNoteSpawnData;
    // Nested type: GlobalNamespace::TutorialSongController::TutorialBasicNoteSpawnData
    class TutorialBasicNoteSpawnData;
    // Nested type: GlobalNamespace::TutorialSongController::TutorialBombNoteSpawnData
    class TutorialBombNoteSpawnData;
    // Nested type: GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData
    class TutorialObstacleSpawnData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Int32 _startWaitTimeInBeats
    // Size: 0x4
    // Offset: 0x28
    int startWaitTimeInBeats;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _numberOfBeatsToSnap
    // Size: 0x4
    // Offset: 0x2C
    int numberOfBeatsToSnap;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _obstacleDurationInBeats
    // Size: 0x4
    // Offset: 0x30
    int obstacleDurationInBeats;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: obstacleDurationInBeats and: noteCuttingTutorialPartDidStartSignal
    char __padding3[0x4] = {};
    // [SpaceAttribute] Offset: 0xF0B3A0
    // [FormerlySerializedAsAttribute] Offset: 0xF0B3A0
    // [SignalSenderAttribute] Offset: 0xF0B3A0
    // private Signal _noteCuttingTutorialPartDidStartSignal
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::Signal* noteCuttingTutorialPartDidStartSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B40C
    // [SignalSenderAttribute] Offset: 0xF0B40C
    // private Signal _noteCuttingInAnyDirectionDidStartSignal
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::Signal* noteCuttingInAnyDirectionDidStartSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B468
    // [SignalSenderAttribute] Offset: 0xF0B468
    // private Signal _bombCuttingTutorialPartDidStartSignal
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::Signal* bombCuttingTutorialPartDidStartSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B4C4
    // [SignalSenderAttribute] Offset: 0xF0B4C4
    // private Signal _leftObstacleTutorialPartDidStartSignal
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::Signal* leftObstacleTutorialPartDidStartSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B520
    // [SignalSenderAttribute] Offset: 0xF0B520
    // private Signal _rightObstacleTutorialPartDidStartSignal
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::Signal* rightObstacleTutorialPartDidStartSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B57C
    // [SignalSenderAttribute] Offset: 0xF0B57C
    // private Signal _topObstacleTutorialPartDidStartSignal
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::Signal* topObstacleTutorialPartDidStartSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B5D8
    // [SignalSenderAttribute] Offset: 0xF0B5D8
    // private Signal _noteWasCutOKSignal
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::Signal* noteWasCutOKSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B634
    // [SignalSenderAttribute] Offset: 0xF0B634
    // private Signal _noteWasCutTooSoonSignal
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::Signal* noteWasCutTooSoonSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B690
    // [SignalSenderAttribute] Offset: 0xF0B690
    // private Signal _noteWasCutWithWrongColorSignal
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::Signal* noteWasCutWithWrongColorSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B6EC
    // [SignalSenderAttribute] Offset: 0xF0B6EC
    // private Signal _noteWasCutFromDifferentDirectionSignal
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::Signal* noteWasCutFromDifferentDirectionSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B748
    // [SignalSenderAttribute] Offset: 0xF0B748
    // private Signal _noteWasCutWithSlowSpeedSignal
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::Signal* noteWasCutWithSlowSpeedSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xF0B7A4
    // [SignalSenderAttribute] Offset: 0xF0B7A4
    // private Signal _bombWasCutSignal
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::Signal* bombWasCutSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // [InjectAttribute] Offset: 0xF0B800
    // private readonly TutorialSongController/InitData _initData
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::TutorialSongController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TutorialSongController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xF0B810
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF0B820
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0xA8
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private System.Int32 _tutorialBeatmapObjectIndex
    // Size: 0x4
    // Offset: 0xB0
    int tutorialBeatmapObjectIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _prevSpawnedBeatmapObjectIndex
    // Size: 0x4
    // Offset: 0xB4
    int prevSpawnedBeatmapObjectIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _songBpm
    // Size: 0x4
    // Offset: 0xB8
    float songBpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songBpm and: beatmapData
    char __padding21[0x4] = {};
    // private BeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::BeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapData*) == 0x8);
    // private TutorialSongController/TutorialObjectSpawnData[] _normalModeTutorialObjectsSpawnData
    // Size: 0x8
    // Offset: 0xC8
    ::ArrayW<GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*> normalModeTutorialObjectsSpawnData;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*>) == 0x8);
    public:
    // Get instance field reference: private AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private System.Int32 _startWaitTimeInBeats
    int& dyn__startWaitTimeInBeats();
    // Get instance field reference: private System.Int32 _numberOfBeatsToSnap
    int& dyn__numberOfBeatsToSnap();
    // Get instance field reference: private System.Int32 _obstacleDurationInBeats
    int& dyn__obstacleDurationInBeats();
    // Get instance field reference: private Signal _noteCuttingTutorialPartDidStartSignal
    GlobalNamespace::Signal*& dyn__noteCuttingTutorialPartDidStartSignal();
    // Get instance field reference: private Signal _noteCuttingInAnyDirectionDidStartSignal
    GlobalNamespace::Signal*& dyn__noteCuttingInAnyDirectionDidStartSignal();
    // Get instance field reference: private Signal _bombCuttingTutorialPartDidStartSignal
    GlobalNamespace::Signal*& dyn__bombCuttingTutorialPartDidStartSignal();
    // Get instance field reference: private Signal _leftObstacleTutorialPartDidStartSignal
    GlobalNamespace::Signal*& dyn__leftObstacleTutorialPartDidStartSignal();
    // Get instance field reference: private Signal _rightObstacleTutorialPartDidStartSignal
    GlobalNamespace::Signal*& dyn__rightObstacleTutorialPartDidStartSignal();
    // Get instance field reference: private Signal _topObstacleTutorialPartDidStartSignal
    GlobalNamespace::Signal*& dyn__topObstacleTutorialPartDidStartSignal();
    // Get instance field reference: private Signal _noteWasCutOKSignal
    GlobalNamespace::Signal*& dyn__noteWasCutOKSignal();
    // Get instance field reference: private Signal _noteWasCutTooSoonSignal
    GlobalNamespace::Signal*& dyn__noteWasCutTooSoonSignal();
    // Get instance field reference: private Signal _noteWasCutWithWrongColorSignal
    GlobalNamespace::Signal*& dyn__noteWasCutWithWrongColorSignal();
    // Get instance field reference: private Signal _noteWasCutFromDifferentDirectionSignal
    GlobalNamespace::Signal*& dyn__noteWasCutFromDifferentDirectionSignal();
    // Get instance field reference: private Signal _noteWasCutWithSlowSpeedSignal
    GlobalNamespace::Signal*& dyn__noteWasCutWithSlowSpeedSignal();
    // Get instance field reference: private Signal _bombWasCutSignal
    GlobalNamespace::Signal*& dyn__bombWasCutSignal();
    // Get instance field reference: private readonly TutorialSongController/InitData _initData
    GlobalNamespace::TutorialSongController::InitData*& dyn__initData();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // Get instance field reference: private System.Int32 _tutorialBeatmapObjectIndex
    int& dyn__tutorialBeatmapObjectIndex();
    // Get instance field reference: private System.Int32 _prevSpawnedBeatmapObjectIndex
    int& dyn__prevSpawnedBeatmapObjectIndex();
    // Get instance field reference: private System.Single _songBpm
    float& dyn__songBpm();
    // Get instance field reference: private BeatmapData _beatmapData
    GlobalNamespace::BeatmapData*& dyn__beatmapData();
    // Get instance field reference: private TutorialSongController/TutorialObjectSpawnData[] _normalModeTutorialObjectsSpawnData
    ::ArrayW<GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*>& dyn__normalModeTutorialObjectsSpawnData();
    // protected System.Void Awake()
    // Offset: 0x133C8D8
    void Awake();
    // protected System.Void Start()
    // Offset: 0x133CEEC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x133D0BC
    void OnDestroy();
    // public System.Void StartSong(System.Single startTimeOffset)
    // Offset: 0x133D1E0
    void StartSong(float startTimeOffset);
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x133D4F0
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x133D5DC
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleObstacleDidPassThreeQuartersOfMove2(ObstacleController obstacleController)
    // Offset: 0x133D654
    void HandleObstacleDidPassThreeQuartersOfMove2(GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void UpdateBeatmapData(System.Single noteTime)
    // Offset: 0x133D240
    void UpdateBeatmapData(float noteTime);
    // private System.Single GetNextBeatmapObjectTime(System.Int32 beatOffset)
    // Offset: 0x133D668
    float GetNextBeatmapObjectTime(int beatOffset);
    // private ObstacleData CreateObstacleData(System.Single time, TutorialSongController/TutorialObstacleSpawnData tutorialObstacleSpawnData)
    // Offset: 0x133D728
    GlobalNamespace::ObstacleData* CreateObstacleData(float time, GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData* tutorialObstacleSpawnData);
    // private NoteData CreateBasicNoteData(System.Single time, TutorialSongController/TutorialBasicNoteSpawnData tutorialBasicNoteSpawnData)
    // Offset: 0x133D6E8
    GlobalNamespace::NoteData* CreateBasicNoteData(float time, GlobalNamespace::TutorialSongController::TutorialBasicNoteSpawnData* tutorialBasicNoteSpawnData);
    // private NoteData CreateBombNoteData(System.Single time, TutorialSongController/TutorialBombNoteSpawnData tutorialBombNoteSpawnData)
    // Offset: 0x133D70C
    GlobalNamespace::NoteData* CreateBombNoteData(float time, GlobalNamespace::TutorialSongController::TutorialBombNoteSpawnData* tutorialBombNoteSpawnData);
    // public System.Void .ctor()
    // Offset: 0x133D7E4
    // Implemented from: SongController
    // Base method: System.Void SongController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSongController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TutorialSongController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSongController*, creationType>()));
    }
    // public override System.Void StopSong()
    // Offset: 0x133D46C
    // Implemented from: SongController
    // Base method: System.Void SongController::StopSong()
    void StopSong();
    // public override System.Void PauseSong()
    // Offset: 0x133D4A0
    // Implemented from: SongController
    // Base method: System.Void SongController::PauseSong()
    void PauseSong();
    // public override System.Void ResumeSong()
    // Offset: 0x133D4D4
    // Implemented from: SongController
    // Base method: System.Void SongController::ResumeSong()
    void ResumeSong();
  }; // TutorialSongController
  #pragma pack(pop)
  static check_size<sizeof(TutorialSongController), 200 + sizeof(::ArrayW<GlobalNamespace::TutorialSongController::TutorialObjectSpawnData*>)> __GlobalNamespace_TutorialSongControllerSizeCheck;
  static_assert(sizeof(TutorialSongController) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController*, "", "TutorialSongController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(float)>(&GlobalNamespace::TutorialSongController::StartSong)> {
  static const MethodInfo* get() {
    static auto* startTimeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTimeOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(GlobalNamespace::NoteController*, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::TutorialSongController::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::HandleNoteWasMissed
// Il2CppName: HandleNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::TutorialSongController::HandleNoteWasMissed)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "HandleNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::HandleObstacleDidPassThreeQuartersOfMove2
// Il2CppName: HandleObstacleDidPassThreeQuartersOfMove2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(GlobalNamespace::ObstacleController*)>(&GlobalNamespace::TutorialSongController::HandleObstacleDidPassThreeQuartersOfMove2)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "HandleObstacleDidPassThreeQuartersOfMove2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::UpdateBeatmapData
// Il2CppName: UpdateBeatmapData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)(float)>(&GlobalNamespace::TutorialSongController::UpdateBeatmapData)> {
  static const MethodInfo* get() {
    static auto* noteTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "UpdateBeatmapData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::GetNextBeatmapObjectTime
// Il2CppName: GetNextBeatmapObjectTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TutorialSongController::*)(int)>(&GlobalNamespace::TutorialSongController::GetNextBeatmapObjectTime)> {
  static const MethodInfo* get() {
    static auto* beatOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "GetNextBeatmapObjectTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::CreateObstacleData
// Il2CppName: CreateObstacleData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ObstacleData* (GlobalNamespace::TutorialSongController::*)(float, GlobalNamespace::TutorialSongController::TutorialObstacleSpawnData*)>(&GlobalNamespace::TutorialSongController::CreateObstacleData)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tutorialObstacleSpawnData = &::il2cpp_utils::GetClassFromName("", "TutorialSongController/TutorialObstacleSpawnData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "CreateObstacleData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, tutorialObstacleSpawnData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::CreateBasicNoteData
// Il2CppName: CreateBasicNoteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData* (GlobalNamespace::TutorialSongController::*)(float, GlobalNamespace::TutorialSongController::TutorialBasicNoteSpawnData*)>(&GlobalNamespace::TutorialSongController::CreateBasicNoteData)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tutorialBasicNoteSpawnData = &::il2cpp_utils::GetClassFromName("", "TutorialSongController/TutorialBasicNoteSpawnData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "CreateBasicNoteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, tutorialBasicNoteSpawnData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::CreateBombNoteData
// Il2CppName: CreateBombNoteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteData* (GlobalNamespace::TutorialSongController::*)(float, GlobalNamespace::TutorialSongController::TutorialBombNoteSpawnData*)>(&GlobalNamespace::TutorialSongController::CreateBombNoteData)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* tutorialBombNoteSpawnData = &::il2cpp_utils::GetClassFromName("", "TutorialSongController/TutorialBombNoteSpawnData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "CreateBombNoteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, tutorialBombNoteSpawnData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::StopSong
// Il2CppName: StopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::StopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "StopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::PauseSong
// Il2CppName: PauseSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::PauseSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "PauseSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::ResumeSong
// Il2CppName: ResumeSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialSongController::*)()>(&GlobalNamespace::TutorialSongController::ResumeSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialSongController*), "ResumeSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
