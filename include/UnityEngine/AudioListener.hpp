// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AudioBehaviour
#include "UnityEngine/AudioBehaviour.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioListener
  class AudioListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioListener);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioListener*, "UnityEngine", "AudioListener");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioListener
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 11ED124
  // [RequireComponent] Offset: 11ED124
  class AudioListener : public ::UnityEngine::AudioBehaviour {
    public:
    // static public System.Boolean get_pause()
    // Offset: 0x2A7A70C
    static bool get_pause();
    // static public System.Void set_pause(System.Boolean value)
    // Offset: 0x2A7A740
    static void set_pause(bool value);
  }; // UnityEngine.AudioListener
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioListener::get_pause
// Il2CppName: get_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::AudioListener::get_pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioListener*), "get_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioListener::set_pause
// Il2CppName: set_pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::AudioListener::set_pause)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioListener*), "set_pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
