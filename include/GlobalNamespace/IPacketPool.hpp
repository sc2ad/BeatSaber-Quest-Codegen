// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IPacketPool
  class IPacketPool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IPacketPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPacketPool*, "", "IPacketPool");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IPacketPool
  // [TokenAttribute] Offset: FFFFFFFF
  class IPacketPool {
    public:
    // public System.Void Release(System.Object t)
    // Offset: 0xFFFFFFFF
    void Release(::Il2CppObject* t);
    // public System.Void Fill()
    // Offset: 0xFFFFFFFF
    void Fill();
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear();
  }; // IPacketPool
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IPacketPool::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IPacketPool::*)(::Il2CppObject*)>(&GlobalNamespace::IPacketPool::Release)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IPacketPool*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IPacketPool::Fill
// Il2CppName: Fill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IPacketPool::*)()>(&GlobalNamespace::IPacketPool::Fill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IPacketPool*), "Fill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IPacketPool::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IPacketPool::*)()>(&GlobalNamespace::IPacketPool::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IPacketPool*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
