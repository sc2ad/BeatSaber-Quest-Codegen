#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
template<typename TRequest,typename TResponse>
struct GlobalNamespace__GraphAPIClient___Post_d__4_2;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class HttpClient;
}
namespace GlobalNamespace {
template<typename TResponse>
struct GlobalNamespace__GraphAPIClient___Post_d__5_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__GraphAPIClient__PostOptions;
}
namespace System {
class Uri;
}
namespace System::Threading {
struct CancellationToken;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class UriBuilder;
}
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceRequest;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
// Forward declare root types
namespace GlobalNamespace {
class GraphAPIClient;
}
namespace GlobalNamespace {
template<typename TRequest,typename TResponse>
struct GlobalNamespace__GraphAPIClient___Post_d__4_2;
}
namespace GlobalNamespace {
template<typename TResponse>
struct GlobalNamespace__GraphAPIClient___Post_d__5_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__GraphAPIClient__PostOptions;
}
namespace GlobalNamespace {
template<>
struct GlobalNamespace__GraphAPIClient___Post_d__4_2<BGNet::Core::GameLift::GetMultiplayerInstanceRequest,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TRequest,::cordl_internals::il2cpp_reference_type TResponse>
struct GlobalNamespace__GraphAPIClient___Post_d__4_2<TRequest,TResponse>;
}
namespace GlobalNamespace {
template<>
struct GlobalNamespace__GraphAPIClient___Post_d__5_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TResponse>
struct GlobalNamespace__GraphAPIClient___Post_d__5_1<TResponse>;
}
// Type: ::PostOptions
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12711))
// CS Name: GraphAPIClient::PostOptions
struct CORDL_TYPE GlobalNamespace__GraphAPIClient__PostOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "MaxRetries", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MinWaitTimeForRetryMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "WithExponentialBackoff", ty: "bool", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GraphAPIClient__PostOptions(int32_t MaxRetries, int32_t MinWaitTimeForRetryMs, bool WithExponentialBackoff) noexcept;


                    constexpr GlobalNamespace__GraphAPIClient__PostOptions(GlobalNamespace__GraphAPIClient__PostOptions const&) = default;
                    constexpr GlobalNamespace__GraphAPIClient__PostOptions(GlobalNamespace__GraphAPIClient__PostOptions&&) = default;
                    constexpr GlobalNamespace__GraphAPIClient__PostOptions& operator=(GlobalNamespace__GraphAPIClient__PostOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GraphAPIClient__PostOptions& operator=(GlobalNamespace__GraphAPIClient__PostOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GraphAPIClient__PostOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_MaxRetries, put=__set_MaxRetries))  MaxRetries;

constexpr void __set_MaxRetries(int32_t value) ;

constexpr int32_t __get_MaxRetries() const;

 int32_t __declspec(property(get=__get_MinWaitTimeForRetryMs, put=__set_MinWaitTimeForRetryMs))  MinWaitTimeForRetryMs;

constexpr void __set_MinWaitTimeForRetryMs(int32_t value) ;

constexpr int32_t __get_MinWaitTimeForRetryMs() const;

 bool __declspec(property(get=__get_WithExponentialBackoff, put=__set_WithExponentialBackoff))  WithExponentialBackoff;

constexpr void __set_WithExponentialBackoff(bool value) ;

constexpr bool __get_WithExponentialBackoff() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Post>d__4`2
// Type: ::<Post>d__5`1
// Type: ::GraphAPIClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12714))
// CS Name: GraphAPIClient
class CORDL_TYPE GraphAPIClient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TResponse>
using _Post_d__5_1 = GlobalNamespace::GlobalNamespace__GraphAPIClient___Post_d__5_1<TResponse>;

template<typename TRequest,typename TResponse>
using _Post_d__4_2 = GlobalNamespace::GlobalNamespace__GraphAPIClient___Post_d__4_2<TRequest, TResponse>;

