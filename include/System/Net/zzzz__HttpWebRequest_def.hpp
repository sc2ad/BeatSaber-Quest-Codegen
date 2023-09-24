#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
struct System__Net__HttpWebRequest__NtlmAuthState;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Net {
struct DecompressionMethods;
}
namespace System::Net {
template<typename T>
struct System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1;
}
namespace System::Net {
class WebResponse;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class HttpContinueDelegate;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace System::Net {
struct System__Net__HttpWebRequest__AuthorizationState;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Version;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Uri;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
struct System__Net__HttpWebRequest___MyGetResponseAsync_d__243;
}
namespace System::Net {
struct System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System {
class Exception;
}
namespace System::Net {
class WebOperation;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::IO {
class Stream;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class WebException;
}
namespace System {
class Action;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
template<typename T>
class System__Net__HttpWebRequest____c__241_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace System::Net {
class HttpWebResponse;
}
namespace System::Net {
struct System__Net__HttpWebRequest___GetResponseFromData_d__244;
}
namespace System::Net {
class WebResponseStream;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net {
class CookieContainer;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace System::Net {
template<typename T>
class System__Net__HttpWebRequest____c__241_1;
}
namespace System::Net {
struct System__Net__HttpWebRequest__NtlmAuthState;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Net {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class System__Net__HttpWebRequest____c__241_1<T>;
}
namespace System::Net {
template<::cordl_internals::il2cpp_reference_type T>
class System__Net__HttpWebRequest____c__241_1<T>;
}
namespace System::Net {
template<typename T>
struct System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1;
}
namespace System::Net {
struct System__Net__HttpWebRequest__AuthorizationState;
}
namespace System::Net {
struct System__Net__HttpWebRequest___GetResponseFromData_d__244;
}
namespace System::Net {
struct System__Net__HttpWebRequest___MyGetResponseAsync_d__243;
}
namespace System::Net {
template<::cordl_internals::il2cpp_reference_type T>
struct System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<T>;
}
namespace System::Net {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<T>;
}
namespace System::Net {
struct System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d;
}
// Type: ::NtlmAuthState
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8030))
// CS Name: System.Net.HttpWebRequest::NtlmAuthState
struct CORDL_TYPE System__Net__HttpWebRequest__NtlmAuthState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__HttpWebRequest__NtlmAuthState(int32_t value__) noexcept;


                    constexpr System__Net__HttpWebRequest__NtlmAuthState(System__Net__HttpWebRequest__NtlmAuthState const&) = default;
                    constexpr System__Net__HttpWebRequest__NtlmAuthState(System__Net__HttpWebRequest__NtlmAuthState&&) = default;
                    constexpr System__Net__HttpWebRequest__NtlmAuthState& operator=(System__Net__HttpWebRequest__NtlmAuthState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpWebRequest__NtlmAuthState& operator=(System__Net__HttpWebRequest__NtlmAuthState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpWebRequest__NtlmAuthState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__HttpWebRequest__NtlmAuthState_Unwrapped : int32_t {
__None = 0,
__Challenge = 1,
__Response = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__HttpWebRequest__NtlmAuthState_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__HttpWebRequest__NtlmAuthState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Net::System__Net__HttpWebRequest__NtlmAuthState const None;

/// @brief Field Challenge offset 0
static System::Net::System__Net__HttpWebRequest__NtlmAuthState const Challenge;

/// @brief Field Response offset 0
static System::Net::System__Net__HttpWebRequest__NtlmAuthState const Response;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::AuthorizationState
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8031))
// CS Name: System.Net.HttpWebRequest::AuthorizationState
struct CORDL_TYPE System__Net__HttpWebRequest__AuthorizationState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "request", ty: "System::Net::HttpWebRequest", modifiers: "", def_value: None }, CppParam { name: "isProxy", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isCompleted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ntlm_auth_state", ty: "System::Net::System__Net__HttpWebRequest__NtlmAuthState", modifiers: "", def_value: None }]
constexpr System__Net__HttpWebRequest__AuthorizationState(System::Net::HttpWebRequest request, bool isProxy, bool isCompleted, System::Net::System__Net__HttpWebRequest__NtlmAuthState ntlm_auth_state) noexcept;


                    constexpr System__Net__HttpWebRequest__AuthorizationState(System__Net__HttpWebRequest__AuthorizationState const&) = default;
                    constexpr System__Net__HttpWebRequest__AuthorizationState(System__Net__HttpWebRequest__AuthorizationState&&) = default;
                    constexpr System__Net__HttpWebRequest__AuthorizationState& operator=(System__Net__HttpWebRequest__AuthorizationState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpWebRequest__AuthorizationState& operator=(System__Net__HttpWebRequest__AuthorizationState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpWebRequest__AuthorizationState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Net::HttpWebRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(System::Net::HttpWebRequest value) ;

constexpr System::Net::HttpWebRequest __get_request() const;

 bool __declspec(property(get=__get_isProxy, put=__set_isProxy))  isProxy;

constexpr void __set_isProxy(bool value) ;

constexpr bool __get_isProxy() const;

 bool __declspec(property(get=__get_isCompleted, put=__set_isCompleted))  isCompleted;

constexpr void __set_isCompleted(bool value) ;

constexpr bool __get_isCompleted() const;

 System::Net::System__Net__HttpWebRequest__NtlmAuthState __declspec(property(get=__get_ntlm_auth_state, put=__set_ntlm_auth_state))  ntlm_auth_state;

constexpr void __set_ntlm_auth_state(System::Net::System__Net__HttpWebRequest__NtlmAuthState value) ;

constexpr System::Net::System__Net__HttpWebRequest__NtlmAuthState __get_ntlm_auth_state() const;


// Properties

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;

 System::Net::System__Net__HttpWebRequest__NtlmAuthState __declspec(property(get=get_NtlmAuthState))  NtlmAuthState;

 bool __declspec(property(get=get_IsNtlmAuthenticated))  IsNtlmAuthenticated;


// Methods

/// @brief Method get_IsCompleted addr 0x283d764 size 0x8 virtual false final false
 bool get_IsCompleted() ;

/// @brief Method get_NtlmAuthState addr 0x283d76c size 0x8 virtual false final false
 System::Net::System__Net__HttpWebRequest__NtlmAuthState get_NtlmAuthState() ;

/// @brief Method get_IsNtlmAuthenticated addr 0x283d774 size 0x20 virtual false final false
 bool get_IsNtlmAuthenticated() ;

/// @brief Method .ctor addr 0x28396f4 size 0x18 virtual false final false
 void _ctor(System::Net::HttpWebRequest request, bool isProxy) ;

/// @brief Method CheckAuthorization addr 0x283cc2c size 0x318 virtual false final false
 bool CheckAuthorization(System::Net::WebResponse response, System::Net::HttpStatusCode code) ;

/// @brief Method Reset addr 0x283d5bc size 0x84 virtual false final false
 void Reset() ;

/// @brief Method ToString addr 0x283d794 size 0x100 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c__241`1
// Type: ::<RunWithTimeoutWorker>d__241`1
// Type: ::<MyGetResponseAsync>d__243
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8034))
// CS Name: System.Net.HttpWebRequest::<MyGetResponseAsync>d__243
struct CORDL_TYPE System__Net__HttpWebRequest___MyGetResponseAsync_d__243 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::HttpWebResponse>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::HttpWebRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_completion_5__2", ty: "System::Net::WebCompletionSource", modifiers: "", def_value: None }, CppParam { name: "_operation_5__3", ty: "System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "_throwMe_5__4", ty: "System::Net::WebException", modifiers: "", def_value: None }, CppParam { name: "_response_5__5", ty: "System::Net::HttpWebResponse", modifiers: "", def_value: None }, CppParam { name: "_stream_5__6", ty: "System::Net::WebResponseStream", modifiers: "", def_value: None }, CppParam { name: "_redirect_5__7", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_mustReadAll_5__8", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ntlm_5__9", ty: "System::Net::WebOperation", modifiers: "", def_value: None }, CppParam { name: "_writeBuffer_5__10", ty: "System::Net::BufferOffsetSize", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::WebResponseStream>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>>", modifiers: "", def_value: None }]
constexpr System__Net__HttpWebRequest___MyGetResponseAsync_d__243(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::HttpWebResponse> __t__builder, System::Net::HttpWebRequest __4__this, System::Threading::CancellationToken cancellationToken, System::Net::WebCompletionSource _completion_5__2, System::Net::WebOperation _operation_5__3, System::Net::WebException _throwMe_5__4, System::Net::HttpWebResponse _response_5__5, System::Net::WebResponseStream _stream_5__6, bool _redirect_5__7, bool _mustReadAll_5__8, System::Net::WebOperation _ntlm_5__9, System::Net::BufferOffsetSize _writeBuffer_5__10, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::WebResponseStream> __u__3, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>> __u__4) noexcept;


