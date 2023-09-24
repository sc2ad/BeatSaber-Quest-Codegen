#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/zzzz__HttpMessageInvoker_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System {
struct TimeSpan;
}
namespace System::Net::Http {
struct HttpCompletionOption;
}
namespace System::Net::Http {
struct System__Net__Http__HttpClient___GetStringAsync_d__53;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System::Net::Http {
struct System__Net__Http__HttpClient___SendAsyncWorker_d__47;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Uri;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
// Forward declare root types
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
struct System__Net__Http__HttpClient___GetStringAsync_d__53;
}
namespace System::Net::Http {
struct System__Net__Http__HttpClient___SendAsyncWorker_d__47;
}
// Type: ::<SendAsyncWorker>d__47
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14802))
// CS Name: System.Net.Http.HttpClient::<SendAsyncWorker>d__47
struct CORDL_TYPE System__Net__Http__HttpClient___SendAsyncWorker_d__47 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::Http::HttpClient", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "request", ty: "System::Net::Http::HttpRequestMessage", modifiers: "", def_value: None }, CppParam { name: "completionOption", ty: "System::Net::Http::HttpCompletionOption", modifiers: "", def_value: None }, CppParam { name: "_lcts_5__2", ty: "System::Threading::CancellationTokenSource", modifiers: "", def_value: None }, CppParam { name: "_response_5__3", ty: "System::Net::Http::HttpResponseMessage", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
constexpr System__Net__Http__HttpClient___SendAsyncWorker_d__47(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Net::Http::HttpResponseMessage> __t__builder, System::Net::Http::HttpClient __4__this, System::Threading::CancellationToken cancellationToken, System::Net::Http::HttpRequestMessage request, System::Net::Http::HttpCompletionOption completionOption, System::Threading::CancellationTokenSource _lcts_5__2, System::Net::Http::HttpResponseMessage _response_5__3, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__2) noexcept;


                    constexpr System__Net__Http__HttpClient___SendAsyncWorker_d__47(System__Net__Http__HttpClient___SendAsyncWorker_d__47 const&) = default;
                    constexpr System__Net__Http__HttpClient___SendAsyncWorker_d__47(System__Net__Http__HttpClient___SendAsyncWorker_d__47&&) = default;
                    constexpr System__Net__Http__HttpClient___SendAsyncWorker_d__47& operator=(System__Net__Http__HttpClient___SendAsyncWorker_d__47 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__Http__HttpClient___SendAsyncWorker_d__47& operator=(System__Net__Http__HttpClient___SendAsyncWorker_d__47&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__HttpClient___SendAsyncWorker_d__47(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Net::Http::HttpClient __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::Http::HttpClient value) ;

constexpr System::Net::Http::HttpClient __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::Http::HttpRequestMessage __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(System::Net::Http::HttpRequestMessage value) ;

constexpr System::Net::Http::HttpRequestMessage __get_request() const;

 System::Net::Http::HttpCompletionOption __declspec(property(get=__get_completionOption, put=__set_completionOption))  completionOption;

constexpr void __set_completionOption(System::Net::Http::HttpCompletionOption value) ;

constexpr System::Net::Http::HttpCompletionOption __get_completionOption() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__lcts_5__2, put=__set__lcts_5__2))  _lcts_5__2;

constexpr void __set__lcts_5__2(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__lcts_5__2() const;

 System::Net::Http::HttpResponseMessage __declspec(property(get=__get__response_5__3, put=__set__response_5__3))  _response_5__3;

constexpr void __set__response_5__3(System::Net::Http::HttpResponseMessage value) ;

constexpr System::Net::Http::HttpResponseMessage __get__response_5__3() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x26a0034 size 0x620 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x26a0654 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http
// Type: ::<GetStringAsync>d__53
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14803))
// CS Name: System.Net.Http.HttpClient::<GetStringAsync>d__53
struct CORDL_TYPE System__Net__Http__HttpClient___GetStringAsync_d__53 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Net::Http::HttpClient", modifiers: "", def_value: None }, CppParam { name: "requestUri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "_resp_5__2", ty: "System::Net::Http::HttpResponseMessage", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW>", modifiers: "", def_value: None }]
constexpr System__Net__Http__HttpClient___GetStringAsync_d__53(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, System::Net::Http::HttpClient __4__this, System::Uri requestUri, System::Net::Http::HttpResponseMessage _resp_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __u__2) noexcept;


                    constexpr System__Net__Http__HttpClient___GetStringAsync_d__53(System__Net__Http__HttpClient___GetStringAsync_d__53 const&) = default;
                    constexpr System__Net__Http__HttpClient___GetStringAsync_d__53(System__Net__Http__HttpClient___GetStringAsync_d__53&&) = default;
                    constexpr System__Net__Http__HttpClient___GetStringAsync_d__53& operator=(System__Net__Http__HttpClient___GetStringAsync_d__53 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__Http__HttpClient___GetStringAsync_d__53& operator=(System__Net__Http__HttpClient___GetStringAsync_d__53&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__HttpClient___GetStringAsync_d__53(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __get___t__builder() const;

 System::Net::Http::HttpClient __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Net::Http::HttpClient value) ;

constexpr System::Net::Http::HttpClient __get___4__this() const;

 System::Uri __declspec(property(get=__get_requestUri, put=__set_requestUri))  requestUri;

constexpr void __set_requestUri(System::Uri value) ;

constexpr System::Uri __get_requestUri() const;

 System::Net::Http::HttpResponseMessage __declspec(property(get=__get__resp_5__2, put=__set__resp_5__2))  _resp_5__2;

constexpr void __set__resp_5__2(System::Net::Http::HttpResponseMessage value) ;

constexpr System::Net::Http::HttpResponseMessage __get__resp_5__2() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::Http::HttpResponseMessage> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::StringW> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x26a06ac size 0x4c4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x26a0d10 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http
// Type: System.Net.Http::HttpClient
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14811))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14804))
// CS Name: System.Net.Http.HttpClient
class CORDL_TYPE HttpClient : public System::Net::Http::HttpMessageInvoker {
public:
// Declarations
using _GetStringAsync_d__53 = System::Net::Http::System__Net__Http__HttpClient___GetStringAsync_d__53;

using _SendAsyncWorker_d__47 = System::Net::Http::System__Net__Http__HttpClient___SendAsyncWorker_d__47;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HttpClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: " const&", def_value: None }]
constexpr HttpClient(HttpClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpClient", modifiers: "&&", def_value: None }]
constexpr HttpClient(HttpClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpClient(void* ptr) noexcept : System::Net::Http::HttpMessageInvoker(ptr) {
}


  constexpr HttpClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpClient& operator=(HttpClient&& o) noexcept = default;
  constexpr HttpClient& operator=(HttpClient const& o) noexcept = default;
                


// Fields

static System::TimeSpan __declspec(property(get=__get_TimeoutDefault, put=__set_TimeoutDefault))  TimeoutDefault;

static void __set_TimeoutDefault(System::TimeSpan value) ;

static System::TimeSpan __get_TimeoutDefault() ;

 System::Uri __declspec(property(get=__get_base_address, put=__set_base_address))  base_address;

constexpr void __set_base_address(System::Uri value) ;

constexpr System::Uri __get_base_address() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get_cts, put=__set_cts))  cts;

