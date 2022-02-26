// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<SendWebRequestAsync>d__10");
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<SendWebRequestAsync>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> $$t__builder;
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // Field size check
    static_assert(sizeof(::OnlineServices::API::HTTPLeaderboardsOathHelper*) == 0x8);
    // public System.String uri
    // Size: 0x8
    // Offset: 0x28
    ::StringW uri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String method
    // Size: 0x8
    // Offset: 0x30
    ::StringW method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String bearerToken
    // Size: 0x8
    // Offset: 0x38
    ::StringW bearerToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String bodyData
    // Size: 0x8
    // Offset: 0x40
    ::StringW bodyData;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_1 <>8__1
    // Size: 0x8
    // Offset: 0x48
    ::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1* $$8__1;
    // Field size check
    static_assert(sizeof(::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1*) == 0x8);
    // private OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_0 <>8__2
    // Size: 0x8
    // Offset: 0x50
    ::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0* $$8__2;
    // Field size check
    static_assert(sizeof(::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1;
    public:
    // Creating value type constructor for type: $SendWebRequestAsync$d__10
    constexpr $SendWebRequestAsync$d__10(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> $$t__builder_ = {}, ::OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, ::StringW uri_ = {}, ::StringW method_ = {}, ::StringW bearerToken_ = {}, ::StringW bodyData_ = {}, ::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1* $$8__1_ = {}, ::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0* $$8__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, uri{uri_}, method{method_}, bearerToken{bearerToken_}, bodyData{bodyData_}, $$8__1{$$8__1_}, $$8__2{$$8__2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& dyn_$$t__builder();
    // Get instance field reference: public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    ::OnlineServices::API::HTTPLeaderboardsOathHelper*& dyn_$$4__this();
    // Get instance field reference: public System.String uri
    ::StringW& dyn_uri();
    // Get instance field reference: public System.String method
    ::StringW& dyn_method();
    // Get instance field reference: public System.String bearerToken
    ::StringW& dyn_bearerToken();
    // Get instance field reference: public System.String bodyData
    ::StringW& dyn_bodyData();
    // Get instance field reference: private OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_1 <>8__1
    ::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1*& dyn_$$8__1();
    // Get instance field reference: private OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_0 <>8__2
    ::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*& dyn_$$8__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x2BBE78C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2BBEE00
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<SendWebRequestAsync>d__10
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10::*)()>(&OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestAsync$d__10), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
