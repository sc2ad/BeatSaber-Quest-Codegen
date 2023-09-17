#pragma once
#include "System/Net/zzzz__WebRequest_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Net/zzzz__HttpWebResponse_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Net/zzzz__DecompressionMethods_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/zzzz__HttpContinueDelegate_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState::____System__Net__HttpWebRequest__NtlmAuthState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState  ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState::None{0};
constexpr ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState  ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState::Challenge{1};
constexpr ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState  ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState::Response{2};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest__AuthorizationState.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::____System__Net__HttpWebRequest__AuthorizationState::*)()>(&::System::Net::____System__Net__HttpWebRequest__AuthorizationState::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283d764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest__AuthorizationState.get_NtlmAuthState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::____System__Net__HttpWebRequest__NtlmAuthState (::System::Net::____System__Net__HttpWebRequest__AuthorizationState::*)()>(&::System::Net::____System__Net__HttpWebRequest__AuthorizationState::get_NtlmAuthState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283d76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "get_NtlmAuthState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest__AuthorizationState.get_IsNtlmAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::____System__Net__HttpWebRequest__AuthorizationState::*)()>(&::System::Net::____System__Net__HttpWebRequest__AuthorizationState::get_IsNtlmAuthenticated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x283d774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "get_IsNtlmAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest__AuthorizationState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest__AuthorizationState::*)(::System::Net::HttpWebRequest, bool)>(&::System::Net::____System__Net__HttpWebRequest__AuthorizationState::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28396f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest__AuthorizationState.CheckAuthorization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::____System__Net__HttpWebRequest__AuthorizationState::*)(::System::Net::WebResponse, ::System::Net::HttpStatusCode)>(&::System::Net::____System__Net__HttpWebRequest__AuthorizationState::CheckAuthorization)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x283cc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "CheckAuthorization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest__AuthorizationState.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest__AuthorizationState::*)()>(&::System::Net::____System__Net__HttpWebRequest__AuthorizationState::Reset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x283d5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest__AuthorizationState.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::____System__Net__HttpWebRequest__AuthorizationState::*)()>(&::System::Net::____System__Net__HttpWebRequest__AuthorizationState::ToString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x283d794;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::____System__Net__HttpWebRequest__AuthorizationState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "request", ty: "::System::Net::HttpWebRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isProxy", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isCompleted", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ntlm_auth_state", ty: "::System::Net::____System__Net__HttpWebRequest__NtlmAuthState", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::____System__Net__HttpWebRequest__AuthorizationState(::System::Net::HttpWebRequest request, bool isProxy, bool isCompleted, ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState ntlm_auth_state) noexcept : ::bs_hook::ValueTypeWrapper() {this->request = request;
this->isProxy = isProxy;
this->isCompleted = isCompleted;
this->ntlm_auth_state = ntlm_auth_state;
}
constexpr void ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::__set_request(::System::Net::HttpWebRequest value)  {
::cordl_internals::setInstanceField<::System::Net::HttpWebRequest, 0x0>(this->__instance, std::forward<::System::Net::HttpWebRequest>(value));
}
constexpr ::System::Net::HttpWebRequest ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::__get_request() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebRequest, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::__set_isProxy(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::__get_isProxy() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::__set_isCompleted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::__get_isCompleted() const {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::__set_ntlm_auth_state(::System::Net::____System__Net__HttpWebRequest__NtlmAuthState value)  {
::cordl_internals::setInstanceField<::System::Net::____System__Net__HttpWebRequest__NtlmAuthState, 0xc>(this->__instance, std::forward<::System::Net::____System__Net__HttpWebRequest__NtlmAuthState>(value));
}
constexpr ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::__get_ntlm_auth_state() const {
return ::cordl_internals::getInstanceField<::System::Net::____System__Net__HttpWebRequest__NtlmAuthState, 0xc>(this->__instance);
}
 bool ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Net::____System__Net__HttpWebRequest__NtlmAuthState ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::get_NtlmAuthState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "get_NtlmAuthState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::____System__Net__HttpWebRequest__NtlmAuthState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::get_IsNtlmAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "get_IsNtlmAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::_ctor(::System::Net::HttpWebRequest request, bool isProxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, request, isProxy);
}
 bool ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::CheckAuthorization(::System::Net::WebResponse response, ::System::Net::HttpStatusCode code)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "CheckAuthorization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, response, code);
}
 void ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::System::Net::____System__Net__HttpWebRequest__AuthorizationState::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::*)()>(&::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::MoveNext)> {
  constexpr static std::size_t size = 0xdf4;
  constexpr static std::size_t addrs = 0x283d894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x283e688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_completion_5__2", ty: "::System::Net::WebCompletionSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_operation_5__3", ty: "::System::Net::WebOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_throwMe_5__4", ty: "::System::Net::WebException", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_response_5__5", ty: "::System::Net::HttpWebResponse", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_stream_5__6", ty: "::System::Net::WebResponseStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_redirect_5__7", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_mustReadAll_5__8", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ntlm_5__9", ty: "::System::Net::WebOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_writeBuffer_5__10", ty: "::System::Net::BufferOffsetSize", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse> __t__builder, ::System::Net::HttpWebRequest __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::WebCompletionSource _completion_5__2, ::System::Net::WebOperation _operation_5__3, ::System::Net::WebException _throwMe_5__4, ::System::Net::HttpWebResponse _response_5__5, ::System::Net::WebResponseStream _stream_5__6, bool _redirect_5__7, bool _mustReadAll_5__8, ::System::Net::WebOperation _ntlm_5__9, ::System::Net::BufferOffsetSize _writeBuffer_5__10, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream> __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream> __u__3, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>> __u__4) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_completion_5__2 = _completion_5__2;
this->_operation_5__3 = _operation_5__3;
this->_throwMe_5__4 = _throwMe_5__4;
this->_response_5__5 = _response_5__5;
this->_stream_5__6 = _stream_5__6;
this->_redirect_5__7 = _redirect_5__7;
this->_mustReadAll_5__8 = _mustReadAll_5__8;
this->_ntlm_5__9 = _ntlm_5__9;
this->_writeBuffer_5__10 = _writeBuffer_5__10;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse> ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::HttpWebResponse>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set___4__this(::System::Net::HttpWebRequest value)  {
::cordl_internals::setInstanceField<::System::Net::HttpWebRequest, 0x20>(this->__instance, std::forward<::System::Net::HttpWebRequest>(value));
}
constexpr ::System::Net::HttpWebRequest ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebRequest, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set__completion_5__2(::System::Net::WebCompletionSource value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource, 0x30>(this->__instance, std::forward<::System::Net::WebCompletionSource>(value));
}
constexpr ::System::Net::WebCompletionSource ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get__completion_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set__operation_5__3(::System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<::System::Net::WebOperation, 0x38>(this->__instance, std::forward<::System::Net::WebOperation>(value));
}
constexpr ::System::Net::WebOperation ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get__operation_5__3() const {
return ::cordl_internals::getInstanceField<::System::Net::WebOperation, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set__throwMe_5__4(::System::Net::WebException value)  {
::cordl_internals::setInstanceField<::System::Net::WebException, 0x40>(this->__instance, std::forward<::System::Net::WebException>(value));
}
constexpr ::System::Net::WebException ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get__throwMe_5__4() const {
return ::cordl_internals::getInstanceField<::System::Net::WebException, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set__response_5__5(::System::Net::HttpWebResponse value)  {
::cordl_internals::setInstanceField<::System::Net::HttpWebResponse, 0x48>(this->__instance, std::forward<::System::Net::HttpWebResponse>(value));
}
constexpr ::System::Net::HttpWebResponse ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get__response_5__5() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebResponse, 0x48>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set__stream_5__6(::System::Net::WebResponseStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebResponseStream, 0x50>(this->__instance, std::forward<::System::Net::WebResponseStream>(value));
}
constexpr ::System::Net::WebResponseStream ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get__stream_5__6() const {
return ::cordl_internals::getInstanceField<::System::Net::WebResponseStream, 0x50>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set__redirect_5__7(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get__redirect_5__7() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set__mustReadAll_5__8(bool value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get__mustReadAll_5__8() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set__ntlm_5__9(::System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<::System::Net::WebOperation, 0x60>(this->__instance, std::forward<::System::Net::WebOperation>(value));
}
constexpr ::System::Net::WebOperation ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get__ntlm_5__9() const {
return ::cordl_internals::getInstanceField<::System::Net::WebOperation, 0x60>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set__writeBuffer_5__10(::System::Net::BufferOffsetSize value)  {
::cordl_internals::setInstanceField<::System::Net::BufferOffsetSize, 0x68>(this->__instance, std::forward<::System::Net::BufferOffsetSize>(value));
}
constexpr ::System::Net::BufferOffsetSize ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get__writeBuffer_5__10() const {
return ::cordl_internals::getInstanceField<::System::Net::BufferOffsetSize, 0x68>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>, 0x70>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream> ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::WebRequestStream>, 0x70>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x80>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x80>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set___u__3(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream>, 0x90>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream> ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get___u__3() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponseStream>, 0x90>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__set___u__4(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>>, 0x98>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>> ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::__get___u__4() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>>, 0x98>(this->__instance);
}
 void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___MyGetResponseAsync_d__243>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::*)()>(&::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::MoveNext)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x283e6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x283f140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "stream", ty: "::System::Net::WebResponseStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_response_5__2", ty: "::System::Net::HttpWebResponse", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_throwMe_5__3", ty: "::System::Net::WebException", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_redirect_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_mustReadAll_5__5", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::____System__Net__HttpWebRequest___GetResponseFromData_d__244(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>> __t__builder, ::System::Net::HttpWebRequest __4__this, ::System::Net::WebResponseStream stream, ::System::Threading::CancellationToken cancellationToken, ::System::Net::HttpWebResponse _response_5__2, ::System::Net::WebException _throwMe_5__3, bool _redirect_5__4, bool _mustReadAll_5__5, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->stream = stream;
this->cancellationToken = cancellationToken;
this->_response_5__2 = _response_5__2;
this->_throwMe_5__3 = _throwMe_5__3;
this->_redirect_5__4 = _redirect_5__4;
this->_mustReadAll_5__5 = _mustReadAll_5__5;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>> ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set___4__this(::System::Net::HttpWebRequest value)  {
::cordl_internals::setInstanceField<::System::Net::HttpWebRequest, 0x20>(this->__instance, std::forward<::System::Net::HttpWebRequest>(value));
}
constexpr ::System::Net::HttpWebRequest ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebRequest, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set_stream(::System::Net::WebResponseStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebResponseStream, 0x28>(this->__instance, std::forward<::System::Net::WebResponseStream>(value));
}
constexpr ::System::Net::WebResponseStream ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get_stream() const {
return ::cordl_internals::getInstanceField<::System::Net::WebResponseStream, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set__response_5__2(::System::Net::HttpWebResponse value)  {
::cordl_internals::setInstanceField<::System::Net::HttpWebResponse, 0x38>(this->__instance, std::forward<::System::Net::HttpWebResponse>(value));
}
constexpr ::System::Net::HttpWebResponse ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get__response_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebResponse, 0x38>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set__throwMe_5__3(::System::Net::WebException value)  {
::cordl_internals::setInstanceField<::System::Net::WebException, 0x40>(this->__instance, std::forward<::System::Net::WebException>(value));
}
constexpr ::System::Net::WebException ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get__throwMe_5__3() const {
return ::cordl_internals::getInstanceField<::System::Net::WebException, 0x40>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set__redirect_5__4(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get__redirect_5__4() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set__mustReadAll_5__5(bool value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get__mustReadAll_5__5() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x50>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x50>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__set___u__2(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize>, 0x60>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize> ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::BufferOffsetSize>, 0x60>(this->__instance);
}
 void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___GetResponseFromData_d__244>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::*)()>(&::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x283f198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x283f5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_ms_5__2", ty: "::System::IO::MemoryStream", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize> __t__builder, ::System::Net::HttpWebRequest __4__this, ::System::IO::MemoryStream _ms_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_ms_5__2 = _ms_5__2;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize> ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__set___4__this(::System::Net::HttpWebRequest value)  {
::cordl_internals::setInstanceField<::System::Net::HttpWebRequest, 0x20>(this->__instance, std::forward<::System::Net::HttpWebRequest>(value));
}
constexpr ::System::Net::HttpWebRequest ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebRequest, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__set__ms_5__2(::System::IO::MemoryStream value)  {
::cordl_internals::setInstanceField<::System::IO::MemoryStream, 0x28>(this->__instance, std::forward<::System::IO::MemoryStream>(value));
}
constexpr ::System::IO::MemoryStream ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__get__ms_5__2() const {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter, 0x30>(this->__instance);
}
 void ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Uri)>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2839158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x28395bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.ResetAuthorization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::ResetAuthorization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28395ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "ResetAuthorization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Address
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283970c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Address",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AllowAutoRedirect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2839714;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AllowWriteStreamBuffering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AllowWriteStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839720;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AllowWriteStreamBuffering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_AllowWriteStreamBuffering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2839728;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AutomaticDecompression
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::DecompressionMethods (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AutomaticDecompression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_AutomaticDecompression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_AutomaticDecompression
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::DecompressionMethods)>(&::System::Net::HttpWebRequest::set_AutomaticDecompression)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x283973c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_AutomaticDecompression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::DecompressionMethods>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_InternalAllowBuffering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_InternalAllowBuffering)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28397c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_InternalAllowBuffering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_MethodWithBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_MethodWithBuffer)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x28397d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_MethodWithBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_TlsProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileTlsProvider (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_TlsProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28398d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_TlsProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_TlsSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_TlsSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28398d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_TlsSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ClientCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28398e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ConnectionGroupName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283994c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839954;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int64_t)>(&::System::Net::HttpWebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x283995c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_InternalContentLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int64_t)>(&::System::Net::HttpWebRequest::set_InternalContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28399ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_InternalContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ThrowOnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ThrowOnError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28399f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ThrowOnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_ThrowOnError)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28399fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_CookieContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::CookieContainer)>(&::System::Net::HttpWebRequest::set_CookieContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839a08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Credentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839a10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Credentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::ICredentials)>(&::System::Net::HttpWebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839a18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_DefaultMaximumErrorResponseLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Net::HttpWebRequest::get_DefaultMaximumErrorResponseLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2839a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_DefaultMaximumErrorResponseLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839a78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Host
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Host)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2839a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Host",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Host
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Host)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2839b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_Host",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.TryGetHostUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)(::StringW, ByRef<::System::Uri>)>(&::System::Net::HttpWebRequest::TryGetHostUri)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2839cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "TryGetHostUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_KeepAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_KeepAlive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_KeepAlive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_KeepAlive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2839dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_MaximumAutomaticRedirections
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::set_MaximumAutomaticRedirections)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2839de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_MaximumAutomaticRedirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_DefaultMaximumResponseHeadersLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Net::HttpWebRequest::get_DefaultMaximumResponseHeadersLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2839e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_DefaultMaximumResponseHeadersLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ReadWriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ReadWriteTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ReadWriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2839ec0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::StringW)>(&::System::Net::HttpWebRequest::set_Method)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2839ec8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_PreAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x283a0f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ProtocolVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ProtocolVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ProtocolVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ProtocolVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Version)>(&::System::Net::HttpWebRequest::set_ProtocolVersion)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x283a108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_ProtocolVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Proxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a218;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Proxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Net::IWebProxy)>(&::System::Net::HttpWebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x283a220;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_RequestUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a37c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_SendChunked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_SendChunked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_SendChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_SendChunked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_SendChunked)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x283a38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_SendChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ServicePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x283a3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServicePointNoLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ServicePointNoLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ServicePointNoLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a3bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_Timeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t)>(&::System::Net::HttpWebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x283a3c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_TransferEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_TransferEncoding)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x283a428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_TransferEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_UseDefaultCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x283a47c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_UnsafeAuthenticatedConnectionSharing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_UnsafeAuthenticatedConnectionSharing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ExpectContinue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ExpectContinue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ExpectContinue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_ExpectContinue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_ExpectContinue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x283a504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_ExpectContinue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_AuthUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_AuthUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_AuthUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ProxyQuery
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ProxyQuery)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x283a518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ProxyQuery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_ServerCertValidationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServerCertValidationCallback (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_ServerCertValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283a54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ServerCertValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetServicePoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServicePoint (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetServicePoint)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x283a24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.SendRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebOperation (::System::Net::HttpWebRequest::*)(bool, ::System::Net::BufferOffsetSize, ::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::SendRequest)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x283a554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "SendRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.MyGetRequestStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream> (::System::Net::HttpWebRequest::*)(::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::MyGetRequestStreamAsync)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x283a790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "MyGetRequestStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.BeginGetRequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::System::Net::HttpWebRequest::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Net::HttpWebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x283abf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.EndGetRequestStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::System::Net::HttpWebRequest::*)(::System::IAsyncResult)>(&::System::Net::HttpWebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x283acac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRequestStreamAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream> (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetRequestStreamAsync)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x283ae54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.MyGetResponseAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse> (::System::Net::HttpWebRequest::*)(::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::MyGetResponseAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x283aeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "MyGetResponseAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetResponseFromData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>> (::System::Net::HttpWebRequest::*)(::System::Net::WebResponseStream, ::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::GetResponseFromData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x283aff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetResponseFromData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.FlattenException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception (*)(::System::Exception)>(&::System::Net::HttpWebRequest::FlattenException)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x283b100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "FlattenException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetWebException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException (::System::Net::HttpWebRequest::*)(::System::Exception)>(&::System::Net::HttpWebRequest::GetWebException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x283add0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetWebException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetWebException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException (*)(::System::Exception, bool)>(&::System::Net::HttpWebRequest::GetWebException)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x283b1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetWebException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CreateRequestAbortedException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebException (*)()>(&::System::Net::HttpWebRequest::CreateRequestAbortedException)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x283ab30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "CreateRequestAbortedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.BeginGetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::System::Net::HttpWebRequest::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Net::HttpWebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x283b370;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.EndGetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse (::System::Net::HttpWebRequest::*)(::System::IAsyncResult)>(&::System::Net::HttpWebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x283b4ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x283b610;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.set_FinishedReading
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(bool)>(&::System::Net::HttpWebRequest::set_FinishedReading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x283b710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_FinishedReading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.get_Aborted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::get_Aborted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x283ab08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Aborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.Abort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::Abort)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x283b71c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x283b82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(::System::Runtime::Serialization::SerializationInfo, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebRequest::GetObjectData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x283b86c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::HttpWebRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CheckRequestStarted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::CheckRequestStarted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2839760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "CheckRequestStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.DoContinueDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)(int32_t, ::System::Net::WebHeaderCollection)>(&::System::Net::HttpWebRequest::DoContinueDelegate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x283b8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "DoContinueDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.RewriteRedirectToGet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::RewriteRedirectToGet)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x283b8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "RewriteRedirectToGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.Redirect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)(::System::Net::HttpStatusCode, ::System::Net::WebResponse)>(&::System::Net::HttpWebRequest::Redirect)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x283b940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "Redirect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetHeaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetHeaders)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x283be20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.DoPreAuthenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::DoPreAuthenticate)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x283c470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "DoPreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRequestHeaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::GetRequestHeaders)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x283c66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetRequestHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.HandleNtlmAuth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::System::Net::WebOperation,bool> (::System::Net::HttpWebRequest::*)(::System::Net::WebResponseStream, ::System::Net::HttpWebResponse, ::System::Net::BufferOffsetSize, ::System::Threading::CancellationToken)>(&::System::Net::HttpWebRequest::HandleNtlmAuth)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x283c984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "HandleNtlmAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CheckAuthorization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpWebRequest::*)(::System::Net::WebResponse, ::System::Net::HttpStatusCode)>(&::System::Net::HttpWebRequest::CheckAuthorization)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x283cc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "CheckAuthorization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.GetRewriteHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize>,::System::Net::WebException> (::System::Net::HttpWebRequest::*)(::System::Net::HttpWebResponse, bool)>(&::System::Net::HttpWebRequest::GetRewriteHandler)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x283cf44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetRewriteHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest.CheckFinalStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_4<bool,bool,::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize>,::System::Net::WebException> (::System::Net::HttpWebRequest::*)(::System::Net::HttpWebResponse)>(&::System::Net::HttpWebRequest::CheckFinalStatus)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x283d13c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "CheckFinalStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._GetRewriteHandler_b__271_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize> (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::_GetRewriteHandler_b__271_0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x283d640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "<GetRewriteHandler>b__271_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebRequest::*)()>(&::System::Net::HttpWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x283d72c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr  ::System::Net::HttpWebRequest::operator ::System::Runtime::Serialization::ISerializable() const noexcept {
return ::System::Runtime::Serialization::ISerializable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_requestUri(::System::Uri value)  {
::cordl_internals::setInstanceField<::System::Uri, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Uri>(value));
}
constexpr ::System::Uri ::System::Net::HttpWebRequest::__get_requestUri() const {
return ::cordl_internals::getInstanceField<::System::Uri, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_actualUri(::System::Uri value)  {
::cordl_internals::setInstanceField<::System::Uri, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Uri>(value));
}
constexpr ::System::Uri ::System::Net::HttpWebRequest::__get_actualUri() const {
return ::cordl_internals::getInstanceField<::System::Uri, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_hostChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_hostChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_allowAutoRedirect(bool value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_allowAutoRedirect() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_allowBuffering(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_allowBuffering() const {
return ::cordl_internals::getInstanceField<bool, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_certificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection ::System::Net::HttpWebRequest::__get_certificates() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_connectionGroup(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::HttpWebRequest::__get_connectionGroup() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_haveContentLength(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_haveContentLength() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_contentLength(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Net::HttpWebRequest::__get_contentLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_continueDelegate(::System::Net::HttpContinueDelegate value)  {
::cordl_internals::setInstanceField<::System::Net::HttpContinueDelegate, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::HttpContinueDelegate>(value));
}
constexpr ::System::Net::HttpContinueDelegate ::System::Net::HttpWebRequest::__get_continueDelegate() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpContinueDelegate, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_cookieContainer(::System::Net::CookieContainer value)  {
::cordl_internals::setInstanceField<::System::Net::CookieContainer, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::CookieContainer>(value));
}
constexpr ::System::Net::CookieContainer ::System::Net::HttpWebRequest::__get_cookieContainer() const {
return ::cordl_internals::getInstanceField<::System::Net::CookieContainer, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_credentials(::System::Net::ICredentials value)  {
::cordl_internals::setInstanceField<::System::Net::ICredentials, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::ICredentials>(value));
}
constexpr ::System::Net::ICredentials ::System::Net::HttpWebRequest::__get_credentials() const {
return ::cordl_internals::getInstanceField<::System::Net::ICredentials, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_haveResponse(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_haveResponse() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_requestSent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x89>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_requestSent() const {
return ::cordl_internals::getInstanceField<bool, 0x89>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_webHeaders(::System::Net::WebHeaderCollection value)  {
::cordl_internals::setInstanceField<::System::Net::WebHeaderCollection, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebHeaderCollection>(value));
}
constexpr ::System::Net::WebHeaderCollection ::System::Net::HttpWebRequest::__get_webHeaders() const {
return ::cordl_internals::getInstanceField<::System::Net::WebHeaderCollection, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_keepAlive(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_keepAlive() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_maxAutoRedirect(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::HttpWebRequest::__get_maxAutoRedirect() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_mediaType(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::HttpWebRequest::__get_mediaType() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_method(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::HttpWebRequest::__get_method() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_initialMethod(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::HttpWebRequest::__get_initialMethod() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_pipelined(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_pipelined() const {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_preAuthenticate(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_preAuthenticate() const {
return ::cordl_internals::getInstanceField<bool, 0xb9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_usedPreAuth(bool value)  {
::cordl_internals::setInstanceField<bool, 0xba>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_usedPreAuth() const {
return ::cordl_internals::getInstanceField<bool, 0xba>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_version(::System::Version value)  {
::cordl_internals::setInstanceField<::System::Version, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Version>(value));
}
constexpr ::System::Version ::System::Net::HttpWebRequest::__get_version() const {
return ::cordl_internals::getInstanceField<::System::Version, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_force_version(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_force_version() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_actualVersion(::System::Version value)  {
::cordl_internals::setInstanceField<::System::Version, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Version>(value));
}
constexpr ::System::Version ::System::Net::HttpWebRequest::__get_actualVersion() const {
return ::cordl_internals::getInstanceField<::System::Version, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_proxy(::System::Net::IWebProxy value)  {
::cordl_internals::setInstanceField<::System::Net::IWebProxy, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::IWebProxy>(value));
}
constexpr ::System::Net::IWebProxy ::System::Net::HttpWebRequest::__get_proxy() const {
return ::cordl_internals::getInstanceField<::System::Net::IWebProxy, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_sendChunked(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_sendChunked() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_servicePoint(::System::Net::ServicePoint value)  {
::cordl_internals::setInstanceField<::System::Net::ServicePoint, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::ServicePoint>(value));
}
constexpr ::System::Net::ServicePoint ::System::Net::HttpWebRequest::__get_servicePoint() const {
return ::cordl_internals::getInstanceField<::System::Net::ServicePoint, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_timeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::HttpWebRequest::__get_timeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_continueTimeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::HttpWebRequest::__get_continueTimeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0xf4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_writeStream(::System::Net::WebRequestStream value)  {
::cordl_internals::setInstanceField<::System::Net::WebRequestStream, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebRequestStream>(value));
}
constexpr ::System::Net::WebRequestStream ::System::Net::HttpWebRequest::__get_writeStream() const {
return ::cordl_internals::getInstanceField<::System::Net::WebRequestStream, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_webResponse(::System::Net::HttpWebResponse value)  {
::cordl_internals::setInstanceField<::System::Net::HttpWebResponse, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::HttpWebResponse>(value));
}
constexpr ::System::Net::HttpWebResponse ::System::Net::HttpWebRequest::__get_webResponse() const {
return ::cordl_internals::getInstanceField<::System::Net::HttpWebResponse, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_responseTask(::System::Net::WebCompletionSource value)  {
::cordl_internals::setInstanceField<::System::Net::WebCompletionSource, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebCompletionSource>(value));
}
constexpr ::System::Net::WebCompletionSource ::System::Net::HttpWebRequest::__get_responseTask() const {
return ::cordl_internals::getInstanceField<::System::Net::WebCompletionSource, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_currentOperation(::System::Net::WebOperation value)  {
::cordl_internals::setInstanceField<::System::Net::WebOperation, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::WebOperation>(value));
}
constexpr ::System::Net::WebOperation ::System::Net::HttpWebRequest::__get_currentOperation() const {
return ::cordl_internals::getInstanceField<::System::Net::WebOperation, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_aborted(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::HttpWebRequest::__get_aborted() const {
return ::cordl_internals::getInstanceField<int32_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_gotRequestStream(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_gotRequestStream() const {
return ::cordl_internals::getInstanceField<bool, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_redirects(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::HttpWebRequest::__get_redirects() const {
return ::cordl_internals::getInstanceField<int32_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_expectContinue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x124>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_expectContinue() const {
return ::cordl_internals::getInstanceField<bool, 0x124>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_getResponseCalled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x125>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_getResponseCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x125>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_locker(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Net::HttpWebRequest::__get_locker() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_finished_reading(bool value)  {
::cordl_internals::setInstanceField<bool, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_finished_reading() const {
return ::cordl_internals::getInstanceField<bool, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_auto_decomp(::System::Net::DecompressionMethods value)  {
::cordl_internals::setInstanceField<::System::Net::DecompressionMethods, 0x134>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::DecompressionMethods>(value));
}
constexpr ::System::Net::DecompressionMethods ::System::Net::HttpWebRequest::__get_auto_decomp() const {
return ::cordl_internals::getInstanceField<::System::Net::DecompressionMethods, 0x134>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::System::Net::HttpWebRequest::__set_defaultMaxResponseHeadersLength(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "defaultMaxResponseHeadersLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Net::HttpWebRequest::__get_defaultMaxResponseHeadersLength()  {
return ::cordl_internals::getStaticField<int32_t, "defaultMaxResponseHeadersLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get>();
}
 void ::System::Net::HttpWebRequest::__set_defaultMaximumErrorResponseLength(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "defaultMaximumErrorResponseLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get>(std::forward<int32_t>(value));
}
 int32_t ::System::Net::HttpWebRequest::__get_defaultMaximumErrorResponseLength()  {
return ::cordl_internals::getStaticField<int32_t, "defaultMaximumErrorResponseLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get>();
}
 void ::System::Net::HttpWebRequest::__set_defaultCachePolicy(::System::Net::Cache::RequestCachePolicy value)  {
::cordl_internals::setStaticField<::System::Net::Cache::RequestCachePolicy, "defaultCachePolicy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get>(std::forward<::System::Net::Cache::RequestCachePolicy>(value));
}
 ::System::Net::Cache::RequestCachePolicy ::System::Net::HttpWebRequest::__get_defaultCachePolicy()  {
return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCachePolicy, "defaultCachePolicy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get>();
}
constexpr void ::System::Net::HttpWebRequest::__set_readWriteTimeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::HttpWebRequest::__get_readWriteTimeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_tlsProvider(::Mono::Net::Security::MobileTlsProvider value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileTlsProvider, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::MobileTlsProvider>(value));
}
constexpr ::Mono::Net::Security::MobileTlsProvider ::System::Net::HttpWebRequest::__get_tlsProvider() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileTlsProvider, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_tlsSettings(::Mono::Security::Interface::MonoTlsSettings value)  {
::cordl_internals::setInstanceField<::Mono::Security::Interface::MonoTlsSettings, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::Interface::MonoTlsSettings>(value));
}
constexpr ::Mono::Security::Interface::MonoTlsSettings ::System::Net::HttpWebRequest::__get_tlsSettings() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::MonoTlsSettings, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_certValidationCallback(::System::Net::ServerCertValidationCallback value)  {
::cordl_internals::setInstanceField<::System::Net::ServerCertValidationCallback, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::ServerCertValidationCallback>(value));
}
constexpr ::System::Net::ServerCertValidationCallback ::System::Net::HttpWebRequest::__get_certValidationCallback() const {
return ::cordl_internals::getInstanceField<::System::Net::ServerCertValidationCallback, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_hostHasPort(bool value)  {
::cordl_internals::setInstanceField<bool, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_hostHasPort() const {
return ::cordl_internals::getInstanceField<bool, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_hostUri(::System::Uri value)  {
::cordl_internals::setInstanceField<::System::Uri, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Uri>(value));
}
constexpr ::System::Uri ::System::Net::HttpWebRequest::__get_hostUri() const {
return ::cordl_internals::getInstanceField<::System::Uri, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_auth_state(::System::Net::____System__Net__HttpWebRequest__AuthorizationState value)  {
::cordl_internals::setInstanceField<::System::Net::____System__Net__HttpWebRequest__AuthorizationState, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>(value));
}
constexpr ::System::Net::____System__Net__HttpWebRequest__AuthorizationState ::System::Net::HttpWebRequest::__get_auth_state() const {
return ::cordl_internals::getInstanceField<::System::Net::____System__Net__HttpWebRequest__AuthorizationState, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_proxy_auth_state(::System::Net::____System__Net__HttpWebRequest__AuthorizationState value)  {
::cordl_internals::setInstanceField<::System::Net::____System__Net__HttpWebRequest__AuthorizationState, 0x178>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::____System__Net__HttpWebRequest__AuthorizationState>(value));
}
constexpr ::System::Net::____System__Net__HttpWebRequest__AuthorizationState ::System::Net::HttpWebRequest::__get_proxy_auth_state() const {
return ::cordl_internals::getInstanceField<::System::Net::____System__Net__HttpWebRequest__AuthorizationState, 0x178>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_ResendContentFactory(::System::Func_2<::System::IO::Stream,::System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::System::IO::Stream,::System::Threading::Tasks::Task>, 0x188>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::System::IO::Stream,::System::Threading::Tasks::Task>>(value));
}
constexpr ::System::Func_2<::System::IO::Stream,::System::Threading::Tasks::Task> ::System::Net::HttpWebRequest::__get_ResendContentFactory() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::System::IO::Stream,::System::Threading::Tasks::Task>, 0x188>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set__ThrowOnError_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x190>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get__ThrowOnError_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x190>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::HttpWebRequest::__set_unsafe_auth_blah(bool value)  {
::cordl_internals::setInstanceField<bool, 0x191>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::HttpWebRequest::__get_unsafe_auth_blah() const {
return ::cordl_internals::getInstanceField<bool, 0x191>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "uri", ty: "::System::Uri", modifiers: "", def_value: None }]
 ::System::Net::HttpWebRequest::HttpWebRequest(::System::Uri uri)  : ::System::Net::WebRequest(THROW_UNLESS(::il2cpp_utils::New<HttpWebRequest>(uri))) {}
 void ::System::Net::HttpWebRequest::_ctor(::System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uri);
}
// Ctor Parameters [CppParam { name: "serializationInfo", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
 ::System::Net::HttpWebRequest::HttpWebRequest(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)  : ::System::Net::WebRequest(THROW_UNLESS(::il2cpp_utils::New<HttpWebRequest>(serializationInfo, streamingContext))) {}
 void ::System::Net::HttpWebRequest::_ctor(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void ::System::Net::HttpWebRequest::ResetAuthorization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "ResetAuthorization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Uri ::System::Net::HttpWebRequest::get_Address()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Address",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_AllowAutoRedirect(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_AllowAutoRedirect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Net::HttpWebRequest::get_AllowWriteStreamBuffering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_AllowWriteStreamBuffering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_AllowWriteStreamBuffering(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_AllowWriteStreamBuffering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::DecompressionMethods ::System::Net::HttpWebRequest::get_AutomaticDecompression()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_AutomaticDecompression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::DecompressionMethods, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_AutomaticDecompression(::System::Net::DecompressionMethods value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_AutomaticDecompression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::DecompressionMethods>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Net::HttpWebRequest::get_InternalAllowBuffering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_InternalAllowBuffering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::HttpWebRequest::get_MethodWithBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_MethodWithBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Net::Security::MobileTlsProvider ::System::Net::HttpWebRequest::get_TlsProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_TlsProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileTlsProvider, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::Interface::MonoTlsSettings ::System::Net::HttpWebRequest::get_TlsSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_TlsSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection ::System::Net::HttpWebRequest::get_ClientCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_ConnectionGroupName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_ConnectionGroupName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int64_t ::System::Net::HttpWebRequest::get_ContentLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_ContentLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_ContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::HttpWebRequest::set_InternalContentLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_InternalContentLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Net::HttpWebRequest::get_ThrowOnError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_ThrowOnError(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_ThrowOnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::HttpWebRequest::set_CookieContainer(::System::Net::CookieContainer value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_CookieContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::ICredentials ::System::Net::HttpWebRequest::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_Credentials(::System::Net::ICredentials value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_Credentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::System::Net::HttpWebRequest::get_DefaultMaximumErrorResponseLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_DefaultMaximumErrorResponseLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 ::System::Net::WebHeaderCollection ::System::Net::HttpWebRequest::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::HttpWebRequest::get_Host()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Host",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_Host(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_Host",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Net::HttpWebRequest::TryGetHostUri(::StringW hostName, ByRef<::System::Uri> hostUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "TryGetHostUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Uri>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, hostName, hostUri);
}
 bool ::System::Net::HttpWebRequest::get_KeepAlive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_KeepAlive(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_KeepAlive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::HttpWebRequest::set_MaximumAutomaticRedirections(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_MaximumAutomaticRedirections",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::System::Net::HttpWebRequest::get_DefaultMaximumResponseHeadersLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_DefaultMaximumResponseHeadersLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 int32_t ::System::Net::HttpWebRequest::get_ReadWriteTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ReadWriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::HttpWebRequest::get_Method()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_Method(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::HttpWebRequest::set_PreAuthenticate(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_PreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Version ::System::Net::HttpWebRequest::get_ProtocolVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ProtocolVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_ProtocolVersion(::System::Version value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_ProtocolVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Version>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::IWebProxy ::System::Net::HttpWebRequest::get_Proxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Proxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_Proxy(::System::Net::IWebProxy value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_Proxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Uri ::System::Net::HttpWebRequest::get_RequestUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_RequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::HttpWebRequest::get_SendChunked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_SendChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_SendChunked(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_SendChunked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::ServicePoint ::System::Net::HttpWebRequest::get_ServicePoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::ServicePoint ::System::Net::HttpWebRequest::get_ServicePointNoLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ServicePointNoLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Net::HttpWebRequest::get_Timeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_Timeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_Timeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::System::Net::HttpWebRequest::get_TransferEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_TransferEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::HttpWebRequest::get_UseDefaultCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_UseDefaultCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_UnsafeAuthenticatedConnectionSharing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::HttpWebRequest::get_ExpectContinue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ExpectContinue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_ExpectContinue(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_ExpectContinue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Uri ::System::Net::HttpWebRequest::get_AuthUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_AuthUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::HttpWebRequest::get_ProxyQuery()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ProxyQuery",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::ServerCertValidationCallback ::System::Net::HttpWebRequest::get_ServerCertValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_ServerCertValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServerCertValidationCallback, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::ServicePoint ::System::Net::HttpWebRequest::GetServicePoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetServicePoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::WebOperation ::System::Net::HttpWebRequest::SendRequest(bool redirecting, ::System::Net::BufferOffsetSize writeBuffer, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "SendRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebOperation, false>(const_cast<void*>(instance), ___internal_method, redirecting, writeBuffer, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::System::IO::Stream> ::System::Net::HttpWebRequest::MyGetRequestStreamAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "MyGetRequestStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::IAsyncResult ::System::Net::HttpWebRequest::BeginGetRequestStream(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "BeginGetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 ::System::IO::Stream ::System::Net::HttpWebRequest::EndGetRequestStream(::System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "EndGetRequestStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 ::System::Threading::Tasks::Task_1<::System::IO::Stream> ::System::Net::HttpWebRequest::GetRequestStreamAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetRequestStreamAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream>, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 ::System::Threading::Tasks::Task_1<T> ::System::Net::HttpWebRequest::RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>> func, int32_t timeout, ::System::Action abort, ::System::Func_1<bool> aborted, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                        "RunWithTimeout",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>, false>(nullptr, ___internal_method, func, timeout, abort, aborted, cancellationToken);
}
template<typename T>
 ::System::Threading::Tasks::Task_1<T> ::System::Net::HttpWebRequest::RunWithTimeoutWorker(::System::Threading::Tasks::Task_1<T> workerTask, int32_t timeout, ::System::Action abort, ::System::Func_1<bool> aborted, ::System::Threading::CancellationTokenSource cts)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                        "RunWithTimeoutWorker",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>, false>(nullptr, ___internal_method, workerTask, timeout, abort, aborted, cts);
}
template<typename T>
 ::System::Threading::Tasks::Task_1<T> ::System::Net::HttpWebRequest::RunWithTimeout(::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>> func)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                        "RunWithTimeout",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Threading::CancellationToken,::System::Threading::Tasks::Task_1<T>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, func);
}
 ::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse> ::System::Net::HttpWebRequest::MyGetResponseAsync(::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "MyGetResponseAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::HttpWebResponse>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 ::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>> ::System::Net::HttpWebRequest::GetResponseFromData(::System::Net::WebResponseStream stream, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetResponseFromData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_5<::System::Net::HttpWebResponse,bool,bool,::System::Net::BufferOffsetSize,::System::Net::WebOperation>>, false>(const_cast<void*>(instance), ___internal_method, stream, cancellationToken);
}
 ::System::Exception ::System::Net::HttpWebRequest::FlattenException(::System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "FlattenException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception, false>(nullptr, ___internal_method, e);
}
 ::System::Net::WebException ::System::Net::HttpWebRequest::GetWebException(::System::Exception e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetWebException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebException, false>(const_cast<void*>(instance), ___internal_method, e);
}
 ::System::Net::WebException ::System::Net::HttpWebRequest::GetWebException(::System::Exception e, bool aborted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetWebException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebException, false>(nullptr, ___internal_method, e, aborted);
}
 ::System::Net::WebException ::System::Net::HttpWebRequest::CreateRequestAbortedException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "CreateRequestAbortedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebException, false>(nullptr, ___internal_method);
}
 ::System::IAsyncResult ::System::Net::HttpWebRequest::BeginGetResponse(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "BeginGetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 ::System::Net::WebResponse ::System::Net::HttpWebRequest::EndGetResponse(::System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "EndGetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 ::System::Net::WebResponse ::System::Net::HttpWebRequest::GetResponse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::set_FinishedReading(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "set_FinishedReading",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Net::HttpWebRequest::get_Aborted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "get_Aborted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::Abort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "Abort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void ::System::Net::HttpWebRequest::GetObjectData(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serializationInfo, streamingContext);
}
 void ::System::Net::HttpWebRequest::CheckRequestStarted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "CheckRequestStarted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::DoContinueDelegate(int32_t statusCode, ::System::Net::WebHeaderCollection headers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "DoContinueDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, statusCode, headers);
}
 void ::System::Net::HttpWebRequest::RewriteRedirectToGet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "RewriteRedirectToGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::HttpWebRequest::Redirect(::System::Net::HttpStatusCode code, ::System::Net::WebResponse response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "Redirect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, code, response);
}
 ::StringW ::System::Net::HttpWebRequest::GetHeaders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::HttpWebRequest::DoPreAuthenticate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "DoPreAuthenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::System::Net::HttpWebRequest::GetRequestHeaders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetRequestHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::ValueTuple_2<::System::Net::WebOperation,bool> ::System::Net::HttpWebRequest::HandleNtlmAuth(::System::Net::WebResponseStream stream, ::System::Net::HttpWebResponse response, ::System::Net::BufferOffsetSize writeBuffer, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "HandleNtlmAuth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::BufferOffsetSize>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Net::WebOperation,bool>, false>(const_cast<void*>(instance), ___internal_method, stream, response, writeBuffer, cancellationToken);
}
 bool ::System::Net::HttpWebRequest::CheckAuthorization(::System::Net::WebResponse response, ::System::Net::HttpStatusCode code)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "CheckAuthorization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, response, code);
}
 ::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize>,::System::Net::WebException> ::System::Net::HttpWebRequest::GetRewriteHandler(::System::Net::HttpWebResponse response, bool redirect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "GetRewriteHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize>,::System::Net::WebException>, false>(const_cast<void*>(instance), ___internal_method, response, redirect);
}
 ::System::ValueTuple_4<bool,bool,::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize>,::System::Net::WebException> ::System::Net::HttpWebRequest::CheckFinalStatus(::System::Net::HttpWebResponse response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "CheckFinalStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebResponse>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_4<bool,bool,::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize>,::System::Net::WebException>, false>(const_cast<void*>(instance), ___internal_method, response);
}
template<typename T>
 bool ::System::Net::HttpWebRequest::_RunWithTimeout_b__242_0()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                        "<RunWithTimeout>b__242_0",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize> ::System::Net::HttpWebRequest::_GetRewriteHandler_b__271_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            "<GetRewriteHandler>b__271_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::BufferOffsetSize>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::System::Net::HttpWebRequest::HttpWebRequest()  : ::System::Net::WebRequest(THROW_UNLESS(::il2cpp_utils::New<HttpWebRequest>())) {}
 void ::System::Net::HttpWebRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest____c__241_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest____c__241_1::*)()>(&::System::Net::____System__Net__HttpWebRequest____c__241_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest____c__241_1._RunWithTimeoutWorker_b__241_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::System::Net::____System__Net__HttpWebRequest____c__241_1::*)(::System::Threading::Tasks::Task_1<T>)>(&::System::Net::____System__Net__HttpWebRequest____c__241_1::_RunWithTimeoutWorker_b__241_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1>::get(),
                            "<RunWithTimeoutWorker>b__241_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::____System__Net__HttpWebRequest____c__241_1::__set___9(::System::Net::____System__Net__HttpWebRequest____c__241_1<T> value)  {
::cordl_internals::setStaticField<::System::Net::____System__Net__HttpWebRequest____c__241_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1>::get>(std::forward<::System::Net::____System__Net__HttpWebRequest____c__241_1<T>>(value));
}
 ::System::Net::____System__Net__HttpWebRequest____c__241_1<T> ::System::Net::____System__Net__HttpWebRequest____c__241_1::__get___9()  {
return ::cordl_internals::getStaticField<::System::Net::____System__Net__HttpWebRequest____c__241_1<T>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1>::get>();
}
 void ::System::Net::____System__Net__HttpWebRequest____c__241_1::__set___9__241_0(::System::Func_2<::System::Threading::Tasks::Task_1<T>,::System::Nullable_1<int32_t>> value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>,::System::Nullable_1<int32_t>>, "<>9__241_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1>::get>(std::forward<::System::Func_2<::System::Threading::Tasks::Task_1<T>,::System::Nullable_1<int32_t>>>(value));
}
 ::System::Func_2<::System::Threading::Tasks::Task_1<T>,::System::Nullable_1<int32_t>> ::System::Net::____System__Net__HttpWebRequest____c__241_1::__get___9__241_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<T>,::System::Nullable_1<int32_t>>, "<>9__241_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1>::get>();
}
// Ctor Parameters []
 ::System::Net::____System__Net__HttpWebRequest____c__241_1::____System__Net__HttpWebRequest____c__241_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__HttpWebRequest____c__241_1>())) {}
 void ::System::Net::____System__Net__HttpWebRequest____c__241_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Nullable_1<int32_t> ::System::Net::____System__Net__HttpWebRequest____c__241_1::_RunWithTimeoutWorker_b__241_0(::System::Threading::Tasks::Task_1<T> t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1>::get(),
                            "<RunWithTimeoutWorker>b__241_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, t);
}
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::*)()>(&::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>._RunWithTimeoutWorker_b__241_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::*)(::System::Threading::Tasks::Task_1<int32_t>)>(&::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::_RunWithTimeoutWorker_b__241_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>>::get(),
                            "<RunWithTimeoutWorker>b__241_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::__set___9(::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t> value)  {
::cordl_internals::setStaticField<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>>::get>(std::forward<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>>(value));
}
 ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t> ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::__get___9()  {
return ::cordl_internals::getStaticField<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>>::get>();
}
 void ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::__set___9__241_0(::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>,::System::Nullable_1<int32_t>> value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>,::System::Nullable_1<int32_t>>, "<>9__241_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>>::get>(std::forward<::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>,::System::Nullable_1<int32_t>>>(value));
}
 ::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>,::System::Nullable_1<int32_t>> ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::__get___9__241_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Threading::Tasks::Task_1<int32_t>,::System::Nullable_1<int32_t>>, "<>9__241_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>>::get>();
}
// Ctor Parameters []
 ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::____System__Net__HttpWebRequest____c__241_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__Net__HttpWebRequest____c__241_1>())) {}
 void ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Nullable_1<int32_t> ::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>::_RunWithTimeoutWorker_b__241_0(::System::Threading::Tasks::Task_1<int32_t> t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest____c__241_1<int32_t>>::get(),
                            "<RunWithTimeoutWorker>b__241_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, t);
}
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::*)()>(&::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "timeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cts", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "abort", ty: "::System::Action", modifiers: "", def_value: Some("csnull") }, CppParam { name: "aborted", ty: "::System::Func_1<bool>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::System::Threading::Tasks::Task_1<T> workerTask, int32_t timeout, ::System::Threading::CancellationTokenSource cts, ::System::Action abort, ::System::Func_1<bool> aborted, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->workerTask = workerTask;
this->timeout = timeout;
this->cts = cts;
this->abort = abort;
this->aborted = aborted;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__set_workerTask(::System::Threading::Tasks::Task_1<T> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<T>, 0x10>(this->__instance, std::forward<::System::Threading::Tasks::Task_1<T>>(value));
}
constexpr ::System::Threading::Tasks::Task_1<T> ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__get_workerTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<T>, 0x10>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__set_timeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__get_timeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__set_cts(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x20>(this->__instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__get_cts() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__set_abort(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x28>(this->__instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__get_abort() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__set_aborted(::System::Func_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Func_1<bool>, 0x30>(this->__instance, std::forward<::System::Func_1<bool>>(value));
}
constexpr ::System::Func_1<bool> ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__get_aborted() const {
return ::cordl_internals::getInstanceField<::System::Func_1<bool>, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x38>(this->__instance);
}
 void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::*)()>(&::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task_1<int32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "timeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cts", ty: "::System::Threading::CancellationTokenSource", modifiers: "", def_value: Some("csnull") }, CppParam { name: "abort", ty: "::System::Action", modifiers: "", def_value: Some("csnull") }, CppParam { name: "aborted", ty: "::System::Func_1<bool>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> __t__builder, ::System::Threading::Tasks::Task_1<int32_t> workerTask, int32_t timeout, ::System::Threading::CancellationTokenSource cts, ::System::Action abort, ::System::Func_1<bool> aborted, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->workerTask = workerTask;
this->timeout = timeout;
this->cts = cts;
this->abort = abort;
this->aborted = aborted;
this->__u__1 = __u__1;
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t> ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>, 0x8>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__set_workerTask(::System::Threading::Tasks::Task_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<int32_t>, 0x10>(this->__instance, std::forward<::System::Threading::Tasks::Task_1<int32_t>>(value));
}
constexpr ::System::Threading::Tasks::Task_1<int32_t> ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__get_workerTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<int32_t>, 0x10>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__set_timeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__get_timeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__set_cts(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x20>(this->__instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__get_cts() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x20>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__set_abort(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x28>(this->__instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__get_abort() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x28>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__set_aborted(::System::Func_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Func_1<bool>, 0x30>(this->__instance, std::forward<::System::Func_1<bool>>(value));
}
constexpr ::System::Func_1<bool> ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__get_aborted() const {
return ::cordl_internals::getInstanceField<::System::Func_1<bool>, 0x30>(this->__instance);
}
constexpr void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x38>(this->__instance, std::forward<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>>(value));
}
constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>, 0x38>(this->__instance);
}
 void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::____System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<int32_t>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
} // end anonymous namespace
