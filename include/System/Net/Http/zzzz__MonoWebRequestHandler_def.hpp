#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net {
class HttpWebResponse;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
namespace System::Net {
struct DecompressionMethods;
}
namespace System::Net::Http {
struct System__Net__Http__MonoWebRequestHandler___SendAsync_d__99;
}
namespace System::Net::Http {
class System__Net__Http__MonoWebRequestHandler____c;
}
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net::Security {
struct AuthenticationLevel;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net::Http {
class HttpMethod;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct TimeSpan;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
namespace System::Net {
class CookieContainer;
}
namespace System {
class IDisposable;
}
namespace System::Security::Principal {
struct TokenImpersonationLevel;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Net {
class WebResponse;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
// Forward declare root types
namespace System::Net::Http {
class MonoWebRequestHandler;
}
namespace System::Net::Http {
class System__Net__Http__MonoWebRequestHandler____c;
}
namespace System::Net::Http {
struct System__Net__Http__MonoWebRequestHandler___SendAsync_d__99;
}
// Type: ::<>c
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14796))
// CS Name: System.Net.Http.MonoWebRequestHandler::<>c
class CORDL_TYPE System__Net__Http__MonoWebRequestHandler____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__MonoWebRequestHandler____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__MonoWebRequestHandler____c", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__MonoWebRequestHandler____c(System__Net__Http__MonoWebRequestHandler____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__MonoWebRequestHandler____c", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__MonoWebRequestHandler____c(System__Net__Http__MonoWebRequestHandler____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__MonoWebRequestHandler____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__MonoWebRequestHandler____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__MonoWebRequestHandler____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__MonoWebRequestHandler____c& operator=(System__Net__Http__MonoWebRequestHandler____c&& o) noexcept = default;
  constexpr System__Net__Http__MonoWebRequestHandler____c& operator=(System__Net__Http__MonoWebRequestHandler____c const& o) noexcept = default;
                


// Fields

static System::Net::Http::System__Net__Http__MonoWebRequestHandler____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Net::Http::System__Net__Http__MonoWebRequestHandler____c value) ;

static System::Net::Http::System__Net__Http__MonoWebRequestHandler____c __get___9() ;

static System::Func_2<::StringW,bool> __declspec(property(get=__get___9__95_0, put=__set___9__95_0))  __9__95_0;

static void __set___9__95_0(System::Func_2<::StringW,bool> value) ;

static System::Func_2<::StringW,bool> __get___9__95_0() ;

static System::Func_2<::StringW,bool> __declspec(property(get=__get___9__96_0, put=__set___9__96_0))  __9__96_0;

static void __set___9__96_0(System::Func_2<::StringW,bool> value) ;

static System::Func_2<::StringW,bool> __get___9__96_0() ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get___9__99_0, put=__set___9__99_0))  __9__99_0;

