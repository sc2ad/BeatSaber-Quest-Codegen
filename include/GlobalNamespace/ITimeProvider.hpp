// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ITimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ITimeProvider*, "", "ITimeProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ITimeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ITimeProvider {
    public:
    // public System.Single get_time()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_time();
  }; // ITimeProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ITimeProvider::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ITimeProvider::*)()>(&GlobalNamespace::ITimeProvider::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ITimeProvider*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
