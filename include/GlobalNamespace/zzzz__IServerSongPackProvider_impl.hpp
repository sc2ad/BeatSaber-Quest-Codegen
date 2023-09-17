#pragma once
namespace {
#include "GlobalNamespace/zzzz__IServerSongPackProvider_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IServerSongPackProvider.DecomposeSongPackMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::SongPackMask> (::GlobalNamespace::IServerSongPackProvider::*)(::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::IServerSongPackProvider::DecomposeSongPackMask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IServerSongPackProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerSongPackProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<::GlobalNamespace::SongPackMask> ::GlobalNamespace::IServerSongPackProvider::DecomposeSongPackMask(::GlobalNamespace::SongPackMask songPackMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerSongPackProvider>::get(),
                            "DecomposeSongPackMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SongPackMask>, false>(const_cast<void*>(instance), ___internal_method, songPackMask);
}
} // end anonymous namespace
