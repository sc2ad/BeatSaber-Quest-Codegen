#pragma once
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: GlobalNamespace::IAssetSongPreviewAudioClipProvider.get_songPreviewAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip (GlobalNamespace::IAssetSongPreviewAudioClipProvider::*)()>(&GlobalNamespace::IAssetSongPreviewAudioClipProvider::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IAssetSongPreviewAudioClipProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::AudioClip GlobalNamespace::IAssetSongPreviewAudioClipProvider::get_songPreviewAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IAssetSongPreviewAudioClipProvider>::get(),
                            "get_songPreviewAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
