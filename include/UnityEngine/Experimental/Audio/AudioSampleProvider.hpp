// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Audio
namespace UnityEngine::Experimental::Audio {
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Audio
namespace UnityEngine::Experimental::Audio {
  // Forward declaring type: AudioSampleProvider
  class AudioSampleProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Audio::AudioSampleProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Audio::AudioSampleProvider*, "UnityEngine.Experimental.Audio", "AudioSampleProvider");
// Type namespace: UnityEngine.Experimental.Audio
namespace UnityEngine::Experimental::Audio {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Audio.AudioSampleProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 11ED6D4
  // [NativeTypeAttribute] Offset: 11ED6D4
  class AudioSampleProvider : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler
    class SampleFramesHandler;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0x11ED8A4
    // private UnityEngine.Experimental.Audio.AudioSampleProvider/UnityEngine.Experimental.Audio.SampleFramesHandler sampleFramesAvailable
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesAvailable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x11ED8E0
    // private UnityEngine.Experimental.Audio.AudioSampleProvider/UnityEngine.Experimental.Audio.SampleFramesHandler sampleFramesOverflow
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler* sampleFramesOverflow;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Experimental.Audio.AudioSampleProvider/UnityEngine.Experimental.Audio.SampleFramesHandler sampleFramesAvailable
    ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*& dyn_sampleFramesAvailable();
    // Get instance field reference: private UnityEngine.Experimental.Audio.AudioSampleProvider/UnityEngine.Experimental.Audio.SampleFramesHandler sampleFramesOverflow
    ::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*& dyn_sampleFramesOverflow();
    // private System.Void InvokeSampleFramesAvailable(System.Int32 sampleFrameCount)
    // Offset: 0x2A7BD70
    void InvokeSampleFramesAvailable(int sampleFrameCount);
    // private System.Void InvokeSampleFramesOverflow(System.Int32 droppedSampleFrameCount)
    // Offset: 0x2A7C198
    void InvokeSampleFramesOverflow(int droppedSampleFrameCount);
  }; // UnityEngine.Experimental.Audio.AudioSampleProvider
  #pragma pack(pop)
  static check_size<sizeof(AudioSampleProvider), 24 + sizeof(::UnityEngine::Experimental::Audio::AudioSampleProvider::SampleFramesHandler*)> __UnityEngine_Experimental_Audio_AudioSampleProviderSizeCheck;
  static_assert(sizeof(AudioSampleProvider) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable
// Il2CppName: InvokeSampleFramesAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Audio::AudioSampleProvider::*)(int)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable)> {
  static const MethodInfo* get() {
    static auto* sampleFrameCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider*), "InvokeSampleFramesAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleFrameCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesOverflow
// Il2CppName: InvokeSampleFramesOverflow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::Audio::AudioSampleProvider::*)(int)>(&UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesOverflow)> {
  static const MethodInfo* get() {
    static auto* droppedSampleFrameCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Audio::AudioSampleProvider*), "InvokeSampleFramesOverflow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{droppedSampleFrameCount});
  }
};
