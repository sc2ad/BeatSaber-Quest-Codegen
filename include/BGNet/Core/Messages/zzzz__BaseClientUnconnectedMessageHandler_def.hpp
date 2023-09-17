#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace System::Threading {
struct CancellationToken;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net {
class IPEndPoint;
}
namespace BGNet::Core::Messages {
class HelloVerifyRequest;
}
namespace System::Security::Authentication {
class AuthenticationException;
}
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace GlobalNamespace {
class ICertificateValidator;
}
namespace System::Threading::Tasks {
class Task;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin;
}
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateRequest;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace BGNet::Core::Messages {
class ChangeCipherSpecRequest;
}
namespace BGNet::Core::Messages {
class ServerCertificateRequest;
}
namespace GlobalNamespace {
class GlobalNamespace__EncryptionUtility__IEncryptionState;
}
namespace BGNet::Core::Messages {
class ServerHelloRequest;
}
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateResponse;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0;
}
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0;
}
namespace BGNet::Core::Messages {
class BaseClientUnconnectedMessageHandler;
}
namespace BGNet::Core::Messages {
template<typename T>
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1;
}
namespace BGNet::Core::Messages {
template<typename T>
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type T>
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1<T>;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type T>
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1<T>;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21;
}
namespace GlobalNamespace {
struct BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d;
}
namespace {
// Type: ::<SendOrderedAuthenticatedRequest>d__21
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12938))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<SendOrderedAuthenticatedRequest>d__21
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "queue", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_task_5__2", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, ::StringW queue, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::Task _task_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 ::StringW __declspec(property(get=__get_queue, put=__set_queue))  queue;

constexpr void __set_queue(::StringW value) ;

constexpr ::StringW __get_queue() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Threading::Tasks::Task __declspec(property(get=__get__task_5__2, put=__set__task_5__2))  _task_5__2;

constexpr void __set__task_5__2(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get__task_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdd9cf0 size 0x304 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdd9ff4 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<SendOrderedAuthenticatedRequestAsync>d__22
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12939))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<SendOrderedAuthenticatedRequestAsync>d__22
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "previousTask", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Threading::Tasks::Task previousTask, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 System::Threading::Tasks::Task __declspec(property(get=__get_previousTask, put=__set_previousTask))  previousTask;

constexpr void __set_previousTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_previousTask() const;

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdda000 size 0x3dc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdda3dc size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<SendAuthenticatedRequestAsync>d__23`1
// Type: ::<SendAuthenticatedRequestAsync>d__24
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12941))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<SendAuthenticatedRequestAsync>d__24
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdda3e8 size 0x2bc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdda6a4 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<OnSendFailed>d__25
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12942))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<OnSendFailed>d__25
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Net::IPEndPoint __declspec(property(get=__get_remoteEndPoint, put=__set_remoteEndPoint))  remoteEndPoint;

constexpr void __set_remoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_remoteEndPoint() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdda6b0 size 0x330 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdda9e0 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<OnSendFailedAwaitResponse>d__26`1
// Type: ::<ReauthenticateWithServer>d__27
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12944))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<ReauthenticateWithServer>d__27
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdda9ec size 0x1e4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xddabd0 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<AuthenticateWithServer>d__30
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12945))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<AuthenticateWithServer>d__30
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xddabdc size 0x21c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xddadf8 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<AuthenticateWithServerAsyncInternalVerbose>d__31
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12946))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<AuthenticateWithServerAsyncInternalVerbose>d__31
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xddae04 size 0x39c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xddb1a0 size 0x100c virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<<AuthenticateWithServerAsyncInternal>b__0>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12947))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<>c__DisplayClass32_0::<<AuthenticateWithServerAsyncInternal>b__0>d
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "result", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> result, BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __get___t__builder() const;

 System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> __get_result() const;

 BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xddc35c size 0x2b0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xddc60c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass32_0
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12948))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<>c__DisplayClass32_0
class CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __AuthenticateWithServerAsyncInternal_b__0_d = GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0&& o) noexcept = default;
  constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 const& o) noexcept = default;
                


// Fields

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serverPublicKey, put=__set_serverPublicKey))  serverPublicKey;

