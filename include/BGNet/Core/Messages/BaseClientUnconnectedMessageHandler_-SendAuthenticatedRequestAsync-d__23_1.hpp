// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseClientUnconnectedMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedReliableResponse
  class IUnconnectedReliableResponse;
  // Forward declaring type: IUnconnectedReliableRequest
  class IUnconnectedReliableRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<SendAuthenticatedRequestAsync>d__23`1");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler/BGNet.Core.Messages.<SendAuthenticatedRequestAsync>d__23`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  struct BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder;
    // public BGNet.Core.Messages.BaseClientUnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x0
    ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*) == 0x8);
    // public BGNet.Core.Messages.IUnconnectedReliableRequest message
    // Size: 0x8
    // Offset: 0x0
    ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::IUnconnectedReliableRequest*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x0
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<T> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Runtime::CompilerServices::TaskAwaiter_1<T> $$u__2;
    public:
    // Creating value type constructor for type: $SendAuthenticatedRequestAsync$d__23_1
    constexpr $SendAuthenticatedRequestAsync$d__23_1(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder_ = {}, ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* $$4__this_ = {}, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, message{message_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
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
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1::dyn_$$1__state");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>& dyn_$$t__builder() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1::dyn_$$t__builder");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>t__builder"))->offset;
      return *reinterpret_cast<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public BGNet.Core.Messages.BaseClientUnconnectedMessageHandler <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*& dyn_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1::dyn_$$4__this");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public BGNet.Core.Messages.IUnconnectedReliableRequest message
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::IUnconnectedReliableRequest*& dyn_message() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1::dyn_message");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "message"))->offset;
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1::dyn_cancellationToken");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "cancellationToken"))->offset;
      return *reinterpret_cast<::System::Threading::CancellationToken*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1::dyn_$$u__1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>u__1"))->offset;
      return *reinterpret_cast<::System::Runtime::CompilerServices::TaskAwaiter*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<T> <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<T>& dyn_$$u__2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1::dyn_$$u__2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>u__2"))->offset;
      return *reinterpret_cast<::System::Runtime::CompilerServices::TaskAwaiter_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1::SetStateMachine");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "SetStateMachine", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateMachine)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, stateMachine);
    }
  }; // BGNet.Core.Messages.BaseClientUnconnectedMessageHandler/BGNet.Core.Messages.<SendAuthenticatedRequestAsync>d__23`1
  // Could not write size check! Type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler/BGNet.Core.Messages.<SendAuthenticatedRequestAsync>d__23`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