                    constexpr System__Net__HttpWebRequest___MyGetResponseAsync_d__243(System__Net__HttpWebRequest___MyGetResponseAsync_d__243 const&) = default;
                    constexpr System__Net__HttpWebRequest___MyGetResponseAsync_d__243(System__Net__HttpWebRequest___MyGetResponseAsync_d__243&&) = default;
                    constexpr System__Net__HttpWebRequest___MyGetResponseAsync_d__243& operator=(System__Net__HttpWebRequest___MyGetResponseAsync_d__243 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpWebRequest___MyGetResponseAsync_d__243& operator=(System__Net__HttpWebRequest___MyGetResponseAsync_d__243&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xa8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpWebRequest___MyGetResponseAsync_d__243(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::HttpWebResponse> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::HttpWebResponse> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::HttpWebResponse> __get___t__builder() const;

 System::Net::HttpWebRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::HttpWebRequest value) ;

constexpr System::Net::HttpWebRequest __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::WebCompletionSource __declspec(property(get=__get__completion_5__2, put=__set__completion_5__2))  _completion_5__2;

constexpr void __set__completion_5__2(System::Net::WebCompletionSource value) ;

constexpr System::Net::WebCompletionSource __get__completion_5__2() const;

 System::Net::WebOperation __declspec(property(get=__get__operation_5__3, put=__set__operation_5__3))  _operation_5__3;

constexpr void __set__operation_5__3(System::Net::WebOperation value) ;

constexpr System::Net::WebOperation __get__operation_5__3() const;

 System::Net::WebException __declspec(property(get=__get__throwMe_5__4, put=__set__throwMe_5__4))  _throwMe_5__4;

constexpr void __set__throwMe_5__4(System::Net::WebException value) ;

constexpr System::Net::WebException __get__throwMe_5__4() const;

 System::Net::HttpWebResponse __declspec(property(get=__get__response_5__5, put=__set__response_5__5))  _response_5__5;

constexpr void __set__response_5__5(System::Net::HttpWebResponse value) ;

constexpr System::Net::HttpWebResponse __get__response_5__5() const;

 System::Net::WebResponseStream __declspec(property(get=__get__stream_5__6, put=__set__stream_5__6))  _stream_5__6;

constexpr void __set__stream_5__6(System::Net::WebResponseStream value) ;

constexpr System::Net::WebResponseStream __get__stream_5__6() const;

 bool __declspec(property(get=__get__redirect_5__7, put=__set__redirect_5__7))  _redirect_5__7;

constexpr void __set__redirect_5__7(bool value) ;

constexpr bool __get__redirect_5__7() const;

 bool __declspec(property(get=__get__mustReadAll_5__8, put=__set__mustReadAll_5__8))  _mustReadAll_5__8;

constexpr void __set__mustReadAll_5__8(bool value) ;

constexpr bool __get__mustReadAll_5__8() const;

 System::Net::WebOperation __declspec(property(get=__get__ntlm_5__9, put=__set__ntlm_5__9))  _ntlm_5__9;

constexpr void __set__ntlm_5__9(System::Net::WebOperation value) ;

constexpr System::Net::WebOperation __get__ntlm_5__9() const;

 System::Net::BufferOffsetSize __declspec(property(get=__get__writeBuffer_5__10, put=__set__writeBuffer_5__10))  _writeBuffer_5__10;

constexpr void __set__writeBuffer_5__10(System::Net::BufferOffsetSize value) ;

constexpr System::Net::BufferOffsetSize __get__writeBuffer_5__10() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebRequestStream> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::WebResponseStream> __declspec(property(get=__get___u__3, put=__set___u__3))  __u__3;

constexpr void __set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::WebResponseStream> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::WebResponseStream> __get___u__3() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>> __declspec(property(get=__get___u__4, put=__set___u__4))  __u__4;

constexpr void __set___u__4(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>> __get___u__4() const;


// Methods

/// @brief Method MoveNext addr 0x283d894 size 0xdf4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x283e688 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<GetResponseFromData>d__244
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8035))
// CS Name: System.Net.HttpWebRequest::<GetResponseFromData>d__244
struct CORDL_TYPE System__Net__HttpWebRequest___GetResponseFromData_d__244 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::HttpWebRequest", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "System::Net::WebResponseStream", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_response_5__2", ty: "System::Net::HttpWebResponse", modifiers: "", def_value: None }, CppParam { name: "_throwMe_5__3", ty: "System::Net::WebException", modifiers: "", def_value: None }, CppParam { name: "_redirect_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_mustReadAll_5__5", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::BufferOffsetSize>", modifiers: "", def_value: None }]
constexpr System__Net__HttpWebRequest___GetResponseFromData_d__244(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>> __t__builder, System::Net::HttpWebRequest __4__this, System::Net::WebResponseStream stream, System::Threading::CancellationToken cancellationToken, System::Net::HttpWebResponse _response_5__2, System::Net::WebException _throwMe_5__3, bool _redirect_5__4, bool _mustReadAll_5__5, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::BufferOffsetSize> __u__2) noexcept;


