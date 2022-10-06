// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioLowPassFilter
  class AudioLowPassFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioLowPassFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioLowPassFilter
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 109A928
  class AudioLowPassFilter : public ::UnityEngine::Behaviour {
    public:
    // public System.Single get_cutoffFrequency()
    // Offset: 0x2B2F3C4
    float get_cutoffFrequency();
    // public System.Void set_cutoffFrequency(System.Single value)
    // Offset: 0x2B2F404
    void set_cutoffFrequency(float value);
  }; // UnityEngine.AudioLowPassFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::get_cutoffFrequency
// Il2CppName: get_cutoffFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioLowPassFilter::*)()>(&UnityEngine::AudioLowPassFilter::get_cutoffFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "get_cutoffFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::set_cutoffFrequency
// Il2CppName: set_cutoffFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioLowPassFilter::*)(float)>(&UnityEngine::AudioLowPassFilter::set_cutoffFrequency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "set_cutoffFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
