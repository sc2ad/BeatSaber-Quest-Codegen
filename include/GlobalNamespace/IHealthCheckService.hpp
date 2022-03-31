// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IHealthCheckService
  class IHealthCheckService;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IHealthCheckService);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IHealthCheckService*, "", "IHealthCheckService");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IHealthCheckService
  // [TokenAttribute] Offset: FFFFFFFF
  class IHealthCheckService/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PollUpdate();
  }; // IHealthCheckService
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IHealthCheckService::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IHealthCheckService::*)()>(&GlobalNamespace::IHealthCheckService::PollUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IHealthCheckService*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
