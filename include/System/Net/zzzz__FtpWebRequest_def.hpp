#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Net {
class ____System__Net__TimerThread__Queue;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class LazyAsyncResult;
}
namespace System::Net {
class FtpMethodInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Uri;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
struct CloseExState;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebResponse;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class ____System__Net__TimerThread__Callback;
}
namespace System::Net {
class ContextAwareResult;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class ____System__Net__TimerThread__Timer;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class NetworkCredential;
}
namespace System {
class Exception;
}
namespace System::Net {
class FtpControlStream;
}
namespace System::Net {
class FtpWebResponse;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct ____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Net::Sockets {
class TcpClient;
}
// Forward declare root types
namespace System::Net {
struct ____System__Net__FtpWebRequest__RequestStage;
}
namespace System::Net {
class FtpWebRequest;
}
namespace System::Net {
class ____System__Net__FtpWebRequest____c;
}
namespace System::Net {
struct ____System__Net__FtpWebRequest___CreateConnectionAsync_d__86;
}
// Type: ::RequestStage
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7898))
// CS Name: System.Net.FtpWebRequest::RequestStage
struct CORDL_TYPE ____System__Net__FtpWebRequest__RequestStage : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Net__FtpWebRequest__RequestStage(int32_t value__) noexcept;


                    constexpr ____System__Net__FtpWebRequest__RequestStage(____System__Net__FtpWebRequest__RequestStage const&) = default;
                    constexpr ____System__Net__FtpWebRequest__RequestStage(____System__Net__FtpWebRequest__RequestStage&&) = default;
                    constexpr ____System__Net__FtpWebRequest__RequestStage& operator=(____System__Net__FtpWebRequest__RequestStage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__FtpWebRequest__RequestStage& operator=(____System__Net__FtpWebRequest__RequestStage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__FtpWebRequest__RequestStage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Net__FtpWebRequest__RequestStage_Unwrapped : int32_t {
__CheckForError = 0,
__RequestStarted = 1,
__WriteReady = 2,
__ReadReady = 3,
__ReleaseConnection = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Net__FtpWebRequest__RequestStage_Unwrapped () const noexcept {
return std::bit_cast<______System__Net__FtpWebRequest__RequestStage_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CheckForError offset 0
static ::System::Net::____System__Net__FtpWebRequest__RequestStage const CheckForError;

/// @brief Field RequestStarted offset 0
static ::System::Net::____System__Net__FtpWebRequest__RequestStage const RequestStarted;

/// @brief Field WriteReady offset 0
static ::System::Net::____System__Net__FtpWebRequest__RequestStage const WriteReady;

/// @brief Field ReadReady offset 0
static ::System::Net::____System__Net__FtpWebRequest__RequestStage const ReadReady;

/// @brief Field ReleaseConnection offset 0
static ::System::Net::____System__Net__FtpWebRequest__RequestStage const ReleaseConnection;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<CreateConnectionAsync>d__86
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7899))
// CS Name: System.Net.FtpWebRequest::<CreateConnectionAsync>d__86
struct CORDL_TYPE ____System__Net__FtpWebRequest___CreateConnectionAsync_d__86 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::FtpWebRequest", modifiers: "", def_value: None }, CppParam { name: "_client_5__2", ty: "::System::Net::Sockets::TcpClient", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr ____System__Net__FtpWebRequest___CreateConnectionAsync_d__86(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Net::FtpWebRequest __4__this, ::System::Net::Sockets::TcpClient _client_5__2, ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr ____System__Net__FtpWebRequest___CreateConnectionAsync_d__86(____System__Net__FtpWebRequest___CreateConnectionAsync_d__86 const&) = default;
                    constexpr ____System__Net__FtpWebRequest___CreateConnectionAsync_d__86(____System__Net__FtpWebRequest___CreateConnectionAsync_d__86&&) = default;
                    constexpr ____System__Net__FtpWebRequest___CreateConnectionAsync_d__86& operator=(____System__Net__FtpWebRequest___CreateConnectionAsync_d__86 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__FtpWebRequest___CreateConnectionAsync_d__86& operator=(____System__Net__FtpWebRequest___CreateConnectionAsync_d__86&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__FtpWebRequest___CreateConnectionAsync_d__86(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 ::System::Net::FtpWebRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::FtpWebRequest value) ;

constexpr ::System::Net::FtpWebRequest __get___4__this() const;

 ::System::Net::Sockets::TcpClient __declspec(property(get=__get__client_5__2, put=__set__client_5__2))  _client_5__2;

constexpr void __set__client_5__2(::System::Net::Sockets::TcpClient value) ;

constexpr ::System::Net::Sockets::TcpClient __get__client_5__2() const;

 ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr ::System::Runtime::CompilerServices::____System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2809178 size 0x30c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2809484 size 0xc virtual true final true
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7900))
// CS Name: System.Net.FtpWebRequest::<>c
class CORDL_TYPE ____System__Net__FtpWebRequest____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Net__FtpWebRequest____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__FtpWebRequest____c", modifiers: " const&", def_value: None }]
constexpr ____System__Net__FtpWebRequest____c(____System__Net__FtpWebRequest____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__FtpWebRequest____c", modifiers: "&&", def_value: None }]
constexpr ____System__Net__FtpWebRequest____c(____System__Net__FtpWebRequest____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__FtpWebRequest____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__FtpWebRequest____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__FtpWebRequest____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__FtpWebRequest____c& operator=(____System__Net__FtpWebRequest____c&& o) noexcept = default;
  constexpr ____System__Net__FtpWebRequest____c& operator=(____System__Net__FtpWebRequest____c const& o) noexcept = default;
                


// Fields

static ::System::Net::____System__Net__FtpWebRequest____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::System::Net::____System__Net__FtpWebRequest____c value) ;

static ::System::Net::____System__Net__FtpWebRequest____c __get___9() ;

static ::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection> __declspec(property(get=__get___9__114_0, put=__set___9__114_0))  __9__114_0;

static void __set___9__114_0(::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection> value) ;

static ::System::Func_1<::System::Security::Cryptography::X509Certificates::X509CertificateCollection> __get___9__114_0() ;


// Methods

// Ctor Parameters []
explicit ____System__Net__FtpWebRequest____c() ;

/// @brief Method .ctor addr 0x28094f4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_ClientCertificates>b__114_0 addr 0x28094fc size 0x5c virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection _get_ClientCertificates_b__114_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::FtpWebRequest
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7901))
// CS Name: System.Net.FtpWebRequest
class CORDL_TYPE FtpWebRequest : public ::System::Net::WebRequest {
public:
// Declarations
using __c = ::System::Net::____System__Net__FtpWebRequest____c;

using _CreateConnectionAsync_d__86 = ::System::Net::____System__Net__FtpWebRequest___CreateConnectionAsync_d__86;

using RequestStage = ::System::Net::____System__Net__FtpWebRequest__RequestStage;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x110};

virtual ~FtpWebRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest", modifiers: " const&", def_value: None }]
constexpr FtpWebRequest(FtpWebRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FtpWebRequest", modifiers: "&&", def_value: None }]
constexpr FtpWebRequest(FtpWebRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FtpWebRequest(void* ptr) noexcept : ::System::Net::WebRequest(ptr) {
}


  constexpr FtpWebRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FtpWebRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FtpWebRequest& operator=(FtpWebRequest&& o) noexcept = default;
  constexpr FtpWebRequest& operator=(FtpWebRequest const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__syncObject, put=__set__syncObject))  _syncObject;

constexpr void __set__syncObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__syncObject() const;

 ::System::Net::ICredentials __declspec(property(get=__get__authInfo, put=__set__authInfo))  _authInfo;

constexpr void __set__authInfo(::System::Net::ICredentials value) ;

constexpr ::System::Net::ICredentials __get__authInfo() const;

 ::System::Uri __declspec(property(get=__get__uri, put=__set__uri))  _uri;

constexpr void __set__uri(::System::Uri value) ;

constexpr ::System::Uri __get__uri() const;

 ::System::Net::FtpMethodInfo __declspec(property(get=__get__methodInfo, put=__set__methodInfo))  _methodInfo;

constexpr void __set__methodInfo(::System::Net::FtpMethodInfo value) ;

constexpr ::System::Net::FtpMethodInfo __get__methodInfo() const;

 ::StringW __declspec(property(get=__get__renameTo, put=__set__renameTo))  _renameTo;

constexpr void __set__renameTo(::StringW value) ;

constexpr ::StringW __get__renameTo() const;

 bool __declspec(property(get=__get__getRequestStreamStarted, put=__set__getRequestStreamStarted))  _getRequestStreamStarted;

constexpr void __set__getRequestStreamStarted(bool value) ;

constexpr bool __get__getRequestStreamStarted() const;

 bool __declspec(property(get=__get__getResponseStarted, put=__set__getResponseStarted))  _getResponseStarted;

constexpr void __set__getResponseStarted(bool value) ;

constexpr bool __get__getResponseStarted() const;

 ::System::DateTime __declspec(property(get=__get__startTime, put=__set__startTime))  _startTime;

constexpr void __set__startTime(::System::DateTime value) ;

constexpr ::System::DateTime __get__startTime() const;

 int32_t __declspec(property(get=__get__timeout, put=__set__timeout))  _timeout;

constexpr void __set__timeout(int32_t value) ;

constexpr int32_t __get__timeout() const;

 int32_t __declspec(property(get=__get__remainingTimeout, put=__set__remainingTimeout))  _remainingTimeout;

constexpr void __set__remainingTimeout(int32_t value) ;

constexpr int32_t __get__remainingTimeout() const;

 int64_t __declspec(property(get=__get__contentLength, put=__set__contentLength))  _contentLength;

constexpr void __set__contentLength(int64_t value) ;

constexpr int64_t __get__contentLength() const;

 int64_t __declspec(property(get=__get__contentOffset, put=__set__contentOffset))  _contentOffset;

constexpr void __set__contentOffset(int64_t value) ;

constexpr int64_t __get__contentOffset() const;

 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=__get__clientCertificates, put=__set__clientCertificates))  _clientCertificates;

