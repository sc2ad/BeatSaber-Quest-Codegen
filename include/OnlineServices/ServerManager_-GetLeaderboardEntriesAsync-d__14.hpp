// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.ServerManager
#include "OnlineServices/ServerManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: OnlineServices.GetLeaderboardFilterData
#include "OnlineServices/GetLeaderboardFilterData.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: OnlineServices.GetLeaderboardEntriesResult
#include "OnlineServices/GetLeaderboardEntriesResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: LeaderboardEntriesResult
  class LeaderboardEntriesResult;
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14, "OnlineServices", "ServerManager/<GetLeaderboardEntriesAsync>d__14");
// Type namespace: OnlineServices
namespace OnlineServices {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.ServerManager/OnlineServices.<GetLeaderboardEntriesAsync>d__14
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct ServerManager::$GetLeaderboardEntriesAsync$d__14/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.LeaderboardEntriesResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OnlineServices::LeaderboardEntriesResult*> $$t__builder;
    // public OnlineServices.ServerManager <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::OnlineServices::ServerManager* $$4__this;
    // Field size check
    static_assert(sizeof(::OnlineServices::ServerManager*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    // Size: 0x20
    // Offset: 0x30
    ::OnlineServices::GetLeaderboardFilterData leaderboardFilterData;
    // Field size check
    static_assert(sizeof(::OnlineServices::GetLeaderboardFilterData) == 0x20);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.GetLeaderboardEntriesResult> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::OnlineServices::GetLeaderboardEntriesResult> $$u__2;
    public:
    // Creating value type constructor for type: $GetLeaderboardEntriesAsync$d__14
    constexpr $GetLeaderboardEntriesAsync$d__14(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OnlineServices::LeaderboardEntriesResult*> $$t__builder_ = {}, ::OnlineServices::ServerManager* $$4__this_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::OnlineServices::GetLeaderboardFilterData leaderboardFilterData_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::OnlineServices::GetLeaderboardEntriesResult> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, leaderboardFilterData{leaderboardFilterData_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Creating interface conversion operator: i_IAsyncStateMachine
    inline ::System::Runtime::CompilerServices::IAsyncStateMachine* i_IAsyncStateMachine() noexcept {
      return reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.LeaderboardEntriesResult> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OnlineServices::LeaderboardEntriesResult*>& dyn_$$t__builder();
    // Get instance field reference: public OnlineServices.ServerManager <>4__this
    [[deprecated("Use field access instead!")]] ::OnlineServices::ServerManager*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public OnlineServices.GetLeaderboardFilterData leaderboardFilterData
    [[deprecated("Use field access instead!")]] ::OnlineServices::GetLeaderboardFilterData& dyn_leaderboardFilterData();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::OnlineServices::PlatformServicesAvailabilityInfo*>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.GetLeaderboardEntriesResult> <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::OnlineServices::GetLeaderboardEntriesResult>& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x137AB48
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x137AEB4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.ServerManager/OnlineServices.<GetLeaderboardEntriesAsync>d__14
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14::*)()>(&OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::ServerManager::$GetLeaderboardEntriesAsync$d__14), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