constexpr void __set_serverPublicKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serverPublicKey() const;


// Methods

// Ctor Parameters []
explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0() ;

/// @brief Method .ctor addr 0xddc1ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AuthenticateWithServerAsyncInternal>b__1 addr 0xddc1b4 size 0x94 virtual false final false
 System::Threading::Tasks::Task_1<BGNet::Core::Messages::HelloVerifyRequest> _AuthenticateWithServerAsyncInternal_b__1(uint32_t protocolVersion, System::Net::IPEndPoint ep, BGNet::Core::Messages::IUnconnectedReliableRequest request, System::Threading::CancellationToken ct) ;

/// @brief Method <AuthenticateWithServerAsyncInternal>b__0 addr 0xddc260 size 0xfc virtual false final false
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> _AuthenticateWithServerAsyncInternal_b__0(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<AuthenticateWithServerAsyncInternal>d__32
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12949))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<AuthenticateWithServerAsyncInternal>d__32
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0", modifiers: "", def_value: None }, CppParam { name: "_endPoint_5__2", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "_authenticationRequest_5__3", ty: "BGNet::Core::Messages::IUnconnectedAuthenticateRequest", modifiers: "", def_value: None }, CppParam { name: "_clientRandom_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_generateKeysTask_5__5", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>", modifiers: "", def_value: None }, CppParam { name: "_serverCertificateTask_5__6", ty: "System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest>", modifiers: "", def_value: None }, CppParam { name: "_serverRandom_5__7", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_signature_5__8", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_responseId_5__9", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_getPreMasterSecretTask_5__10", ty: "System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "_verifySignatureTask_5__11", ty: "System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: None }, CppParam { name: "_clientKeys_5__12", ty: "GlobalNamespace::IDiffieHellmanKeyPair", modifiers: "", def_value: None }, CppParam { name: "_encryptionState_5__13", ty: "GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest>", modifiers: "", def_value: None }, CppParam { name: "__u__5", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest>", modifiers: "", def_value: None }, CppParam { name: "__u__6", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>", modifiers: "", def_value: None }, CppParam { name: "__u__7", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__8", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest>", modifiers: "", def_value: None }, CppParam { name: "__u__9", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "__u__10", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: None }, CppParam { name: "__u__11", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 __8__1, System::Net::IPEndPoint _endPoint_5__2, BGNet::Core::Messages::IUnconnectedAuthenticateRequest _authenticationRequest_5__3, ::ArrayW<uint8_t> _clientRandom_5__4, System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> _generateKeysTask_5__5, System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest> _serverCertificateTask_5__6, ::ArrayW<uint8_t> _serverRandom_5__7, ::ArrayW<uint8_t> _signature_5__8, uint32_t _responseId_5__9, System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> _getPreMasterSecretTask_5__10, System::Threading::Tasks::Task_1<bool> _verifySignatureTask_5__11, GlobalNamespace::IDiffieHellmanKeyPair _clientKeys_5__12, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState _encryptionState_5__13, System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest> __u__3, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest> __u__4, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest> __u__5, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> __u__6, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__7, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest> __u__8, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__9, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __u__10, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse> __u__11) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xe8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0 __get___8__1() const;

 System::Net::IPEndPoint __declspec(property(get=__get__endPoint_5__2, put=__set__endPoint_5__2))  _endPoint_5__2;

constexpr void __set__endPoint_5__2(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get__endPoint_5__2() const;

 BGNet::Core::Messages::IUnconnectedAuthenticateRequest __declspec(property(get=__get__authenticationRequest_5__3, put=__set__authenticationRequest_5__3))  _authenticationRequest_5__3;

constexpr void __set__authenticationRequest_5__3(BGNet::Core::Messages::IUnconnectedAuthenticateRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedAuthenticateRequest __get__authenticationRequest_5__3() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__clientRandom_5__4, put=__set__clientRandom_5__4))  _clientRandom_5__4;

constexpr void __set__clientRandom_5__4(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__clientRandom_5__4() const;

 System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> __declspec(property(get=__get__generateKeysTask_5__5, put=__set__generateKeysTask_5__5))  _generateKeysTask_5__5;

constexpr void __set__generateKeysTask_5__5(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> __get__generateKeysTask_5__5() const;

 System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest> __declspec(property(get=__get__serverCertificateTask_5__6, put=__set__serverCertificateTask_5__6))  _serverCertificateTask_5__6;

constexpr void __set__serverCertificateTask_5__6(System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest> value) ;

constexpr System::Threading::Tasks::Task_1<BGNet::Core::Messages::ServerCertificateRequest> __get__serverCertificateTask_5__6() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__serverRandom_5__7, put=__set__serverRandom_5__7))  _serverRandom_5__7;

constexpr void __set__serverRandom_5__7(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__serverRandom_5__7() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__signature_5__8, put=__set__signature_5__8))  _signature_5__8;