constexpr void __set__clientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection __get__clientCertificates() const;

 bool __declspec(property(get=__get__passive, put=__set__passive))  _passive;

constexpr void __set__passive(bool value) ;

constexpr bool __get__passive() const;

 bool __declspec(property(get=__get__binary, put=__set__binary))  _binary;

constexpr void __set__binary(bool value) ;

constexpr bool __get__binary() const;

 ::StringW __declspec(property(get=__get__connectionGroupName, put=__set__connectionGroupName))  _connectionGroupName;

constexpr void __set__connectionGroupName(::StringW value) ;

constexpr ::StringW __get__connectionGroupName() const;

 bool __declspec(property(get=__get__async, put=__set__async))  _async;

constexpr void __set__async(bool value) ;

constexpr bool __get__async() const;

 bool __declspec(property(get=__get__aborted, put=__set__aborted))  _aborted;

constexpr void __set__aborted(bool value) ;

constexpr bool __get__aborted() const;

 bool __declspec(property(get=__get__timedOut, put=__set__timedOut))  _timedOut;

constexpr void __set__timedOut(bool value) ;

constexpr bool __get__timedOut() const;

 ::System::Exception __declspec(property(get=__get__exception, put=__set__exception))  _exception;

constexpr void __set__exception(::System::Exception value) ;