                    constexpr System__Net__HttpWebRequest___GetResponseFromData_d__244(System__Net__HttpWebRequest___GetResponseFromData_d__244 const&) = default;
                    constexpr System__Net__HttpWebRequest___GetResponseFromData_d__244(System__Net__HttpWebRequest___GetResponseFromData_d__244&&) = default;
                    constexpr System__Net__HttpWebRequest___GetResponseFromData_d__244& operator=(System__Net__HttpWebRequest___GetResponseFromData_d__244 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpWebRequest___GetResponseFromData_d__244& operator=(System__Net__HttpWebRequest___GetResponseFromData_d__244&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpWebRequest___GetResponseFromData_d__244(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>> __get___t__builder() const;

 System::Net::HttpWebRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::HttpWebRequest value) ;

constexpr System::Net::HttpWebRequest __get___4__this() const;

 System::Net::WebResponseStream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::Net::WebResponseStream value) ;

constexpr System::Net::WebResponseStream __get_stream() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::HttpWebResponse __declspec(property(get=__get__response_5__2, put=__set__response_5__2))  _response_5__2;

constexpr void __set__response_5__2(System::Net::HttpWebResponse value) ;

constexpr System::Net::HttpWebResponse __get__response_5__2() const;

 System::Net::WebException __declspec(property(get=__get__throwMe_5__3, put=__set__throwMe_5__3))  _throwMe_5__3;

constexpr void __set__throwMe_5__3(System::Net::WebException value) ;

constexpr System::Net::WebException __get__throwMe_5__3() const;

 bool __declspec(property(get=__get__redirect_5__4, put=__set__redirect_5__4))  _redirect_5__4;

constexpr void __set__redirect_5__4(bool value) ;

constexpr bool __get__redirect_5__4() const;

 bool __declspec(property(get=__get__mustReadAll_5__5, put=__set__mustReadAll_5__5))  _mustReadAll_5__5;

constexpr void __set__mustReadAll_5__5(bool value) ;

constexpr bool __get__mustReadAll_5__5() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::BufferOffsetSize> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::BufferOffsetSize> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::BufferOffsetSize> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x283e6e0 size 0x76c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x283f140 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<<GetRewriteHandler>b__271_0>d
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8036))
// CS Name: System.Net.HttpWebRequest::<<GetRewriteHandler>b__271_0>d
struct CORDL_TYPE System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::BufferOffsetSize>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::HttpWebRequest", modifiers: "", def_value: None }, CppParam { name: "_ms_5__2", ty: "System::IO::MemoryStream", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::BufferOffsetSize> __t__builder, System::Net::HttpWebRequest __4__this, System::IO::MemoryStream _ms_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;


                    constexpr System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d(System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d const&) = default;
                    constexpr System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d(System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d&&) = default;
                    constexpr System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d& operator=(System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d& operator=(System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::BufferOffsetSize> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::BufferOffsetSize> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::BufferOffsetSize> __get___t__builder() const;

 System::Net::HttpWebRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::HttpWebRequest value) ;

constexpr System::Net::HttpWebRequest __get___4__this() const;

 System::IO::MemoryStream __declspec(property(get=__get__ms_5__2, put=__set__ms_5__2))  _ms_5__2;

constexpr void __set__ms_5__2(System::IO::MemoryStream value) ;

constexpr System::IO::MemoryStream __get__ms_5__2() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x283f198 size 0x418 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x283f5b0 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::HttpWebRequest
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8037))
// CS Name: System.Net.HttpWebRequest
class CORDL_TYPE HttpWebRequest : public System::Net::WebRequest {
public:
// Declarations
using __GetRewriteHandler_b__271_0_d = System::Net::System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d;

using _GetResponseFromData_d__244 = System::Net::System__Net__HttpWebRequest___GetResponseFromData_d__244;

using _MyGetResponseAsync_d__243 = System::Net::System__Net__HttpWebRequest___MyGetResponseAsync_d__243;

template<typename T>
using _RunWithTimeoutWorker_d__241_1 = System::Net::System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<T>;

template<typename T>
using __c__241_1 = System::Net::System__Net__HttpWebRequest____c__241_1<T>;

using AuthorizationState = System::Net::System__Net__HttpWebRequest__AuthorizationState;

using NtlmAuthState = System::Net::System__Net__HttpWebRequest__NtlmAuthState;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x198};

virtual ~HttpWebRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest", modifiers: " const&", def_value: None }]
constexpr HttpWebRequest(HttpWebRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpWebRequest", modifiers: "&&", def_value: None }]
constexpr HttpWebRequest(HttpWebRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpWebRequest(void* ptr) noexcept : System::Net::WebRequest(ptr) {
}


  constexpr HttpWebRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpWebRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpWebRequest& operator=(HttpWebRequest&& o) noexcept = default;
  constexpr HttpWebRequest& operator=(HttpWebRequest const& o) noexcept = default;
                


// Fields

 System::Uri __declspec(property(get=__get_requestUri, put=__set_requestUri))  requestUri;

constexpr void __set_requestUri(System::Uri value) ;

constexpr System::Uri __get_requestUri() const;

 System::Uri __declspec(property(get=__get_actualUri, put=__set_actualUri))  actualUri;

constexpr void __set_actualUri(System::Uri value) ;

constexpr System::Uri __get_actualUri() const;

 bool __declspec(property(get=__get_hostChanged, put=__set_hostChanged))  hostChanged;

constexpr void __set_hostChanged(bool value) ;

constexpr bool __get_hostChanged() const;

 bool __declspec(property(get=__get_allowAutoRedirect, put=__set_allowAutoRedirect))  allowAutoRedirect;

constexpr void __set_allowAutoRedirect(bool value) ;

constexpr bool __get_allowAutoRedirect() const;

 bool __declspec(property(get=__get_allowBuffering, put=__set_allowBuffering))  allowBuffering;

constexpr void __set_allowBuffering(bool value) ;

constexpr bool __get_allowBuffering() const;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=__get_certificates, put=__set_certificates))  certificates;

constexpr void __set_certificates(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509CertificateCollection __get_certificates() const;

 ::StringW __declspec(property(get=__get_connectionGroup, put=__set_connectionGroup))  connectionGroup;

constexpr void __set_connectionGroup(::StringW value) ;

constexpr ::StringW __get_connectionGroup() const;

 bool __declspec(property(get=__get_haveContentLength, put=__set_haveContentLength))  haveContentLength;

constexpr void __set_haveContentLength(bool value) ;

constexpr bool __get_haveContentLength() const;

 int64_t __declspec(property(get=__get_contentLength, put=__set_contentLength))  contentLength;

constexpr void __set_contentLength(int64_t value) ;

constexpr int64_t __get_contentLength() const;

 System::Net::HttpContinueDelegate __declspec(property(get=__get_continueDelegate, put=__set_continueDelegate))  continueDelegate;

constexpr void __set_continueDelegate(System::Net::HttpContinueDelegate value) ;

constexpr System::Net::HttpContinueDelegate __get_continueDelegate() const;

 System::Net::CookieContainer __declspec(property(get=__get_cookieContainer, put=__set_cookieContainer))  cookieContainer;

constexpr void __set_cookieContainer(System::Net::CookieContainer value) ;

constexpr System::Net::CookieContainer __get_cookieContainer() const;

 System::Net::ICredentials __declspec(property(get=__get_credentials, put=__set_credentials))  credentials;

constexpr void __set_credentials(System::Net::ICredentials value) ;

constexpr System::Net::ICredentials __get_credentials() const;

 bool __declspec(property(get=__get_haveResponse, put=__set_haveResponse))  haveResponse;

constexpr void __set_haveResponse(bool value) ;

constexpr bool __get_haveResponse() const;

 bool __declspec(property(get=__get_requestSent, put=__set_requestSent))  requestSent;

constexpr void __set_requestSent(bool value) ;

constexpr bool __get_requestSent() const;

 System::Net::WebHeaderCollection __declspec(property(get=__get_webHeaders, put=__set_webHeaders))  webHeaders;

constexpr void __set_webHeaders(System::Net::WebHeaderCollection value) ;

constexpr System::Net::WebHeaderCollection __get_webHeaders() const;

 bool __declspec(property(get=__get_keepAlive, put=__set_keepAlive))  keepAlive;

constexpr void __set_keepAlive(bool value) ;

constexpr bool __get_keepAlive() const;

 int32_t __declspec(property(get=__get_maxAutoRedirect, put=__set_maxAutoRedirect))  maxAutoRedirect;

constexpr void __set_maxAutoRedirect(int32_t value) ;

constexpr int32_t __get_maxAutoRedirect() const;

 ::StringW __declspec(property(get=__get_mediaType, put=__set_mediaType))  mediaType;

constexpr void __set_mediaType(::StringW value) ;

constexpr ::StringW __get_mediaType() const;

 ::StringW __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::StringW value) ;

constexpr ::StringW __get_method() const;

