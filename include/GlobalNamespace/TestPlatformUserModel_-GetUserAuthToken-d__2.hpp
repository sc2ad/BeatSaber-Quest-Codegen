// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TestPlatformUserModel
#include "GlobalNamespace/TestPlatformUserModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlatformUserAuthTokenData
  class PlatformUserAuthTokenData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2, "", "TestPlatformUserModel/<GetUserAuthToken>d__2");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TestPlatformUserModel/<GetUserAuthToken>d__2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct TestPlatformUserModel::$GetUserAuthToken$d__2/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<PlatformUserAuthTokenData> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> $$t__builder;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<PlatformUserAuthTokenData> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*> $$u__1;
    public:
    // Creating value type constructor for type: $GetUserAuthToken$d__2
    constexpr $GetUserAuthToken$d__2(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*> $$t__builder_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<PlatformUserAuthTokenData> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::PlatformUserAuthTokenData*>& dyn_$$t__builder();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<PlatformUserAuthTokenData> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x13B75C4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x13B77C4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestPlatformUserModel/<GetUserAuthToken>d__2
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2::*)()>(&GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformUserModel::$GetUserAuthToken$d__2), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