constexpr ::System::Exception __get__exception() const;

 ::System::Net::____System__Net__TimerThread__Queue __declspec(property(get=__get__timerQueue, put=__set__timerQueue))  _timerQueue;

constexpr void __set__timerQueue(::System::Net::____System__Net__TimerThread__Queue value) ;

constexpr ::System::Net::____System__Net__TimerThread__Queue __get__timerQueue() const;

 ::System::Net::____System__Net__TimerThread__Callback __declspec(property(get=__get__timerCallback, put=__set__timerCallback))  _timerCallback;

constexpr void __set__timerCallback(::System::Net::____System__Net__TimerThread__Callback value) ;

constexpr ::System::Net::____System__Net__TimerThread__Callback __get__timerCallback() const;

 bool __declspec(property(get=__get__enableSsl, put=__set__enableSsl))  _enableSsl;

constexpr void __set__enableSsl(bool value) ;

constexpr bool __get__enableSsl() const;

 ::System::Net::FtpControlStream __declspec(property(get=__get__connection, put=__set__connection))  _connection;

constexpr void __set__connection(::System::Net::FtpControlStream value) ;

constexpr ::System::Net::FtpControlStream __get__connection() const;

 ::System::IO::Stream __declspec(property(get=__get__stream, put=__set__stream))  _stream;

