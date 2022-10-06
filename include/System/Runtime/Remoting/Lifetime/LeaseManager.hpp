// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Timer
  class Timer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ServerIdentity
  class ServerIdentity;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: LeaseManager
  class LeaseManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Lifetime::LeaseManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LeaseManager*, "System.Runtime.Remoting.Lifetime", "LeaseManager");
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Lifetime.LeaseManager
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaseManager : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.ArrayList _objects
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* objects;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Threading.Timer _timer
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::Timer* timer;
    // Field size check
    static_assert(sizeof(::System::Threading::Timer*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.ArrayList _objects
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__objects();
    // Get instance field reference: private System.Threading.Timer _timer
    [[deprecated("Use field access instead!")]] ::System::Threading::Timer*& dyn__timer();
    // public System.Void SetPollTime(System.TimeSpan timeSpan)
    // Offset: 0x1CC9D78
    void SetPollTime(::System::TimeSpan timeSpan);
    // public System.Void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
    // Offset: 0x1CC9E3C
    void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* identity);
    // public System.Void StartManager()
    // Offset: 0x1CC9F38
    void StartManager();
    // public System.Void StopManager()
    // Offset: 0x1CCA09C
    void StopManager();
    // public System.Void ManageLeases(System.Object state)
    // Offset: 0x1CCA0B8
    void ManageLeases(::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x1CCA2EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaseManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Lifetime::LeaseManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaseManager*, creationType>()));
    }
  }; // System.Runtime.Remoting.Lifetime.LeaseManager
  #pragma pack(pop)
  static check_size<sizeof(LeaseManager), 24 + sizeof(::System::Threading::Timer*)> __System_Runtime_Remoting_Lifetime_LeaseManagerSizeCheck;
  static_assert(sizeof(LeaseManager) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseManager::SetPollTime
// Il2CppName: SetPollTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::TimeSpan)>(&System::Runtime::Remoting::Lifetime::LeaseManager::SetPollTime)> {
  static const MethodInfo* get() {
    static auto* timeSpan = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LeaseManager*), "SetPollTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeSpan});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseManager::TrackLifetime
// Il2CppName: TrackLifetime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::LeaseManager::*)(::System::Runtime::Remoting::ServerIdentity*)>(&System::Runtime::Remoting::Lifetime::LeaseManager::TrackLifetime)> {
  static const MethodInfo* get() {
    static auto* identity = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ServerIdentity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LeaseManager*), "TrackLifetime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identity});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseManager::StartManager
// Il2CppName: StartManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(&System::Runtime::Remoting::Lifetime::LeaseManager::StartManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LeaseManager*), "StartManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseManager::StopManager
// Il2CppName: StopManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::LeaseManager::*)()>(&System::Runtime::Remoting::Lifetime::LeaseManager::StopManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LeaseManager*), "StopManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseManager::ManageLeases
// Il2CppName: ManageLeases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::LeaseManager::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Lifetime::LeaseManager::ManageLeases)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LeaseManager*), "ManageLeases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LeaseManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
