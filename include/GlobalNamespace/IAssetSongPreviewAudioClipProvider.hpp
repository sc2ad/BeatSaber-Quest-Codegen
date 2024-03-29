// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IAssetSongPreviewAudioClipProvider
  class IAssetSongPreviewAudioClipProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IAssetSongPreviewAudioClipProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IAssetSongPreviewAudioClipProvider*, "", "IAssetSongPreviewAudioClipProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IAssetSongPreviewAudioClipProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IAssetSongPreviewAudioClipProvider {
    public:
    // public UnityEngine.AudioClip get_songPreviewAudioClip()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::AudioClip* get_songPreviewAudioClip();
  }; // IAssetSongPreviewAudioClipProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IAssetSongPreviewAudioClipProvider::get_songPreviewAudioClip
// Il2CppName: get_songPreviewAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (GlobalNamespace::IAssetSongPreviewAudioClipProvider::*)()>(&GlobalNamespace::IAssetSongPreviewAudioClipProvider::get_songPreviewAudioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IAssetSongPreviewAudioClipProvider*), "get_songPreviewAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
