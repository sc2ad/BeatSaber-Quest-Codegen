// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetEaseManager
#include "GlobalNamespace/NetEaseManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: NetEase.Docker.LoginData
#include "NetEase/Docker/LoginData.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetEaseManager/<LoginAsync>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct NetEaseManager::$LoginAsync$d__13/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<NetEase.Docker.LoginData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::LoginData> $$t__builder;
    // public NetEaseManager <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NetEaseManager* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetEaseManager*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<NetEase.Docker.LoginData> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::LoginData> $$u__1;
    public:
    // Creating value type constructor for type: $LoginAsync$d__13
    constexpr $LoginAsync$d__13(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::LoginData> $$t__builder_ = {}, GlobalNamespace::NetEaseManager* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::LoginData> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<NetEase.Docker.LoginData> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::LoginData>& dyn_$$t__builder();
    // Get instance field reference: public NetEaseManager <>4__this
    GlobalNamespace::NetEaseManager*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<NetEase.Docker.LoginData> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::LoginData>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1138108
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1138324
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetEaseManager/<LoginAsync>d__13
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseManager::$LoginAsync$d__13, "", "NetEaseManager/<LoginAsync>d__13");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::$LoginAsync$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::$LoginAsync$d__13::*)()>(&GlobalNamespace::NetEaseManager::$LoginAsync$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager::$LoginAsync$d__13), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseManager::$LoginAsync$d__13::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseManager::$LoginAsync$d__13::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetEaseManager::$LoginAsync$d__13::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseManager::$LoginAsync$d__13), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
