// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: ILease
  class ILease;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: ISponsor
  class ISponsor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::ISponsor);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::ISponsor*, "System.Runtime.Remoting.Lifetime", "ISponsor");
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Lifetime.ISponsor
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1070A00
  class ISponsor {
    public:
    // public System.TimeSpan Renewal(System.Runtime.Remoting.Lifetime.ILease lease)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::TimeSpan Renewal(::System::Runtime::Remoting::Lifetime::ILease* lease);
  }; // System.Runtime.Remoting.Lifetime.ISponsor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::ISponsor::Renewal
// Il2CppName: Renewal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Runtime::Remoting::Lifetime::ISponsor::*)(::System::Runtime::Remoting::Lifetime::ILease*)>(&System::Runtime::Remoting::Lifetime::ISponsor::Renewal)> {
  static const MethodInfo* get() {
    static auto* lease = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Lifetime", "ILease")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::ISponsor*), "Renewal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lease});
  }
};
