// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.IUpdateReceiver
  class IUpdateReceiver {
    public:
    // Creating value type constructor for type: IUpdateReceiver
    IUpdateReceiver() noexcept {}
    // public System.Void Update(System.Single unscaledDeltaTime)
    // Offset: 0xFFFFFFFF
    void Update(float unscaledDeltaTime);
  }; // UnityEngine.ResourceManagement.IUpdateReceiver
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::IUpdateReceiver*, "UnityEngine.ResourceManagement", "IUpdateReceiver");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::IUpdateReceiver::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::IUpdateReceiver::*)(float)>(&UnityEngine::ResourceManagement::IUpdateReceiver::Update)> {
  static const MethodInfo* get() {
    static auto* unscaledDeltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::IUpdateReceiver*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unscaledDeltaTime});
  }
};