static void __set___9__99_0(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get___9__99_0() ;


// Methods

static System::Net::Http::System__Net__Http__MonoWebRequestHandler____c New_ctor() ;

/// @brief Method .ctor addr 0x269cfb8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetConnectionKeepAlive>b__95_0 addr 0x269cfc0 size 0x50 virtual false final false
 bool _GetConnectionKeepAlive_b__95_0(::StringW l) ;

/// @brief Method <CreateWebRequest>b__96_0 addr 0x269d010 size 0x4c virtual false final false
 bool _CreateWebRequest_b__96_0(::StringW l) ;

/// @brief Method <SendAsync>b__99_0 addr 0x269d05c size 0xb0 virtual false final false
 void _SendAsync_b__99_0(::bs_hook::Il2CppWrapperType l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
// Type: ::<SendAsync>d__99
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14797))
// CS Name: System.Net.Http.MonoWebRequestHandler::<SendAsync>d__99
struct CORDL_TYPE System__Net__Http__MonoWebRequestHandler___SendAsync_d__99 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::Http::MonoWebRequestHandler", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "request", ty: "System::Net::Http::HttpRequestMessage", modifiers: "", def_value: None }, CppParam { name: "_wrequest_5__2", ty: "System::Net::HttpWebRequest", modifiers: "", def_value: None }, CppParam { name: "_wresponse_5__3", ty: "System::Net::HttpWebResponse", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None }, CppParam { name: "_content_5__5", ty: "System::Net::Http::HttpContent", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "_stream_5__6", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: None }]
constexpr System__Net__Http__MonoWebRequestHandler___SendAsync_d__99(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage> __t__builder, System::Net::Http::MonoWebRequestHandler __4__this, System::Threading::CancellationToken cancellationToken, System::Net::Http::HttpRequestMessage request, System::Net::HttpWebRequest _wrequest_5__2, System::Net::HttpWebResponse _wresponse_5__3, System::Threading::CancellationTokenRegistration __7__wrap3, System::Net::Http::HttpContent _content_5__5, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, System::IO::Stream _stream_5__6, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> __u__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse> __u__3, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __u__4) noexcept;


                    constexpr System__Net__Http__MonoWebRequestHandler___SendAsync_d__99(System__Net__Http__MonoWebRequestHandler___SendAsync_d__99 const&) = default;
                    constexpr System__Net__Http__MonoWebRequestHandler___SendAsync_d__99(System__Net__Http__MonoWebRequestHandler___SendAsync_d__99&&) = default;
                    constexpr System__Net__Http__MonoWebRequestHandler___SendAsync_d__99& operator=(System__Net__Http__MonoWebRequestHandler___SendAsync_d__99 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__Http__MonoWebRequestHandler___SendAsync_d__99& operator=(System__Net__Http__MonoWebRequestHandler___SendAsync_d__99&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xa8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__MonoWebRequestHandler___SendAsync_d__99(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage> __get___t__builder() const;

 System::Net::Http::MonoWebRequestHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::Http::MonoWebRequestHandler value) ;

constexpr System::Net::Http::MonoWebRequestHandler __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::Http::HttpRequestMessage __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(System::Net::Http::HttpRequestMessage value) ;

constexpr System::Net::Http::HttpRequestMessage __get_request() const;

 System::Net::HttpWebRequest __declspec(property(get=__get__wrequest_5__2, put=__set__wrequest_5__2))  _wrequest_5__2;

constexpr void __set__wrequest_5__2(System::Net::HttpWebRequest value) ;

constexpr System::Net::HttpWebRequest __get__wrequest_5__2() const;

 System::Net::HttpWebResponse __declspec(property(get=__get__wresponse_5__3, put=__set__wresponse_5__3))  _wresponse_5__3;

constexpr void __set__wresponse_5__3(System::Net::HttpWebResponse value) ;

constexpr System::Net::HttpWebResponse __get__wresponse_5__3() const;

 System::Threading::CancellationTokenRegistration __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(System::Threading::CancellationTokenRegistration value) ;

constexpr System::Threading::CancellationTokenRegistration __get___7__wrap3() const;

 System::Net::Http::HttpContent __declspec(property(get=__get__content_5__5, put=__set__content_5__5))  _content_5__5;

constexpr void __set__content_5__5(System::Net::Http::HttpContent value) ;

constexpr System::Net::Http::HttpContent __get__content_5__5() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 System::IO::Stream __declspec(property(get=__get__stream_5__6, put=__set__stream_5__6))  _stream_5__6;

constexpr void __set__stream_5__6(System::IO::Stream value) ;

constexpr System::IO::Stream __get__stream_5__6() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> __get___u__2() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse> __declspec(property(get=__get___u__3, put=__set___u__3))  __u__3;

constexpr void __set___u__3(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse> __get___u__3() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __declspec(property(get=__get___u__4, put=__set___u__4))  __u__4;

constexpr void __set___u__4(System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __get___u__4() const;


// Methods

/// @brief Method MoveNext addr 0x269d10c size 0x1700 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x269ebe8 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http
// Type: System.Net.Http::MonoWebRequestHandler
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14798))
// CS Name: System.Net.Http.MonoWebRequestHandler
class CORDL_TYPE MonoWebRequestHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _SendAsync_d__99 = System::Net::Http::System__Net__Http__MonoWebRequestHandler___SendAsync_d__99;

using __c = System::Net::Http::System__Net__Http__MonoWebRequestHandler____c;

/// @brief Convert operator to System::Net::Http::IMonoHttpClientHandler
constexpr operator  System::Net::Http::IMonoHttpClientHandler() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~MonoWebRequestHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoWebRequestHandler", modifiers: " const&", def_value: None }]
constexpr MonoWebRequestHandler(MonoWebRequestHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoWebRequestHandler", modifiers: "&&", def_value: None }]
constexpr MonoWebRequestHandler(MonoWebRequestHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoWebRequestHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoWebRequestHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoWebRequestHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoWebRequestHandler& operator=(MonoWebRequestHandler&& o) noexcept = default;
  constexpr MonoWebRequestHandler& operator=(MonoWebRequestHandler const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_groupCounter, put=__set_groupCounter))  groupCounter;

static void __set_groupCounter(int64_t value) ;

static int64_t __get_groupCounter() ;

 bool __declspec(property(get=__get_allowAutoRedirect, put=__set_allowAutoRedirect))  allowAutoRedirect;

constexpr void __set_allowAutoRedirect(bool value) ;

constexpr bool __get_allowAutoRedirect() const;

 System::Net::DecompressionMethods __declspec(property(get=__get_automaticDecompression, put=__set_automaticDecompression))  automaticDecompression;

constexpr void __set_automaticDecompression(System::Net::DecompressionMethods value) ;

constexpr System::Net::DecompressionMethods __get_automaticDecompression() const;

 System::Net::CookieContainer __declspec(property(get=__get_cookieContainer, put=__set_cookieContainer))  cookieContainer;

constexpr void __set_cookieContainer(System::Net::CookieContainer value) ;

constexpr System::Net::CookieContainer __get_cookieContainer() const;

 System::Net::ICredentials __declspec(property(get=__get_credentials, put=__set_credentials))  credentials;

constexpr void __set_credentials(System::Net::ICredentials value) ;

constexpr System::Net::ICredentials __get_credentials() const;

 int32_t __declspec(property(get=__get_maxAutomaticRedirections, put=__set_maxAutomaticRedirections))  maxAutomaticRedirections;

constexpr void __set_maxAutomaticRedirections(int32_t value) ;

constexpr int32_t __get_maxAutomaticRedirections() const;

 int64_t __declspec(property(get=__get_maxRequestContentBufferSize, put=__set_maxRequestContentBufferSize))  maxRequestContentBufferSize;

constexpr void __set_maxRequestContentBufferSize(int64_t value) ;

constexpr int64_t __get_maxRequestContentBufferSize() const;

 bool __declspec(property(get=__get_preAuthenticate, put=__set_preAuthenticate))  preAuthenticate;

constexpr void __set_preAuthenticate(bool value) ;

constexpr bool __get_preAuthenticate() const;

 System::Net::IWebProxy __declspec(property(get=__get_proxy, put=__set_proxy))  proxy;

constexpr void __set_proxy(System::Net::IWebProxy value) ;

constexpr System::Net::IWebProxy __get_proxy() const;

 bool __declspec(property(get=__get_useCookies, put=__set_useCookies))  useCookies;

constexpr void __set_useCookies(bool value) ;

constexpr bool __get_useCookies() const;

 bool __declspec(property(get=__get_useProxy, put=__set_useProxy))  useProxy;

constexpr void __set_useProxy(bool value) ;

constexpr bool __get_useProxy() const;

 System::Net::Security::SslClientAuthenticationOptions __declspec(property(get=__get_sslOptions, put=__set_sslOptions))  sslOptions;

constexpr void __set_sslOptions(System::Net::Security::SslClientAuthenticationOptions value) ;

constexpr System::Net::Security::SslClientAuthenticationOptions __get_sslOptions() const;

 bool __declspec(property(get=__get_allowPipelining, put=__set_allowPipelining))  allowPipelining;

constexpr void __set_allowPipelining(bool value) ;

constexpr bool __get_allowPipelining() const;

 System::Net::Cache::RequestCachePolicy __declspec(property(get=__get_cachePolicy, put=__set_cachePolicy))  cachePolicy;

constexpr void __set_cachePolicy(System::Net::Cache::RequestCachePolicy value) ;

constexpr System::Net::Cache::RequestCachePolicy __get_cachePolicy() const;

 System::Net::Security::AuthenticationLevel __declspec(property(get=__get_authenticationLevel, put=__set_authenticationLevel))  authenticationLevel;

constexpr void __set_authenticationLevel(System::Net::Security::AuthenticationLevel value) ;

constexpr System::Net::Security::AuthenticationLevel __get_authenticationLevel() const;

 System::TimeSpan __declspec(property(get=__get_continueTimeout, put=__set_continueTimeout))  continueTimeout;

constexpr void __set_continueTimeout(System::TimeSpan value) ;

constexpr System::TimeSpan __get_continueTimeout() const;

 System::Security::Principal::TokenImpersonationLevel __declspec(property(get=__get_impersonationLevel, put=__set_impersonationLevel))  impersonationLevel;

constexpr void __set_impersonationLevel(System::Security::Principal::TokenImpersonationLevel value) ;

constexpr System::Security::Principal::TokenImpersonationLevel __get_impersonationLevel() const;

 int32_t __declspec(property(get=__get_maxResponseHeadersLength, put=__set_maxResponseHeadersLength))  maxResponseHeadersLength;

constexpr void __set_maxResponseHeadersLength(int32_t value) ;

constexpr int32_t __get_maxResponseHeadersLength() const;

 int32_t __declspec(property(get=__get_readWriteTimeout, put=__set_readWriteTimeout))  readWriteTimeout;

constexpr void __set_readWriteTimeout(int32_t value) ;

constexpr int32_t __get_readWriteTimeout() const;

 System::Net::Security::RemoteCertificateValidationCallback __declspec(property(get=__get_serverCertificateValidationCallback, put=__set_serverCertificateValidationCallback))  serverCertificateValidationCallback;

constexpr void __set_serverCertificateValidationCallback(System::Net::Security::RemoteCertificateValidationCallback value) ;

constexpr System::Net::Security::RemoteCertificateValidationCallback __get_serverCertificateValidationCallback() const;

 bool __declspec(property(get=__get_unsafeAuthenticatedConnectionSharing, put=__set_unsafeAuthenticatedConnectionSharing))  unsafeAuthenticatedConnectionSharing;

constexpr void __set_unsafeAuthenticatedConnectionSharing(bool value) ;

constexpr bool __get_unsafeAuthenticatedConnectionSharing() const;

 bool __declspec(property(get=__get_sentRequest, put=__set_sentRequest))  sentRequest;

constexpr void __set_sentRequest(bool value) ;

constexpr bool __get_sentRequest() const;

 ::StringW __declspec(property(get=__get_connectionGroupName, put=__set_connectionGroupName))  connectionGroupName;

constexpr void __set_connectionGroupName(::StringW value) ;

constexpr ::StringW __get_connectionGroupName() const;

 System::Nullable_1<System::TimeSpan> __declspec(property(get=__get_timeout, put=__set_timeout))  timeout;

constexpr void __set_timeout(System::Nullable_1<System::TimeSpan> value) ;

constexpr System::Nullable_1<System::TimeSpan> __get_timeout() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;


// Properties

 System::Net::CookieContainer __declspec(property(get=get_CookieContainer))  CookieContainer;

 int64_t __declspec(property(get=get_MaxRequestContentBufferSize))  MaxRequestContentBufferSize;

 System::Net::Security::SslClientAuthenticationOptions __declspec(property(get=get_SslOptions, put=set_SslOptions))  SslOptions;


// Methods

static System::Net::Http::MonoWebRequestHandler New_ctor() ;

/// @brief Method .ctor addr 0x269ad50 size 0x1b0 virtual false final false
 void _ctor() ;

/// @brief Method EnsureModifiability addr 0x269b780 size 0x60 virtual false final false
 void EnsureModifiability() ;

/// @brief Method get_CookieContainer addr 0x269b7e0 size 0x6c virtual true final true
 System::Net::CookieContainer get_CookieContainer() ;

/// @brief Method get_MaxRequestContentBufferSize addr 0x269b84c size 0x8 virtual true final true
 int64_t get_MaxRequestContentBufferSize() ;

/// @brief Method get_SslOptions addr 0x269b854 size 0x6c virtual true final true
 System::Net::Security::SslClientAuthenticationOptions get_SslOptions() ;

/// @brief Method set_SslOptions addr 0x269b8c0 size 0x24 virtual true final true
 void set_SslOptions(System::Net::Security::SslClientAuthenticationOptions value) ;

/// @brief Method Dispose addr 0x269b8e4 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x269b8f4 size 0x84 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method GetConnectionKeepAlive addr 0x269b978 size 0x110 virtual false final false
 bool GetConnectionKeepAlive(System::Net::Http::Headers::HttpRequestHeaders headers) ;

/// @brief Method CreateWebRequest addr 0x269baf0 size 0x7bc virtual true final false
 System::Net::HttpWebRequest CreateWebRequest(System::Net::Http::HttpRequestMessage request) ;

/// @brief Method CreateResponseMessage addr 0x269c794 size 0x1c8 virtual false final false
 System::Net::Http::HttpResponseMessage CreateResponseMessage(System::Net::HttpWebResponse wr, System::Net::Http::HttpRequestMessage requestMessage, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method MethodHasBody addr 0x269ccc4 size 0x10c virtual false final false
static bool MethodHasBody(System::Net::Http::HttpMethod method) ;

/// @brief Method SendAsync addr 0x269cdd0 size 0x114 virtual true final true
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsync(System::Net::Http::HttpRequestMessage request, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method System.Net.Http.IMonoHttpClientHandler.SetWebRequestTimeout addr 0x269cee4 size 0x70 virtual true final true
 void System_Net_Http_IMonoHttpClientHandler_SetWebRequestTimeout(System::TimeSpan timeout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::MonoWebRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::MonoWebRequestHandler, "System.Net.Http", "MonoWebRequestHandler");
NEED_NO_BOX(System::Net::Http::System__Net__Http__MonoWebRequestHandler____c);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::System__Net__Http__MonoWebRequestHandler____c, "System.Net.Http", "MonoWebRequestHandler/<>c");
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::System__Net__Http__MonoWebRequestHandler___SendAsync_d__99, "System.Net.Http", "MonoWebRequestHandler/<SendAsync>d__99");
