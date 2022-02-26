// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AudioClipLoaderSO
  class AudioClipLoaderSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioClipLoaderSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipLoaderSO*, "", "AudioClipLoaderSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipLoaderSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioClipLoaderSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3
    class $LoadAudioFileCoroutine$d__3;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean _isLoading
    // Size: 0x1
    // Offset: 0x18
    bool isLoading;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _isLoading
    bool& dyn__isLoading();
    // public System.Void LoadAudioFile(System.String filePath, System.Action`1<UnityEngine.AudioClip> finishCallback)
    // Offset: 0x148F3E8
    void LoadAudioFile(::StringW filePath, ::System::Action_1<::UnityEngine::AudioClip*>* finishCallback);
    // public System.Collections.IEnumerator LoadAudioFileCoroutine(System.String filePath, System.Action`1<UnityEngine.AudioClip> finishCallback)
    // Offset: 0x148F4A8
    ::System::Collections::IEnumerator* LoadAudioFileCoroutine(::StringW filePath, ::System::Action_1<::UnityEngine::AudioClip*>* finishCallback);
    // public System.Void .ctor()
    // Offset: 0x148F558
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipLoaderSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AudioClipLoaderSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipLoaderSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x148F3C0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // AudioClipLoaderSO
  #pragma pack(pop)
  static check_size<sizeof(AudioClipLoaderSO), 24 + sizeof(bool)> __GlobalNamespace_AudioClipLoaderSOSizeCheck;
  static_assert(sizeof(AudioClipLoaderSO) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::LoadAudioFile
// Il2CppName: LoadAudioFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipLoaderSO::*)(::StringW, ::System::Action_1<::UnityEngine::AudioClip*>*)>(&GlobalNamespace::AudioClipLoaderSO::LoadAudioFile)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* finishCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipLoaderSO*), "LoadAudioFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath, finishCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::LoadAudioFileCoroutine
// Il2CppName: LoadAudioFileCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::AudioClipLoaderSO::*)(::StringW, ::System::Action_1<::UnityEngine::AudioClip*>*)>(&GlobalNamespace::AudioClipLoaderSO::LoadAudioFileCoroutine)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* finishCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipLoaderSO*), "LoadAudioFileCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath, finishCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AudioClipLoaderSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioClipLoaderSO::*)()>(&GlobalNamespace::AudioClipLoaderSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioClipLoaderSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
