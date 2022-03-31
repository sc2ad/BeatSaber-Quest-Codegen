// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioClipAsyncLoader
#include "GlobalNamespace/AudioClipAsyncLoader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass17_0*, "", "AudioClipAsyncLoader/<>c__DisplayClass17_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipAsyncLoader/<>c__DisplayClass17_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AudioClipAsyncLoader::$$c__DisplayClass17_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public AudioClipAsyncLoader <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::AudioClipAsyncLoader* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioClipAsyncLoader*) == 0x8);
    // public System.String audioClipFilePath
    // Size: 0x8
    // Offset: 0x18
    ::StringW audioClipFilePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public AudioClipAsyncLoader <>4__this
    ::GlobalNamespace::AudioClipAsyncLoader*& dyn_$$4__this();
    // Get instance field reference: public System.String audioClipFilePath
    ::StringW& dyn_audioClipFilePath();
    // System.Threading.Tasks.Task`1<UnityEngine.AudioClip> <Load>b__0()
    // Offset: 0x14B82F8
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* $Load$b__0();
    // public System.Void .ctor()
    // Offset: 0x14B7E88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipAsyncLoader::$$c__DisplayClass17_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass17_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipAsyncLoader::$$c__DisplayClass17_0*, creationType>()));
    }
  }; // AudioClipAsyncLoader/<>c__DisplayClass17_0
  #pragma pack(pop)
  static check_size<sizeof(AudioClipAsyncLoader::$$c__DisplayClass17_0), 24 + sizeof(::StringW)> __GlobalNamespace_AudioClipAsyncLoader_$$c__DisplayClass17_0SizeCheck;
  static_assert(sizeof(AudioClipAsyncLoader::$$c__DisplayClass17_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass17_0::$Load$b__0
// Il2CppName: <Load>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass17_0::*)()>(&GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass17_0::$Load$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass17_0*), "<Load>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipAsyncLoader::$$c__DisplayClass17_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
