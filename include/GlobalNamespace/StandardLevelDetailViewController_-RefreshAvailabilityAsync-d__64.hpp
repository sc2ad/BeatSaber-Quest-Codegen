// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: StandardLevelDetailViewController
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: StandardLevelDetailViewController/<RefreshAvailabilityAsync>d__64
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public StandardLevelDetailViewController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::StandardLevelDetailViewController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelDetailViewController*) == 0x8);
    // private System.Threading.CancellationToken <token>5__2
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken $token$5__2;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $RefreshAvailabilityAsync$d__64
    constexpr $RefreshAvailabilityAsync$d__64(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::StandardLevelDetailViewController* $$4__this_ = {}, System::Threading::CancellationToken $token$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $token$5__2{$token$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public StandardLevelDetailViewController <>4__this
    GlobalNamespace::StandardLevelDetailViewController*& dyn_$$4__this();
    // Get instance field reference: private System.Threading.CancellationToken <token>5__2
    System::Threading::CancellationToken& dyn_$token$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x1155D7C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1156254
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // StandardLevelDetailViewController/<RefreshAvailabilityAsync>d__64
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64, "", "StandardLevelDetailViewController/<RefreshAvailabilityAsync>d__64");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64::*)()>(&GlobalNamespace::StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelDetailViewController::$RefreshAvailabilityAsync$d__64), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
