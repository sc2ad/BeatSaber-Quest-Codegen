// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioType
  struct AudioType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AudioTypeHelper
  class AudioTypeHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AudioTypeHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTypeHelper*, "", "AudioTypeHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AudioTypeHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioTypeHelper : public ::Il2CppObject {
    public:
    // static public UnityEngine.AudioType GetAudioTypeFromPath(System.String path)
    // Offset: 0x1537848
    static ::UnityEngine::AudioType GetAudioTypeFromPath(::StringW path);
  }; // AudioTypeHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AudioTypeHelper::GetAudioTypeFromPath
// Il2CppName: GetAudioTypeFromPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioType (*)(::StringW)>(&GlobalNamespace::AudioTypeHelper::GetAudioTypeFromPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AudioTypeHelper*), "GetAudioTypeFromPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
