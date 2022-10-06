// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: BeatmapObjectExecutionRating
  class BeatmapObjectExecutionRating;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: ScoringElement
  class ScoringElement;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectExecutionRatingsRecorder
  class BeatmapObjectExecutionRatingsRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*, "", "BeatmapObjectExecutionRatingsRecorder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectExecutionRatingsRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectExecutionRatingsRecorder : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [InjectAttribute] Offset: 0x10FCCAC
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IScoreController*) == 0x8);
    // [InjectAttribute] Offset: 0x10FCCBC
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x10FCCCC
    // private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // [InjectAttribute] Offset: 0x10FCCDC
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapObjectExecutionRating> _beatmapObjectExecutionRatings
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* beatmapObjectExecutionRatings;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<ObstacleController> _hitObstacles
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>* hitObstacles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly IScoreController _scoreController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IScoreController*& dyn__scoreController();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& dyn__playerHeadAndObstacleInteraction();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<BeatmapObjectExecutionRating> _beatmapObjectExecutionRatings
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>*& dyn__beatmapObjectExecutionRatings();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<ObstacleController> _hitObstacles
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*& dyn__hitObstacles();
    // public System.Collections.Generic.List`1<BeatmapObjectExecutionRating> get_beatmapObjectExecutionRatings()
    // Offset: 0x15517C8
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* get_beatmapObjectExecutionRatings();
    // public System.Void .ctor()
    // Offset: 0x1552200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectExecutionRatingsRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRatingsRecorder*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x15517D0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x15519F4
    void OnDestroy();
    // private System.Void HandleScoringForNoteDidFinish(ScoringElement scoringElement)
    // Offset: 0x1551C68
    void HandleScoringForNoteDidFinish(::GlobalNamespace::ScoringElement* scoringElement);
    // private System.Void HandlePlayerHeadDidEnterObstacle(ObstacleController obstacleController)
    // Offset: 0x155204C
    void HandlePlayerHeadDidEnterObstacle(::GlobalNamespace::ObstacleController* obstacleController);
    // private System.Void HandleObstacleDidPassAvoidedMark(ObstacleController obstacleController)
    // Offset: 0x155210C
    void HandleObstacleDidPassAvoidedMark(::GlobalNamespace::ObstacleController* obstacleController);
  }; // BeatmapObjectExecutionRatingsRecorder
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectExecutionRatingsRecorder), 64 + sizeof(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ObstacleController*>*)> __GlobalNamespace_BeatmapObjectExecutionRatingsRecorderSizeCheck;
  static_assert(sizeof(BeatmapObjectExecutionRatingsRecorder) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::get_beatmapObjectExecutionRatings
// Il2CppName: get_beatmapObjectExecutionRatings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectExecutionRating*>* (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::get_beatmapObjectExecutionRatings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "get_beatmapObjectExecutionRatings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)()>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoringForNoteDidFinish
// Il2CppName: HandleScoringForNoteDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(::GlobalNamespace::ScoringElement*)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoringForNoteDidFinish)> {
  static const MethodInfo* get() {
    static auto* scoringElement = &::il2cpp_utils::GetClassFromName("", "ScoringElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "HandleScoringForNoteDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoringElement});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandlePlayerHeadDidEnterObstacle
// Il2CppName: HandlePlayerHeadDidEnterObstacle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(::GlobalNamespace::ObstacleController*)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandlePlayerHeadDidEnterObstacle)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "HandlePlayerHeadDidEnterObstacle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleObstacleDidPassAvoidedMark
// Il2CppName: HandleObstacleDidPassAvoidedMark
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::*)(::GlobalNamespace::ObstacleController*)>(&GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleObstacleDidPassAvoidedMark)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*), "HandleObstacleDidPassAvoidedMark", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
