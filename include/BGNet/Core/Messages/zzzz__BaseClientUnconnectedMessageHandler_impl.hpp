#pragma once
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "BGNet/Core/Messages/zzzz__BaseClientUnconnectedMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "BGNet/Core/Messages/zzzz__HelloVerifyRequest_def.hpp"
#include "System/Security/Authentication/zzzz__AuthenticationException_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__DnsEndPoint_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "BGNet/Core/Messages/zzzz__ChangeCipherSpecRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__ServerCertificateRequest_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "BGNet/Core/Messages/zzzz__ServerHelloRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xdd9cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdd9ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "queue", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_task_5__2", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, ::StringW queue, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::Task _task_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->queue = queue;
this->message = message;
this->cancellationToken = cancellationToken;
this->_task_5__2 = _task_5__2;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__set_queue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__get_queue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x38>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__set__task_5__2(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x48>(this->__instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__get__task_5__2() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x48>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xdda000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdda3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousTask", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Threading::Tasks::Task previousTask, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->previousTask = previousTask;
this->__4__this = __4__this;
this->message = message;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__set_previousTask(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x20>(this->__instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__get_previousTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x30>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x40>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xdda3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdda6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->message = message;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xdda6b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdda9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->message = message;
this->protocolVersion = protocolVersion;
this->remoteEndPoint = remoteEndPoint;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__set_remoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x38>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__get_remoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x48>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xdda9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xddabd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xddabdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xddadf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xddae04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::SetStateMachine)> {
  constexpr static std::size_t size = 0x100c;
  constexpr static std::size_t addrs = 0xddb1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::*)()>(&GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xddc35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xddc60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> result, BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->result = result;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__set_result(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>, 0x20>(this->__instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__get_result() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__set___4__this(BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x30>(this->__instance);
}
 void GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddc1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0._AuthenticateWithServerAsyncInternal_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<BGNet::Core::Messages::HelloVerifyRequest> (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Threading::CancellationToken)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::_AuthenticateWithServerAsyncInternal_b__1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xddc1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0>::get(),
                            "<AuthenticateWithServerAsyncInternal>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0._AuthenticateWithServerAsyncInternal_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::*)(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::_AuthenticateWithServerAsyncInternal_b__0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xddc260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0>::get(),
                            "<AuthenticateWithServerAsyncInternal>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::__set_serverPublicKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::__get_serverPublicKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<BGNet::Core::Messages::HelloVerifyRequest> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::_AuthenticateWithServerAsyncInternal_b__1(uint32_t protocolVersion, System::Net::IPEndPoint ep, BGNet::Core::Messages::IUnconnectedReliableRequest request, System::Threading::CancellationToken ct)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0>::get(),
                            "<AuthenticateWithServerAsyncInternal>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::Messages::HelloVerifyRequest>, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, ep, request, ct);
}
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0::_AuthenticateWithServerAsyncInternal_b__0(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0>::get(),
                            "<AuthenticateWithServerAsyncInternal>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x13d8;
  constexpr static std::size_t addrs = 0xddc664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xddddc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_endPoint_5__2", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_authenticationRequest_5__3", ty: "BGNet::Core::Messages::IUnconnectedAuthenticateRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_clientRandom_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_generateKeysTask_5__5", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_serverCertificateTask_5__6", ty: "System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_serverRandom_5__7", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_signature_5__8", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_responseId_5__9", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_getPreMasterSecretTask_5__10", ty: "System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_verifySignatureTask_5__11", ty: "System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_clientKeys_5__12", ty: "GlobalNamespace::IDiffieHellmanKeyPair", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_encryptionState_5__13", ty: "GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__5", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__6", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__7", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__8", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__9", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__10", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__11", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 __8__1, System::Net::IPEndPoint _endPoint_5__2, BGNet::Core::Messages::IUnconnectedAuthenticateRequest _authenticationRequest_5__3, ::ArrayW<uint8_t> _clientRandom_5__4, System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> _generateKeysTask_5__5, System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest> _serverCertificateTask_5__6, ::ArrayW<uint8_t> _serverRandom_5__7, ::ArrayW<uint8_t> _signature_5__8, uint32_t _responseId_5__9, System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> _getPreMasterSecretTask_5__10, System::Threading::Tasks::Task_1<bool> _verifySignatureTask_5__11, GlobalNamespace::IDiffieHellmanKeyPair _clientKeys_5__12, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState _encryptionState_5__13, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest> __u__3, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest> __u__4, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest> __u__5, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> __u__6, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__7, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest> __u__8, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__9, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __u__10, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse> __u__11) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__8__1 = __8__1;
this->_endPoint_5__2 = _endPoint_5__2;
this->_authenticationRequest_5__3 = _authenticationRequest_5__3;
this->_clientRandom_5__4 = _clientRandom_5__4;
this->_generateKeysTask_5__5 = _generateKeysTask_5__5;
this->_serverCertificateTask_5__6 = _serverCertificateTask_5__6;
this->_serverRandom_5__7 = _serverRandom_5__7;
this->_signature_5__8 = _signature_5__8;
this->_responseId_5__9 = _responseId_5__9;
this->_getPreMasterSecretTask_5__10 = _getPreMasterSecretTask_5__10;
this->_verifySignatureTask_5__11 = _verifySignatureTask_5__11;
this->_clientKeys_5__12 = _clientKeys_5__12;
this->_encryptionState_5__13 = _encryptionState_5__13;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
this->__u__5 = __u__5;
this->__u__6 = __u__6;
this->__u__7 = __u__7;
this->__u__8 = __u__8;
this->__u__9 = __u__9;
this->__u__10 = __u__10;
this->__u__11 = __u__11;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___8__1(BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___8__1() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__endPoint_5__2(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x30>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__endPoint_5__2() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__authenticationRequest_5__3(BGNet::Core::Messages::IUnconnectedAuthenticateRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedAuthenticateRequest, 0x38>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedAuthenticateRequest BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__authenticationRequest_5__3() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedAuthenticateRequest, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__clientRandom_5__4(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__clientRandom_5__4() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__generateKeysTask_5__5(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>, 0x48>(this->__instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__generateKeysTask_5__5() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>, 0x48>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__serverCertificateTask_5__6(System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest>, 0x50>(this->__instance, std::forward<System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest>>(value));
}
constexpr System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__serverCertificateTask_5__6() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest>, 0x50>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__serverRandom_5__7(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x58>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__serverRandom_5__7() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x58>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__signature_5__8(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x60>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__signature_5__8() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x60>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__responseId_5__9(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x68>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__responseId_5__9() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x68>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__getPreMasterSecretTask_5__10(System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>, 0x70>(this->__instance, std::forward<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__getPreMasterSecretTask_5__10() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>, 0x70>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__verifySignatureTask_5__11(System::Threading::Tasks::Task_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<bool>, 0x78>(this->__instance, std::forward<System::Threading::Tasks::Task_1<bool>>(value));
}
constexpr System::Threading::Tasks::Task_1<bool> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__verifySignatureTask_5__11() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<bool>, 0x78>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__clientKeys_5__12(GlobalNamespace::IDiffieHellmanKeyPair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x80>(this->__instance, std::forward<GlobalNamespace::IDiffieHellmanKeyPair>(value));
}
constexpr GlobalNamespace::IDiffieHellmanKeyPair BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__clientKeys_5__12() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x80>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set__encryptionState_5__13(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0x88>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get__encryptionState_5__13() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0x88>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint>, 0x90>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint>, 0x90>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>, 0x98>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>, 0x98>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest>, 0xa0>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__3() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest>, 0xa0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__4(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest>, 0xa8>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__4() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest>, 0xa8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__5(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest>, 0xb0>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__5() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest>, 0xb0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__6(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>, 0xb8>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__6() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>, 0xb8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__7(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0xc0>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__7() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0xc0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__8(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest>, 0xc8>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__8() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest>, 0xc8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__9(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0xd0>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__9() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0xd0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__10(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0xd8>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__10() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0xd8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__set___u__11(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse>, 0xe0>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::__get___u__11() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse>, 0xe0>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xddddd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0._VerifySignature_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::_VerifySignature_b__0)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0xddddd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0>::get(),
                            "<VerifySignature>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__set_clientRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__get_clientRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__set_serverRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__get_serverRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__set_serverKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__get_serverKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__set_certData(::ArrayW<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<uint8_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<uint8_t>>>(value));
}
constexpr ::ArrayW<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__get_certData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__set_signature(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::__get_signature() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0::_VerifySignature_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0>::get(),
                            "<VerifySignature>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.get_endPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::DnsEndPoint (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_endPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd85e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "get_endPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.get_isAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_isAuthenticated)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xdd85f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "get_isAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.get_isAuthenticating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_isAuthenticating)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xdd8668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "get_isAuthenticating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.get_hasAuthenticationFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_hasAuthenticationFailed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdd86c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "get_hasAuthenticationFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(GlobalNamespace::IUnconnectedMessageSender, GlobalNamespace::DnsEndPoint, BGNet::Core::ITimeProvider, BGNet::Core::ITaskUtility, GlobalNamespace::ICertificateValidator, BGNet::Core::IAnalyticsManager)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xdd86d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DnsEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateValidator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::IAnalyticsManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdd915c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.GetMessageType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::GetMessageType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xdd916c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.ShouldHandleMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ShouldHandleMessage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdd91ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.RegisterHandshakeMessageHandlers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::RegisterHandshakeMessageHandlers)> {
  constexpr static std::size_t size = 0x92c;
  constexpr static std::size_t addrs = 0xdd8830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "RegisterHandshakeMessageHandlers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.HandleHelloVerifyRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(BGNet::Core::Messages::HelloVerifyRequest, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::HandleHelloVerifyRequest)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xdd9278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "HandleHelloVerifyRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::HelloVerifyRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.SendOrderedAuthenticatedRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::StringW, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Threading::CancellationToken)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendOrderedAuthenticatedRequest)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xdd932c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "SendOrderedAuthenticatedRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.SendOrderedAuthenticatedRequestAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(System::Threading::Tasks::Task, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Threading::CancellationToken)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendOrderedAuthenticatedRequestAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xdd93e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "SendOrderedAuthenticatedRequestAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.SendAuthenticatedRequestAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedReliableRequest, System::Threading::CancellationToken)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendAuthenticatedRequestAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xdd94d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "SendAuthenticatedRequestAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.OnSendFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Threading::CancellationToken)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::OnSendFailed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xdd95b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "OnSendFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.ReauthenticateWithServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ReauthenticateWithServer)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xdd96a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "ReauthenticateWithServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.UnauthenticateWithServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::UnauthenticateWithServer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdd9770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "UnauthenticateWithServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.AuthenticateWithServerAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xdd97d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "AuthenticateWithServerAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.AuthenticateWithServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xdd9958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "AuthenticateWithServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.AuthenticateWithServerAsyncInternalVerbose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsyncInternalVerbose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xdd99ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "AuthenticateWithServerAsyncInternalVerbose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.AuthenticateWithServerAsyncInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsyncInternal)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xdd9884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "AuthenticateWithServerAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.GetAuthenticationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::GetAuthenticationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.ShouldHandleMessageFromEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(System::Net::IPEndPoint)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ShouldHandleMessageFromEndPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xdd9ab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool> (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<::ArrayW<uint8_t>>)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::VerifySignature)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xdd9aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler.HandshakeLog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::StringW)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::HandshakeLog)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdd9c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "HandshakeLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__set__endPoint(GlobalNamespace::DnsEndPoint value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DnsEndPoint, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DnsEndPoint>(value));
}
constexpr GlobalNamespace::DnsEndPoint BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__get__endPoint() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DnsEndPoint, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__set__certificateValidator(GlobalNamespace::ICertificateValidator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ICertificateValidator, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ICertificateValidator>(value));
}
constexpr GlobalNamespace::ICertificateValidator BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__get__certificateValidator() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ICertificateValidator, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__set__authenticationDataWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setStaticField<LiteNetLib::Utils::NetDataWriter, "_authenticationDataWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get>(std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
 LiteNetLib::Utils::NetDataWriter BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__get__authenticationDataWriter()  {
return ::cordl_internals::getStaticField<LiteNetLib::Utils::NetDataWriter, "_authenticationDataWriter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get>();
}
constexpr void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__set__authenticationTask(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__get__authenticationTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__set__authenticationException(System::Security::Authentication::AuthenticationException value)  {
::cordl_internals::setInstanceField<System::Security::Authentication::AuthenticationException, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Authentication::AuthenticationException>(value));
}
constexpr System::Security::Authentication::AuthenticationException BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__get__authenticationException() const {
return ::cordl_internals::getInstanceField<System::Security::Authentication::AuthenticationException, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__set__disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__get__disposed() const {
return ::cordl_internals::getInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__set__orderedRequests(System::Collections::Generic::Dictionary_2<::StringW,System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Threading::Tasks::Task>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,System::Threading::Tasks::Task>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Threading::Tasks::Task> BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::__get__orderedRequests() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,System::Threading::Tasks::Task>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::DnsEndPoint BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_endPoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "get_endPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::DnsEndPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_isAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "get_isAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_isAuthenticating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "get_isAuthenticating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_hasAuthenticationFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "get_hasAuthenticationFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "sender", ty: "GlobalNamespace::IUnconnectedMessageSender", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "GlobalNamespace::DnsEndPoint", modifiers: "", def_value: None }, CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "certificateValidator", ty: "GlobalNamespace::ICertificateValidator", modifiers: "", def_value: None }, CppParam { name: "analytics", ty: "BGNet::Core::IAnalyticsManager", modifiers: "", def_value: Some("csnull") }]
 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::BaseClientUnconnectedMessageHandler(GlobalNamespace::IUnconnectedMessageSender sender, GlobalNamespace::DnsEndPoint endPoint, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::ICertificateValidator certificateValidator, BGNet::Core::IAnalyticsManager analytics)  : BGNet::Core::Messages::UnconnectedMessageHandler(THROW_UNLESS(::il2cpp_utils::New<BaseClientUnconnectedMessageHandler>(sender, endPoint, timeProvider, taskUtility, certificateValidator, analytics))) {}
/// @param analytics: BGNet::Core::IAnalyticsManager (default: csnull)
 void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::_ctor(GlobalNamespace::IUnconnectedMessageSender sender, GlobalNamespace::DnsEndPoint endPoint, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::ICertificateValidator certificateValidator, BGNet::Core::IAnalyticsManager analytics)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DnsEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateValidator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::IAnalyticsManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender, endPoint, timeProvider, taskUtility, certificateValidator, analytics);
}
 void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint32_t BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::GetMessageType(BGNet::Core::Messages::IUnconnectedMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "GetMessageType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, message);
}
 bool BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ShouldHandleMessage(BGNet::Core::Messages::IUnconnectedMessage packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "ShouldHandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
 void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::RegisterHandshakeMessageHandlers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "RegisterHandshakeMessageHandlers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::HandleHelloVerifyRequest(BGNet::Core::Messages::HelloVerifyRequest packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "HandleHelloVerifyRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::HelloVerifyRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendOrderedAuthenticatedRequest(::StringW queue, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "SendOrderedAuthenticatedRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, queue, message, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendOrderedAuthenticatedRequestAsync(System::Threading::Tasks::Task previousTask, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "SendOrderedAuthenticatedRequestAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, previousTask, message, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
template<typename T>
 System::Threading::Tasks::Task_1<T> BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendAuthenticatedRequestAsync(BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                        "SendAuthenticatedRequestAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, message, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendAuthenticatedRequestAsync(BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "SendAuthenticatedRequestAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, message, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::OnSendFailed(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "OnSendFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
template<typename T>
 System::Threading::Tasks::Task_1<T> BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::OnSendFailedAwaitResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                        "OnSendFailedAwaitResponse",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message, cancellationToken);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ReauthenticateWithServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "ReauthenticateWithServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::UnauthenticateWithServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "UnauthenticateWithServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "AuthenticateWithServerAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "AuthenticateWithServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsyncInternalVerbose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "AuthenticateWithServerAsyncInternalVerbose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsyncInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "AuthenticateWithServerAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::GetAuthenticationRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "GetAuthenticationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ShouldHandleMessageFromEndPoint(System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "ShouldHandleMessageFromEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint);
}
 System::Threading::Tasks::Task_1<bool> BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::VerifySignature(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, ::ArrayW<uint8_t> signature, ::ArrayW<::ArrayW<uint8_t>> certData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, clientRandom, serverRandom, serverKey, signature, certData);
}
 void BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::HandshakeLog(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>::get(),
                            "HandshakeLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->message = message;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x10>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x10>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x18>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x18>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<T> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<T>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<T> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x30>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->message = message;
this->protocolVersion = protocolVersion;
this->remoteEndPoint = remoteEndPoint;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x10>(this->__instance, std::forward<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, 0x10>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x18>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x18>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__set_remoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x28>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__get_remoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<T> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<T>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<T> BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x40>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
} // end anonymous namespace
