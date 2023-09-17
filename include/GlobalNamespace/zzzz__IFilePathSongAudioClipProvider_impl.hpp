#pragma once
namespace {
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IFilePathSongAudioClipProvider.get_songAudioClipPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::IFilePathSongAudioClipProvider::*)()>(&::GlobalNamespace::IFilePathSongAudioClipProvider::get_songAudioClipPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IFilePathSongAudioClipProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IFilePathSongAudioClipProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::StringW ::GlobalNamespace::IFilePathSongAudioClipProvider::get_songAudioClipPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IFilePathSongAudioClipProvider>::get(),
                            "get_songAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
