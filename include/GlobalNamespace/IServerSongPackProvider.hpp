// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IServerSongPackProvider
  class IServerSongPackProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IServerSongPackProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IServerSongPackProvider*, "", "IServerSongPackProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IServerSongPackProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IServerSongPackProvider {
    public:
    // public SongPackMask[] DecomposeSongPackMask(SongPackMask songPackMask)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::GlobalNamespace::SongPackMask> DecomposeSongPackMask(::GlobalNamespace::SongPackMask songPackMask);
  }; // IServerSongPackProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IServerSongPackProvider::DecomposeSongPackMask
// Il2CppName: DecomposeSongPackMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::SongPackMask> (GlobalNamespace::IServerSongPackProvider::*)(::GlobalNamespace::SongPackMask)>(&GlobalNamespace::IServerSongPackProvider::DecomposeSongPackMask)> {
  static const MethodInfo* get() {
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IServerSongPackProvider*), "DecomposeSongPackMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songPackMask});
  }
};
