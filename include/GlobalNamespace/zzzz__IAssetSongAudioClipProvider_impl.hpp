#pragma once
namespace {
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAssetSongAudioClipProvider.get_songAudioClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip (::GlobalNamespace::IAssetSongAudioClipProvider::*)()>(&::GlobalNamespace::IAssetSongAudioClipProvider::get_songAudioClip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IAssetSongAudioClipProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAssetSongAudioClipProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::AudioClip ::GlobalNamespace::IAssetSongAudioClipProvider::get_songAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAssetSongAudioClipProvider>::get(),
                            "get_songAudioClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
