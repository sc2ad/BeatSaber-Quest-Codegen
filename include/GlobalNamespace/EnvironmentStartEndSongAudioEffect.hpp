// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: EnvironmentContext
#include "GlobalNamespace/EnvironmentContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: IGamePause
  class IGamePause;
  // Forward declaring type: EnvironmentAudioEffectsPlayer
  class EnvironmentAudioEffectsPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentStartEndSongAudioEffect
  class EnvironmentStartEndSongAudioEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentStartEndSongAudioEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentStartEndSongAudioEffect*, "", "EnvironmentStartEndSongAudioEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6E
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentStartEndSongAudioEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentStartEndSongAudioEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean _playStartSongForNonZeroStartSongTime
    // Size: 0x1
    // Offset: 0x18
    bool playStartSongForNonZeroStartSongTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playStartSongForNonZeroStartSongTime and: songFinishedAheadTime
    char __padding0[0x3] = {};
    // private System.Single _songFinishedAheadTime
    // Size: 0x4
    // Offset: 0x1C
    float songFinishedAheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x110FAB8
    // private System.Single _songStartAudioClipVolume
    // Size: 0x4
    // Offset: 0x20
    float songStartAudioClipVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songFinishedAudioClipVolume
    // Size: 0x4
    // Offset: 0x24
    float songFinishedAudioClipVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songFailedAudioClipVolume
    // Size: 0x4
    // Offset: 0x28
    float songFailedAudioClipVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songFailedAudioClipVolume and: songStartAudioClips
    char __padding4[0x4] = {};
    // [SpaceAttribute] Offset: 0x110FB10
    // private UnityEngine.AudioClip[] _songStartAudioClips
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::AudioClip*> songStartAudioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private UnityEngine.AudioClip[] _songFinishedAudioClips
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::AudioClip*> songFinishedAudioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private UnityEngine.AudioClip[] _songFailedAudioClips
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::AudioClip*> songFailedAudioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // [InjectAttribute] Offset: 0x110FB68
    // private readonly ILevelEndActions _levelEndActions
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::ILevelEndActions* levelEndActions;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILevelEndActions*) == 0x8);
    // [InjectAttribute] Offset: 0x110FB78
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0x110FB88
    // private readonly IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IGamePause*) == 0x8);
    // [InjectAttribute] Offset: 0x110FB98
    // private readonly EnvironmentAudioEffectsPlayer _audioEffectsPlayer
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::EnvironmentAudioEffectsPlayer* audioEffectsPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentAudioEffectsPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0x110FBA8
    // private readonly EnvironmentContext _environmentContext
    // Size: 0x4
    // Offset: 0x68
    ::GlobalNamespace::EnvironmentContext environmentContext;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentContext) == 0x4);
    // private System.Boolean _songFinishedPlayed
    // Size: 0x1
    // Offset: 0x6C
    bool songFinishedPlayed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isWaitingToPlayStartAudio
    // Size: 0x1
    // Offset: 0x6D
    bool isWaitingToPlayStartAudio;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kSmallSongTime
    static constexpr const float kSmallSongTime = 0.5;
    // Get static field: static private System.Single kSmallSongTime
    static float _get_kSmallSongTime();
    // Set static field: static private System.Single kSmallSongTime
    static void _set_kSmallSongTime(float value);
    // Get instance field reference: private System.Boolean _playStartSongForNonZeroStartSongTime
    [[deprecated("Use field access instead!")]] bool& dyn__playStartSongForNonZeroStartSongTime();
    // Get instance field reference: private System.Single _songFinishedAheadTime
    [[deprecated("Use field access instead!")]] float& dyn__songFinishedAheadTime();
    // Get instance field reference: private System.Single _songStartAudioClipVolume
    [[deprecated("Use field access instead!")]] float& dyn__songStartAudioClipVolume();
    // Get instance field reference: private System.Single _songFinishedAudioClipVolume
    [[deprecated("Use field access instead!")]] float& dyn__songFinishedAudioClipVolume();
    // Get instance field reference: private System.Single _songFailedAudioClipVolume
    [[deprecated("Use field access instead!")]] float& dyn__songFailedAudioClipVolume();
    // Get instance field reference: private UnityEngine.AudioClip[] _songStartAudioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__songStartAudioClips();
    // Get instance field reference: private UnityEngine.AudioClip[] _songFinishedAudioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__songFinishedAudioClips();
    // Get instance field reference: private UnityEngine.AudioClip[] _songFailedAudioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__songFailedAudioClips();
    // Get instance field reference: private readonly ILevelEndActions _levelEndActions
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ILevelEndActions*& dyn__levelEndActions();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private readonly IGamePause _gamePause
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IGamePause*& dyn__gamePause();
    // Get instance field reference: private readonly EnvironmentAudioEffectsPlayer _audioEffectsPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentAudioEffectsPlayer*& dyn__audioEffectsPlayer();
    // Get instance field reference: private readonly EnvironmentContext _environmentContext
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentContext& dyn__environmentContext();
    // Get instance field reference: private System.Boolean _songFinishedPlayed
    [[deprecated("Use field access instead!")]] bool& dyn__songFinishedPlayed();
    // Get instance field reference: private System.Boolean _isWaitingToPlayStartAudio
    [[deprecated("Use field access instead!")]] bool& dyn__isWaitingToPlayStartAudio();
    // public System.Void .ctor()
    // Offset: 0x138B0CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentStartEndSongAudioEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentStartEndSongAudioEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentStartEndSongAudioEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x138A5CC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x138AA44
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x138AC84
    void Update();
    // private System.Void LevelWillFinishWithinAheadTime()
    // Offset: 0x138AF64
    void LevelWillFinishWithinAheadTime();
    // private System.Void HandleLevelFailed()
    // Offset: 0x138AFD4
    void HandleLevelFailed();
    // private System.Void HandleGamePauseDidResume()
    // Offset: 0x138B07C
    void HandleGamePauseDidResume();
    // private System.Void HandleGamePauseDidPause()
    // Offset: 0x138B0A4
    void HandleGamePauseDidPause();
  }; // EnvironmentStartEndSongAudioEffect
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentStartEndSongAudioEffect), 109 + sizeof(bool)> __GlobalNamespace_EnvironmentStartEndSongAudioEffectSizeCheck;
  static_assert(sizeof(EnvironmentStartEndSongAudioEffect) == 0x6E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentStartEndSongAudioEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentStartEndSongAudioEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentStartEndSongAudioEffect::*)()>(&GlobalNamespace::EnvironmentStartEndSongAudioEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentStartEndSongAudioEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentStartEndSongAudioEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentStartEndSongAudioEffect::*)()>(&GlobalNamespace::EnvironmentStartEndSongAudioEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentStartEndSongAudioEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentStartEndSongAudioEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentStartEndSongAudioEffect::*)()>(&GlobalNamespace::EnvironmentStartEndSongAudioEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentStartEndSongAudioEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentStartEndSongAudioEffect::LevelWillFinishWithinAheadTime
// Il2CppName: LevelWillFinishWithinAheadTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentStartEndSongAudioEffect::*)()>(&GlobalNamespace::EnvironmentStartEndSongAudioEffect::LevelWillFinishWithinAheadTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentStartEndSongAudioEffect*), "LevelWillFinishWithinAheadTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentStartEndSongAudioEffect::HandleLevelFailed
// Il2CppName: HandleLevelFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentStartEndSongAudioEffect::*)()>(&GlobalNamespace::EnvironmentStartEndSongAudioEffect::HandleLevelFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentStartEndSongAudioEffect*), "HandleLevelFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentStartEndSongAudioEffect::HandleGamePauseDidResume
// Il2CppName: HandleGamePauseDidResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentStartEndSongAudioEffect::*)()>(&GlobalNamespace::EnvironmentStartEndSongAudioEffect::HandleGamePauseDidResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentStartEndSongAudioEffect*), "HandleGamePauseDidResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentStartEndSongAudioEffect::HandleGamePauseDidPause
// Il2CppName: HandleGamePauseDidPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentStartEndSongAudioEffect::*)()>(&GlobalNamespace::EnvironmentStartEndSongAudioEffect::HandleGamePauseDidPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentStartEndSongAudioEffect*), "HandleGamePauseDidPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