constexpr void __set__signature_5__8(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__signature_5__8() const;

 uint32_t __declspec(property(get=__get__responseId_5__9, put=__set__responseId_5__9))  _responseId_5__9;

constexpr void __set__responseId_5__9(uint32_t value) ;

constexpr uint32_t __get__responseId_5__9() const;

 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> __declspec(property(get=__get__getPreMasterSecretTask_5__10, put=__set__getPreMasterSecretTask_5__10))  _getPreMasterSecretTask_5__10;

constexpr void __set__getPreMasterSecretTask_5__10(System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> value) ;

constexpr System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> __get__getPreMasterSecretTask_5__10() const;

 System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get__verifySignatureTask_5__11, put=__set__verifySignatureTask_5__11))  _verifySignatureTask_5__11;

constexpr void __set__verifySignatureTask_5__11(System::Threading::Tasks::Task_1<bool> value) ;

constexpr System::Threading::Tasks::Task_1<bool> __get__verifySignatureTask_5__11() const;

 GlobalNamespace::IDiffieHellmanKeyPair __declspec(property(get=__get__clientKeys_5__12, put=__set__clientKeys_5__12))  _clientKeys_5__12;

constexpr void __set__clientKeys_5__12(GlobalNamespace::IDiffieHellmanKeyPair value) ;

constexpr GlobalNamespace::IDiffieHellmanKeyPair __get__clientKeys_5__12() const;

 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState __declspec(property(get=__get__encryptionState_5__13, put=__set__encryptionState_5__13))  _encryptionState_5__13;

constexpr void __set__encryptionState_5__13(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState value) ;

constexpr GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState __get__encryptionState_5__13() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Net::IPEndPoint> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> __get___u__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest> __declspec(property(get=__get___u__3, put=__set___u__3))  __u__3;

constexpr void __set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::HelloVerifyRequest> __get___u__3() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest> __declspec(property(get=__get___u__4, put=__set___u__4))  __u__4;

constexpr void __set___u__4(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerHelloRequest> __get___u__4() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest> __declspec(property(get=__get___u__5, put=__set___u__5))  __u__5;

constexpr void __set___u__5(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ServerCertificateRequest> __get___u__5() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> __declspec(property(get=__get___u__6, put=__set___u__6))  __u__6;

constexpr void __set___u__6(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> __get___u__6() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__7, put=__set___u__7))  __u__7;

constexpr void __set___u__7(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__7() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest> __declspec(property(get=__get___u__8, put=__set___u__8))  __u__8;

constexpr void __set___u__8(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ChangeCipherSpecRequest> __get___u__8() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __declspec(property(get=__get___u__9, put=__set___u__9))  __u__9;

constexpr void __set___u__9(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __get___u__9() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __declspec(property(get=__get___u__10, put=__set___u__10))  __u__10;

constexpr void __set___u__10(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __get___u__10() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse> __declspec(property(get=__get___u__11, put=__set___u__11))  __u__11;

constexpr void __set___u__11(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateResponse> __get___u__11() const;


// Methods

/// @brief Method MoveNext addr 0xddc664 size 0x13d8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xddddc4 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<>c__DisplayClass35_0
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12950))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<>c__DisplayClass35_0
class CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0&& o) noexcept = default;
  constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientRandom, put=__set_clientRandom))  clientRandom;

constexpr void __set_clientRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serverRandom, put=__set_serverRandom))  serverRandom;

