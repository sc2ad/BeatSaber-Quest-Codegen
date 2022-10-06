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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AudioPitchGainEffect
  class AudioPitchGainEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioPitchGainEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioPitchGainEffect*, "", "AudioPitchGainEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: AudioPitchGainEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioPitchGainEffect : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::AudioPitchGainEffect::$StartEffectCoroutine$d__8
    class $StartEffectCoroutine$d__8;
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x20
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: duration and: pitchCurve
    char __padding1[0x4] = {};
    // private UnityEngine.AnimationCurve _pitchCurve
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationCurve* pitchCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _gainCurve
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* gainCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.Coroutine _currentCoroutine
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Coroutine* currentCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private System.Single _startPitch
    // Size: 0x4
    // Offset: 0x40
    float startPitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _startVolume
    // Size: 0x4
    // Offset: 0x44
    float startVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Single _duration
    [[deprecated("Use field access instead!")]] float& dyn__duration();
    // Get instance field reference: private UnityEngine.AnimationCurve _pitchCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__pitchCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _gainCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__gainCurve();
    // Get instance field reference: private UnityEngine.Coroutine _currentCoroutine
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn__currentCoroutine();
    // Get instance field reference: private System.Single _startPitch
    [[deprecated("Use field access instead!")]] float& dyn__startPitch();
    // Get instance field reference: private System.Single _startVolume
    [[deprecated("Use field access instead!")]] float& dyn__startVolume();
    // public System.Void .ctor()
    // Offset: 0x1536890
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioPitchGainEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioPitchGainEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioPitchGainEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1536718
    void Start();
    // private System.Collections.IEnumerator StartEffectCoroutine(System.Single volumeScale, System.Action finishCallback)
    // Offset: 0x153674C
    ::System::Collections::IEnumerator* StartEffectCoroutine(float volumeScale, ::System::Action* finishCallback);
    // public System.Void StartEffect(System.Single volumeScale, System.Action finishCallback)
    // Offset: 0x1536808
    void StartEffect(float volumeScale, ::System::Action* finishCallback);
    // public System.Void InterruptEffect()
    // Offset: 0x153683C
    void InterruptEffect();
    // public System.Void SetAudioSource(UnityEngine.AudioSource audioSource)
    // Offset: 0x1536888
    void SetAudioSource(::UnityEngine::AudioSource* audioSource);
  }; // AudioPitchGainEffect
  #pragma pack(pop)
  static check_size<sizeof(AudioPitchGainEffect), 68 + sizeof(float)> __GlobalNamespace_AudioPitchGainEffectSizeCheck;
  static_assert(sizeof(AudioPitchGainEffect) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioPitchGainEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AudioPitchGainEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioPitchGainEffect::*)()>(&GlobalNamespace::AudioPitchGainEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioPitchGainEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioPitchGainEffect::StartEffectCoroutine
// Il2CppName: StartEffectCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::AudioPitchGainEffect::*)(float, ::System::Action*)>(&GlobalNamespace::AudioPitchGainEffect::StartEffectCoroutine)> {
  static const MethodInfo* get() {
    static auto* volumeScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* finishCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioPitchGainEffect*), "StartEffectCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volumeScale, finishCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioPitchGainEffect::StartEffect
// Il2CppName: StartEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioPitchGainEffect::*)(float, ::System::Action*)>(&GlobalNamespace::AudioPitchGainEffect::StartEffect)> {
  static const MethodInfo* get() {
    static auto* volumeScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* finishCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioPitchGainEffect*), "StartEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volumeScale, finishCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioPitchGainEffect::InterruptEffect
// Il2CppName: InterruptEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioPitchGainEffect::*)()>(&GlobalNamespace::AudioPitchGainEffect::InterruptEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioPitchGainEffect*), "InterruptEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioPitchGainEffect::SetAudioSource
// Il2CppName: SetAudioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioPitchGainEffect::*)(::UnityEngine::AudioSource*)>(&GlobalNamespace::AudioPitchGainEffect::SetAudioSource)> {
  static const MethodInfo* get() {
    static auto* audioSource = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioPitchGainEffect*), "SetAudioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioSource});
  }
};