 ::StringW __declspec(property(get=__get_initialMethod, put=__set_initialMethod))  initialMethod;

constexpr void __set_initialMethod(::StringW value) ;

constexpr ::StringW __get_initialMethod() const;

 bool __declspec(property(get=__get_pipelined, put=__set_pipelined))  pipelined;

constexpr void __set_pipelined(bool value) ;

constexpr bool __get_pipelined() const;

 bool __declspec(property(get=__get_preAuthenticate, put=__set_preAuthenticate))  preAuthenticate;

constexpr void __set_preAuthenticate(bool value) ;

constexpr bool __get_preAuthenticate() const;

 bool __declspec(property(get=__get_usedPreAuth, put=__set_usedPreAuth))  usedPreAuth;

constexpr void __set_usedPreAuth(bool value) ;

constexpr bool __get_usedPreAuth() const;

 System::Version __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(System::Version value) ;

constexpr System::Version __get_version() const;

 bool __declspec(property(get=__get_force_version, put=__set_force_version))  force_version;

constexpr void __set_force_version(bool value) ;

constexpr bool __get_force_version() const;

 System::Version __declspec(property(get=__get_actualVersion, put=__set_actualVersion))  actualVersion;

constexpr void __set_actualVersion(System::Version value) ;

constexpr System::Version __get_actualVersion() const;

 System::Net::IWebProxy __declspec(property(get=__get_proxy, put=__set_proxy))  proxy;

constexpr void __set_proxy(System::Net::IWebProxy value) ;

constexpr System::Net::IWebProxy __get_proxy() const;

 bool __declspec(property(get=__get_sendChunked, put=__set_sendChunked))  sendChunked;

constexpr void __set_sendChunked(bool value) ;

constexpr bool __get_sendChunked() const;

 System::Net::ServicePoint __declspec(property(get=__get_servicePoint, put=__set_servicePoint))  servicePoint;

constexpr void __set_servicePoint(System::Net::ServicePoint value) ;

constexpr System::Net::ServicePoint __get_servicePoint() const;

 int32_t __declspec(property(get=__get_timeout, put=__set_timeout))  timeout;

constexpr void __set_timeout(int32_t value) ;

constexpr int32_t __get_timeout() const;

 int32_t __declspec(property(get=__get_continueTimeout, put=__set_continueTimeout))  continueTimeout;

constexpr void __set_continueTimeout(int32_t value) ;

constexpr int32_t __get_continueTimeout() const;

 System::Net::WebRequestStream __declspec(property(get=__get_writeStream, put=__set_writeStream))  writeStream;

constexpr void __set_writeStream(System::Net::WebRequestStream value) ;

constexpr System::Net::WebRequestStream __get_writeStream() const;

 System::Net::HttpWebResponse __declspec(property(get=__get_webResponse, put=__set_webResponse))  webResponse;

constexpr void __set_webResponse(System::Net::HttpWebResponse value) ;

constexpr System::Net::HttpWebResponse __get_webResponse() const;

 System::Net::WebCompletionSource __declspec(property(get=__get_responseTask, put=__set_responseTask))  responseTask;

constexpr void __set_responseTask(System::Net::WebCompletionSource value) ;

constexpr System::Net::WebCompletionSource __get_responseTask() const;

 System::Net::WebOperation __declspec(property(get=__get_currentOperation, put=__set_currentOperation))  currentOperation;

constexpr void __set_currentOperation(System::Net::WebOperation value) ;

constexpr System::Net::WebOperation __get_currentOperation() const;

 int32_t __declspec(property(get=__get_aborted, put=__set_aborted))  aborted;

constexpr void __set_aborted(int32_t value) ;

constexpr int32_t __get_aborted() const;

 bool __declspec(property(get=__get_gotRequestStream, put=__set_gotRequestStream))  gotRequestStream;

constexpr void __set_gotRequestStream(bool value) ;

constexpr bool __get_gotRequestStream() const;

 int32_t __declspec(property(get=__get_redirects, put=__set_redirects))  redirects;

constexpr void __set_redirects(int32_t value) ;

constexpr int32_t __get_redirects() const;

 bool __declspec(property(get=__get_expectContinue, put=__set_expectContinue))  expectContinue;

constexpr void __set_expectContinue(bool value) ;

constexpr bool __get_expectContinue() const;

 bool __declspec(property(get=__get_getResponseCalled, put=__set_getResponseCalled))  getResponseCalled;

constexpr void __set_getResponseCalled(bool value) ;

constexpr bool __get_getResponseCalled() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_locker, put=__set_locker))  locker;

constexpr void __set_locker(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_locker() const;

 bool __declspec(property(get=__get_finished_reading, put=__set_finished_reading))  finished_reading;

constexpr void __set_finished_reading(bool value) ;

constexpr bool __get_finished_reading() const;

 System::Net::DecompressionMethods __declspec(property(get=__get_auto_decomp, put=__set_auto_decomp))  auto_decomp;

constexpr void __set_auto_decomp(System::Net::DecompressionMethods value) ;

constexpr System::Net::DecompressionMethods __get_auto_decomp() const;

static int32_t __declspec(property(get=__get_defaultMaxResponseHeadersLength, put=__set_defaultMaxResponseHeadersLength))  defaultMaxResponseHeadersLength;

static void __set_defaultMaxResponseHeadersLength(int32_t value) ;

static int32_t __get_defaultMaxResponseHeadersLength() ;

static int32_t __declspec(property(get=__get_defaultMaximumErrorResponseLength, put=__set_defaultMaximumErrorResponseLength))  defaultMaximumErrorResponseLength;

static void __set_defaultMaximumErrorResponseLength(int32_t value) ;

static int32_t __get_defaultMaximumErrorResponseLength() ;

static System::Net::Cache::RequestCachePolicy __declspec(property(get=__get_defaultCachePolicy, put=__set_defaultCachePolicy))  defaultCachePolicy;

static void __set_defaultCachePolicy(System::Net::Cache::RequestCachePolicy value) ;

static System::Net::Cache::RequestCachePolicy __get_defaultCachePolicy() ;

 int32_t __declspec(property(get=__get_readWriteTimeout, put=__set_readWriteTimeout))  readWriteTimeout;

constexpr void __set_readWriteTimeout(int32_t value) ;

constexpr int32_t __get_readWriteTimeout() const;

 Mono::Net::Security::MobileTlsProvider __declspec(property(get=__get_tlsProvider, put=__set_tlsProvider))  tlsProvider;

constexpr void __set_tlsProvider(Mono::Net::Security::MobileTlsProvider value) ;

constexpr Mono::Net::Security::MobileTlsProvider __get_tlsProvider() const;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get_tlsSettings, put=__set_tlsSettings))  tlsSettings;

constexpr void __set_tlsSettings(Mono::Security::Interface::MonoTlsSettings value) ;

constexpr Mono::Security::Interface::MonoTlsSettings __get_tlsSettings() const;

