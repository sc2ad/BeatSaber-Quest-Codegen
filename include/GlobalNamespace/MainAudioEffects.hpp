// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioLowPassFilter
  class AudioLowPassFilter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MainAudioEffects
  class MainAudioEffects;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MainAudioEffects);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainAudioEffects*, "", "MainAudioEffects");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MainAudioEffects
  // [TokenAttribute] Offset: FFFFFFFF
  class MainAudioEffects : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.AudioLowPassFilter _audioLowPassFilter
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioLowPassFilter* audioLowPassFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioLowPassFilter*) == 0x8);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x20
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetFrequency
    // Size: 0x4
    // Offset: 0x24
    float targetFrequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kDefaultCutoffFrequency
    static constexpr const int kDefaultCutoffFrequency = 22000;
    // Get static field: static private System.Int32 kDefaultCutoffFrequency
    static int _get_kDefaultCutoffFrequency();
    // Set static field: static private System.Int32 kDefaultCutoffFrequency
    static void _set_kDefaultCutoffFrequency(int value);
    // static field const value: static private System.Int32 kLowPassCutoffFrequency
    static constexpr const int kLowPassCutoffFrequency = 150;
    // Get static field: static private System.Int32 kLowPassCutoffFrequency
    static int _get_kLowPassCutoffFrequency();
    // Set static field: static private System.Int32 kLowPassCutoffFrequency
    static void _set_kLowPassCutoffFrequency(int value);
    // Get instance field reference: private UnityEngine.AudioLowPassFilter _audioLowPassFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioLowPassFilter*& dyn__audioLowPassFilter();
    // Get instance field reference: private System.Single _smooth
    [[deprecated("Use field access instead!")]] float& dyn__smooth();
    // Get instance field reference: private System.Single _targetFrequency
    [[deprecated("Use field access instead!")]] float& dyn__targetFrequency();
    // public System.Void .ctor()
    // Offset: 0x13383A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainAudioEffects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MainAudioEffects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainAudioEffects*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13381DC
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0x133821C
    void LateUpdate();
    // public System.Void ResumeNormalSound()
    // Offset: 0x1338328
    void ResumeNormalSound();
    // public System.Void TriggerLowPass()
    // Offset: 0x133835C
    void TriggerLowPass();
  }; // MainAudioEffects
  #pragma pack(pop)
  static check_size<sizeof(MainAudioEffects), 36 + sizeof(float)> __GlobalNamespace_MainAudioEffectsSizeCheck;
  static_assert(sizeof(MainAudioEffects) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainAudioEffects::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MainAudioEffects::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainAudioEffects::*)()>(&GlobalNamespace::MainAudioEffects::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainAudioEffects*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainAudioEffects::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainAudioEffects::*)()>(&GlobalNamespace::MainAudioEffects::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainAudioEffects*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainAudioEffects::ResumeNormalSound
// Il2CppName: ResumeNormalSound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainAudioEffects::*)()>(&GlobalNamespace::MainAudioEffects::ResumeNormalSound)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainAudioEffects*), "ResumeNormalSound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainAudioEffects::TriggerLowPass
// Il2CppName: TriggerLowPass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainAudioEffects::*)()>(&GlobalNamespace::MainAudioEffects::TriggerLowPass)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainAudioEffects*), "TriggerLowPass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