using PostOptions = GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GraphAPIClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphAPIClient", modifiers: " const&", def_value: None }]
constexpr GraphAPIClient(GraphAPIClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphAPIClient", modifiers: "&&", def_value: None }]
constexpr GraphAPIClient(GraphAPIClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GraphAPIClient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GraphAPIClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GraphAPIClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GraphAPIClient& operator=(GraphAPIClient&& o) noexcept = default;
  constexpr GraphAPIClient& operator=(GraphAPIClient const& o) noexcept = default;
                


// Fields

 GlobalNamespace::INetworkConfig __declspec(property(get=__get__networkConfig, put=__set__networkConfig))  _networkConfig;

constexpr void __set__networkConfig(GlobalNamespace::INetworkConfig value) ;

constexpr GlobalNamespace::INetworkConfig __get__networkConfig() const;

 System::Net::Http::HttpClient __declspec(property(get=__get__client, put=__set__client))  _client;

constexpr void __set__client(System::Net::Http::HttpClient value) ;

constexpr System::Net::Http::HttpClient __get__client() const;


// Methods

static GlobalNamespace::GraphAPIClient New_ctor(GlobalNamespace::INetworkConfig networkConfig) ;

/// @brief Method .ctor addr 0xdaf338 size 0x7c virtual false final false
 void _ctor(GlobalNamespace::INetworkConfig networkConfig) ;

/// @brief Method PostLoggedOut addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TRequest,typename TResponse>
 System::Threading::Tasks::Task_1<TResponse> PostLoggedOut(::StringW path, TRequest request, GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions postOptions, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Post addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TRequest,typename TResponse>
 System::Threading::Tasks::Task_1<TResponse> Post(::StringW path, ::StringW accessToken, TRequest request, GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions postOptions, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Post addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResponse>
 System::Threading::Tasks::Task_1<TResponse> Post(System::Uri uri, ::StringW accessToken, System::Net::Http::HttpContent httpContent, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CalculateDelayMsBeforeRetry addr 0xdaf3b4 size 0x98 virtual false final false
static int32_t CalculateDelayMsBeforeRetry(int32_t numAttempts, GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions postOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Post>d__4`2
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12712)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12712), inst: 86 })
// CS Name: GraphAPIClient::<Post>d__4`2
struct CORDL_TYPE GlobalNamespace__GraphAPIClient___Post_d__4_2<BGNet::Core::GameLift::GetMultiplayerInstanceRequest,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GraphAPIClient", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "request", ty: "BGNet::Core::GameLift::GetMultiplayerInstanceRequest", modifiers: "", def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "postOptions", ty: "GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "System::UriBuilder", modifiers: "", def_value: None }, CppParam { name: "_httpContent_5__3", ty: "System::Net::Http::HttpContent", modifiers: "", def_value: None }, CppParam { name: "_numAttempts_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __t__builder, GlobalNamespace::GraphAPIClient __4__this, ::StringW path, BGNet::Core::GameLift::GetMultiplayerInstanceRequest request, ::StringW accessToken, System::Threading::CancellationToken cancellationToken, GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions postOptions, System::UriBuilder _uriBuilder_5__2, System::Net::Http::HttpContent _httpContent_5__3, int32_t _numAttempts_5__4, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2(GlobalNamespace__GraphAPIClient___Post_d__4_2 const&) = default;
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2(GlobalNamespace__GraphAPIClient___Post_d__4_2&&) = default;
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2& operator=(GlobalNamespace__GraphAPIClient___Post_d__4_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2& operator=(GlobalNamespace__GraphAPIClient___Post_d__4_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GraphAPIClient___Post_d__4_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __get___t__builder() const;

 GlobalNamespace::GraphAPIClient __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GraphAPIClient value) ;

constexpr GlobalNamespace::GraphAPIClient __get___4__this() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 BGNet::Core::GameLift::GetMultiplayerInstanceRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(BGNet::Core::GameLift::GetMultiplayerInstanceRequest value) ;

constexpr BGNet::Core::GameLift::GetMultiplayerInstanceRequest __get_request() const;

 ::StringW __declspec(property(get=__get_accessToken, put=__set_accessToken))  accessToken;

constexpr void __set_accessToken(::StringW value) ;

constexpr ::StringW __get_accessToken() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions __declspec(property(get=__get_postOptions, put=__set_postOptions))  postOptions;

constexpr void __set_postOptions(GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions value) ;

constexpr GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions __get_postOptions() const;

 System::UriBuilder __declspec(property(get=__get__uriBuilder_5__2, put=__set__uriBuilder_5__2))  _uriBuilder_5__2;

constexpr void __set__uriBuilder_5__2(System::UriBuilder value) ;

constexpr System::UriBuilder __get__uriBuilder_5__2() const;

 System::Net::Http::HttpContent __declspec(property(get=__get__httpContent_5__3, put=__set__httpContent_5__3))  _httpContent_5__3;

constexpr void __set__httpContent_5__3(System::Net::Http::HttpContent value) ;

constexpr System::Net::Http::HttpContent __get__httpContent_5__3() const;

 int32_t __declspec(property(get=__get__numAttempts_5__4, put=__set__numAttempts_5__4))  _numAttempts_5__4;

constexpr void __set__numAttempts_5__4(int32_t value) ;

constexpr int32_t __get__numAttempts_5__4() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Post>d__4`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TRequest,::cordl_internals::il2cpp_reference_type TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12712)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12712), inst: 80 })
// CS Name: GraphAPIClient::<Post>d__4`2
struct CORDL_TYPE GlobalNamespace__GraphAPIClient___Post_d__4_2<TRequest,TResponse> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GraphAPIClient", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "postOptions", ty: "GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "System::UriBuilder", modifiers: "", def_value: None }, CppParam { name: "_httpContent_5__3", ty: "System::Net::Http::HttpContent", modifiers: "", def_value: None }, CppParam { name: "_numAttempts_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, GlobalNamespace::GraphAPIClient __4__this, ::StringW path, TRequest request, ::StringW accessToken, System::Threading::CancellationToken cancellationToken, GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions postOptions, System::UriBuilder _uriBuilder_5__2, System::Net::Http::HttpContent _httpContent_5__3, int32_t _numAttempts_5__4, System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2(GlobalNamespace__GraphAPIClient___Post_d__4_2 const&) = default;
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2(GlobalNamespace__GraphAPIClient___Post_d__4_2&&) = default;
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2& operator=(GlobalNamespace__GraphAPIClient___Post_d__4_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__4_2& operator=(GlobalNamespace__GraphAPIClient___Post_d__4_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GraphAPIClient___Post_d__4_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __get___t__builder() const;

 GlobalNamespace::GraphAPIClient __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GraphAPIClient value) ;

constexpr GlobalNamespace::GraphAPIClient __get___4__this() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 TRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(TRequest value) ;

constexpr TRequest __get_request() const;

 ::StringW __declspec(property(get=__get_accessToken, put=__set_accessToken))  accessToken;

constexpr void __set_accessToken(::StringW value) ;

constexpr ::StringW __get_accessToken() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions __declspec(property(get=__get_postOptions, put=__set_postOptions))  postOptions;

constexpr void __set_postOptions(GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions value) ;

constexpr GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions __get_postOptions() const;

 System::UriBuilder __declspec(property(get=__get__uriBuilder_5__2, put=__set__uriBuilder_5__2))  _uriBuilder_5__2;

constexpr void __set__uriBuilder_5__2(System::UriBuilder value) ;

constexpr System::UriBuilder __get__uriBuilder_5__2() const;

 System::Net::Http::HttpContent __declspec(property(get=__get__httpContent_5__3, put=__set__httpContent_5__3))  _httpContent_5__3;

constexpr void __set__httpContent_5__3(System::Net::Http::HttpContent value) ;

constexpr System::Net::Http::HttpContent __get__httpContent_5__3() const;

 int32_t __declspec(property(get=__get__numAttempts_5__4, put=__set__numAttempts_5__4))  _numAttempts_5__4;

constexpr void __set__numAttempts_5__4(int32_t value) ;

constexpr int32_t __get__numAttempts_5__4() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Post>d__5`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12713)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12713), inst: 89 })
// CS Name: GraphAPIClient::<Post>d__5`1
struct CORDL_TYPE GlobalNamespace__GraphAPIClient___Post_d__5_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "httpContent", ty: "System::Net::Http::HttpContent", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GraphAPIClient", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_requestMessage_5__2", ty: "System::Net::Http::HttpRequestMessage", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __t__builder, System::Uri uri, ::StringW accessToken, System::Net::Http::HttpContent httpContent, GlobalNamespace::GraphAPIClient __4__this, System::Threading::CancellationToken cancellationToken, System::Net::Http::HttpRequestMessage _requestMessage_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept;


                    constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1(GlobalNamespace__GraphAPIClient___Post_d__5_1 const&) = default;
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1(GlobalNamespace__GraphAPIClient___Post_d__5_1&&) = default;
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1& operator=(GlobalNamespace__GraphAPIClient___Post_d__5_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1& operator=(GlobalNamespace__GraphAPIClient___Post_d__5_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GraphAPIClient___Post_d__5_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> __get___t__builder() const;

 System::Uri __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(System::Uri value) ;

constexpr System::Uri __get_uri() const;

 ::StringW __declspec(property(get=__get_accessToken, put=__set_accessToken))  accessToken;

constexpr void __set_accessToken(::StringW value) ;

constexpr ::StringW __get_accessToken() const;

 System::Net::Http::HttpContent __declspec(property(get=__get_httpContent, put=__set_httpContent))  httpContent;

constexpr void __set_httpContent(System::Net::Http::HttpContent value) ;

constexpr System::Net::Http::HttpContent __get_httpContent() const;

 GlobalNamespace::GraphAPIClient __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GraphAPIClient value) ;

constexpr GlobalNamespace::GraphAPIClient __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::Http::HttpRequestMessage __declspec(property(get=__get__requestMessage_5__2, put=__set__requestMessage_5__2))  _requestMessage_5__2;

constexpr void __set__requestMessage_5__2(System::Net::Http::HttpRequestMessage value) ;

constexpr System::Net::Http::HttpRequestMessage __get__requestMessage_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Post>d__5`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(12713))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12713), inst: 2 })
// CS Name: GraphAPIClient::<Post>d__5`1
struct CORDL_TYPE GlobalNamespace__GraphAPIClient___Post_d__5_1<TResponse> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "accessToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "httpContent", ty: "System::Net::Http::HttpContent", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GraphAPIClient", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_requestMessage_5__2", ty: "System::Net::Http::HttpRequestMessage", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __t__builder, System::Uri uri, ::StringW accessToken, System::Net::Http::HttpContent httpContent, GlobalNamespace::GraphAPIClient __4__this, System::Threading::CancellationToken cancellationToken, System::Net::Http::HttpRequestMessage _requestMessage_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept;


                    constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1(GlobalNamespace__GraphAPIClient___Post_d__5_1 const&) = default;
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1(GlobalNamespace__GraphAPIClient___Post_d__5_1&&) = default;
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1& operator=(GlobalNamespace__GraphAPIClient___Post_d__5_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GraphAPIClient___Post_d__5_1& operator=(GlobalNamespace__GraphAPIClient___Post_d__5_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GraphAPIClient___Post_d__5_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResponse> __get___t__builder() const;

 System::Uri __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(System::Uri value) ;

constexpr System::Uri __get_uri() const;

 ::StringW __declspec(property(get=__get_accessToken, put=__set_accessToken))  accessToken;

constexpr void __set_accessToken(::StringW value) ;

constexpr ::StringW __get_accessToken() const;

 System::Net::Http::HttpContent __declspec(property(get=__get_httpContent, put=__set_httpContent))  httpContent;

constexpr void __set_httpContent(System::Net::Http::HttpContent value) ;

constexpr System::Net::Http::HttpContent __get_httpContent() const;

 GlobalNamespace::GraphAPIClient __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GraphAPIClient value) ;

constexpr GlobalNamespace::GraphAPIClient __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::Http::HttpRequestMessage __declspec(property(get=__get__requestMessage_5__2, put=__set__requestMessage_5__2))  _requestMessage_5__2;

constexpr void __set__requestMessage_5__2(System::Net::Http::HttpRequestMessage value) ;

constexpr System::Net::Http::HttpRequestMessage __get__requestMessage_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::Http::HttpResponseMessage> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GraphAPIClient);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GraphAPIClient, "", "GraphAPIClient");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::GlobalNamespace__GraphAPIClient___Post_d__4_2, "", "GraphAPIClient/<Post>d__4`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::GlobalNamespace__GraphAPIClient___Post_d__5_1, "", "GraphAPIClient/<Post>d__5`1");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GraphAPIClient__PostOptions, "", "GraphAPIClient/PostOptions");
