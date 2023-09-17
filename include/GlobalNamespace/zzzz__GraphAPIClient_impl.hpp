#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GraphAPIClient_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "GlobalNamespace/zzzz__INetworkConfig_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__UriBuilder_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceRequest_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
// Ctor Parameters [CppParam { name: "MaxRetries", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MinWaitTimeForRetryMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "WithExponentialBackoff", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions::____GlobalNamespace__GraphAPIClient__PostOptions(int32_t MaxRetries, int32_t MinWaitTimeForRetryMs, bool WithExponentialBackoff) noexcept : ::bs_hook::ValueTypeWrapper() {this->MaxRetries = MaxRetries;
this->MinWaitTimeForRetryMs = MinWaitTimeForRetryMs;
this->WithExponentialBackoff = WithExponentialBackoff;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions::__set_MaxRetries(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions::__get_MaxRetries() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions::__set_MinWaitTimeForRetryMs(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions::__get_MinWaitTimeForRetryMs() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions::__set_WithExponentialBackoff(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions::__get_WithExponentialBackoff() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
//  Writing Method size for method: ::GlobalNamespace::GraphAPIClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GraphAPIClient::*)(::GlobalNamespace::INetworkConfig)>(&::GlobalNamespace::GraphAPIClient::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdaf338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GraphAPIClient.CalculateDelayMsBeforeRetry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions)>(&::GlobalNamespace::GraphAPIClient::CalculateDelayMsBeforeRetry)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xdaf3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient>::get(),
                            "CalculateDelayMsBeforeRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::GraphAPIClient::__set__networkConfig(::GlobalNamespace::INetworkConfig value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkConfig, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::INetworkConfig>(value));
}
constexpr ::GlobalNamespace::INetworkConfig ::GlobalNamespace::GraphAPIClient::__get__networkConfig() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkConfig, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GraphAPIClient::__set__client(::System::Net::Http::HttpClient value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpClient, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Http::HttpClient>(value));
}
constexpr ::System::Net::Http::HttpClient ::GlobalNamespace::GraphAPIClient::__get__client() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpClient, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "networkConfig", ty: "::GlobalNamespace::INetworkConfig", modifiers: "", def_value: None }]
 ::GlobalNamespace::GraphAPIClient::GraphAPIClient(::GlobalNamespace::INetworkConfig networkConfig)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GraphAPIClient>(networkConfig))) {}
 void ::GlobalNamespace::GraphAPIClient::_ctor(::GlobalNamespace::INetworkConfig networkConfig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkConfig>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, networkConfig);
}
/// @param postOptions: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions (default: {})
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template<typename TRequest,typename TResponse>
 ::System::Threading::Tasks::Task_1<TResponse> ::GlobalNamespace::GraphAPIClient::PostLoggedOut(::StringW path, TRequest request, ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions postOptions, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient>::get(),
                        "PostLoggedOut",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>, false>(const_cast<void*>(instance), ___internal_method, path, request, postOptions, cancellationToken);
}
/// @param postOptions: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions (default: {})
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template<typename TRequest,typename TResponse>
 ::System::Threading::Tasks::Task_1<TResponse> ::GlobalNamespace::GraphAPIClient::Post(::StringW path, ::StringW accessToken, TRequest request, ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions postOptions, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient>::get(),
                        "Post",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>, false>(const_cast<void*>(instance), ___internal_method, path, accessToken, request, postOptions, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
template<typename TResponse>
 ::System::Threading::Tasks::Task_1<TResponse> ::GlobalNamespace::GraphAPIClient::Post(::System::Uri uri, ::StringW accessToken, ::System::Net::Http::HttpContent httpContent, ::System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient>::get(),
                        "Post",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResponse>, false>(const_cast<void*>(instance), ___internal_method, uri, accessToken, httpContent, cancellationToken);
}
 int32_t ::GlobalNamespace::GraphAPIClient::CalculateDelayMsBeforeRetry(int32_t numAttempts, ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions postOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphAPIClient>::get(),
                            "CalculateDelayMsBeforeRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, numAttempts, postOptions);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::*)()>(&::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient", modifiers: "", def_value: Some("csnull") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "postOptions", ty: "::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_httpContent_5__3", ty: "::System::Net::Http::HttpContent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_numAttempts_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::____GlobalNamespace__GraphAPIClient___Post_d__4_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, ::GlobalNamespace::GraphAPIClient __4__this, ::StringW path, TRequest request, ::StringW accessToken, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions postOptions, ::System::UriBuilder _uriBuilder_5__2, ::System::Net::Http::HttpContent _httpContent_5__3, int32_t _numAttempts_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->path = path;
this->request = request;
this->accessToken = accessToken;
this->cancellationToken = cancellationToken;
this->postOptions = postOptions;
this->_uriBuilder_5__2 = _uriBuilder_5__2;
this->_httpContent_5__3 = _httpContent_5__3;
this->_numAttempts_5__4 = _numAttempts_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set___4__this(::GlobalNamespace::GraphAPIClient value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GraphAPIClient, 0x10>(this->__instance, std::forward<::GlobalNamespace::GraphAPIClient>(value));
}
constexpr ::GlobalNamespace::GraphAPIClient ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GraphAPIClient, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set_request(TRequest value)  {
::cordl_internals::setInstanceField<TRequest, 0x20>(this->__instance, std::forward<TRequest>(value));
}
constexpr TRequest ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get_request() const {
return ::cordl_internals::getInstanceField<TRequest, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set_accessToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get_accessToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set_postOptions(::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions, 0x38>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get_postOptions() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set__uriBuilder_5__2(::System::UriBuilder value)  {
::cordl_internals::setInstanceField<::System::UriBuilder, 0x40>(this->__instance, std::forward<::System::UriBuilder>(value));
}
constexpr ::System::UriBuilder ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get__uriBuilder_5__2() const {
return ::cordl_internals::getInstanceField<::System::UriBuilder, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set__httpContent_5__3(::System::Net::Http::HttpContent value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpContent, 0x48>(this->__instance, std::forward<::System::Net::Http::HttpContent>(value));
}
constexpr ::System::Net::Http::HttpContent ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get__httpContent_5__3() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpContent, 0x48>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set__numAttempts_5__4(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get__numAttempts_5__4() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>, 0x58>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>, 0x58>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x60>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x60>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)()>(&::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient", modifiers: "", def_value: Some("csnull") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "request", ty: "::BGNet::Core::GameLift::GetMultiplayerInstanceRequest", modifiers: "", def_value: Some("{}") }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "postOptions", ty: "::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_httpContent_5__3", ty: "::System::Net::Http::HttpContent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_numAttempts_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::____GlobalNamespace__GraphAPIClient___Post_d__4_2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __t__builder, ::GlobalNamespace::GraphAPIClient __4__this, ::StringW path, ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest request, ::StringW accessToken, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions postOptions, ::System::UriBuilder _uriBuilder_5__2, ::System::Net::Http::HttpContent _httpContent_5__3, int32_t _numAttempts_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->path = path;
this->request = request;
this->accessToken = accessToken;
this->cancellationToken = cancellationToken;
this->postOptions = postOptions;
this->_uriBuilder_5__2 = _uriBuilder_5__2;
this->_httpContent_5__3 = _httpContent_5__3;
this->_numAttempts_5__4 = _numAttempts_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___4__this(::GlobalNamespace::GraphAPIClient value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GraphAPIClient, 0x10>(this->__instance, std::forward<::GlobalNamespace::GraphAPIClient>(value));
}
constexpr ::GlobalNamespace::GraphAPIClient ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GraphAPIClient, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_request(::BGNet::Core::GameLift::GetMultiplayerInstanceRequest value)  {
::cordl_internals::setInstanceField<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, 0x20>(this->__instance, std::forward<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest>(value));
}
constexpr ::BGNet::Core::GameLift::GetMultiplayerInstanceRequest ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_request() const {
return ::cordl_internals::getInstanceField<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_accessToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_accessToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_postOptions(::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions, 0x38>(this->__instance, std::forward<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_postOptions() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__GraphAPIClient__PostOptions, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set__uriBuilder_5__2(::System::UriBuilder value)  {
::cordl_internals::setInstanceField<::System::UriBuilder, 0x40>(this->__instance, std::forward<::System::UriBuilder>(value));
}
constexpr ::System::UriBuilder ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get__uriBuilder_5__2() const {
return ::cordl_internals::getInstanceField<::System::UriBuilder, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set__httpContent_5__3(::System::Net::Http::HttpContent value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpContent, 0x48>(this->__instance, std::forward<::System::Net::Http::HttpContent>(value));
}
constexpr ::System::Net::Http::HttpContent ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get__httpContent_5__3() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpContent, 0x48>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set__numAttempts_5__4(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get__numAttempts_5__4() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x58>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x58>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x60>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter, 0x60>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__4_2<::BGNet::Core::GameLift::GetMultiplayerInstanceRequest,::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::*)()>(&::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::System::Uri", modifiers: "", def_value: Some("csnull") }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "httpContent", ty: "::System::Net::Http::HttpContent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_requestMessage_5__2", ty: "::System::Net::Http::HttpRequestMessage", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::____GlobalNamespace__GraphAPIClient___Post_d__5_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, ::System::Uri uri, ::StringW accessToken, ::System::Net::Http::HttpContent httpContent, ::GlobalNamespace::GraphAPIClient __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage _requestMessage_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->uri = uri;
this->accessToken = accessToken;
this->httpContent = httpContent;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_requestMessage_5__2 = _requestMessage_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set_uri(::System::Uri value)  {
::cordl_internals::setInstanceField<::System::Uri, 0x10>(this->__instance, std::forward<::System::Uri>(value));
}
constexpr ::System::Uri ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get_uri() const {
return ::cordl_internals::getInstanceField<::System::Uri, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set_accessToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get_accessToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set_httpContent(::System::Net::Http::HttpContent value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpContent, 0x20>(this->__instance, std::forward<::System::Net::Http::HttpContent>(value));
}
constexpr ::System::Net::Http::HttpContent ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get_httpContent() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpContent, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set___4__this(::GlobalNamespace::GraphAPIClient value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GraphAPIClient, 0x28>(this->__instance, std::forward<::GlobalNamespace::GraphAPIClient>(value));
}
constexpr ::GlobalNamespace::GraphAPIClient ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GraphAPIClient, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set__requestMessage_5__2(::System::Net::Http::HttpRequestMessage value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpRequestMessage, 0x38>(this->__instance, std::forward<::System::Net::Http::HttpRequestMessage>(value));
}
constexpr ::System::Net::Http::HttpRequestMessage ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get__requestMessage_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpRequestMessage, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage>, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x48>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)()>(&::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::System::Uri", modifiers: "", def_value: Some("csnull") }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "httpContent", ty: "::System::Net::Http::HttpContent", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GraphAPIClient", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_requestMessage_5__2", ty: "::System::Net::Http::HttpRequestMessage", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::____GlobalNamespace__GraphAPIClient___Post_d__5_1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __t__builder, ::System::Uri uri, ::StringW accessToken, ::System::Net::Http::HttpContent httpContent, ::GlobalNamespace::GraphAPIClient __4__this, ::System::Threading::CancellationToken cancellationToken, ::System::Net::Http::HttpRequestMessage _requestMessage_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->uri = uri;
this->accessToken = accessToken;
this->httpContent = httpContent;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->_requestMessage_5__2 = _requestMessage_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_uri(::System::Uri value)  {
::cordl_internals::setInstanceField<::System::Uri, 0x10>(this->__instance, std::forward<::System::Uri>(value));
}
constexpr ::System::Uri ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_uri() const {
return ::cordl_internals::getInstanceField<::System::Uri, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_accessToken(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_accessToken() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_httpContent(::System::Net::Http::HttpContent value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpContent, 0x20>(this->__instance, std::forward<::System::Net::Http::HttpContent>(value));
}
constexpr ::System::Net::Http::HttpContent ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_httpContent() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpContent, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___4__this(::GlobalNamespace::GraphAPIClient value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GraphAPIClient, 0x28>(this->__instance, std::forward<::GlobalNamespace::GraphAPIClient>(value));
}
constexpr ::GlobalNamespace::GraphAPIClient ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GraphAPIClient, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_cancellationToken(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set__requestMessage_5__2(::System::Net::Http::HttpRequestMessage value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpRequestMessage, 0x38>(this->__instance, std::forward<::System::Net::Http::HttpRequestMessage>(value));
}
constexpr ::System::Net::Http::HttpRequestMessage ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get__requestMessage_5__2() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpRequestMessage, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage>, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x48>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get___u__2() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>, 0x48>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GraphAPIClient___Post_d__5_1<::BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
} // end anonymous namespace
