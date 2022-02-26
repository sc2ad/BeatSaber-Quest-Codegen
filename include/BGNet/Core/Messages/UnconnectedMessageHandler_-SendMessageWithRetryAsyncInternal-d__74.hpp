// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedReliableRequest
  class IUnconnectedReliableRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74, "BGNet.Core.Messages", "UnconnectedMessageHandler/<SendMessageWithRetryAsyncInternal>d__74");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<SendMessageWithRetryAsyncInternal>d__74
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public BGNet.Core.Messages.UnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::BGNet::Core::Messages::UnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::UnconnectedMessageHandler*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public BGNet.Core.Messages.IUnconnectedReliableRequest message
    // Size: 0x8
    // Offset: 0x38
    ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::IUnconnectedReliableRequest*) == 0x8);
    // public System.UInt32 protocolVersion
    // Size: 0x4
    // Offset: 0x40
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Func`5<System.UInt32,System.Net.IPEndPoint,BGNet.Core.Messages.IUnconnectedReliableRequest,System.Threading.CancellationToken,System.Threading.Tasks.Task> onSendFailed
    // Size: 0x8
    // Offset: 0x48
    ::System::Func_5<uint, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* onSendFailed;
    // Field size check
    static_assert(sizeof(::System::Func_5<uint, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*) == 0x8);
    // private BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.SentRequestWaiter <sentRequest>5__2
    // Size: 0x8
    // Offset: 0x50
    ::BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter* $sentRequest$5__2;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter*) == 0x8);
    // private BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestWaiterId <waiterId>5__3
    // Size: 0xC
    // Offset: 0x58
    ::BGNet::Core::Messages::UnconnectedMessageHandler::RequestWaiterId $waiterId$5__3;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::UnconnectedMessageHandler::RequestWaiterId) == 0xC);
    // private System.Boolean <shouldReleaseMessage>5__4
    // Size: 0x1
    // Offset: 0x68
    bool $shouldReleaseMessage$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Object <>7__wrap4
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppObject* $$7__wrap4;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 <>7__wrap5
    // Size: 0x4
    // Offset: 0x78
    int $$7__wrap5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <i>5__7
    // Size: 0x4
    // Offset: 0x7C
    int $i$5__7;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    // Size: 0x8
    // Offset: 0x88
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__2;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $SendMessageWithRetryAsyncInternal$d__74
    constexpr $SendMessageWithRetryAsyncInternal$d__74(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::BGNet::Core::Messages::UnconnectedMessageHandler* $$4__this_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Net::IPEndPoint* remoteEndPoint_ = {}, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message_ = {}, uint protocolVersion_ = {}, ::System::Func_5<uint, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* onSendFailed_ = {}, ::BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter* $sentRequest$5__2_ = {}, ::BGNet::Core::Messages::UnconnectedMessageHandler::RequestWaiterId $waiterId$5__3_ = {}, bool $shouldReleaseMessage$5__4_ = {}, ::Il2CppObject* $$7__wrap4_ = {}, int $$7__wrap5_ = {}, int $i$5__7_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, remoteEndPoint{remoteEndPoint_}, message{message_}, protocolVersion{protocolVersion_}, onSendFailed{onSendFailed_}, $sentRequest$5__2{$sentRequest$5__2_}, $waiterId$5__3{$waiterId$5__3_}, $shouldReleaseMessage$5__4{$shouldReleaseMessage$5__4_}, $$7__wrap4{$$7__wrap4_}, $$7__wrap5{$$7__wrap5_}, $i$5__7{$i$5__7_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public BGNet.Core.Messages.UnconnectedMessageHandler <>4__this
    ::BGNet::Core::Messages::UnconnectedMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public System.Net.IPEndPoint remoteEndPoint
    ::System::Net::IPEndPoint*& dyn_remoteEndPoint();
    // Get instance field reference: public BGNet.Core.Messages.IUnconnectedReliableRequest message
    ::BGNet::Core::Messages::IUnconnectedReliableRequest*& dyn_message();
    // Get instance field reference: public System.UInt32 protocolVersion
    uint& dyn_protocolVersion();
    // Get instance field reference: public System.Func`5<System.UInt32,System.Net.IPEndPoint,BGNet.Core.Messages.IUnconnectedReliableRequest,System.Threading.CancellationToken,System.Threading.Tasks.Task> onSendFailed
    ::System::Func_5<uint, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>*& dyn_onSendFailed();
    // Get instance field reference: private BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.SentRequestWaiter <sentRequest>5__2
    ::BGNet::Core::Messages::UnconnectedMessageHandler::SentRequestWaiter*& dyn_$sentRequest$5__2();
    // Get instance field reference: private BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.RequestWaiterId <waiterId>5__3
    ::BGNet::Core::Messages::UnconnectedMessageHandler::RequestWaiterId& dyn_$waiterId$5__3();
    // Get instance field reference: private System.Boolean <shouldReleaseMessage>5__4
    bool& dyn_$shouldReleaseMessage$5__4();
    // Get instance field reference: private System.Object <>7__wrap4
    ::Il2CppObject*& dyn_$$7__wrap4();
    // Get instance field reference: private System.Int32 <>7__wrap5
    int& dyn_$$7__wrap5();
    // Get instance field reference: private System.Int32 <i>5__7
    int& dyn_$i$5__7();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.Task> <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__2
    ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x2B8AF78
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x2B8BB28
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.<SendMessageWithRetryAsyncInternal>d__74
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&BGNet::Core::Messages::UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::UnconnectedMessageHandler::$SendMessageWithRetryAsyncInternal$d__74), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
