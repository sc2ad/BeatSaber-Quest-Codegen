// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IComponentRefresher
  class IComponentRefresher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IComponentRefresher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IComponentRefresher*, "", "IComponentRefresher");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IComponentRefresher
  // [TokenAttribute] Offset: FFFFFFFF
  class IComponentRefresher {
    public:
    // public System.Void __Refresh()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void __Refresh();
  }; // IComponentRefresher
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IComponentRefresher::__Refresh
// Il2CppName: __Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IComponentRefresher::*)()>(&GlobalNamespace::IComponentRefresher::__Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IComponentRefresher*), "__Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
