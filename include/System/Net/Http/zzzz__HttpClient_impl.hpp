#pragma once
#include "System/Net/Http/zzzz__HttpMessageInvoker_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpCompletionOption_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::*)()>(&::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::MoveNext)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x26a0034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26a0654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage", modifiers: "", def_value: Some("csnull") }, CppParam { name: "completionOption", ty: "::System::Net::Http::HttpCompletionOption", modifiers: "", def_value: Some("{}") }, CppParam { name: "_lcts_5__2", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_response_5__3", ty: "::System::Net::Http::HttpResponseMessage", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::____System__Net__Http__HttpClient___SendAsyncWorker_d__47(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage> __t__builder, ::System::Net::Http::HttpClient __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage request, ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationTokenSource _lcts_5__2, ::System::Net::Http::HttpResponseMessage _response_5__3, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage> __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->request = request;
this->completionOption = completionOption;
this->_lcts_5__2 = _lcts_5__2;
this->_response_5__3 = _response_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage>, 0x8>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set___4__this(::System::Net::Http::HttpClient value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpClient, 0x20>(this->__instance, std::forward<::System::Net::Http::HttpClient>(value));
}
constexpr ::System::Net::Http::HttpClient ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpClient, 0x20>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set_request(::System::Net::Http::HttpRequestMessage value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpRequestMessage, 0x30>(this->__instance, std::forward<::System::Net::Http::HttpRequestMessage>(value));
}
constexpr ::System::Net::Http::HttpRequestMessage ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get_request() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpRequestMessage, 0x30>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set_completionOption(::System::Net::Http::HttpCompletionOption value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpCompletionOption, 0x38>(this->__instance, std::forward<::System::Net::Http::HttpCompletionOption>(value));
}
constexpr ::System::Net::Http::HttpCompletionOption ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get_completionOption() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpCompletionOption, 0x38>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set__lcts_5__2(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x40>(this->__instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get__lcts_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x40>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set__response_5__3(::System::Net::Http::HttpResponseMessage value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpResponseMessage, 0x48>(this->__instance, std::forward<::System::Net::Http::HttpResponseMessage>(value));
}
constexpr ::System::Net::Http::HttpResponseMessage ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get__response_5__3() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpResponseMessage, 0x48>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage>, 0x50>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage>, 0x50>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x60>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x60>(this->__instance);
}
 void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpClient___SendAsyncWorker_d__47>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::*)()>(&::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::MoveNext)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x26a06ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26a0d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient", modifiers: "", def_value: Some("csnull") }, CppParam { name: "requestUri", ty: "::System::Uri", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_resp_5__2", ty: "::System::Net::Http::HttpResponseMessage", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::____System__Net__Http__HttpClient___GetStringAsync_d__53(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::System::Net::Http::HttpClient __4__this, ::System::Uri requestUri, ::System::Net::Http::HttpResponseMessage _resp_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage> __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->requestUri = requestUri;
this->_resp_5__2 = _resp_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>, 0x8>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__set___4__this(::System::Net::Http::HttpClient value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpClient, 0x20>(this->__instance, std::forward<::System::Net::Http::HttpClient>(value));
}
constexpr ::System::Net::Http::HttpClient ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpClient, 0x20>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__set_requestUri(::System::Uri value)  {
::cordl_internals::setInstanceField<::System::Uri, 0x28>(this->__instance, std::forward<::System::Uri>(value));
}
constexpr ::System::Uri ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__get_requestUri() const {
return ::cordl_internals::getInstanceField<::System::Uri, 0x28>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__set__resp_5__2(::System::Net::Http::HttpResponseMessage value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpResponseMessage, 0x30>(this->__instance, std::forward<::System::Net::Http::HttpResponseMessage>(value));
}
constexpr ::System::Net::Http::HttpResponseMessage ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__get__resp_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpResponseMessage, 0x30>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage>, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage>, 0x38>(this->__instance);
}
constexpr void ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>, 0x48>(this->__instance);
}
 void ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::____System__Net__Http__HttpClient___GetStringAsync_d__53>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::Http::HttpClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClient::*)()>(&::System::Net::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x269f284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpMessageHandler, bool)>(&::System::Net::Http::HttpClient::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x269f2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMessageHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.get_MaxResponseContentBufferSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::Http::HttpClient::*)()>(&::System::Net::Http::HttpClient::get_MaxResponseContentBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269f428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "get_MaxResponseContentBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.set_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClient::*)(::System::TimeSpan)>(&::System::Net::Http::HttpClient::set_Timeout)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x269f430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "set_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClient::*)(bool)>(&::System::Net::Http::HttpClient::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x269f564;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Http::HttpClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.GetAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> (::System::Net::Http::HttpClient::*)(::System::Uri, ::System::Net::Http::HttpCompletionOption)>(&::System::Net::Http::HttpClient::GetAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x269f608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "GetAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x269f798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage, ::System::Net::Http::HttpCompletionOption)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x269f720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x269fa9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Http::HttpClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::SendAsync)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x269f80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.SendAsyncWorker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage, ::System::Net::Http::HttpCompletionOption, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::SendAsyncWorker)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x269fd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "SendAsyncWorker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.GetStringAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW> (::System::Net::Http::HttpClient::*)(::System::Uri)>(&::System::Net::Http::HttpClient::GetStringAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x269fe78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "GetStringAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClient.__n__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> (::System::Net::Http::HttpClient::*)(::System::Net::Http::HttpRequestMessage, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClient::__n__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x269fff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "<>n__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::Http::HttpClient::__set_TimeoutDefault(::System::TimeSpan value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "TimeoutDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get>(std::forward<::System::TimeSpan>(value));
}
 ::System::TimeSpan ::System::Net::Http::HttpClient::__get_TimeoutDefault()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "TimeoutDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get>();
}
constexpr void ::System::Net::Http::HttpClient::__set_base_address(::System::Uri value)  {
::cordl_internals::setInstanceField<::System::Uri, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Uri>(value));
}
constexpr ::System::Uri ::System::Net::Http::HttpClient::__get_base_address() const {
return ::cordl_internals::getInstanceField<::System::Uri, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpClient::__set_cts(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::System::Net::Http::HttpClient::__get_cts() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpClient::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::Http::HttpClient::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpClient::__set_headers(::System::Net::Http::Headers::HttpRequestHeaders value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::HttpRequestHeaders, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Http::Headers::HttpRequestHeaders>(value));
}
constexpr ::System::Net::Http::Headers::HttpRequestHeaders ::System::Net::Http::HttpClient::__get_headers() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::HttpRequestHeaders, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpClient::__set_buffer_size(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Net::Http::HttpClient::__get_buffer_size() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpClient::__set_timeout(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::Net::Http::HttpClient::__get_timeout() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Net::Http::HttpClient::HttpClient()  : ::System::Net::Http::HttpMessageInvoker(THROW_UNLESS(::il2cpp_utils::New<HttpClient>())) {}
 void ::System::Net::Http::HttpClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "handler", ty: "::System::Net::Http::HttpMessageHandler", modifiers: "", def_value: None }, CppParam { name: "disposeHandler", ty: "bool", modifiers: "", def_value: None }]
 ::System::Net::Http::HttpClient::HttpClient(::System::Net::Http::HttpMessageHandler handler, bool disposeHandler)  : ::System::Net::Http::HttpMessageInvoker(THROW_UNLESS(::il2cpp_utils::New<HttpClient>(handler, disposeHandler))) {}
 void ::System::Net::Http::HttpClient::_ctor(::System::Net::Http::HttpMessageHandler handler, bool disposeHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMessageHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handler, disposeHandler);
}
 int64_t ::System::Net::Http::HttpClient::get_MaxResponseContentBufferSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "get_MaxResponseContentBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Http::HttpClient::set_Timeout(::System::TimeSpan value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "set_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::Http::HttpClient::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::HttpClient::GetAsync(::System::Uri requestUri, ::System::Net::Http::HttpCompletionOption completionOption)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "GetAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage>, false>(const_cast<void*>(instance), ___internal_method, requestUri, completionOption);
}
 ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage request)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage>, false>(const_cast<void*>(instance), ___internal_method, request);
}
 ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage request, ::System::Net::Http::HttpCompletionOption completionOption)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage>, false>(const_cast<void*>(instance), ___internal_method, request, completionOption);
}
 ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage request, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage>, false>(const_cast<void*>(instance), ___internal_method, request, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::HttpClient::SendAsync(::System::Net::Http::HttpRequestMessage request, ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "SendAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage>, false>(const_cast<void*>(instance), ___internal_method, request, completionOption, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::HttpClient::SendAsyncWorker(::System::Net::Http::HttpRequestMessage request, ::System::Net::Http::HttpCompletionOption completionOption, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "SendAsyncWorker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpCompletionOption>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage>, false>(const_cast<void*>(instance), ___internal_method, request, completionOption, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::StringW> ::System::Net::Http::HttpClient::GetStringAsync(::System::Uri requestUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "GetStringAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method, requestUri);
}
 ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage> ::System::Net::Http::HttpClient::__n__0(::System::Net::Http::HttpRequestMessage request, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClient>::get(),
                            "<>n__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpRequestMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage>, false>(const_cast<void*>(instance), ___internal_method, request, cancellationToken);
}
} // end anonymous namespace
