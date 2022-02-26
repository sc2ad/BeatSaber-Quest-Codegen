// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IServerBeatmapProvider
  class IServerBeatmapProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IServerBeatmapProviderManager
  class IServerBeatmapProviderManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IServerBeatmapProviderManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IServerBeatmapProviderManager*, "", "IServerBeatmapProviderManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IServerBeatmapProviderManager
  // [TokenAttribute] Offset: FFFFFFFF
  class IServerBeatmapProviderManager/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public IServerBeatmapProvider GetServerBeatmapProvider()
    // Offset: 0xFFFFFFFF
    ::GlobalNamespace::IServerBeatmapProvider* GetServerBeatmapProvider();
    // public System.Threading.Tasks.Task RefreshAsync()
    // Offset: 0xFFFFFFFF
    ::System::Threading::Tasks::Task* RefreshAsync();
  }; // IServerBeatmapProviderManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IServerBeatmapProviderManager::GetServerBeatmapProvider
// Il2CppName: GetServerBeatmapProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IServerBeatmapProvider* (GlobalNamespace::IServerBeatmapProviderManager::*)()>(&GlobalNamespace::IServerBeatmapProviderManager::GetServerBeatmapProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IServerBeatmapProviderManager*), "GetServerBeatmapProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IServerBeatmapProviderManager::RefreshAsync
// Il2CppName: RefreshAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::IServerBeatmapProviderManager::*)()>(&GlobalNamespace::IServerBeatmapProviderManager::RefreshAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IServerBeatmapProviderManager*), "RefreshAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