constexpr void __set__stream(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get__stream() const;

 ::System::Net::____System__Net__FtpWebRequest__RequestStage __declspec(property(get=__get__requestStage, put=__set__requestStage))  _requestStage;

constexpr void __set__requestStage(::System::Net::____System__Net__FtpWebRequest__RequestStage value) ;

constexpr ::System::Net::____System__Net__FtpWebRequest__RequestStage __get__requestStage() const;

 bool __declspec(property(get=__get__onceFailed, put=__set__onceFailed))  _onceFailed;

constexpr void __set__onceFailed(bool value) ;

constexpr bool __get__onceFailed() const;

 ::System::Net::WebHeaderCollection __declspec(property(get=__get__ftpRequestHeaders, put=__set__ftpRequestHeaders))  _ftpRequestHeaders;

constexpr void __set__ftpRequestHeaders(::System::Net::WebHeaderCollection value) ;

constexpr ::System::Net::WebHeaderCollection __get__ftpRequestHeaders() const;

 ::System::Net::FtpWebResponse __declspec(property(get=__get__ftpWebResponse, put=__set__ftpWebResponse))  _ftpWebResponse;

constexpr void __set__ftpWebResponse(::System::Net::FtpWebResponse value) ;

constexpr ::System::Net::FtpWebResponse __get__ftpWebResponse() const;

 int32_t __declspec(property(get=__get__readWriteTimeout, put=__set__readWriteTimeout))  _readWriteTimeout;

constexpr void __set__readWriteTimeout(int32_t value) ;

constexpr int32_t __get__readWriteTimeout() const;

 ::System::Net::ContextAwareResult __declspec(property(get=__get__writeAsyncResult, put=__set__writeAsyncResult))  _writeAsyncResult;

constexpr void __set__writeAsyncResult(::System::Net::ContextAwareResult value) ;

constexpr ::System::Net::ContextAwareResult __get__writeAsyncResult() const;

 ::System::Net::LazyAsyncResult __declspec(property(get=__get__readAsyncResult, put=__set__readAsyncResult))  _readAsyncResult;

constexpr void __set__readAsyncResult(::System::Net::LazyAsyncResult value) ;

constexpr ::System::Net::LazyAsyncResult __get__readAsyncResult() const;

 ::System::Net::LazyAsyncResult __declspec(property(get=__get__requestCompleteAsyncResult, put=__set__requestCompleteAsyncResult))  _requestCompleteAsyncResult;

constexpr void __set__requestCompleteAsyncResult(::System::Net::LazyAsyncResult value) ;

constexpr ::System::Net::LazyAsyncResult __get__requestCompleteAsyncResult() const;

static ::System::Net::NetworkCredential __declspec(property(get=__get_s_defaultFtpNetworkCredential, put=__set_s_defaultFtpNetworkCredential))  s_defaultFtpNetworkCredential;

static void __set_s_defaultFtpNetworkCredential(::System::Net::NetworkCredential value) ;

static ::System::Net::NetworkCredential __get_s_defaultFtpNetworkCredential() ;

static ::System::Net::____System__Net__TimerThread__Queue __declspec(property(get=__get_s_DefaultTimerQueue, put=__set_s_DefaultTimerQueue))  s_DefaultTimerQueue;

static void __set_s_DefaultTimerQueue(::System::Net::____System__Net__TimerThread__Queue value) ;

static ::System::Net::____System__Net__TimerThread__Queue __get_s_DefaultTimerQueue() ;


// Properties

 ::System::Net::FtpMethodInfo __declspec(property(get=get_MethodInfo))  MethodInfo;

 ::StringW __declspec(property(get=get_Method, put=set_Method))  Method;

 ::StringW __declspec(property(get=get_RenameTo))  RenameTo;

 ::System::Net::ICredentials __declspec(property(get=get_Credentials, put=set_Credentials))  Credentials;

 ::System::Uri __declspec(property(get=get_RequestUri))  RequestUri;

 int32_t __declspec(property(get=get_Timeout, put=set_Timeout))  Timeout;

 int32_t __declspec(property(get=get_RemainingTimeout))  RemainingTimeout;

 int32_t __declspec(property(get=get_ReadWriteTimeout))  ReadWriteTimeout;

 int64_t __declspec(property(get=get_ContentOffset))  ContentOffset;

 int64_t __declspec(property(get=get_ContentLength, put=set_ContentLength))  ContentLength;

 ::System::Net::IWebProxy __declspec(property(get=get_Proxy, put=set_Proxy))  Proxy;

 ::StringW __declspec(property(put=set_ConnectionGroupName))  ConnectionGroupName;

 bool __declspec(property(get=get_Aborted))  Aborted;

 ::System::Net::____System__Net__TimerThread__Queue __declspec(property(get=get_TimerQueue))  TimerQueue;

 ::System::Net::Cache::RequestCachePolicy __declspec(property(put=set_CachePolicy))  CachePolicy;

 bool __declspec(property(get=get_UseBinary))  UseBinary;

 bool __declspec(property(get=get_UsePassive))  UsePassive;

 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=get_ClientCertificates))  ClientCertificates;

 bool __declspec(property(get=get_EnableSsl))  EnableSsl;

 ::System::Net::WebHeaderCollection __declspec(property(get=get_Headers))  Headers;

 bool __declspec(property(get=get_UseDefaultCredentials))  UseDefaultCredentials;

 bool __declspec(property(put=set_PreAuthenticate))  PreAuthenticate;

 bool __declspec(property(get=get_InUse))  InUse;


