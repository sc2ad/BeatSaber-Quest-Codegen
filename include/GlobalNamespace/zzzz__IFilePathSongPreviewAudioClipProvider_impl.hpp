#pragma once
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
//  Writing Method size for method: GlobalNamespace::IFilePathSongPreviewAudioClipProvider.get_songPreviewAudioClipPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IFilePathSongPreviewAudioClipProvider::*)()>(&GlobalNamespace::IFilePathSongPreviewAudioClipProvider::get_songPreviewAudioClipPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IFilePathSongPreviewAudioClipProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::StringW GlobalNamespace::IFilePathSongPreviewAudioClipProvider::get_songPreviewAudioClipPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IFilePathSongPreviewAudioClipProvider>::get(),
                            "get_songPreviewAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
