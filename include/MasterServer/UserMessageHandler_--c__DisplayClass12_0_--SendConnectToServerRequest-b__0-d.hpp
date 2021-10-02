// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass12_0
#include "MasterServer/UserMessageHandler_--c__DisplayClass12_0.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: ConnectToServerResponse
  class ConnectToServerResponse;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass12_0/MasterServer.<<SendConnectToServerRequest>b__0>d
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass12_0 <>4__this
    // Size: 0x8
    // Offset: 0x20
    MasterServer::UserMessageHandler::$$c__DisplayClass12_0* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler::$$c__DisplayClass12_0*) == 0x8);
    // private IDiffieHellmanKeyPair <clientKeys>5__2
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDiffieHellmanKeyPair*) == 0x8);
    // private System.Byte[] <random>5__3
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> $random$5__3;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private MasterServer.ConnectToServerResponse <response>5__4
    // Size: 0x8
    // Offset: 0x38
    MasterServer::ConnectToServerResponse* $response$5__4;
    // Field size check
    static_assert(sizeof(MasterServer::ConnectToServerResponse*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ConnectToServerResponse> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ConnectToServerResponse*> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> $$u__3;
    public:
    // Creating value type constructor for type: $$SendConnectToServerRequest$b__0$d
    constexpr $$SendConnectToServerRequest$b__0$d(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, MasterServer::UserMessageHandler::$$c__DisplayClass12_0* $$4__this_ = {}, GlobalNamespace::IDiffieHellmanKeyPair* $clientKeys$5__2_ = {}, ::ArrayW<uint8_t> $random$5__3_ = ::ArrayW<uint8_t>(nullptr), MasterServer::ConnectToServerResponse* $response$5__4_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ConnectToServerResponse*> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $clientKeys$5__2{$clientKeys$5__2_}, $random$5__3{$random$5__3_}, $response$5__4{$response$5__4_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass12_0 <>4__this
    MasterServer::UserMessageHandler::$$c__DisplayClass12_0*& dyn_$$4__this();
    // Get instance field reference: private IDiffieHellmanKeyPair <clientKeys>5__2
    GlobalNamespace::IDiffieHellmanKeyPair*& dyn_$clientKeys$5__2();
    // Get instance field reference: private System.Byte[] <random>5__3
    ::ArrayW<uint8_t>& dyn_$random$5__3();
    // Get instance field reference: private MasterServer.ConnectToServerResponse <response>5__4
    MasterServer::ConnectToServerResponse*& dyn_$response$5__4();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<MasterServer.ConnectToServerResponse> <>u__2
    System::Runtime::CompilerServices::TaskAwaiter_1<MasterServer::ConnectToServerResponse*>& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__3
    System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>& dyn_$$u__3();
    // private System.Void MoveNext()
    // Offset: 0x12E5458
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x12E6460
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.UserMessageHandler/MasterServer.<>c__DisplayClass12_0/MasterServer.<<SendConnectToServerRequest>b__0>d
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d, "MasterServer", "UserMessageHandler/<>c__DisplayClass12_0/<<SendConnectToServerRequest>b__0>d");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d::*)()>(&MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::UserMessageHandler::$$c__DisplayClass12_0::$$SendConnectToServerRequest$b__0$d), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
