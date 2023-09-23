#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Net/zzzz__WebConnectionTunnel_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: System::Net::System__Net__WebConnection____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnection____c::*)()>(&System::Net::System__Net__WebConnection____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284b67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__WebConnection____c._Connect_b__16_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::System__Net__WebConnection____c::*)(System::Net::IPEndPoint, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::System__Net__WebConnection____c::_Connect_b__16_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x284b684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get(),
                            "<Connect>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__WebConnection____c._Connect_b__16_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnection____c::*)(System::IAsyncResult)>(&System::Net::System__Net__WebConnection____c::_Connect_b__16_1)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x284b724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get(),
                            "<Connect>b__16_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Net::System__Net__WebConnection____c::__set___9(System::Net::System__Net__WebConnection____c value)  {
::cordl_internals::setStaticField<System::Net::System__Net__WebConnection____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get>(std::forward<System::Net::System__Net__WebConnection____c>(value));
}
 System::Net::System__Net__WebConnection____c System::Net::System__Net__WebConnection____c::__get___9()  {
return ::cordl_internals::getStaticField<System::Net::System__Net__WebConnection____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get>();
}
 void System::Net::System__Net__WebConnection____c::__set___9__16_0(System::Func_4<System::Net::IPEndPoint,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> value)  {
::cordl_internals::setStaticField<System::Func_4<System::Net::IPEndPoint,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get>(std::forward<System::Func_4<System::Net::IPEndPoint,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>(value));
}
 System::Func_4<System::Net::IPEndPoint,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> System::Net::System__Net__WebConnection____c::__get___9__16_0()  {
return ::cordl_internals::getStaticField<System::Func_4<System::Net::IPEndPoint,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, "<>9__16_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get>();
}
 void System::Net::System__Net__WebConnection____c::__set___9__16_1(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setStaticField<System::Action_1<System::IAsyncResult>, "<>9__16_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get>(std::forward<System::Action_1<System::IAsyncResult>>(value));
}
 System::Action_1<System::IAsyncResult> System::Net::System__Net__WebConnection____c::__get___9__16_1()  {
return ::cordl_internals::getStaticField<System::Action_1<System::IAsyncResult>, "<>9__16_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get>();
}
// Ctor Parameters []
 System::Net::System__Net__WebConnection____c::System__Net__WebConnection____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__WebConnection____c>())) {}
 void System::Net::System__Net__WebConnection____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IAsyncResult System::Net::System__Net__WebConnection____c::_Connect_b__16_0(System::Net::IPEndPoint targetEndPoint, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get(),
                            "<Connect>b__16_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, targetEndPoint, callback, state);
}
 void System::Net::System__Net__WebConnection____c::_Connect_b__16_1(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection____c>::get(),
                            "<Connect>b__16_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
//  Writing Method size for method: System::Net::System__Net__WebConnection___Connect_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnection___Connect_d__16::*)()>(&System::Net::System__Net__WebConnection___Connect_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x284b818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___Connect_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__WebConnection___Connect_d__16.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnection___Connect_d__16::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Net::System__Net__WebConnection___Connect_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x284c11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___Connect_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Net::System__Net__WebConnection___Connect_d__16::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::Net::WebConnection", modifiers: "", def_value: Some("csnull") }, CppParam { name: "operation", ty: "System::Net::WebOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_connectException_5__2", ty: "System::Exception", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap2", ty: "::ArrayW<System::Net::IPAddress>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__WebConnection___Connect_d__16::System__Net__WebConnection___Connect_d__16(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Net::WebConnection __4__this, System::Net::WebOperation operation, System::Threading::CancellationToken cancellationToken, System::Exception _connectException_5__2, ::ArrayW<System::Net::IPAddress> __7__wrap2, int32_t __7__wrap3, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->operation = operation;
this->cancellationToken = cancellationToken;
this->_connectException_5__2 = _connectException_5__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__u__1 = __u__1;
}
constexpr void System::Net::System__Net__WebConnection___Connect_d__16::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__WebConnection___Connect_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___Connect_d__16::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::Net::System__Net__WebConnection___Connect_d__16::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___Connect_d__16::__set___4__this(System::Net::WebConnection value)  {
::cordl_internals::setInstanceField<System::Net::WebConnection, 0x20>(this->__instance, std::forward<System::Net::WebConnection>(value));
}
constexpr System::Net::WebConnection System::Net::System__Net__WebConnection___Connect_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Net::WebConnection, 0x20>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___Connect_d__16::__set_operation(System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<System::Net::WebOperation, 0x28>(this->__instance, std::forward<System::Net::WebOperation>(value));
}
constexpr System::Net::WebOperation System::Net::System__Net__WebConnection___Connect_d__16::__get_operation() const {
return ::cordl_internals::getInstanceField<System::Net::WebOperation, 0x28>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___Connect_d__16::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Net::System__Net__WebConnection___Connect_d__16::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___Connect_d__16::__set__connectException_5__2(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x38>(this->__instance, std::forward<System::Exception>(value));
}
constexpr System::Exception System::Net::System__Net__WebConnection___Connect_d__16::__get__connectException_5__2() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x38>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___Connect_d__16::__set___7__wrap2(::ArrayW<System::Net::IPAddress> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Net::IPAddress>, 0x40>(this->__instance, std::forward<::ArrayW<System::Net::IPAddress>>(value));
}
constexpr ::ArrayW<System::Net::IPAddress> System::Net::System__Net__WebConnection___Connect_d__16::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Net::IPAddress>, 0x40>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___Connect_d__16::__set___7__wrap3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__WebConnection___Connect_d__16::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___Connect_d__16::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::Net::System__Net__WebConnection___Connect_d__16::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x50>(this->__instance);
}
 void System::Net::System__Net__WebConnection___Connect_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___Connect_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Net::System__Net__WebConnection___Connect_d__16::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___Connect_d__16>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Net::System__Net__WebConnection___CreateStream_d__18.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnection___CreateStream_d__18::*)()>(&System::Net::System__Net__WebConnection___CreateStream_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x284c128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___CreateStream_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__WebConnection___CreateStream_d__18.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnection___CreateStream_d__18::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Net::System__Net__WebConnection___CreateStream_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x284c8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___CreateStream_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Net::System__Net__WebConnection___CreateStream_d__18::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::Net::WebConnection", modifiers: "", def_value: Some("csnull") }, CppParam { name: "operation", ty: "System::Net::WebOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "reused", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stream_5__2", ty: "System::Net::Sockets::NetworkStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__WebConnection___CreateStream_d__18::System__Net__WebConnection___CreateStream_d__18(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, System::Net::WebConnection __4__this, System::Net::WebOperation operation, bool reused, System::Threading::CancellationToken cancellationToken, System::Net::Sockets::NetworkStream _stream_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->operation = operation;
this->reused = reused;
this->cancellationToken = cancellationToken;
this->_stream_5__2 = _stream_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void System::Net::System__Net__WebConnection___CreateStream_d__18::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__WebConnection___CreateStream_d__18::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___CreateStream_d__18::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> System::Net::System__Net__WebConnection___CreateStream_d__18::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___CreateStream_d__18::__set___4__this(System::Net::WebConnection value)  {
::cordl_internals::setInstanceField<System::Net::WebConnection, 0x20>(this->__instance, std::forward<System::Net::WebConnection>(value));
}
constexpr System::Net::WebConnection System::Net::System__Net__WebConnection___CreateStream_d__18::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Net::WebConnection, 0x20>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___CreateStream_d__18::__set_operation(System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<System::Net::WebOperation, 0x28>(this->__instance, std::forward<System::Net::WebOperation>(value));
}
constexpr System::Net::WebOperation System::Net::System__Net__WebConnection___CreateStream_d__18::__get_operation() const {
return ::cordl_internals::getInstanceField<System::Net::WebOperation, 0x28>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___CreateStream_d__18::__set_reused(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Net::System__Net__WebConnection___CreateStream_d__18::__get_reused() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___CreateStream_d__18::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Net::System__Net__WebConnection___CreateStream_d__18::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___CreateStream_d__18::__set__stream_5__2(System::Net::Sockets::NetworkStream value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::NetworkStream, 0x40>(this->__instance, std::forward<System::Net::Sockets::NetworkStream>(value));
}
constexpr System::Net::Sockets::NetworkStream System::Net::System__Net__WebConnection___CreateStream_d__18::__get__stream_5__2() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::NetworkStream, 0x40>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___CreateStream_d__18::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::Net::System__Net__WebConnection___CreateStream_d__18::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x48>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___CreateStream_d__18::__set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> System::Net::System__Net__WebConnection___CreateStream_d__18::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>, 0x58>(this->__instance);
}
 void System::Net::System__Net__WebConnection___CreateStream_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___CreateStream_d__18>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Net::System__Net__WebConnection___CreateStream_d__18::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___CreateStream_d__18>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Net::System__Net__WebConnection___InitConnection_d__19.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnection___InitConnection_d__19::*)()>(&System::Net::System__Net__WebConnection___InitConnection_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x284c8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___InitConnection_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::System__Net__WebConnection___InitConnection_d__19.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::System__Net__WebConnection___InitConnection_d__19::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&System::Net::System__Net__WebConnection___InitConnection_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x284cf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___InitConnection_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  System::Net::System__Net__WebConnection___InitConnection_d__19::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::WebRequestStream>", modifiers: "", def_value: Some("{}") }, CppParam { name: "operation", ty: "System::Net::WebOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "System::Net::WebConnection", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_reused_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::System__Net__WebConnection___InitConnection_d__19::System__Net__WebConnection___InitConnection_d__19(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::WebRequestStream> __t__builder, System::Net::WebOperation operation, System::Threading::CancellationToken cancellationToken, System::Net::WebConnection __4__this, bool _reused_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->operation = operation;
this->cancellationToken = cancellationToken;
this->__4__this = __4__this;
this->_reused_5__2 = _reused_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void System::Net::System__Net__WebConnection___InitConnection_d__19::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::System__Net__WebConnection___InitConnection_d__19::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___InitConnection_d__19::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::WebRequestStream> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::WebRequestStream>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::WebRequestStream>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::WebRequestStream> System::Net::System__Net__WebConnection___InitConnection_d__19::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::WebRequestStream>, 0x8>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___InitConnection_d__19::__set_operation(System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<System::Net::WebOperation, 0x20>(this->__instance, std::forward<System::Net::WebOperation>(value));
}
constexpr System::Net::WebOperation System::Net::System__Net__WebConnection___InitConnection_d__19::__get_operation() const {
return ::cordl_internals::getInstanceField<System::Net::WebOperation, 0x20>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___InitConnection_d__19::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Net::System__Net__WebConnection___InitConnection_d__19::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___InitConnection_d__19::__set___4__this(System::Net::WebConnection value)  {
::cordl_internals::setInstanceField<System::Net::WebConnection, 0x30>(this->__instance, std::forward<System::Net::WebConnection>(value));
}
constexpr System::Net::WebConnection System::Net::System__Net__WebConnection___InitConnection_d__19::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Net::WebConnection, 0x30>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___InitConnection_d__19::__set__reused_5__2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool System::Net::System__Net__WebConnection___InitConnection_d__19::__get__reused_5__2() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___InitConnection_d__19::__set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter System::Net::System__Net__WebConnection___InitConnection_d__19::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x40>(this->__instance);
}
constexpr void System::Net::System__Net__WebConnection___InitConnection_d__19::__set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>>(value));
}
constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> System::Net::System__Net__WebConnection___InitConnection_d__19::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x50>(this->__instance);
}
 void System::Net::System__Net__WebConnection___InitConnection_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___InitConnection_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Net::System__Net__WebConnection___InitConnection_d__19::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::System__Net__WebConnection___InitConnection_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: System::Net::WebConnection.get_ServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServicePoint (System::Net::WebConnection::*)()>(&System::Net::WebConnection::get_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284a458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)(System::Net::ServicePoint)>(&System::Net::WebConnection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28492e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ServicePoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.CanReuse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnection::*)()>(&System::Net::WebConnection::CanReuse)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x284a460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CanReuse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.CheckReusable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnection::*)()>(&System::Net::WebConnection::CheckReusable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x284a490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CheckReusable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Net::WebConnection::*)(System::Net::WebOperation, System::Threading::CancellationToken)>(&System::Net::WebConnection::Connect)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x284a52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.CreateStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool> (System::Net::WebConnection::*)(System::Net::WebOperation, bool, System::Threading::CancellationToken)>(&System::Net::WebConnection::CreateStream)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x284a610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CreateStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.InitConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Net::WebRequestStream> (System::Net::WebConnection::*)(System::Net::WebOperation, System::Threading::CancellationToken)>(&System::Net::WebConnection::InitConnection)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x284a730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "InitConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.GetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::WebException (*)(System::Net::WebExceptionStatus, System::Exception)>(&System::Net::WebConnection::GetException)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x284a834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebExceptionStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.ReadLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, ByRef<int32_t>, int32_t, ByRef<::StringW>)>(&System::Net::WebConnection::ReadLine)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x284a9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.CanReuseConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnection::*)(System::Net::WebOperation)>(&System::Net::WebConnection::CanReuseConnection)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x2848cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CanReuseConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.PrepareSharingNtlm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnection::*)(System::Net::WebOperation)>(&System::Net::WebConnection::PrepareSharingNtlm)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x284aba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "PrepareSharingNtlm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)()>(&System::Net::WebConnection::Reset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x284aec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)(bool)>(&System::Net::WebConnection::Close)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x284af84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.CloseSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)()>(&System::Net::WebConnection::CloseSocket)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x284b04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CloseSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.get_Closed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnection::*)()>(&System::Net::WebConnection::get_Closed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2848910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_Closed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.get_IdleSince
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (System::Net::WebConnection::*)()>(&System::Net::WebConnection::get_IdleSince)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284b2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_IdleSince",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.StartOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnection::*)(System::Net::WebOperation, bool)>(&System::Net::WebConnection::StartOperation)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x28490f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "StartOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.Continue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnection::*)(System::Net::WebOperation)>(&System::Net::WebConnection::Continue)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2847aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Continue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)(bool)>(&System::Net::WebConnection::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x284b5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)()>(&System::Net::WebConnection::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2848908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.ResetNtlm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)()>(&System::Net::WebConnection::ResetNtlm)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x284af78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "ResetNtlm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.get_NtlmAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnection::*)()>(&System::Net::WebConnection::get_NtlmAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284b5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_NtlmAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.set_NtlmAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)(bool)>(&System::Net::WebConnection::set_NtlmAuthenticated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x284b5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "set_NtlmAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.get_NtlmCredential
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkCredential (System::Net::WebConnection::*)()>(&System::Net::WebConnection::get_NtlmCredential)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284b5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_NtlmCredential",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.set_NtlmCredential
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)(System::Net::NetworkCredential)>(&System::Net::WebConnection::set_NtlmCredential)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284b5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "set_NtlmCredential",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkCredential>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.get_UnsafeAuthenticatedConnectionSharing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnection::*)()>(&System::Net::WebConnection::get_UnsafeAuthenticatedConnectionSharing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x284b604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_UnsafeAuthenticatedConnectionSharing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::WebConnection.set_UnsafeAuthenticatedConnectionSharing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnection::*)(bool)>(&System::Net::WebConnection::set_UnsafeAuthenticatedConnectionSharing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x284b60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "set_UnsafeAuthenticatedConnectionSharing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Net::WebConnection::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_ntlm_credentials(System::Net::NetworkCredential value)  {
::cordl_internals::setInstanceField<System::Net::NetworkCredential, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::NetworkCredential>(value));
}
constexpr System::Net::NetworkCredential System::Net::WebConnection::__get_ntlm_credentials() const {
return ::cordl_internals::getInstanceField<System::Net::NetworkCredential, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_ntlm_authenticated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::WebConnection::__get_ntlm_authenticated() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_unsafe_sharing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::WebConnection::__get_unsafe_sharing() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_networkStream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream System::Net::WebConnection::__get_networkStream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_socket(System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::Socket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::Socket>(value));
}
constexpr System::Net::Sockets::Socket System::Net::WebConnection::__get_socket() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::Socket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_monoTlsStream(Mono::Net::Security::MonoTlsStream value)  {
::cordl_internals::setInstanceField<Mono::Net::Security::MonoTlsStream, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Net::Security::MonoTlsStream>(value));
}
constexpr Mono::Net::Security::MonoTlsStream System::Net::WebConnection::__get_monoTlsStream() const {
return ::cordl_internals::getInstanceField<Mono::Net::Security::MonoTlsStream, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_tunnel(System::Net::WebConnectionTunnel value)  {
::cordl_internals::setInstanceField<System::Net::WebConnectionTunnel, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebConnectionTunnel>(value));
}
constexpr System::Net::WebConnectionTunnel System::Net::WebConnection::__get_tunnel() const {
return ::cordl_internals::getInstanceField<System::Net::WebConnectionTunnel, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_disposed(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::WebConnection::__get_disposed() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set__ServicePoint_k__BackingField(System::Net::ServicePoint value)  {
::cordl_internals::setInstanceField<System::Net::ServicePoint, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::ServicePoint>(value));
}
constexpr System::Net::ServicePoint System::Net::WebConnection::__get__ServicePoint_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::ServicePoint, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_idleSince(System::DateTime value)  {
::cordl_internals::setInstanceField<System::DateTime, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::DateTime>(value));
}
constexpr System::DateTime System::Net::WebConnection::__get_idleSince() const {
return ::cordl_internals::getInstanceField<System::DateTime, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::WebConnection::__set_currentOperation(System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<System::Net::WebOperation, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::WebOperation>(value));
}
constexpr System::Net::WebOperation System::Net::WebConnection::__get_currentOperation() const {
return ::cordl_internals::getInstanceField<System::Net::WebOperation, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::ServicePoint System::Net::WebConnection::get_ServicePoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ServicePoint, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "sPoint", ty: "System::Net::ServicePoint", modifiers: "", def_value: None }]
 System::Net::WebConnection::WebConnection(System::Net::ServicePoint sPoint)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<WebConnection>(sPoint))) {}
 void System::Net::WebConnection::_ctor(System::Net::ServicePoint sPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ServicePoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sPoint);
}
 bool System::Net::WebConnection::CanReuse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CanReuse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::WebConnection::CheckReusable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CheckReusable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task System::Net::WebConnection::Connect(System::Net::WebOperation operation, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, operation, cancellationToken);
}
 System::Threading::Tasks::Task_1<bool> System::Net::WebConnection::CreateStream(System::Net::WebOperation operation, bool reused, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CreateStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, operation, reused, cancellationToken);
}
 System::Threading::Tasks::Task_1<System::Net::WebRequestStream> System::Net::WebConnection::InitConnection(System::Net::WebOperation operation, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "InitConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Net::WebRequestStream>, false>(const_cast<void*>(instance), ___internal_method, operation, cancellationToken);
}
 System::Net::WebException System::Net::WebConnection::GetException(System::Net::WebExceptionStatus status, System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebExceptionStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::WebException, false>(nullptr, ___internal_method, status, error);
}
 bool System::Net::WebConnection::ReadLine(::ArrayW<uint8_t> buffer, ByRef<int32_t> start, int32_t max, ByRef<::StringW> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "ReadLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, buffer, start, max, output);
}
 bool System::Net::WebConnection::CanReuseConnection(System::Net::WebOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CanReuseConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, operation);
}
 bool System::Net::WebConnection::PrepareSharingNtlm(System::Net::WebOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "PrepareSharingNtlm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, operation);
}
 void System::Net::WebConnection::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnection::Close(bool reset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reset);
}
 void System::Net::WebConnection::CloseSocket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "CloseSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::WebConnection::get_Closed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_Closed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime System::Net::WebConnection::get_IdleSince()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_IdleSince",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::WebConnection::StartOperation(System::Net::WebOperation operation, bool reused)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "StartOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, operation, reused);
}
 bool System::Net::WebConnection::Continue(System::Net::WebOperation next)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Continue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, next);
}
 void System::Net::WebConnection::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Net::WebConnection::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnection::ResetNtlm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "ResetNtlm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::WebConnection::get_NtlmAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_NtlmAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnection::set_NtlmAuthenticated(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "set_NtlmAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::NetworkCredential System::Net::WebConnection::get_NtlmCredential()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_NtlmCredential",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkCredential, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnection::set_NtlmCredential(System::Net::NetworkCredential value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "set_NtlmCredential",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkCredential>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::WebConnection::get_UnsafeAuthenticatedConnectionSharing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "get_UnsafeAuthenticatedConnectionSharing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::WebConnection::set_UnsafeAuthenticatedConnectionSharing(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::WebConnection>::get(),
                            "set_UnsafeAuthenticatedConnectionSharing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