 System::Net::ServerCertValidationCallback __declspec(property(get=__get_certValidationCallback, put=__set_certValidationCallback))  certValidationCallback;

constexpr void __set_certValidationCallback(System::Net::ServerCertValidationCallback value) ;

constexpr System::Net::ServerCertValidationCallback __get_certValidationCallback() const;

 bool __declspec(property(get=__get_hostHasPort, put=__set_hostHasPort))  hostHasPort;

constexpr void __set_hostHasPort(bool value) ;

constexpr bool __get_hostHasPort() const;

 System::Uri __declspec(property(get=__get_hostUri, put=__set_hostUri))  hostUri;

constexpr void __set_hostUri(System::Uri value) ;

constexpr System::Uri __get_hostUri() const;

 System::Net::System__Net__HttpWebRequest__AuthorizationState __declspec(property(get=__get_auth_state, put=__set_auth_state))  auth_state;

constexpr void __set_auth_state(System::Net::System__Net__HttpWebRequest__AuthorizationState value) ;

constexpr System::Net::System__Net__HttpWebRequest__AuthorizationState __get_auth_state() const;

 System::Net::System__Net__HttpWebRequest__AuthorizationState __declspec(property(get=__get_proxy_auth_state, put=__set_proxy_auth_state))  proxy_auth_state;

constexpr void __set_proxy_auth_state(System::Net::System__Net__HttpWebRequest__AuthorizationState value) ;

constexpr System::Net::System__Net__HttpWebRequest__AuthorizationState __get_proxy_auth_state() const;

 System::Func_2<System::IO::Stream,System::Threading::Tasks::Task> __declspec(property(get=__get_ResendContentFactory, put=__set_ResendContentFactory))  ResendContentFactory;

constexpr void __set_ResendContentFactory(System::Func_2<System::IO::Stream,System::Threading::Tasks::Task> value) ;

constexpr System::Func_2<System::IO::Stream,System::Threading::Tasks::Task> __get_ResendContentFactory() const;

 bool __declspec(property(get=__get__ThrowOnError_k__BackingField, put=__set__ThrowOnError_k__BackingField))  _ThrowOnError_k__BackingField;

constexpr void __set__ThrowOnError_k__BackingField(bool value) ;

constexpr bool __get__ThrowOnError_k__BackingField() const;

 bool __declspec(property(get=__get_unsafe_auth_blah, put=__set_unsafe_auth_blah))  unsafe_auth_blah;

constexpr void __set_unsafe_auth_blah(bool value) ;

constexpr bool __get_unsafe_auth_blah() const;


// Properties

 System::Uri __declspec(property(get=get_Address))  Address;

 bool __declspec(property(put=set_AllowAutoRedirect))  AllowAutoRedirect;

 bool __declspec(property(get=get_AllowWriteStreamBuffering, put=set_AllowWriteStreamBuffering))  AllowWriteStreamBuffering;

 System::Net::DecompressionMethods __declspec(property(get=get_AutomaticDecompression, put=set_AutomaticDecompression))  AutomaticDecompression;

 bool __declspec(property(get=get_InternalAllowBuffering))  InternalAllowBuffering;

 bool __declspec(property(get=get_MethodWithBuffer))  MethodWithBuffer;

 Mono::Net::Security::MobileTlsProvider __declspec(property(get=get_TlsProvider))  TlsProvider;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=get_TlsSettings))  TlsSettings;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=get_ClientCertificates))  ClientCertificates;

 ::StringW __declspec(property(put=set_ConnectionGroupName))  ConnectionGroupName;

 int64_t __declspec(property(get=get_ContentLength, put=set_ContentLength))  ContentLength;

 int64_t __declspec(property(put=set_InternalContentLength))  InternalContentLength;

 bool __declspec(property(get=get_ThrowOnError, put=set_ThrowOnError))  ThrowOnError;

 System::Net::CookieContainer __declspec(property(put=set_CookieContainer))  CookieContainer;

 System::Net::ICredentials __declspec(property(get=get_Credentials, put=set_Credentials))  Credentials;

static int32_t __declspec(property(get=get_DefaultMaximumErrorResponseLength))  DefaultMaximumErrorResponseLength;

 System::Net::WebHeaderCollection __declspec(property(get=get_Headers))  Headers;

 ::StringW __declspec(property(get=get_Host, put=set_Host))  Host;

 bool __declspec(property(get=get_KeepAlive, put=set_KeepAlive))  KeepAlive;

 int32_t __declspec(property(put=set_MaximumAutomaticRedirections))  MaximumAutomaticRedirections;

static int32_t __declspec(property(get=get_DefaultMaximumResponseHeadersLength))  DefaultMaximumResponseHeadersLength;

 int32_t __declspec(property(get=get_ReadWriteTimeout))  ReadWriteTimeout;

 ::StringW __declspec(property(get=get_Method, put=set_Method))  Method;

 bool __declspec(property(put=set_PreAuthenticate))  PreAuthenticate;

 System::Version __declspec(property(get=get_ProtocolVersion, put=set_ProtocolVersion))  ProtocolVersion;

 System::Net::IWebProxy __declspec(property(get=get_Proxy, put=set_Proxy))  Proxy;

 System::Uri __declspec(property(get=get_RequestUri))  RequestUri;

 bool __declspec(property(get=get_SendChunked, put=set_SendChunked))  SendChunked;

 System::Net::ServicePoint __declspec(property(get=get_ServicePoint))  ServicePoint;

 System::Net::ServicePoint __declspec(property(get=get_ServicePointNoLock))  ServicePointNoLock;

 int32_t __declspec(property(get=get_Timeout, put=set_Timeout))  Timeout;

 ::StringW __declspec(property(get=get_TransferEncoding))  TransferEncoding;

 bool __declspec(property(get=get_UseDefaultCredentials))  UseDefaultCredentials;

 bool __declspec(property(get=get_UnsafeAuthenticatedConnectionSharing))  UnsafeAuthenticatedConnectionSharing;

 bool __declspec(property(get=get_ExpectContinue, put=set_ExpectContinue))  ExpectContinue;

 System::Uri __declspec(property(get=get_AuthUri))  AuthUri;

 bool __declspec(property(get=get_ProxyQuery))  ProxyQuery;

 System::Net::ServerCertValidationCallback __declspec(property(get=get_ServerCertValidationCallback))  ServerCertValidationCallback;

 bool __declspec(property(put=set_FinishedReading))  FinishedReading;

 bool __declspec(property(get=get_Aborted))  Aborted;


// Methods

static System::Net::HttpWebRequest New_ctor(System::Uri uri) ;

/// @brief Method .ctor addr 0x2839158 size 0x1a8 virtual false final false
 void _ctor(System::Uri uri) ;

static System::Net::HttpWebRequest New_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x28395bc size 0x138 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method ResetAuthorization addr 0x28395ac size 0x10 virtual false final false
 void ResetAuthorization() ;

/// @brief Method get_Address addr 0x283970c size 0x8 virtual false final false
 System::Uri get_Address() ;

/// @brief Method set_AllowAutoRedirect addr 0x2839714 size 0xc virtual true final false
 void set_AllowAutoRedirect(bool value) ;

/// @brief Method get_AllowWriteStreamBuffering addr 0x2839720 size 0x8 virtual true final false
 bool get_AllowWriteStreamBuffering() ;

/// @brief Method set_AllowWriteStreamBuffering addr 0x2839728 size 0xc virtual true final false
 void set_AllowWriteStreamBuffering(bool value) ;

