// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusDeviceConfigExperimentModel
#include "GlobalNamespace/OculusDeviceConfigExperimentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6, "", "OculusDeviceConfigExperimentModel/<Initialize>d__6");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OculusDeviceConfigExperimentModel/<Initialize>d__6
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct OculusDeviceConfigExperimentModel::$Initialize$d__6/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // private System.Diagnostics.Stopwatch <stopwatch>5__2
    // Size: 0x8
    // Offset: 0x20
    ::System::Diagnostics::Stopwatch* $stopwatch$5__2;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Stopwatch*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x28
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $Initialize$d__6
    constexpr $Initialize$d__6(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::System::Diagnostics::Stopwatch* $stopwatch$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $stopwatch$5__2{$stopwatch$5__2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: private System.Diagnostics.Stopwatch <stopwatch>5__2
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Stopwatch*& dyn_$stopwatch$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x15544EC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x15547F4
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OculusDeviceConfigExperimentModel/<Initialize>d__6
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6::*)()>(&GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
