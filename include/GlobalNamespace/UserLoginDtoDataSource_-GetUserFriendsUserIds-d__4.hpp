// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UserLoginDtoDataSource
#include "GlobalNamespace/UserLoginDtoDataSource.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: UserLoginDtoDataSource/<GetUserFriendsUserIds>d__4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String[]> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayWrapper<::Il2CppString*>> $$t__builder;
    // public UserLoginDtoDataSource <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::UserLoginDtoDataSource* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UserLoginDtoDataSource*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IReadOnlyList`1<System.String>> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*> $$u__1;
    // Creating value type constructor for type: $GetUserFriendsUserIds$d__4
    constexpr $GetUserFriendsUserIds$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayWrapper<::Il2CppString*>> $$t__builder_ = {}, GlobalNamespace::UserLoginDtoDataSource* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String[]> <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayWrapper<::Il2CppString*>>& dyn_$$t__builder();
    // Get instance field reference: public UserLoginDtoDataSource <>4__this
    GlobalNamespace::UserLoginDtoDataSource*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IReadOnlyList`1<System.String>> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x134699C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1346C00
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // UserLoginDtoDataSource/<GetUserFriendsUserIds>d__4
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4, "", "UserLoginDtoDataSource/<GetUserFriendsUserIds>d__4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4::*)()>(&GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UserLoginDtoDataSource::$GetUserFriendsUserIds$d__4), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
