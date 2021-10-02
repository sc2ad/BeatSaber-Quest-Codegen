// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IStartSeekSongController
#include "GlobalNamespace/IStartSeekSongController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CrossFadeAudioSource
  class CrossFadeAudioSource;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerSongSyncController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerSongSyncController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IStartSeekSongController*/ {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData
    class InitData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private CrossFadeAudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::CrossFadeAudioSource* audioSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CrossFadeAudioSource*) == 0x8);
    // [SpaceAttribute] Offset: 0xF08DE8
    // private FloatSO _audioLatency
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FloatSO* audioLatency;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // [InjectAttribute] Offset: 0xF08E20
    // private readonly MultiplayerLocalInactivePlayerSongSyncController/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xF08E30
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private System.Single _timeScale
    // Size: 0x4
    // Offset: 0x38
    float timeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startSongTime
    // Size: 0x4
    // Offset: 0x3C
    float startSongTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x40
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTime
    // Size: 0x4
    // Offset: 0x44
    float songTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _audioStarted
    // Size: 0x1
    // Offset: 0x48
    bool audioStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _currentObservableIsFailed
    // Size: 0x1
    // Offset: 0x49
    bool currentObservableIsFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: currentObservableIsFailed and: observable
    char __padding9[0x6] = {};
    // private IMultiplayerObservable _observable
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IMultiplayerObservable* observable;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerObservable*) == 0x8);
    // private System.Single _lastLatencyOffsetTime
    // Size: 0x4
    // Offset: 0x58
    float lastLatencyOffsetTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IStartSeekSongController
    operator GlobalNamespace::IStartSeekSongController() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStartSeekSongController*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kReSyncThreshold
    static constexpr const float kReSyncThreshold = 0.05;
    // Get static field: static private System.Single kReSyncThreshold
    static float _get_kReSyncThreshold();
    // Set static field: static private System.Single kReSyncThreshold
    static void _set_kReSyncThreshold(float value);
    // Get instance field reference: private CrossFadeAudioSource _audioSource
    GlobalNamespace::CrossFadeAudioSource*& dyn__audioSource();
    // Get instance field reference: private FloatSO _audioLatency
    GlobalNamespace::FloatSO*& dyn__audioLatency();
    // Get instance field reference: private readonly MultiplayerLocalInactivePlayerSongSyncController/InitData _initData
    GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData*& dyn__initData();
    // Get instance field reference: private readonly IMultiplayerSessionManager _multiplayerSessionManager
    GlobalNamespace::IMultiplayerSessionManager*& dyn__multiplayerSessionManager();
    // Get instance field reference: private System.Single _timeScale
    float& dyn__timeScale();
    // Get instance field reference: private System.Single _startSongTime
    float& dyn__startSongTime();
    // Get instance field reference: private System.Single _songTimeOffset
    float& dyn__songTimeOffset();
    // Get instance field reference: private System.Single _songTime
    float& dyn__songTime();
    // Get instance field reference: private System.Boolean _audioStarted
    bool& dyn__audioStarted();
    // Get instance field reference: private System.Boolean _currentObservableIsFailed
    bool& dyn__currentObservableIsFailed();
    // Get instance field reference: private IMultiplayerObservable _observable
    GlobalNamespace::IMultiplayerObservable*& dyn__observable();
    // Get instance field reference: private System.Single _lastLatencyOffsetTime
    float& dyn__lastLatencyOffsetTime();
    // public UnityEngine.WaitUntil get_waitUntilIsReadyToStartTheSong()
    // Offset: 0x1176ED8
    UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();
    // private System.Boolean get_isAudioLoaded()
    // Offset: 0x1176F70
    bool get_isAudioLoaded();
    // protected System.Void Awake()
    // Offset: 0x117701C
    void Awake();
    // protected System.Void Update()
    // Offset: 0x1177138
    void Update();
    // public System.Void StartSong(System.Single offsetTime)
    // Offset: 0x1177558
    void StartSong(float offsetTime);
    // public System.Void FollowOffsetSyncTime(IMultiplayerObservable observable)
    // Offset: 0x117781C
    void FollowOffsetSyncTime(GlobalNamespace::IMultiplayerObservable* observable);
    // private System.Void UpdateOffsetSyncTime(System.Single offsetSyncTime, System.Boolean forceUpdate)
    // Offset: 0x11773FC
    void UpdateOffsetSyncTime(float offsetSyncTime, bool forceUpdate);
    // public System.Void SeekTo(System.Single offsetTime)
    // Offset: 0x1177A14
    void SeekTo(float offsetTime);
    // private System.Void SeekTo(System.Single offsetTime, System.Boolean crossFade, System.Single toVolume)
    // Offset: 0x1177650
    void SeekTo(float offsetTime, bool crossFade, float toVolume);
    // private System.Boolean <get_waitUntilIsReadyToStartTheSong>b__6_0()
    // Offset: 0x1177A28
    bool $get_waitUntilIsReadyToStartTheSong$b__6_0();
    // public System.Void .ctor()
    // Offset: 0x1177A20
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerSongSyncController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerSongSyncController*, creationType>()));
    }
  }; // MultiplayerLocalInactivePlayerSongSyncController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerSongSyncController), 88 + sizeof(float)> __GlobalNamespace_MultiplayerLocalInactivePlayerSongSyncControllerSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerSongSyncController) == 0x5C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, "", "MultiplayerLocalInactivePlayerSongSyncController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong
// Il2CppName: get_waitUntilIsReadyToStartTheSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::WaitUntil* (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_waitUntilIsReadyToStartTheSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "get_waitUntilIsReadyToStartTheSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded
// Il2CppName: get_isAudioLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::get_isAudioLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "get_isAudioLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::StartSong)> {
  static const MethodInfo* get() {
    static auto* offsetTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime
// Il2CppName: FollowOffsetSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(GlobalNamespace::IMultiplayerObservable*)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::FollowOffsetSyncTime)> {
  static const MethodInfo* get() {
    static auto* observable = &::il2cpp_utils::GetClassFromName("", "IMultiplayerObservable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "FollowOffsetSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{observable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime
// Il2CppName: UpdateOffsetSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float, bool)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::UpdateOffsetSyncTime)> {
  static const MethodInfo* get() {
    static auto* offsetSyncTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* forceUpdate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "UpdateOffsetSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetSyncTime, forceUpdate});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo
// Il2CppName: SeekTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  static const MethodInfo* get() {
    static auto* offsetTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo
// Il2CppName: SeekTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)(float, bool, float)>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::SeekTo)> {
  static const MethodInfo* get() {
    static auto* offsetTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* crossFade = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* toVolume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetTime, crossFade, toVolume});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::$get_waitUntilIsReadyToStartTheSong$b__6_0
// Il2CppName: <get_waitUntilIsReadyToStartTheSong>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::$get_waitUntilIsReadyToStartTheSong$b__6_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*), "<get_waitUntilIsReadyToStartTheSong>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