/// @brief Method get_AutomaticDecompression addr 0x2839734 size 0x8 virtual false final false
 System::Net::DecompressionMethods get_AutomaticDecompression() ;

/// @brief Method set_AutomaticDecompression addr 0x283973c size 0x24 virtual false final false
 void set_AutomaticDecompression(System::Net::DecompressionMethods value) ;

/// @brief Method get_InternalAllowBuffering addr 0x28397c0 size 0x14 virtual false final false
 bool get_InternalAllowBuffering() ;

/// @brief Method get_MethodWithBuffer addr 0x28397d4 size 0xfc virtual false final false
 bool get_MethodWithBuffer() ;

/// @brief Method get_TlsProvider addr 0x28398d0 size 0x8 virtual false final false
 Mono::Net::Security::MobileTlsProvider get_TlsProvider() ;

/// @brief Method get_TlsSettings addr 0x28398d8 size 0x8 virtual false final false
 Mono::Security::Interface::MonoTlsSettings get_TlsSettings() ;

/// @brief Method get_ClientCertificates addr 0x28398e0 size 0x6c virtual false final false
 System::Security::Cryptography::X509Certificates::X509CertificateCollection get_ClientCertificates() ;

/// @brief Method set_ConnectionGroupName addr 0x283994c size 0x8 virtual true final false
 void set_ConnectionGroupName(::StringW value) ;

/// @brief Method get_ContentLength addr 0x2839954 size 0x8 virtual true final false
 int64_t get_ContentLength() ;

/// @brief Method set_ContentLength addr 0x283995c size 0x90 virtual true final false
 void set_ContentLength(int64_t value) ;

/// @brief Method set_InternalContentLength addr 0x28399ec size 0x8 virtual false final false
 void set_InternalContentLength(int64_t value) ;

/// @brief Method get_ThrowOnError addr 0x28399f4 size 0x8 virtual false final false
 bool get_ThrowOnError() ;

/// @brief Method set_ThrowOnError addr 0x28399fc size 0xc virtual false final false
 void set_ThrowOnError(bool value) ;

/// @brief Method set_CookieContainer addr 0x2839a08 size 0x8 virtual true final false
 void set_CookieContainer(System::Net::CookieContainer value) ;

/// @brief Method get_Credentials addr 0x2839a10 size 0x8 virtual true final false
 System::Net::ICredentials get_Credentials() ;

/// @brief Method set_Credentials addr 0x2839a18 size 0x8 virtual true final false
 void set_Credentials(System::Net::ICredentials value) ;

/// @brief Method get_DefaultMaximumErrorResponseLength addr 0x2839a20 size 0x58 virtual false final false
static int32_t get_DefaultMaximumErrorResponseLength() ;

/// @brief Method get_Headers addr 0x2839a78 size 0x8 virtual true final false
 System::Net::WebHeaderCollection get_Headers() ;

/// @brief Method get_Host addr 0x2839a80 size 0x10c virtual false final false
 ::StringW get_Host() ;

/// @brief Method set_Host addr 0x2839b8c size 0x170 virtual false final false
 void set_Host(::StringW value) ;

/// @brief Method TryGetHostUri addr 0x2839cfc size 0xd0 virtual false final false
 bool TryGetHostUri(::StringW hostName, ByRef<System::Uri> hostUri) ;

/// @brief Method get_KeepAlive addr 0x2839dcc size 0x8 virtual false final false
 bool get_KeepAlive() ;

/// @brief Method set_KeepAlive addr 0x2839dd4 size 0xc virtual false final false
 void set_KeepAlive(bool value) ;

/// @brief Method set_MaximumAutomaticRedirections addr 0x2839de0 size 0x80 virtual false final false
 void set_MaximumAutomaticRedirections(int32_t value) ;

/// @brief Method get_DefaultMaximumResponseHeadersLength addr 0x2839e60 size 0x58 virtual false final false
static int32_t get_DefaultMaximumResponseHeadersLength() ;

/// @brief Method get_ReadWriteTimeout addr 0x2839eb8 size 0x8 virtual false final false
 int32_t get_ReadWriteTimeout() ;

/// @brief Method get_Method addr 0x2839ec0 size 0x8 virtual true final false
 ::StringW get_Method() ;

/// @brief Method set_Method addr 0x2839ec8 size 0x22c virtual true final false
 void set_Method(::StringW value) ;

/// @brief Method set_PreAuthenticate addr 0x283a0f4 size 0xc virtual true final false
 void set_PreAuthenticate(bool value) ;

/// @brief Method get_ProtocolVersion addr 0x283a100 size 0x8 virtual false final false
 System::Version get_ProtocolVersion() ;

/// @brief Method set_ProtocolVersion addr 0x283a108 size 0x110 virtual false final false
 void set_ProtocolVersion(System::Version value) ;

/// @brief Method get_Proxy addr 0x283a218 size 0x8 virtual true final false
 System::Net::IWebProxy get_Proxy() ;

/// @brief Method set_Proxy addr 0x283a220 size 0x2c virtual true final false
 void set_Proxy(System::Net::IWebProxy value) ;

/// @brief Method get_RequestUri addr 0x283a37c size 0x8 virtual true final false
 System::Uri get_RequestUri() ;

/// @brief Method get_SendChunked addr 0x283a384 size 0x8 virtual false final false
 bool get_SendChunked() ;

/// @brief Method set_SendChunked addr 0x283a38c size 0x24 virtual false final false
 void set_SendChunked(bool value) ;

/// @brief Method get_ServicePoint addr 0x283a3b0 size 0x4 virtual false final false
 System::Net::ServicePoint get_ServicePoint() ;

/// @brief Method get_ServicePointNoLock addr 0x283a3b4 size 0x8 virtual false final false
 System::Net::ServicePoint get_ServicePointNoLock() ;

/// @brief Method get_Timeout addr 0x283a3bc size 0x8 virtual true final false
 int32_t get_Timeout() ;

/// @brief Method set_Timeout addr 0x283a3c4 size 0x64 virtual true final false
 void set_Timeout(int32_t value) ;

/// @brief Method get_TransferEncoding addr 0x283a428 size 0x54 virtual false final false
 ::StringW get_TransferEncoding() ;

/// @brief Method get_UseDefaultCredentials addr 0x283a47c size 0x78 virtual true final false
 bool get_UseDefaultCredentials() ;

/// @brief Method get_UnsafeAuthenticatedConnectionSharing addr 0x283a4f4 size 0x8 virtual false final false
 bool get_UnsafeAuthenticatedConnectionSharing() ;

/// @brief Method get_ExpectContinue addr 0x283a4fc size 0x8 virtual false final false
 bool get_ExpectContinue() ;

/// @brief Method set_ExpectContinue addr 0x283a504 size 0xc virtual false final false
 void set_ExpectContinue(bool value) ;

/// @brief Method get_AuthUri addr 0x283a510 size 0x8 virtual false final false
 System::Uri get_AuthUri() ;

/// @brief Method get_ProxyQuery addr 0x283a518 size 0x34 virtual false final false
 bool get_ProxyQuery() ;

/// @brief Method get_ServerCertValidationCallback addr 0x283a54c size 0x8 virtual false final false
 System::Net::ServerCertValidationCallback get_ServerCertValidationCallback() ;

/// @brief Method GetServicePoint addr 0x283a24c size 0x130 virtual false final false
 System::Net::ServicePoint GetServicePoint() ;

