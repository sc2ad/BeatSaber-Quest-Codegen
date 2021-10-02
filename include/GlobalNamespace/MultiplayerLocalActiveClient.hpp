// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: IScoreSyncStateManager
  class IScoreSyncStateManager;
  // Forward declaring type: INodePoseSyncStateManager
  class INodePoseSyncStateManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: IScoreController
  class IScoreController;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActiveClient
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalActiveClient : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [InjectAttribute] Offset: 0xF08A90
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // [InjectAttribute] Offset: 0xF08AA0
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [InjectAttribute] Offset: 0xF08AB0
    // private readonly IScoreSyncStateManager _scoreSyncStateManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IScoreSyncStateManager* scoreSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreSyncStateManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF08AC0
    // private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INodePoseSyncStateManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF08AD0
    // private readonly IGameplayRpcManager _rpcManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IGameplayRpcManager* rpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF08AE0
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF08AF0
    // private readonly IScoreController _scoreController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::IScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IScoreController*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private readonly AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private readonly IScoreSyncStateManager _scoreSyncStateManager
    GlobalNamespace::IScoreSyncStateManager*& dyn__scoreSyncStateManager();
    // Get instance field reference: private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    GlobalNamespace::INodePoseSyncStateManager*& dyn__nodePoseSyncStateManager();
    // Get instance field reference: private readonly IGameplayRpcManager _rpcManager
    GlobalNamespace::IGameplayRpcManager*& dyn__rpcManager();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly IScoreController _scoreController
    GlobalNamespace::IScoreController*& dyn__scoreController();
    // public BeatmapObjectManager get_beatmapObjectManager()
    // Offset: 0x1170A68
    GlobalNamespace::BeatmapObjectManager* get_beatmapObjectManager();
    // protected System.Void Start()
    // Offset: 0x1170A70
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11710FC
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x1171478
    void LateUpdate();
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x1171800
    void HandleNoteWasMissed(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x1171918
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void ScoreControllerHandleComboDidChange(System.Int32 combo)
    // Offset: 0x1171AE8
    void ScoreControllerHandleComboDidChange(int combo);
    // private System.Void ScoreControllerHandleMultiplierDidChange(System.Int32 multiplier, System.Single multiplierProgress)
    // Offset: 0x1171BD0
    void ScoreControllerHandleMultiplierDidChange(int multiplier, float multiplierProgress);
    // private System.Void ScoreControllerHandleImmediateMaxPossibleScoreDidChange(System.Int32 immediateMaxPossibleRawScore, System.Int32 immediateMaxPossibleModifiedScore)
    // Offset: 0x1171CB8
    void ScoreControllerHandleImmediateMaxPossibleScoreDidChange(int immediateMaxPossibleRawScore, int immediateMaxPossibleModifiedScore);
    // private System.Void ScoreControllerHandleScoreDidChange(System.Int32 rawScore, System.Int32 modifiedScore)
    // Offset: 0x1171DA0
    void ScoreControllerHandleScoreDidChange(int rawScore, int modifiedScore);
    // public System.Void .ctor()
    // Offset: 0x1171F1C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActiveClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActiveClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActiveClient*, creationType>()));
    }
  }; // MultiplayerLocalActiveClient
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActiveClient), 72 + sizeof(GlobalNamespace::IScoreController*)> __GlobalNamespace_MultiplayerLocalActiveClientSizeCheck;
  static_assert(sizeof(MultiplayerLocalActiveClient) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActiveClient*, "", "MultiplayerLocalActiveClient");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::get_beatmapObjectManager
// Il2CppName: get_beatmapObjectManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapObjectManager* (GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&GlobalNamespace::MultiplayerLocalActiveClient::get_beatmapObjectManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "get_beatmapObjectManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&GlobalNamespace::MultiplayerLocalActiveClient::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&GlobalNamespace::MultiplayerLocalActiveClient::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)()>(&GlobalNamespace::MultiplayerLocalActiveClient::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasMissed
// Il2CppName: HandleNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(GlobalNamespace::NoteController*)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasMissed)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(GlobalNamespace::NoteController*, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::ScoreControllerHandleComboDidChange
// Il2CppName: ScoreControllerHandleComboDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(int)>(&GlobalNamespace::MultiplayerLocalActiveClient::ScoreControllerHandleComboDidChange)> {
  static const MethodInfo* get() {
    static auto* combo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "ScoreControllerHandleComboDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{combo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::ScoreControllerHandleMultiplierDidChange
// Il2CppName: ScoreControllerHandleMultiplierDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(int, float)>(&GlobalNamespace::MultiplayerLocalActiveClient::ScoreControllerHandleMultiplierDidChange)> {
  static const MethodInfo* get() {
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* multiplierProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "ScoreControllerHandleMultiplierDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplier, multiplierProgress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::ScoreControllerHandleImmediateMaxPossibleScoreDidChange
// Il2CppName: ScoreControllerHandleImmediateMaxPossibleScoreDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(int, int)>(&GlobalNamespace::MultiplayerLocalActiveClient::ScoreControllerHandleImmediateMaxPossibleScoreDidChange)> {
  static const MethodInfo* get() {
    static auto* immediateMaxPossibleRawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* immediateMaxPossibleModifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "ScoreControllerHandleImmediateMaxPossibleScoreDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{immediateMaxPossibleRawScore, immediateMaxPossibleModifiedScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::ScoreControllerHandleScoreDidChange
// Il2CppName: ScoreControllerHandleScoreDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalActiveClient::*)(int, int)>(&GlobalNamespace::MultiplayerLocalActiveClient::ScoreControllerHandleScoreDidChange)> {
  static const MethodInfo* get() {
    static auto* rawScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalActiveClient*), "ScoreControllerHandleScoreDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawScore, modifiedScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalActiveClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