constexpr void __set_serverRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serverRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serverKey, put=__set_serverKey))  serverKey;

constexpr void __set_serverKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serverKey() const;

 ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_certData, put=__set_certData))  certData;

constexpr void __set_certData(::ArrayW<::ArrayW<uint8_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint8_t>> __get_certData() const;

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_signature() const;


// Methods

// Ctor Parameters []
explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0() ;

/// @brief Method .ctor addr 0xddddd0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <VerifySignature>b__0 addr 0xddddd8 size 0x610 virtual false final false
 bool _VerifySignature_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: BGNet.Core.Messages::BaseClientUnconnectedMessageHandler
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13009))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12951))
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
class CORDL_TYPE BaseClientUnconnectedMessageHandler : public BGNet::Core::Messages::UnconnectedMessageHandler {
public:
// Declarations
using __c__DisplayClass35_0 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0;

using _AuthenticateWithServerAsyncInternal_d__32 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32;

using __c__DisplayClass32_0 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0;

using _AuthenticateWithServerAsyncInternalVerbose_d__31 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31;

using _AuthenticateWithServer_d__30 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30;

using _ReauthenticateWithServer_d__27 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27;

template<typename T>
using _OnSendFailedAwaitResponse_d__26_1 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1<T>;

using _OnSendFailed_d__25 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25;

using _SendAuthenticatedRequestAsync_d__24 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24;

template<typename T>
using _SendAuthenticatedRequestAsync_d__23_1 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1<T>;

using _SendOrderedAuthenticatedRequestAsync_d__22 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22;

using _SendOrderedAuthenticatedRequest_d__21 = BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~BaseClientUnconnectedMessageHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseClientUnconnectedMessageHandler", modifiers: " const&", def_value: None }]
constexpr BaseClientUnconnectedMessageHandler(BaseClientUnconnectedMessageHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseClientUnconnectedMessageHandler", modifiers: "&&", def_value: None }]
constexpr BaseClientUnconnectedMessageHandler(BaseClientUnconnectedMessageHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseClientUnconnectedMessageHandler(void* ptr) noexcept : BGNet::Core::Messages::UnconnectedMessageHandler(ptr) {
}


  constexpr BaseClientUnconnectedMessageHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseClientUnconnectedMessageHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseClientUnconnectedMessageHandler& operator=(BaseClientUnconnectedMessageHandler&& o) noexcept = default;
  constexpr BaseClientUnconnectedMessageHandler& operator=(BaseClientUnconnectedMessageHandler const& o) noexcept = default;
                


// Fields

 GlobalNamespace::DnsEndPoint __declspec(property(get=__get__endPoint, put=__set__endPoint))  _endPoint;

constexpr void __set__endPoint(GlobalNamespace::DnsEndPoint value) ;

constexpr GlobalNamespace::DnsEndPoint __get__endPoint() const;

 GlobalNamespace::ICertificateValidator __declspec(property(get=__get__certificateValidator, put=__set__certificateValidator))  _certificateValidator;

constexpr void __set__certificateValidator(GlobalNamespace::ICertificateValidator value) ;

constexpr GlobalNamespace::ICertificateValidator __get__certificateValidator() const;

static LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__authenticationDataWriter, put=__set__authenticationDataWriter))  _authenticationDataWriter;

static void __set__authenticationDataWriter(LiteNetLib::Utils::NetDataWriter value) ;

static LiteNetLib::Utils::NetDataWriter __get__authenticationDataWriter() ;

 System::Threading::Tasks::Task __declspec(property(get=__get__authenticationTask, put=__set__authenticationTask))  _authenticationTask;

constexpr void __set__authenticationTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get__authenticationTask() const;

 System::Security::Authentication::AuthenticationException __declspec(property(get=__get__authenticationException, put=__set__authenticationException))  _authenticationException;

constexpr void __set__authenticationException(System::Security::Authentication::AuthenticationException value) ;

constexpr System::Security::Authentication::AuthenticationException __get__authenticationException() const;

 bool __declspec(property(get=__get__disposed, put=__set__disposed))  _disposed;

constexpr void __set__disposed(bool value) ;

constexpr bool __get__disposed() const;