// Methods

/// @brief Method get_MethodInfo addr 0x2803848 size 0x8 virtual false final false
 ::System::Net::FtpMethodInfo get_MethodInfo() ;

/// @brief Method get_Method addr 0x2803850 size 0x1c virtual true final false
 ::StringW get_Method() ;

/// @brief Method set_Method addr 0x280386c size 0x1ac virtual true final false
 void set_Method(::StringW value) ;

/// @brief Method get_RenameTo addr 0x2803a30 size 0x8 virtual false final false
 ::StringW get_RenameTo() ;

/// @brief Method get_Credentials addr 0x2803a38 size 0x8 virtual true final false
 ::System::Net::ICredentials get_Credentials() ;

/// @brief Method set_Credentials addr 0x2803a40 size 0x150 virtual true final false
 void set_Credentials(::System::Net::ICredentials value) ;

/// @brief Method get_RequestUri addr 0x2803b90 size 0x8 virtual true final false
 ::System::Uri get_RequestUri() ;

/// @brief Method get_Timeout addr 0x2803b98 size 0x8 virtual true final false
 int32_t get_Timeout() ;

/// @brief Method set_Timeout addr 0x2803ba0 size 0xd8 virtual true final false
 void set_Timeout(int32_t value) ;

/// @brief Method get_RemainingTimeout addr 0x2803c78 size 0x8 virtual false final false
 int32_t get_RemainingTimeout() ;

/// @brief Method get_ReadWriteTimeout addr 0x2803c80 size 0x8 virtual false final false
 int32_t get_ReadWriteTimeout() ;

/// @brief Method get_ContentOffset addr 0x2803c88 size 0x8 virtual false final false
 int64_t get_ContentOffset() ;

/// @brief Method get_ContentLength addr 0x2803c90 size 0x8 virtual true final false
 int64_t get_ContentLength() ;

/// @brief Method set_ContentLength addr 0x2803c98 size 0x8 virtual true final false
 void set_ContentLength(int64_t value) ;

/// @brief Method get_Proxy addr 0x2803ca0 size 0x8 virtual true final false
 ::System::Net::IWebProxy get_Proxy() ;

/// @brief Method set_Proxy addr 0x2803ca8 size 0x68 virtual true final false
 void set_Proxy(::System::Net::IWebProxy value) ;

/// @brief Method set_ConnectionGroupName addr 0x2803d10 size 0x6c virtual true final false
 void set_ConnectionGroupName(::StringW value) ;

/// @brief Method get_Aborted addr 0x2803d7c size 0x8 virtual false final false
 bool get_Aborted() ;

// Ctor Parameters [CppParam { name: "uri", ty: "::System::Uri", modifiers: "", def_value: None }]
explicit FtpWebRequest(::System::Uri uri) ;

/// @brief Method .ctor addr 0x2803d84 size 0x3c0 virtual false final false
 void _ctor(::System::Uri uri) ;

/// @brief Method GetResponse addr 0x2804144 size 0x7ac virtual true final false
 ::System::Net::WebResponse GetResponse() ;

