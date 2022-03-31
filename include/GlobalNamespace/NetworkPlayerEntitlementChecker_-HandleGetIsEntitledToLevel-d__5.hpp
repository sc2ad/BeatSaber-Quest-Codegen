// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkPlayerEntitlementChecker
#include "GlobalNamespace/NetworkPlayerEntitlementChecker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: EntitlementsStatus
#include "GlobalNamespace/EntitlementsStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5, "", "NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__5");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public NetworkPlayerEntitlementChecker <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NetworkPlayerEntitlementChecker*) == 0x8);
    // public System.String levelId
    // Size: 0x8
    // Offset: 0x30
    ::StringW levelId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EntitlementsStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> $$u__1;
    public:
    // Creating value type constructor for type: $HandleGetIsEntitledToLevel$d__5
    constexpr $HandleGetIsEntitledToLevel$d__5(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this_ = {}, ::StringW levelId_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelId{levelId_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public NetworkPlayerEntitlementChecker <>4__this
    ::GlobalNamespace::NetworkPlayerEntitlementChecker*& dyn_$$4__this();
    // Get instance field reference: public System.String levelId
    ::StringW& dyn_levelId();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<EntitlementsStatus> <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementsStatus>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x146EEC0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x146F104
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetworkPlayerEntitlementChecker/<HandleGetIsEntitledToLevel>d__5
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5::*)()>(&GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__5), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