/// @brief Method SendRequest addr 0x283a554 size 0x23c virtual false final false
 System::Net::WebOperation SendRequest(bool redirecting, System::Net::BufferOffsetSize writeBuffer, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method MyGetRequestStreamAsync addr 0x283a790 size 0x378 virtual false final false
 System::Threading::Tasks::Task_1<System::IO::Stream> MyGetRequestStreamAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method BeginGetRequestStream addr 0x283abf4 size 0xb8 virtual true final false
 System::IAsyncResult BeginGetRequestStream(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndGetRequestStream addr 0x283acac size 0x124 virtual true final false
 System::IO::Stream EndGetRequestStream(System::IAsyncResult asyncResult) ;

/// @brief Method GetRequestStreamAsync addr 0x283ae54 size 0x98 virtual true final false
 System::Threading::Tasks::Task_1<System::IO::Stream> GetRequestStreamAsync() ;

/// @brief Method RunWithTimeout addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Threading::Tasks::Task_1<T> RunWithTimeout(System::Func_2<System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> func, int32_t timeout, System::Action abort, System::Func_1<bool> aborted, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method RunWithTimeoutWorker addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Threading::Tasks::Task_1<T> RunWithTimeoutWorker(System::Threading::Tasks::Task_1<T> workerTask, int32_t timeout, System::Action abort, System::Func_1<bool> aborted, System::Threading::CancellationTokenSource cts) ;

/// @brief Method RunWithTimeout addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Threading::Tasks::Task_1<T> RunWithTimeout(System::Func_2<System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> func) ;

/// @brief Method MyGetResponseAsync addr 0x283aeec size 0x10c virtual false final false
 System::Threading::Tasks::Task_1<System::Net::HttpWebResponse> MyGetResponseAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetResponseFromData addr 0x283aff8 size 0x108 virtual false final false
 System::Threading::Tasks::Task_1<System::ValueTuple_5<System::Net::HttpWebResponse,bool,bool,System::Net::BufferOffsetSize,System::Net::WebOperation>> GetResponseFromData(System::Net::WebResponseStream stream, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FlattenException addr 0x283b100 size 0xc0 virtual false final false
static System::Exception FlattenException(System::Exception e) ;

/// @brief Method GetWebException addr 0x283add0 size 0x84 virtual false final false
 System::Net::WebException GetWebException(System::Exception e) ;

/// @brief Method GetWebException addr 0x283b1c0 size 0x1b0 virtual false final false
static System::Net::WebException GetWebException(System::Exception e, bool aborted) ;

/// @brief Method CreateRequestAbortedException addr 0x283ab30 size 0xc4 virtual false final false
static System::Net::WebException CreateRequestAbortedException() ;

/// @brief Method BeginGetResponse addr 0x283b370 size 0x17c virtual true final false
 System::IAsyncResult BeginGetResponse(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndGetResponse addr 0x283b4ec size 0x124 virtual true final false
 System::Net::WebResponse EndGetResponse(System::IAsyncResult asyncResult) ;

/// @brief Method GetResponse addr 0x283b610 size 0x100 virtual true final false
 System::Net::WebResponse GetResponse() ;

/// @brief Method set_FinishedReading addr 0x283b710 size 0xc virtual false final false
 void set_FinishedReading(bool value) ;

/// @brief Method get_Aborted addr 0x283ab08 size 0x28 virtual false final false
 bool get_Aborted() ;

/// @brief Method Abort addr 0x283b71c size 0x110 virtual true final false
 void Abort() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x283b82c size 0x40 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x283b86c size 0x40 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method CheckRequestStarted addr 0x2839760 size 0x60 virtual false final false
 void CheckRequestStarted() ;

/// @brief Method DoContinueDelegate addr 0x283b8ac size 0x1c virtual false final false
 void DoContinueDelegate(int32_t statusCode, System::Net::WebHeaderCollection headers) ;

/// @brief Method RewriteRedirectToGet addr 0x283b8c8 size 0x78 virtual false final false
 void RewriteRedirectToGet() ;

/// @brief Method Redirect addr 0x283b940 size 0x4e0 virtual false final false
 bool Redirect(System::Net::HttpStatusCode code, System::Net::WebResponse response) ;

/// @brief Method GetHeaders addr 0x283be20 size 0x650 virtual false final false
 ::StringW GetHeaders() ;

/// @brief Method DoPreAuthenticate addr 0x283c470 size 0x1fc virtual false final false
 void DoPreAuthenticate() ;

/// @brief Method GetRequestHeaders addr 0x283c66c size 0x318 virtual false final false
 ::ArrayW<uint8_t> GetRequestHeaders() ;

/// @brief Method HandleNtlmAuth addr 0x283c984 size 0x290 virtual false final false
 System::ValueTuple_2<System::Net::WebOperation,bool> HandleNtlmAuth(System::Net::WebResponseStream stream, System::Net::HttpWebResponse response, System::Net::BufferOffsetSize writeBuffer, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CheckAuthorization addr 0x283cc14 size 0x18 virtual false final false
 bool CheckAuthorization(System::Net::WebResponse response, System::Net::HttpStatusCode code) ;

/// @brief Method GetRewriteHandler addr 0x283cf44 size 0x1f8 virtual false final false
 System::ValueTuple_2<System::Threading::Tasks::Task_1<System::Net::BufferOffsetSize>,System::Net::WebException> GetRewriteHandler(System::Net::HttpWebResponse response, bool redirect) ;

/// @brief Method CheckFinalStatus addr 0x283d13c size 0x480 virtual false final false
 System::ValueTuple_4<bool,bool,System::Threading::Tasks::Task_1<System::Net::BufferOffsetSize>,System::Net::WebException> CheckFinalStatus(System::Net::HttpWebResponse response) ;

/// @brief Method <RunWithTimeout>b__242_0 addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool _RunWithTimeout_b__242_0() ;

/// @brief Method <GetRewriteHandler>b__271_0 addr 0x283d640 size 0xec virtual false final false
 System::Threading::Tasks::Task_1<System::Net::BufferOffsetSize> _GetRewriteHandler_b__271_0() ;

static System::Net::HttpWebRequest New_ctor() ;

/// @brief Method .ctor addr 0x283d72c size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c__241`1
namespace System::Net {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8032), inst: 92 })
// CS Name: System.Net.HttpWebRequest::<>c__241`1
class CORDL_TYPE System__Net__HttpWebRequest____c__241_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__HttpWebRequest____c__241_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__HttpWebRequest____c__241_1", modifiers: " const&", def_value: None }]
constexpr System__Net__HttpWebRequest____c__241_1(System__Net__HttpWebRequest____c__241_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__HttpWebRequest____c__241_1", modifiers: "&&", def_value: None }]
constexpr System__Net__HttpWebRequest____c__241_1(System__Net__HttpWebRequest____c__241_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpWebRequest____c__241_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__HttpWebRequest____c__241_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__HttpWebRequest____c__241_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__HttpWebRequest____c__241_1& operator=(System__Net__HttpWebRequest____c__241_1&& o) noexcept = default;
  constexpr System__Net__HttpWebRequest____c__241_1& operator=(System__Net__HttpWebRequest____c__241_1 const& o) noexcept = default;
                


// Fields

static System::Net::System__Net__HttpWebRequest____c__241_1<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Net::System__Net__HttpWebRequest____c__241_1<T> value) ;

static System::Net::System__Net__HttpWebRequest____c__241_1<T> __get___9() ;

static System::Func_2<System::Threading::Tasks::Task_1<T>,System::Nullable_1<int32_t>> __declspec(property(get=__get___9__241_0, put=__set___9__241_0))  __9__241_0;

static void __set___9__241_0(System::Func_2<System::Threading::Tasks::Task_1<T>,System::Nullable_1<int32_t>> value) ;

static System::Func_2<System::Threading::Tasks::Task_1<T>,System::Nullable_1<int32_t>> __get___9__241_0() ;


// Methods

static System::Net::System__Net__HttpWebRequest____c__241_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RunWithTimeoutWorker>b__241_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Nullable_1<int32_t> _RunWithTimeoutWorker_b__241_0(System::Threading::Tasks::Task_1<T> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<>c__241`1
namespace System::Net {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8032), inst: 2 })
// CS Name: System.Net.HttpWebRequest::<>c__241`1
class CORDL_TYPE System__Net__HttpWebRequest____c__241_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__HttpWebRequest____c__241_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__HttpWebRequest____c__241_1", modifiers: " const&", def_value: None }]
constexpr System__Net__HttpWebRequest____c__241_1(System__Net__HttpWebRequest____c__241_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__HttpWebRequest____c__241_1", modifiers: "&&", def_value: None }]
constexpr System__Net__HttpWebRequest____c__241_1(System__Net__HttpWebRequest____c__241_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpWebRequest____c__241_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__HttpWebRequest____c__241_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__HttpWebRequest____c__241_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__HttpWebRequest____c__241_1& operator=(System__Net__HttpWebRequest____c__241_1&& o) noexcept = default;
  constexpr System__Net__HttpWebRequest____c__241_1& operator=(System__Net__HttpWebRequest____c__241_1 const& o) noexcept = default;
                


// Fields

static System::Net::System__Net__HttpWebRequest____c__241_1<T> __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Net::System__Net__HttpWebRequest____c__241_1<T> value) ;

static System::Net::System__Net__HttpWebRequest____c__241_1<T> __get___9() ;

static System::Func_2<System::Threading::Tasks::Task_1<T>,System::Nullable_1<int32_t>> __declspec(property(get=__get___9__241_0, put=__set___9__241_0))  __9__241_0;

static void __set___9__241_0(System::Func_2<System::Threading::Tasks::Task_1<T>,System::Nullable_1<int32_t>> value) ;

static System::Func_2<System::Threading::Tasks::Task_1<T>,System::Nullable_1<int32_t>> __get___9__241_0() ;


// Methods

static System::Net::System__Net__HttpWebRequest____c__241_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <RunWithTimeoutWorker>b__241_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Nullable_1<int32_t> _RunWithTimeoutWorker_b__241_0(System::Threading::Tasks::Task_1<T> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<RunWithTimeoutWorker>d__241`1
namespace System::Net {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8033)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8033), inst: 92 })
// CS Name: System.Net.HttpWebRequest::<RunWithTimeoutWorker>d__241`1
struct CORDL_TYPE System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "workerTask", ty: "System::Threading::Tasks::Task_1<T>", modifiers: "", def_value: None }, CppParam { name: "timeout", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cts", ty: "System::Threading::CancellationTokenSource", modifiers: "", def_value: None }, CppParam { name: "abort", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "aborted", ty: "System::Func_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, System::Threading::Tasks::Task_1<T> workerTask, int32_t timeout, System::Threading::CancellationTokenSource cts, System::Action abort, System::Func_1<bool> aborted, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;


                    constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1 const&) = default;
                    constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1&&) = default;
                    constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1& operator=(System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1& operator=(System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __get___t__builder() const;

 System::Threading::Tasks::Task_1<T> __declspec(property(get=__get_workerTask, put=__set_workerTask))  workerTask;

constexpr void __set_workerTask(System::Threading::Tasks::Task_1<T> value) ;

constexpr System::Threading::Tasks::Task_1<T> __get_workerTask() const;

 int32_t __declspec(property(get=__get_timeout, put=__set_timeout))  timeout;

constexpr void __set_timeout(int32_t value) ;

constexpr int32_t __get_timeout() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get_cts, put=__set_cts))  cts;

constexpr void __set_cts(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get_cts() const;

 System::Action __declspec(property(get=__get_abort, put=__set_abort))  abort;

constexpr void __set_abort(System::Action value) ;

constexpr System::Action __get_abort() const;

 System::Func_1<bool> __declspec(property(get=__get_aborted, put=__set_aborted))  aborted;

constexpr void __set_aborted(System::Func_1<bool> value) ;

constexpr System::Func_1<bool> __get_aborted() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::<RunWithTimeoutWorker>d__241`1
namespace System::Net {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8033))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8033), inst: 2 })
// CS Name: System.Net.HttpWebRequest::<RunWithTimeoutWorker>d__241`1
struct CORDL_TYPE System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "workerTask", ty: "System::Threading::Tasks::Task_1<T>", modifiers: "", def_value: None }, CppParam { name: "timeout", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cts", ty: "System::Threading::CancellationTokenSource", modifiers: "", def_value: None }, CppParam { name: "abort", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "aborted", ty: "System::Func_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, System::Threading::Tasks::Task_1<T> workerTask, int32_t timeout, System::Threading::CancellationTokenSource cts, System::Action abort, System::Func_1<bool> aborted, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__1) noexcept;


                    constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1 const&) = default;
                    constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1&&) = default;
                    constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1& operator=(System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1& operator=(System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __get___t__builder() const;

 System::Threading::Tasks::Task_1<T> __declspec(property(get=__get_workerTask, put=__set_workerTask))  workerTask;

constexpr void __set_workerTask(System::Threading::Tasks::Task_1<T> value) ;

constexpr System::Threading::Tasks::Task_1<T> __get_workerTask() const;

 int32_t __declspec(property(get=__get_timeout, put=__set_timeout))  timeout;

constexpr void __set_timeout(int32_t value) ;

constexpr int32_t __get_timeout() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get_cts, put=__set_cts))  cts;

constexpr void __set_cts(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get_cts() const;

 System::Action __declspec(property(get=__get_abort, put=__set_abort))  abort;

constexpr void __set_abort(System::Action value) ;

constexpr System::Action __get_abort() const;

 System::Func_1<bool> __declspec(property(get=__get_aborted, put=__set_aborted))  aborted;

constexpr void __set_aborted(System::Func_1<bool> value) ;

constexpr System::Func_1<bool> __get_aborted() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::System__Net__HttpWebRequest____c__241_1, "System.Net", "HttpWebRequest/<>c__241`1");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__HttpWebRequest__NtlmAuthState, "System.Net", "HttpWebRequest/NtlmAuthState");
NEED_NO_BOX(System::Net::HttpWebRequest);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpWebRequest, "System.Net", "HttpWebRequest");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Net::System__Net__HttpWebRequest___RunWithTimeoutWorker_d__241_1, "System.Net", "HttpWebRequest/<RunWithTimeoutWorker>d__241`1");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__HttpWebRequest__AuthorizationState, "System.Net", "HttpWebRequest/AuthorizationState");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__HttpWebRequest___GetResponseFromData_d__244, "System.Net", "HttpWebRequest/<GetResponseFromData>d__244");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__HttpWebRequest___MyGetResponseAsync_d__243, "System.Net", "HttpWebRequest/<MyGetResponseAsync>d__243");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__HttpWebRequest____GetRewriteHandler_b__271_0_d, "System.Net", "HttpWebRequest/<<GetRewriteHandler>b__271_0>d");