/// @brief Method BeginGetResponse addr 0x2805a58 size 0x6c0 virtual true final false
 ::System::IAsyncResult BeginGetResponse(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndGetResponse addr 0x2806118 size 0x40c virtual true final false
 ::System::Net::WebResponse EndGetResponse(::System::IAsyncResult asyncResult) ;

/// @brief Method BeginGetRequestStream addr 0x2806524 size 0x53c virtual true final false
 ::System::IAsyncResult BeginGetRequestStream(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndGetRequestStream addr 0x2806a60 size 0x470 virtual true final false
 ::System::IO::Stream EndGetRequestStream(::System::IAsyncResult asyncResult) ;

/// @brief Method SubmitRequest addr 0x2804d38 size 0x4ec virtual false final false
 void SubmitRequest(bool isAsync) ;

/// @brief Method TranslateConnectException addr 0x28077c0 size 0x104 virtual false final false
 ::System::Exception TranslateConnectException(::System::Exception e) ;

/// @brief Method CreateConnectionAsync addr 0x2806ed0 size 0x94 virtual false final false
 void CreateConnectionAsync() ;

/// @brief Method CreateConnection addr 0x2806f64 size 0x164 virtual false final false
 ::System::Net::FtpControlStream CreateConnection() ;

/// @brief Method TimedSubmitRequestHelper addr 0x2807118 size 0x428 virtual false final false
 ::System::IO::Stream TimedSubmitRequestHelper(bool isAsync) ;

/// @brief Method TimerCallback addr 0x2807930 size 0xfc virtual false final false
 void TimerCallback(::System::Net::____System__Net__TimerThread__Timer timer, int32_t timeNoticed, ::bs_hook::Il2CppWrapperType context) ;

/// @brief Method get_TimerQueue addr 0x28078c4 size 0x6c virtual false final false
 ::System::Net::____System__Net__TimerThread__Queue get_TimerQueue() ;

/// @brief Method AttemptedRecovery addr 0x2807540 size 0x280 virtual false final false
 bool AttemptedRecovery(::System::Exception e) ;

/// @brief Method SetException addr 0x2805714 size 0x344 virtual false final false
 void SetException(::System::Exception exception) ;

/// @brief Method CheckError addr 0x28048f0 size 0x14 virtual false final false
 void CheckError() ;

/// @brief Method RequestCallback addr 0x27fb988 size 0x10 virtual false final false
 void RequestCallback(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method SyncRequestCallback addr 0x280849c size 0x3d0 virtual false final false
 void SyncRequestCallback(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method AsyncRequestCallback addr 0x2807a3c size 0xa60 virtual false final false
 void AsyncRequestCallback(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FinishRequestStage addr 0x2804904 size 0x434 virtual false final false
 ::System::Net::____System__Net__FtpWebRequest__RequestStage FinishRequestStage(::System::Net::____System__Net__FtpWebRequest__RequestStage stage) ;

/// @brief Method Abort addr 0x280886c size 0x48c virtual true final false
 void Abort() ;

/// @brief Method set_CachePolicy addr 0x2808cf8 size 0x68 virtual true final false
 void set_CachePolicy(::System::Net::Cache::RequestCachePolicy value) ;

/// @brief Method get_UseBinary addr 0x2808d60 size 0x8 virtual false final false
 bool get_UseBinary() ;

/// @brief Method get_UsePassive addr 0x2808d68 size 0x8 virtual false final false
 bool get_UsePassive() ;

/// @brief Method get_ClientCertificates addr 0x27fe464 size 0xfc virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection get_ClientCertificates() ;

/// @brief Method get_EnableSsl addr 0x2808d70 size 0x8 virtual false final false
 bool get_EnableSsl() ;

/// @brief Method get_Headers addr 0x2808d78 size 0x6c virtual true final false
 ::System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method get_UseDefaultCredentials addr 0x2808de4 size 0x28 virtual true final false
 bool get_UseDefaultCredentials() ;

/// @brief Method set_PreAuthenticate addr 0x2808e0c size 0x28 virtual true final false
 void set_PreAuthenticate(bool value) ;

/// @brief Method get_InUse addr 0x2803a18 size 0x18 virtual false final false
 bool get_InUse() ;

/// @brief Method EnsureFtpWebResponse addr 0x2805224 size 0x4f0 virtual false final false
 void EnsureFtpWebResponse(::System::Exception exception) ;

/// @brief Method DataStreamClosed addr 0x2808fe4 size 0x80 virtual false final false
 void DataStreamClosed(::System::Net::CloseExState closeState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__FtpWebRequest__RequestStage, "System.Net", "FtpWebRequest/RequestStage");
NEED_NO_BOX(::System::Net::FtpWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpWebRequest, "System.Net", "FtpWebRequest");
NEED_NO_BOX(::System::Net::____System__Net__FtpWebRequest____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__FtpWebRequest____c, "System.Net", "FtpWebRequest/<>c");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__FtpWebRequest___CreateConnectionAsync_d__86, "System.Net", "FtpWebRequest/<CreateConnectionAsync>d__86");
