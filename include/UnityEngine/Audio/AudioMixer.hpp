// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerUpdateMode
  struct AudioMixerUpdateMode;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixer
  class AudioMixer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Audio::AudioMixer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixer*, "UnityEngine.Audio", "AudioMixer");
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Audio.AudioMixer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 11ED3E4
  // [NativeHeaderAttribute] Offset: 11ED3E4
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  // [ExcludeFromObjectFactoryAttribute] Offset: FFFFFFFF
  class AudioMixer : public ::UnityEngine::Object {
    public:
    // public System.Void set_updateMode(UnityEngine.Audio.AudioMixerUpdateMode value)
    // Offset: 0x2A78AD0
    void set_updateMode(::UnityEngine::Audio::AudioMixerUpdateMode value);
    // public System.Boolean SetFloat(System.String name, System.Single value)
    // Offset: 0x2A78B20
    bool SetFloat(::StringW name, float value);
    // public System.Boolean GetFloat(System.String name, out System.Single value)
    // Offset: 0x2A78B80
    bool GetFloat(::StringW name, ByRef<float> value);
  }; // UnityEngine.Audio.AudioMixer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::set_updateMode
// Il2CppName: set_updateMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Audio::AudioMixer::*)(::UnityEngine::Audio::AudioMixerUpdateMode)>(&UnityEngine::Audio::AudioMixer::set_updateMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Audio", "AudioMixerUpdateMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "set_updateMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Audio::AudioMixer::*)(::StringW, float)>(&UnityEngine::Audio::AudioMixer::SetFloat)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Audio::AudioMixer::GetFloat
// Il2CppName: GetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Audio::AudioMixer::*)(::StringW, ByRef<float>)>(&UnityEngine::Audio::AudioMixer::GetFloat)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Audio::AudioMixer*), "GetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