constexpr void __set_cts(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get_cts() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 System::Net::Http::Headers::HttpRequestHeaders __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(System::Net::Http::Headers::HttpRequestHeaders value) ;

constexpr System::Net::Http::Headers::HttpRequestHeaders __get_headers() const;

 int64_t __declspec(property(get=__get_buffer_size, put=__set_buffer_size))  buffer_size;

constexpr void __set_buffer_size(int64_t value) ;

constexpr int64_t __get_buffer_size() const;

 System::TimeSpan __declspec(property(get=__get_timeout, put=__set_timeout))  timeout;

constexpr void __set_timeout(System::TimeSpan value) ;

constexpr System::TimeSpan __get_timeout() const;


// Properties

 int64_t __declspec(property(get=get_MaxResponseContentBufferSize))  MaxResponseContentBufferSize;

 System::TimeSpan __declspec(property(put=set_Timeout))  Timeout;


// Methods

static System::Net::Http::HttpClient New_ctor() ;

/// @brief Method .ctor addr 0x269f284 size 0x64 virtual false final false
 void _ctor() ;

static System::Net::Http::HttpClient New_ctor(System::Net::Http::HttpMessageHandler handler, bool disposeHandler) ;

/// @brief Method .ctor addr 0x269f2e8 size 0xbc virtual false final false
 void _ctor(System::Net::Http::HttpMessageHandler handler, bool disposeHandler) ;

/// @brief Method get_MaxResponseContentBufferSize addr 0x269f428 size 0x8 virtual false final false
 int64_t get_MaxResponseContentBufferSize() ;

/// @brief Method set_Timeout addr 0x269f430 size 0x134 virtual false final false
 void set_Timeout(System::TimeSpan value) ;

/// @brief Method Dispose addr 0x269f564 size 0x6c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method GetAsync addr 0x269f608 size 0xdc virtual false final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> GetAsync(System::Uri requestUri, System::Net::Http::HttpCompletionOption completionOption) ;

/// @brief Method SendAsync addr 0x269f798 size 0x74 virtual false final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsync(System::Net::Http::HttpRequestMessage request) ;

/// @brief Method SendAsync addr 0x269f720 size 0x78 virtual false final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsync(System::Net::Http::HttpRequestMessage request, System::Net::Http::HttpCompletionOption completionOption) ;

/// @brief Method SendAsync addr 0x269fa9c size 0xc virtual true final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsync(System::Net::Http::HttpRequestMessage request, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendAsync addr 0x269f80c size 0x290 virtual false final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsync(System::Net::Http::HttpRequestMessage request, System::Net::Http::HttpCompletionOption completionOption, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendAsyncWorker addr 0x269fd60 size 0x118 virtual false final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsyncWorker(System::Net::Http::HttpRequestMessage request, System::Net::Http::HttpCompletionOption completionOption, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method GetStringAsync addr 0x269fe78 size 0x100 virtual false final false
 System::Threading::Tasks::Task_1<::StringW> GetStringAsync(System::Uri requestUri) ;

/// @brief Method <>n__0 addr 0x269fff4 size 0x20 virtual false final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> __n__0(System::Net::Http::HttpRequestMessage request, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::HttpClient);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpClient, "System.Net.Http", "HttpClient");
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::System__Net__Http__HttpClient___GetStringAsync_d__53, "System.Net.Http", "HttpClient/<GetStringAsync>d__53");
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::System__Net__Http__HttpClient___SendAsyncWorker_d__47, "System.Net.Http", "HttpClient/<SendAsyncWorker>d__47");