 System::Collections::Generic::Dictionary_2<::StringW,System::Threading::Tasks::Task> __declspec(property(get=__get__orderedRequests, put=__set__orderedRequests))  _orderedRequests;

constexpr void __set__orderedRequests(System::Collections::Generic::Dictionary_2<::StringW,System::Threading::Tasks::Task> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,System::Threading::Tasks::Task> __get__orderedRequests() const;


// Properties

 GlobalNamespace::DnsEndPoint __declspec(property(get=get_endPoint))  endPoint;

 bool __declspec(property(get=get_isAuthenticated))  isAuthenticated;

 bool __declspec(property(get=get_isAuthenticating))  isAuthenticating;

 bool __declspec(property(get=get_hasAuthenticationFailed))  hasAuthenticationFailed;


// Methods

/// @brief Method get_endPoint addr 0xdd85e8 size 0x8 virtual false final false
 GlobalNamespace::DnsEndPoint get_endPoint() ;

/// @brief Method get_isAuthenticated addr 0xdd85f0 size 0x78 virtual false final false
 bool get_isAuthenticated() ;

/// @brief Method get_isAuthenticating addr 0xdd8668 size 0x5c virtual false final false
 bool get_isAuthenticating() ;

/// @brief Method get_hasAuthenticationFailed addr 0xdd86c4 size 0x10 virtual false final false
 bool get_hasAuthenticationFailed() ;

// Ctor Parameters [CppParam { name: "sender", ty: "GlobalNamespace::IUnconnectedMessageSender", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "GlobalNamespace::DnsEndPoint", modifiers: "", def_value: None }, CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "certificateValidator", ty: "GlobalNamespace::ICertificateValidator", modifiers: "", def_value: None }, CppParam { name: "analytics", ty: "BGNet::Core::IAnalyticsManager", modifiers: "", def_value: None }]
explicit BaseClientUnconnectedMessageHandler(GlobalNamespace::IUnconnectedMessageSender sender, GlobalNamespace::DnsEndPoint endPoint, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::ICertificateValidator certificateValidator, BGNet::Core::IAnalyticsManager analytics) ;

/// @brief Method .ctor addr 0xdd86d4 size 0x15c virtual false final false
 void _ctor(GlobalNamespace::IUnconnectedMessageSender sender, GlobalNamespace::DnsEndPoint endPoint, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::ICertificateValidator certificateValidator, BGNet::Core::IAnalyticsManager analytics) ;

/// @brief Method Dispose addr 0xdd915c size 0x10 virtual true final false
 void Dispose() ;

/// @brief Method GetMessageType addr 0xdd916c size 0x80 virtual true final false
 uint32_t GetMessageType(BGNet::Core::Messages::IUnconnectedMessage message) ;

/// @brief Method ShouldHandleMessage addr 0xdd91ec size 0x8c virtual true final false
 bool ShouldHandleMessage(BGNet::Core::Messages::IUnconnectedMessage packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method RegisterHandshakeMessageHandlers addr 0xdd8830 size 0x92c virtual false final false
 void RegisterHandshakeMessageHandlers() ;

/// @brief Method HandleHelloVerifyRequest addr 0xdd9278 size 0xb4 virtual false final false
 void HandleHelloVerifyRequest(BGNet::Core::Messages::HelloVerifyRequest packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method SendOrderedAuthenticatedRequest addr 0xdd932c size 0xb8 virtual false final false
 void SendOrderedAuthenticatedRequest(::StringW queue, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendOrderedAuthenticatedRequestAsync addr 0xdd93e4 size 0xf0 virtual false final false
 System::Threading::Tasks::Task SendOrderedAuthenticatedRequestAsync(System::Threading::Tasks::Task previousTask, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendAuthenticatedRequestAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Threading::Tasks::Task_1<T> SendAuthenticatedRequestAsync(BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendAuthenticatedRequestAsync addr 0xdd94d4 size 0xdc virtual false final false
 System::Threading::Tasks::Task SendAuthenticatedRequestAsync(BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method OnSendFailed addr 0xdd95b0 size 0xf8 virtual false final false
 System::Threading::Tasks::Task OnSendFailed(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method OnSendFailedAwaitResponse addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Threading::Tasks::Task_1<T> OnSendFailedAwaitResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method ReauthenticateWithServer addr 0xdd96a8 size 0xc8 virtual false final false
 System::Threading::Tasks::Task ReauthenticateWithServer() ;

/// @brief Method UnauthenticateWithServer addr 0xdd9770 size 0x68 virtual false final false
 void UnauthenticateWithServer() ;

/// @brief Method AuthenticateWithServerAsync addr 0xdd97d8 size 0xac virtual false final false
 System::Threading::Tasks::Task AuthenticateWithServerAsync() ;

/// @brief Method AuthenticateWithServer addr 0xdd9958 size 0x94 virtual false final false
 void AuthenticateWithServer() ;

/// @brief Method AuthenticateWithServerAsyncInternalVerbose addr 0xdd99ec size 0xc8 virtual false final false
 System::Threading::Tasks::Task AuthenticateWithServerAsyncInternalVerbose() ;

/// @brief Method AuthenticateWithServerAsyncInternal addr 0xdd9884 size 0xd4 virtual false final false
 System::Threading::Tasks::Task AuthenticateWithServerAsyncInternal() ;

/// @brief Method GetAuthenticationRequest addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> GetAuthenticationRequest() ;

/// @brief Method ShouldHandleMessageFromEndPoint addr 0xdd9ab4 size 0x38 virtual true final false
 bool ShouldHandleMessageFromEndPoint(System::Net::IPEndPoint endPoint) ;

/// @brief Method VerifySignature addr 0xdd9aec size 0x178 virtual false final false
 System::Threading::Tasks::Task_1<bool> VerifySignature(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, ::ArrayW<uint8_t> signature, ::ArrayW<::ArrayW<uint8_t>> certData) ;

/// @brief Method HandshakeLog addr 0xdd9c64 size 0x8c virtual false final false
 void HandshakeLog(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<SendAuthenticatedRequestAsync>d__23`1
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12940)), TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12940), inst: 2 })
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<SendAuthenticatedRequestAsync>d__23`1
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<T> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<T> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<T> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<OnSendFailedAwaitResponse>d__26`1
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12943)), TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12943), inst: 2 })
// CS Name: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler::<OnSendFailedAwaitResponse>d__26`1
struct CORDL_TYPE BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseClientUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __4__this, BGNet::Core::Messages::IUnconnectedReliableRequest message, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__2) noexcept;


                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1 const&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1&&) = default;
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1& operator=(BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseClientUnconnectedMessageHandler __get___4__this() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Net::IPEndPoint __declspec(property(get=__get_remoteEndPoint, put=__set_remoteEndPoint))  remoteEndPoint;

constexpr void __set_remoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_remoteEndPoint() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<T> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<T> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<T> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<>c__DisplayClass32_0");
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass35_0, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<>c__DisplayClass35_0");
NEED_NO_BOX(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailedAwaitResponse_d__26_1, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<OnSendFailedAwaitResponse>d__26`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__23_1, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<SendAuthenticatedRequestAsync>d__23`1");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternalVerbose_d__31, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<AuthenticateWithServerAsyncInternalVerbose>d__31");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServerAsyncInternal_d__32, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<AuthenticateWithServerAsyncInternal>d__32");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___AuthenticateWithServer_d__30, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<AuthenticateWithServer>d__30");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___OnSendFailed_d__25, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<OnSendFailed>d__25");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___ReauthenticateWithServer_d__27, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<ReauthenticateWithServer>d__27");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendAuthenticatedRequestAsync_d__24, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<SendAuthenticatedRequestAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequestAsync_d__22, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<SendOrderedAuthenticatedRequestAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler___SendOrderedAuthenticatedRequest_d__21, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<SendOrderedAuthenticatedRequest>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BGNet__Core__Messages__BaseClientUnconnectedMessageHandler____c__DisplayClass32_0____AuthenticateWithServerAsyncInternal_b__0_d, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<>c__DisplayClass32_0/<<AuthenticateWithServerAsyncInternal>b__0>d");
} // end anonymous namespace
