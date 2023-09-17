#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageReceiver_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__EncryptionUtility__IEncryptionState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class SmallBufferPool;
}
namespace BGNet::Core::Messages {
class IUnconnectedMultipartMessage;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableRequest;
}
namespace System::Net {
class IPEndPoint;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class Func_5;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace BGNet::Core::Messages {
class IUnconnectedUnreliableMessage;
}
namespace BGNet::Core::Messages {
class BaseAcknowledgeMessage;
}
namespace BGNet::Core::Messages {
class IUnconnectedReliableResponse;
}
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace GlobalNamespace {
template<typename TData>
class INetworkPacketSerializer_1;
}
namespace BGNet::Core::Messages {
class BaseMultipartMessage;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class ExpiringDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace BGNet::Core::Messages {
class IUnconnectedResponse;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace BGNet::Core::Messages {
template<typename T>
class BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1;
}
namespace BGNet::Core::Messages {
template<typename T>
class BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1;
}
namespace BGNet::Core::Messages {
template<typename T>
class BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1;
}
namespace BGNet::Core::Messages {
template<typename T>
class BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1;
}
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState;
}
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter;
}
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter;
}
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter;
}
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type T>
class BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type T>
class BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type T>
class BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>;
}
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type T>
class BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>;
}
namespace BGNet::Core::Messages {
class UnconnectedMessageHandler;
}
namespace BGNet::Core::Messages {
template<typename T>
struct BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1;
}
namespace BGNet::Core::Messages {
template<typename TRequest,typename TResponse>
struct BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2;
}
namespace BGNet::Core::Messages {
template<typename TRequest,typename TResponse>
struct BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2;
}
namespace BGNet::Core::Messages {
template<typename TRequest,typename TResponse>
struct BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2;
}
namespace BGNet::Core::Messages {
template<typename T>
struct BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1;
}
namespace GlobalNamespace {
template<typename T>
struct BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type T>
struct BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type TRequest,::cordl_internals::il2cpp_reference_type TResponse>
struct BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest,TResponse>;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type TRequest,::cordl_internals::il2cpp_reference_type TResponse>
struct BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest,TResponse>;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type TRequest,::cordl_internals::il2cpp_reference_type TResponse>
struct BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest,TResponse>;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75;
}
namespace BGNet::Core::Messages {
template<::cordl_internals::il2cpp_reference_type T>
struct BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
struct BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<T>;
}
namespace {
// Type: ::ConnectionState
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12988))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::ConnectionState
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState(BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState(BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState const& o) noexcept = default;
                


// Fields

/// @brief Field kEpochBitOffset offset 0
static constexpr int32_t  kEpochBitOffset{24};

/// @brief Field kRequestIdRange offset 0
static constexpr uint32_t  kRequestIdRange{16777216u};

/// @brief Field kRangeMask offset 0
static constexpr uint32_t  kRangeMask{16777215u};

/// @brief Field kEpochMask offset 0
static constexpr uint32_t  kEpochMask{4278190080u};

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 uint32_t __declspec(property(get=__get__protocolVersion, put=__set__protocolVersion))  _protocolVersion;

constexpr void __set__protocolVersion(uint32_t value) ;

constexpr uint32_t __get__protocolVersion() const;

 bool __declspec(property(get=__get__hasIdentity, put=__set__hasIdentity))  _hasIdentity;

constexpr void __set__hasIdentity(bool value) ;

constexpr bool __get__hasIdentity() const;

 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState __declspec(property(get=__get__encryptionState, put=__set__encryptionState))  _encryptionState;

constexpr void __set__encryptionState(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState value) ;

constexpr GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState __get__encryptionState() const;

/// @brief Field kRequestBufferLength offset 0
static constexpr int32_t  kRequestBufferLength{64};

 int32_t __declspec(property(get=__get__lastReceivedRequestIndex, put=__set__lastReceivedRequestIndex))  _lastReceivedRequestIndex;

constexpr void __set__lastReceivedRequestIndex(int32_t value) ;

constexpr int32_t __get__lastReceivedRequestIndex() const;

 uint32_t __declspec(property(get=__get__lastReceivedRequestId, put=__set__lastReceivedRequestId))  _lastReceivedRequestId;

constexpr void __set__lastReceivedRequestId(uint32_t value) ;

constexpr uint32_t __get__lastReceivedRequestId() const;

 int32_t __declspec(property(get=__get__receivedRequestCount, put=__set__receivedRequestCount))  _receivedRequestCount;

constexpr void __set__receivedRequestCount(int32_t value) ;

constexpr int32_t __get__receivedRequestCount() const;

 ::ArrayW<bool> __declspec(property(get=__get__receivedRequest, put=__set__receivedRequest))  _receivedRequest;

constexpr void __set__receivedRequest(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__receivedRequest() const;

 uint32_t __declspec(property(get=__get__currentRequestId, put=__set__currentRequestId))  _currentRequestId;

constexpr void __set__currentRequestId(uint32_t value) ;

constexpr uint32_t __get__currentRequestId() const;

 uint32_t __declspec(property(get=__get__currentEpoch, put=__set__currentEpoch))  _currentEpoch;

constexpr void __set__currentEpoch(uint32_t value) ;

constexpr uint32_t __get__currentEpoch() const;


// Properties

 bool __declspec(property(get=get_isEncrypted))  isEncrypted;


// Methods

/// @brief Method get_isEncrypted addr 0xde5ba0 size 0xac virtual false final false
 bool get_isEncrypted() ;

/// @brief Method GetNextRequestId addr 0xde5a64 size 0x1c virtual false final false
 uint32_t GetNextRequestId() ;

/// @brief Method BeginSession addr 0xde59a8 size 0x84 virtual false final false
 void BeginSession() ;

/// @brief Method IsValidSessionStartRequestId addr 0xde5ad8 size 0x3c virtual false final false
 bool IsValidSessionStartRequestId(uint32_t requestId) ;

/// @brief Method BeginSession addr 0xde5a2c size 0x38 virtual false final false
 void BeginSession(uint32_t requestId) ;

/// @brief Method SetEpoch addr 0xde5d94 size 0x24 virtual false final false
 void SetEpoch(uint32_t epoch) ;

/// @brief Method CanAcceptRequest addr 0xde42d4 size 0x120 virtual false final false
 bool CanAcceptRequest(uint32_t requestId) ;

/// @brief Method SetEncryptionState addr 0xde5db8 size 0x8 virtual false final false
 void SetEncryptionState(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState) ;

/// @brief Method SetIdentity addr 0xde5dc0 size 0x14 virtual false final false
 void SetIdentity(uint32_t protocolVersion, ::StringW userId, ::StringW userName) ;

/// @brief Method VerifyIdentity addr 0xde5dd4 size 0x6c virtual false final false
 bool VerifyIdentity(uint32_t protocolVersion, ::StringW userId, ::StringW userName) ;

/// @brief Method Dispose addr 0xde5e40 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method LogD addr 0xde5e50 size 0x8c virtual false final false
static void LogD(::StringW message) ;

// Ctor Parameters []
explicit BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState() ;

/// @brief Method .ctor addr 0xde5a80 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::RequestWaiterId
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2414)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2414), inst: 3318 }), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12989))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::RequestWaiterId
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>
constexpr operator  System::IEquatable_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>() const;

// Ctor Parameters [CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId(System::Net::IPEndPoint endPoint, uint32_t requestId) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId(BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId(BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Net::IPEndPoint __declspec(property(get=__get_endPoint, put=__set_endPoint))  endPoint;

constexpr void __set_endPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_endPoint() const;

 uint32_t __declspec(property(get=__get_requestId, put=__set_requestId))  requestId;

constexpr void __set_requestId(uint32_t value) ;

constexpr uint32_t __get_requestId() const;


// Methods

/// @brief Method .ctor addr 0xde4688 size 0xc virtual false final false
 void _ctor(System::Net::IPEndPoint endPoint, uint32_t requestId) ;

/// @brief Method Equals addr 0xde5edc size 0x40 virtual true final true
 bool Equals(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId other) ;

/// @brief Method Equals addr 0xde5f1c size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0xde5fa4 size 0x2c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::RequestWaiter
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12990))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::RequestWaiter
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter(BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter(BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter const& o) noexcept = default;
                


// Methods

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispose() ;

// Ctor Parameters []
explicit BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter() ;

/// @brief Method .ctor addr 0xde5fd0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::SentRequestWaiter
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12990))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12991))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::SentRequestWaiter
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter : public BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter(BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter(BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter(void* ptr) noexcept : BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<bool> __declspec(property(get=__get__taskCompletionSource, put=__set__taskCompletionSource))  _taskCompletionSource;

constexpr void __set__taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> __get__taskCompletionSource() const;

 System::Threading::CancellationTokenRegistration __declspec(property(get=__get__disposedCancellationTokenRegistration, put=__set__disposedCancellationTokenRegistration))  _disposedCancellationTokenRegistration;

constexpr void __set__disposedCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value) ;

constexpr System::Threading::CancellationTokenRegistration __get__disposedCancellationTokenRegistration() const;

 System::Threading::CancellationTokenRegistration __declspec(property(get=__get__requestCancellationTokenRegistration, put=__set__requestCancellationTokenRegistration))  _requestCancellationTokenRegistration;

constexpr void __set__requestCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value) ;

constexpr System::Threading::CancellationTokenRegistration __get__requestCancellationTokenRegistration() const;


// Properties

 System::Threading::Tasks::Task __declspec(property(get=get_task))  task;

 bool __declspec(property(get=get_isWaiting))  isWaiting;


// Methods

// Ctor Parameters [CppParam { name: "disposedCancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "requestCancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken) ;

/// @brief Method .ctor addr 0xde5fd8 size 0x154 virtual false final false
 void _ctor(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken) ;

/// @brief Method Dispose addr 0xde612c size 0xdc virtual true final false
 void Dispose() ;

/// @brief Method Complete addr 0xde4694 size 0xd4 virtual false final false
 void Complete(bool handled) ;

/// @brief Method Cancel addr 0xde626c size 0x50 virtual false final false
 void Cancel() ;

/// @brief Method get_task addr 0xde62bc size 0x48 virtual false final false
 System::Threading::Tasks::Task get_task() ;

/// @brief Method get_isWaiting addr 0xde6208 size 0x64 virtual false final false
 bool get_isWaiting() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::RequestResponseWaiter
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12990))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12992))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::RequestResponseWaiter
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter : public BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter(BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter(BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter(void* ptr) noexcept : BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskCompletionSource_1<BGNet::Core::Messages::IUnconnectedMessage> __declspec(property(get=__get__taskCompletionSource, put=__set__taskCompletionSource))  _taskCompletionSource;

constexpr void __set__taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<BGNet::Core::Messages::IUnconnectedMessage> value) ;

constexpr System::Threading::Tasks::TaskCompletionSource_1<BGNet::Core::Messages::IUnconnectedMessage> __get__taskCompletionSource() const;

 System::Threading::CancellationTokenRegistration __declspec(property(get=__get__disposedCancellationTokenRegistration, put=__set__disposedCancellationTokenRegistration))  _disposedCancellationTokenRegistration;

constexpr void __set__disposedCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value) ;

constexpr System::Threading::CancellationTokenRegistration __get__disposedCancellationTokenRegistration() const;

 System::Threading::CancellationTokenRegistration __declspec(property(get=__get__requestCancellationTokenRegistration, put=__set__requestCancellationTokenRegistration))  _requestCancellationTokenRegistration;

constexpr void __set__requestCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value) ;

constexpr System::Threading::CancellationTokenRegistration __get__requestCancellationTokenRegistration() const;


// Properties

 System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedMessage> __declspec(property(get=get_task))  task;

 bool __declspec(property(get=get_isWaiting))  isWaiting;


// Methods

// Ctor Parameters [CppParam { name: "disposedCancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "requestCancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
explicit BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken) ;

/// @brief Method .ctor addr 0xde6304 size 0x154 virtual false final false
 void _ctor(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken) ;

/// @brief Method Dispose addr 0xde6458 size 0xdc virtual true final false
 void Dispose() ;

/// @brief Method Complete addr 0xde4768 size 0xd8 virtual false final false
 void Complete(BGNet::Core::Messages::IUnconnectedMessage response) ;

/// @brief Method Fail addr 0xde6598 size 0x58 virtual false final false
 void Fail(System::Exception ex) ;

/// @brief Method Cancel addr 0xde65f0 size 0x50 virtual false final false
 void Cancel() ;

/// @brief Method get_task addr 0xde6640 size 0x48 virtual false final false
 System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedMessage> get_task() ;

/// @brief Method get_isWaiting addr 0xde6534 size 0x64 virtual false final false
 bool get_isWaiting() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::MultipartMessageWaiter
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12990))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12993))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::MultipartMessageWaiter
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter : public BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter(BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter(BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter(void* ptr) noexcept : BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SmallBufferPool __declspec(property(get=__get__bufferPool, put=__set__bufferPool))  _bufferPool;

constexpr void __set__bufferPool(GlobalNamespace::SmallBufferPool value) ;

constexpr GlobalNamespace::SmallBufferPool __get__bufferPool() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;

 System::Collections::Generic::List_1<System::ValueTuple_2<int32_t,int32_t>> __declspec(property(get=__get__ranges, put=__set__ranges))  _ranges;

constexpr void __set__ranges(System::Collections::Generic::List_1<System::ValueTuple_2<int32_t,int32_t>> value) ;

constexpr System::Collections::Generic::List_1<System::ValueTuple_2<int32_t,int32_t>> __get__ranges() const;

 bool __declspec(property(get=__get__isComplete, put=__set__isComplete))  _isComplete;

constexpr void __set__isComplete(bool value) ;

constexpr bool __get__isComplete() const;

 bool __declspec(property(get=__get__isDisposed, put=__set__isDisposed))  _isDisposed;

constexpr void __set__isDisposed(bool value) ;

constexpr bool __get__isDisposed() const;


// Properties

 bool __declspec(property(get=get_isWaiting))  isWaiting;

 ::ArrayW<uint8_t> __declspec(property(get=get_data))  data;

 int32_t __declspec(property(get=get_length))  length;


// Methods

// Ctor Parameters [CppParam { name: "bufferPool", ty: "GlobalNamespace::SmallBufferPool", modifiers: "", def_value: None }]
explicit BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter(GlobalNamespace::SmallBufferPool bufferPool) ;

/// @brief Method .ctor addr 0xde6688 size 0x90 virtual false final false
 void _ctor(GlobalNamespace::SmallBufferPool bufferPool) ;

/// @brief Method Dispose addr 0xde6718 size 0x38 virtual true final false
 void Dispose() ;

/// @brief Method Append addr 0xde6750 size 0x6a0 virtual false final false
 void Append(BGNet::Core::Messages::IUnconnectedMultipartMessage packet) ;

/// @brief Method get_isWaiting addr 0xde6df0 size 0x20 virtual false final false
 bool get_isWaiting() ;

/// @brief Method get_data addr 0xde6e10 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_data() ;

/// @brief Method get_length addr 0xde6e18 size 0x8 virtual false final false
 int32_t get_length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::MessageOrigin
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12994))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::MessageOrigin
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin(System::Net::IPEndPoint endPoint, uint32_t protocolVersion) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin(BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin(BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin& operator=(BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Net::IPEndPoint __declspec(property(get=__get_endPoint, put=__set_endPoint))  endPoint;

constexpr void __set_endPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_endPoint() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;


// Methods

/// @brief Method .ctor addr 0xde5938 size 0xc virtual false final false
 void _ctor(System::Net::IPEndPoint endPoint, uint32_t protocolVersion) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<>c__DisplayClass46_0`1
// Type: ::<>c__DisplayClass52_0`1
// Type: ::<>c__DisplayClass53_0`1
// Type: ::<GetAndSendResponse>d__57`2
// Type: ::<GetAndSendResponseAsync>d__58`2
// Type: ::<GetAndSendUnreilableResponse>d__59`2
// Type: ::<SendMessageWithRetry>d__72
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13001))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<SendMessageWithRetry>d__72
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72 const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Net::IPEndPoint __declspec(property(get=__get_remoteEndPoint, put=__set_remoteEndPoint))  remoteEndPoint;

constexpr void __set_remoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_remoteEndPoint() const;

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

/// @brief Method MoveNext addr 0xde6e20 size 0x2a8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xde70c8 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<>c__DisplayClass74_0
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13002))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<>c__DisplayClass74_0
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 const& o) noexcept = default;
                


// Fields

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Net::IPEndPoint __declspec(property(get=__get_remoteEndPoint, put=__set_remoteEndPoint))  remoteEndPoint;

constexpr void __set_remoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_remoteEndPoint() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;


// Methods

// Ctor Parameters []
explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0() ;

/// @brief Method .ctor addr 0xde70d4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SendMultipartMessageWithRetryAsync>b__0 addr 0xde70dc size 0xf4 virtual false final false
 System::Threading::Tasks::Task _SendMultipartMessageWithRetryAsync_b__0(BGNet::Core::Messages::IUnconnectedReliableRequest mm) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<SendMultipartMessageWithRetryAsync>d__74
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13003))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<SendMultipartMessageWithRetryAsync>d__74
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "data", ty: "LiteNetLib::Utils::NetDataWriter", modifiers: "", def_value: None }, CppParam { name: "onSendFailed", ty: "System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0", modifiers: "", def_value: None }, CppParam { name: "_shouldReleaseMessage_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, System::Threading::CancellationToken cancellationToken, BGNet::Core::Messages::IUnconnectedReliableRequest message, LiteNetLib::Utils::NetDataWriter data, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 __8__1, bool _shouldReleaseMessage_5__2, ::bs_hook::Il2CppWrapperType __7__wrap2, int32_t __7__wrap3, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74(BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74 const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74(BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x80};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Net::IPEndPoint __declspec(property(get=__get_remoteEndPoint, put=__set_remoteEndPoint))  remoteEndPoint;

constexpr void __set_remoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_remoteEndPoint() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(LiteNetLib::Utils::NetDataWriter value) ;

constexpr LiteNetLib::Utils::NetDataWriter __get_data() const;

 System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> __declspec(property(get=__get_onSendFailed, put=__set_onSendFailed))  onSendFailed;

constexpr void __set_onSendFailed(System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> value) ;

constexpr System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> __get_onSendFailed() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 __get___8__1() const;

 bool __declspec(property(get=__get__shouldReleaseMessage_5__2, put=__set__shouldReleaseMessage_5__2))  _shouldReleaseMessage_5__2;

constexpr void __set__shouldReleaseMessage_5__2(bool value) ;

constexpr bool __get__shouldReleaseMessage_5__2() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___7__wrap2() const;

 int32_t __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3))  __7__wrap3;

constexpr void __set___7__wrap3(int32_t value) ;

constexpr int32_t __get___7__wrap3() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xde71d0 size 0x800 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xde79d0 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<SendMessageWithRetryAsyncInternal>d__75
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13004))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<SendMessageWithRetryAsyncInternal>d__75
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "onSendFailed", ty: "System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>", modifiers: "", def_value: None }, CppParam { name: "_sentRequest_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter", modifiers: "", def_value: None }, CppParam { name: "_waiterId_5__3", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: None }, CppParam { name: "_shouldReleaseMessage_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_i_5__7", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, System::Threading::CancellationToken cancellationToken, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, uint32_t protocolVersion, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter _sentRequest_5__2, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3, bool _shouldReleaseMessage_5__4, ::bs_hook::Il2CppWrapperType __7__wrap4, int32_t __7__wrap5, int32_t _i_5__7, System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75 const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::IPEndPoint __declspec(property(get=__get_remoteEndPoint, put=__set_remoteEndPoint))  remoteEndPoint;

constexpr void __set_remoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_remoteEndPoint() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> __declspec(property(get=__get_onSendFailed, put=__set_onSendFailed))  onSendFailed;

constexpr void __set_onSendFailed(System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> value) ;

constexpr System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> __get_onSendFailed() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter __declspec(property(get=__get__sentRequest_5__2, put=__set__sentRequest_5__2))  _sentRequest_5__2;

constexpr void __set__sentRequest_5__2(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter __get__sentRequest_5__2() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId __declspec(property(get=__get__waiterId_5__3, put=__set__waiterId_5__3))  _waiterId_5__3;

constexpr void __set__waiterId_5__3(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId __get__waiterId_5__3() const;

 bool __declspec(property(get=__get__shouldReleaseMessage_5__4, put=__set__shouldReleaseMessage_5__4))  _shouldReleaseMessage_5__4;

constexpr void __set__shouldReleaseMessage_5__4(bool value) ;

constexpr bool __get__shouldReleaseMessage_5__4() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___7__wrap4, put=__set___7__wrap4))  __7__wrap4;

constexpr void __set___7__wrap4(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___7__wrap4() const;

 int32_t __declspec(property(get=__get___7__wrap5, put=__set___7__wrap5))  __7__wrap5;

constexpr void __set___7__wrap5(int32_t value) ;

constexpr int32_t __get___7__wrap5() const;

 int32_t __declspec(property(get=__get__i_5__7, put=__set__i_5__7))  _i_5__7;

constexpr void __set__i_5__7(int32_t value) ;

constexpr int32_t __get__i_5__7() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0xde79dc size 0x98c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xde8368 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<SendMessageWithRetryAwaitResponseAsync>d__76`1
// Type: ::<<WrapOnSendFailedAwaitResponse>b__0>d
// Type: ::<>c__DisplayClass77_0`1
// Type: ::<AwaitResponseAsync>d__78`1
// Type: BGNet.Core.Messages::UnconnectedMessageHandler
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12793)), TypeDefinitionIndex(TypeDefinitionIndex(12723)), TypeDefinitionIndex(TypeDefinitionIndex(2413))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13009))
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler
class CORDL_TYPE UnconnectedMessageHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using _AwaitResponseAsync_d__78_1 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T>;

template<typename T>
using __c__DisplayClass77_0_1 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>;

template<typename T>
using _SendMessageWithRetryAwaitResponseAsync_d__76_1 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T>;

using _SendMessageWithRetryAsyncInternal_d__75 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75;

using _SendMultipartMessageWithRetryAsync_d__74 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74;

using __c__DisplayClass74_0 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0;

using _SendMessageWithRetry_d__72 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72;

template<typename TRequest,typename TResponse>
using _GetAndSendUnreilableResponse_d__59_2 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest, TResponse>;

template<typename TRequest,typename TResponse>
using _GetAndSendResponseAsync_d__58_2 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest, TResponse>;

template<typename TRequest,typename TResponse>
using _GetAndSendResponse_d__57_2 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest, TResponse>;

template<typename T>
using __c__DisplayClass53_0_1 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1<T>;

template<typename T>
using __c__DisplayClass52_0_1 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1<T>;

template<typename T>
using __c__DisplayClass46_0_1 = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1<T>;

using MessageOrigin = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin;

using MultipartMessageWaiter = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter;

using RequestResponseWaiter = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter;

using SentRequestWaiter = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter;

using RequestWaiter = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter;

using RequestWaiterId = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId;

using ConnectionState = BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState;

/// @brief Convert operator to GlobalNamespace::IUnconnectedMessageReceiver
constexpr operator  GlobalNamespace::IUnconnectedMessageReceiver() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~UnconnectedMessageHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnconnectedMessageHandler", modifiers: " const&", def_value: None }]
constexpr UnconnectedMessageHandler(UnconnectedMessageHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnconnectedMessageHandler", modifiers: "&&", def_value: None }]
constexpr UnconnectedMessageHandler(UnconnectedMessageHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnconnectedMessageHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnconnectedMessageHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnconnectedMessageHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnconnectedMessageHandler& operator=(UnconnectedMessageHandler&& o) noexcept = default;
  constexpr UnconnectedMessageHandler& operator=(UnconnectedMessageHandler const& o) noexcept = default;
                


// Fields

/// @brief Field kProtocolVersion offset 0
static constexpr uint32_t  kProtocolVersion{8u};

/// @brief Field kMinSignatureLength offset 0
static constexpr int32_t  kMinSignatureLength{128};

/// @brief Field kMaxSignatureLength offset 0
static constexpr int32_t  kMaxSignatureLength{512};

/// @brief Field kMaxPacketSize offset 0
static constexpr int32_t  kMaxPacketSize{412};

/// @brief Field kRetryCount offset 0
static constexpr int32_t  kRetryCount{5};

/// @brief Field kRetryDelay0Ms offset 0
static constexpr int32_t  kRetryDelay0Ms{200};

/// @brief Field kRetryDelay1Ms offset 0
static constexpr int32_t  kRetryDelay1Ms{300};

/// @brief Field kRetryDelay2Ms offset 0
static constexpr int32_t  kRetryDelay2Ms{450};

/// @brief Field kRetryDelay3Ms offset 0
static constexpr int32_t  kRetryDelay3Ms{600};

/// @brief Field kRetryDelay4Ms offset 0
static constexpr int32_t  kRetryDelay4Ms{1000};

/// @brief Field kConnectionStateTimeoutMs offset 0
static constexpr int64_t  kConnectionStateTimeoutMs{300000};

/// @brief Field kSentRequestTimeoutMs offset 0
static constexpr int64_t  kSentRequestTimeoutMs{5000};

/// @brief Field kSentRequestWithResponseTimeoutMs offset 0
static constexpr int64_t  kSentRequestWithResponseTimeoutMs{15000};

/// @brief Field kMultipartMessageTimeoutMs offset 0
static constexpr int64_t  kMultipartMessageTimeoutMs{15000};

 System::Collections::Generic::Dictionary_2<uint32_t,GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>> __declspec(property(get=__get__serializers, put=__set__serializers))  _serializers;

constexpr void __set__serializers(System::Collections::Generic::Dictionary_2<uint32_t,GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>> __get__serializers() const;

 System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseMultipartMessage>> __declspec(property(get=__get__multipartMessageRegistry, put=__set__multipartMessageRegistry))  _multipartMessageRegistry;

constexpr void __set__multipartMessageRegistry(System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseMultipartMessage>> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseMultipartMessage>> __get__multipartMessageRegistry() const;

 System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseAcknowledgeMessage>> __declspec(property(get=__get__acknowledgeMessageRegistery, put=__set__acknowledgeMessageRegistery))  _acknowledgeMessageRegistery;

constexpr void __set__acknowledgeMessageRegistery(System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseAcknowledgeMessage>> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseAcknowledgeMessage>> __get__acknowledgeMessageRegistery() const;

 LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__dataWriter, put=__set__dataWriter))  _dataWriter;

constexpr void __set__dataWriter(LiteNetLib::Utils::NetDataWriter value) ;

constexpr LiteNetLib::Utils::NetDataWriter __get__dataWriter() const;

 LiteNetLib::Utils::NetDataReader __declspec(property(get=__get__multipartReader, put=__set__multipartReader))  _multipartReader;

constexpr void __set__multipartReader(LiteNetLib::Utils::NetDataReader value) ;

constexpr LiteNetLib::Utils::NetDataReader __get__multipartReader() const;

 GlobalNamespace::IUnconnectedMessageSender __declspec(property(get=__get__sender, put=__set__sender))  _sender;

constexpr void __set__sender(GlobalNamespace::IUnconnectedMessageSender value) ;

constexpr GlobalNamespace::IUnconnectedMessageSender __get__sender() const;

 BGNet::Core::IAnalyticsManager __declspec(property(get=__get_analytics, put=__set_analytics))  analytics;

constexpr void __set_analytics(BGNet::Core::IAnalyticsManager value) ;

constexpr BGNet::Core::IAnalyticsManager __get_analytics() const;

 BGNet::Core::ITimeProvider __declspec(property(get=__get__timeProvider, put=__set__timeProvider))  _timeProvider;

constexpr void __set__timeProvider(BGNet::Core::ITimeProvider value) ;

constexpr BGNet::Core::ITimeProvider __get__timeProvider() const;

 BGNet::Core::ITaskUtility __declspec(property(get=__get__taskUtility, put=__set__taskUtility))  _taskUtility;

constexpr void __set__taskUtility(BGNet::Core::ITaskUtility value) ;

constexpr BGNet::Core::ITaskUtility __get__taskUtility() const;

 GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter> __declspec(property(get=__get__sentRequestWaiters, put=__set__sentRequestWaiters))  _sentRequestWaiters;

constexpr void __set__sentRequestWaiters(GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter> value) ;

constexpr GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter> __get__sentRequestWaiters() const;

 GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter> __declspec(property(get=__get__requestResponseWaiters, put=__set__requestResponseWaiters))  _requestResponseWaiters;

constexpr void __set__requestResponseWaiters(GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter> value) ;

constexpr GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter> __get__requestResponseWaiters() const;

 GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState> __declspec(property(get=__get__connectionStates, put=__set__connectionStates))  _connectionStates;

constexpr void __set__connectionStates(GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState> value) ;

constexpr GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState> __get__connectionStates() const;

 GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter> __declspec(property(get=__get__multipartMessageBuffer, put=__set__multipartMessageBuffer))  _multipartMessageBuffer;

constexpr void __set__multipartMessageBuffer(GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter> value) ;

constexpr GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter> __get__multipartMessageBuffer() const;

 GlobalNamespace::SmallBufferPool __declspec(property(get=__get__bufferPool, put=__set__bufferPool))  _bufferPool;

constexpr void __set__bufferPool(GlobalNamespace::SmallBufferPool value) ;

constexpr GlobalNamespace::SmallBufferPool __get__bufferPool() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__disposedTokenSource, put=__set__disposedTokenSource))  _disposedTokenSource;

constexpr void __set__disposedTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__disposedTokenSource() const;


// Properties

 GlobalNamespace::PacketEncryptionLayer __declspec(property(get=get_encryptionLayer))  encryptionLayer;

 BGNet::Core::ITimeProvider __declspec(property(get=get_timeProvider))  timeProvider;


// Methods

/// @brief Method get_encryptionLayer addr 0xdddc54 size 0xa4 virtual false final false
 GlobalNamespace::PacketEncryptionLayer get_encryptionLayer() ;

/// @brief Method get_timeProvider addr 0xde3d8c size 0x8 virtual false final false
 BGNet::Core::ITimeProvider get_timeProvider() ;

// Ctor Parameters [CppParam { name: "sender", ty: "GlobalNamespace::IUnconnectedMessageSender", modifiers: "", def_value: None }, CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "analytics", ty: "BGNet::Core::IAnalyticsManager", modifiers: "", def_value: None }]
explicit UnconnectedMessageHandler(GlobalNamespace::IUnconnectedMessageSender sender, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, BGNet::Core::IAnalyticsManager analytics) ;

/// @brief Method .ctor addr 0xddebbc size 0x3a0 virtual false final false
 void _ctor(GlobalNamespace::IUnconnectedMessageSender sender, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, BGNet::Core::IAnalyticsManager analytics) ;

/// @brief Method RegisterSerializer addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TMultipartMessage,typename TAcknowledgeMessage>
 void RegisterSerializer(uint32_t messageType, GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> serializer, System::Func_1<TMultipartMessage> obtainMultipartMessage, System::Func_1<TAcknowledgeMessage> obtainAcknowledgeMessage) ;

/// @brief Method ShouldHandleMessage addr 0xddfd1c size 0x54 virtual true final false
 bool ShouldHandleMessage(BGNet::Core::Messages::IUnconnectedMessage packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method GetMessageType addr 0xddfb90 size 0x68 virtual true final false
 uint32_t GetMessageType(BGNet::Core::Messages::IUnconnectedMessage message) ;

/// @brief Method GetMultipartMessage addr 0xde3d94 size 0x88 virtual false final false
 BGNet::Core::Messages::BaseMultipartMessage GetMultipartMessage(BGNet::Core::Messages::IUnconnectedMessage message) ;

/// @brief Method GetAcknowledgeMessage addr 0xde3e1c size 0x88 virtual false final false
 BGNet::Core::Messages::BaseAcknowledgeMessage GetAcknowledgeMessage(BGNet::Core::Messages::IUnconnectedMessage message) ;

/// @brief Method ObtainVersioned addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Func_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,T> ObtainVersioned(System::Func_2<uint32_t,T> obtain) ;

/// @brief Method ObtainVersioned addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Func_1<T> ObtainVersioned(System::Func_1<T> obtain) ;

/// @brief Method DefaultAcknowledgeHandler addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void DefaultAcknowledgeHandler(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method DefaultRequestHandler addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void DefaultRequestHandler(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method DefaultResponseHandler addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void DefaultResponseHandler(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method DefaultMultipartMessageHandler addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void DefaultMultipartMessageHandler(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method CustomResponseHandler addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> CustomResponseHandler(System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> customHandler) ;

/// @brief Method CustomUnreliableResponseHandler addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> CustomUnreliableResponseHandler(System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> customHandler) ;

/// @brief Method IsUnhandledMessage addr 0xde3ea4 size 0x31c virtual false final false
 bool IsUnhandledMessage(BGNet::Core::Messages::IUnconnectedReliableRequest packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method CompleteSend addr 0xde44fc size 0x18c virtual false final false
 void CompleteSend(BGNet::Core::Messages::IUnconnectedResponse packet, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method CompleteRequest addr 0xde43f4 size 0x108 virtual false final false
 bool CompleteRequest(BGNet::Core::Messages::IUnconnectedReliableResponse packet, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method GetAndSendResponse addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TRequest,typename TResponse>
 void GetAndSendResponse(TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, System::Func_1<TResponse> getFailureResponse) ;

/// @brief Method GetAndSendResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TRequest,typename TResponse>
 System::Threading::Tasks::Task GetAndSendResponseAsync(TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, System::Func_1<TResponse> getFailureResponse) ;

/// @brief Method GetAndSendUnreilableResponse addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TRequest,typename TResponse>
 void GetAndSendUnreilableResponse(TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, System::Func_1<TResponse> getFailureResponse) ;

/// @brief Method SendUnreliableMessage addr 0xde4840 size 0x8c virtual false final false
 void SendUnreliableMessage(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedUnreliableMessage message) ;

/// @brief Method SendUnreliableResponse addr 0xde0374 size 0x144 virtual false final false
 void SendUnreliableResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, BGNet::Core::Messages::IUnconnectedResponse response) ;

/// @brief Method SendUnreliableResponse addr 0xde41c0 size 0x114 virtual false final false
 void SendUnreliableResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, uint32_t responseId, BGNet::Core::Messages::IUnconnectedResponse response) ;

/// @brief Method SendReliableRequest addr 0xde4a38 size 0x128 virtual false final false
 void SendReliableRequest(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendReliableRequestAsync addr 0xde4c24 size 0x130 virtual false final false
 System::Threading::Tasks::Task SendReliableRequestAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendReliableResponse addr 0xde4de4 size 0x14c virtual false final false
 void SendReliableResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendReliableResponse addr 0xde1ef4 size 0x12c virtual false final false
 void SendReliableResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, uint32_t responseId, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendReliableResponseAsync addr 0xde4f30 size 0x210 virtual false final false
 System::Threading::Tasks::Task SendReliableResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendReliableRequestAndAwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Threading::Tasks::Task_1<T> SendReliableRequestAndAwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> onSendFailedAwaitResponse, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendReliableResponseAndAwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Threading::Tasks::Task_1<T> SendReliableResponseAndAwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendReliableResponseAndAwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Threading::Tasks::Task_1<T> SendReliableResponseAndAwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, uint32_t responseId, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendMessage addr 0xde48cc size 0x16c virtual false final false
 void SendMessage(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedMessage message) ;

/// @brief Method SendMessageWithRetry addr 0xde4b60 size 0xc4 virtual false final false
 void SendMessageWithRetry(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendMessageWithRetryAsync addr 0xde4d54 size 0x90 virtual false final false
 System::Threading::Tasks::Task SendMessageWithRetryAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendMultipartMessageWithRetryAsync addr 0xde526c size 0x120 virtual false final false
 System::Threading::Tasks::Task SendMultipartMessageWithRetryAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, LiteNetLib::Utils::NetDataWriter data, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendMessageWithRetryAsyncInternal addr 0xde538c size 0x110 virtual false final false
 System::Threading::Tasks::Task SendMessageWithRetryAsyncInternal(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SendMessageWithRetryAwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Threading::Tasks::Task_1<T> SendMessageWithRetryAwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> onSendFailedAwaitResponse, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WrapOnSendFailedAwaitResponse addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> WrapOnSendFailedAwaitResponse(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter waiter, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> onSendFailed) ;

/// @brief Method AwaitResponseAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 System::Threading::Tasks::Task_1<T> AwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, uint32_t requestId, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WaitForRetry addr 0xde549c size 0x17c virtual false final false
 System::Threading::Tasks::Task WaitForRetry(int32_t retryAttempt, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Write addr 0xde5140 size 0x12c virtual false final false
 LiteNetLib::Utils::NetDataWriter Write(uint32_t protocolVersion, BGNet::Core::Messages::IUnconnectedMessage message) ;

/// @brief Method PollUpdate addr 0xddf960 size 0xac virtual true final false
 void PollUpdate() ;

/// @brief Method ReceiveUnconnectedMessage addr 0xde5754 size 0x1e4 virtual true final true
 void ReceiveUnconnectedMessage(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method ShouldHandleMessageFromEndPoint addr 0xde5944 size 0x8 virtual true final false
 bool ShouldHandleMessageFromEndPoint(System::Net::IPEndPoint endPoint) ;

/// @brief Method ReceivedMessageException addr 0xde594c size 0x5c virtual true final false
 void ReceivedMessageException(System::Net::IPEndPoint endPoint, System::Exception exception) ;

/// @brief Method BeginSession addr 0xddc248 size 0x18 virtual false final false
 void BeginSession(System::Net::IPEndPoint endPoint) ;

/// @brief Method BeginSession addr 0xde000c size 0x20 virtual false final false
 void BeginSession(System::Net::IPEndPoint endPoint, uint32_t requestId) ;

/// @brief Method GetNextRequestId addr 0xdddab4 size 0x30 virtual false final false
 uint32_t GetNextRequestId(System::Net::IPEndPoint endPoint) ;

/// @brief Method GetConnectionState addr 0xdddcf8 size 0xcc virtual false final false
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState GetConnectionState(System::Net::IPEndPoint endPoint) ;

/// @brief Method IsValidSessionStartRequestId addr 0xde0298 size 0xb4 virtual false final false
 bool IsValidSessionStartRequestId(System::Net::IPEndPoint endPoint, uint32_t requestId) ;

/// @brief Method IsConnectionStateEncrypted addr 0xde5b14 size 0x8c virtual false final false
 bool IsConnectionStateEncrypted(System::Net::IPEndPoint endPoint) ;

/// @brief Method GetSerializer addr 0xde5618 size 0x13c virtual false final false
 GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> GetSerializer(uint32_t protocolVersion, uint32_t messageType, bool throwOnInvalidVersion) ;

/// @brief Method Dispose addr 0xde5c4c size 0x148 virtual true final false
 void Dispose() ;

/// @brief Method CreateHandshakeHeader addr 0xddf884 size 0xc4 virtual false final false
static ::ArrayW<uint8_t> CreateHandshakeHeader(::ArrayW<uint8_t> packetHeader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<>c__DisplayClass46_0`1
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12995))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12995), inst: 2 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<>c__DisplayClass46_0`1
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1 const& o) noexcept = default;
                


// Fields

 System::Func_2<uint32_t,T> __declspec(property(get=__get_obtain, put=__set_obtain))  obtain;

constexpr void __set_obtain(System::Func_2<uint32_t,T> value) ;

constexpr System::Func_2<uint32_t,T> __get_obtain() const;


// Methods

// Ctor Parameters []
explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <ObtainVersioned>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 T _ObtainVersioned_b__0(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<>c__DisplayClass52_0`1
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12996))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12996), inst: 2 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<>c__DisplayClass52_0`1
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1 const& o) noexcept = default;
                


// Fields

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> __declspec(property(get=__get_customHandler, put=__set_customHandler))  customHandler;

constexpr void __set_customHandler(System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> value) ;

constexpr System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> __get_customHandler() const;


// Methods

// Ctor Parameters []
explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <CustomResponseHandler>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _CustomResponseHandler_b__0(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<>c__DisplayClass53_0`1
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12997))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12997), inst: 2 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<>c__DisplayClass53_0`1
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1 const& o) noexcept = default;
                


// Fields

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> __declspec(property(get=__get_customHandler, put=__set_customHandler))  customHandler;

constexpr void __set_customHandler(System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> value) ;

constexpr System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> __get_customHandler() const;


// Methods

// Ctor Parameters []
explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <CustomUnreliableResponseHandler>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _CustomUnreliableResponseHandler_b__0(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<GetAndSendResponse>d__57`2
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type TRequest,::cordl_internals::il2cpp_reference_type TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12998)), TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12998), inst: 79 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<GetAndSendResponse>d__57`2
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2<TRequest,TResponse> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value: None }, CppParam { name: "tryGetResponse", ty: "System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>", modifiers: "", def_value: None }, CppParam { name: "getFailureResponse", ty: "System::Func_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, System::Func_1<TResponse> getFailureResponse, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2 const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 TRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(TRequest value) ;

constexpr TRequest __get_request() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin __declspec(property(get=__get_origin, put=__set_origin))  origin;

constexpr void __set_origin(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin __get_origin() const;

 System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> __declspec(property(get=__get_tryGetResponse, put=__set_tryGetResponse))  tryGetResponse;

constexpr void __set_tryGetResponse(System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> value) ;

constexpr System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> __get_tryGetResponse() const;

 System::Func_1<TResponse> __declspec(property(get=__get_getFailureResponse, put=__set_getFailureResponse))  getFailureResponse;

constexpr void __set_getFailureResponse(System::Func_1<TResponse> value) ;

constexpr System::Func_1<TResponse> __get_getFailureResponse() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<GetAndSendResponseAsync>d__58`2
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type TRequest,::cordl_internals::il2cpp_reference_type TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(12999)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12999), inst: 79 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<GetAndSendResponseAsync>d__58`2
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2<TRequest,TResponse> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "tryGetResponse", ty: "System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>", modifiers: "", def_value: None }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value: None }, CppParam { name: "getFailureResponse", ty: "System::Func_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "_response_5__2", ty: "TResponse", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_1<TResponse> getFailureResponse, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, TResponse _response_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2 const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> __declspec(property(get=__get_tryGetResponse, put=__set_tryGetResponse))  tryGetResponse;

constexpr void __set_tryGetResponse(System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> value) ;

constexpr System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> __get_tryGetResponse() const;

 TRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(TRequest value) ;

constexpr TRequest __get_request() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin __declspec(property(get=__get_origin, put=__set_origin))  origin;

constexpr void __set_origin(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin __get_origin() const;

 System::Func_1<TResponse> __declspec(property(get=__get_getFailureResponse, put=__set_getFailureResponse))  getFailureResponse;

constexpr void __set_getFailureResponse(System::Func_1<TResponse> value) ;

constexpr System::Func_1<TResponse> __get_getFailureResponse() const;

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 TResponse __declspec(property(get=__get__response_5__2, put=__set__response_5__2))  _response_5__2;

constexpr void __set__response_5__2(TResponse value) ;

constexpr TResponse __get__response_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<GetAndSendUnreilableResponse>d__59`2
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type TRequest,::cordl_internals::il2cpp_reference_type TResponse>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(13000))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13000), inst: 79 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<GetAndSendUnreilableResponse>d__59`2
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2<TRequest,TResponse> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "tryGetResponse", ty: "System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>", modifiers: "", def_value: None }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value: None }, CppParam { name: "getFailureResponse", ty: "System::Func_1<TResponse>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "_response_5__2", ty: "TResponse", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_1<TResponse> getFailureResponse, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, TResponse _response_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2 const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> __declspec(property(get=__get_tryGetResponse, put=__set_tryGetResponse))  tryGetResponse;

constexpr void __set_tryGetResponse(System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> value) ;

constexpr System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> __get_tryGetResponse() const;

 TRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(TRequest value) ;

constexpr TRequest __get_request() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin __declspec(property(get=__get_origin, put=__set_origin))  origin;

constexpr void __set_origin(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin __get_origin() const;

 System::Func_1<TResponse> __declspec(property(get=__get_getFailureResponse, put=__set_getFailureResponse))  getFailureResponse;

constexpr void __set_getFailureResponse(System::Func_1<TResponse> value) ;

constexpr System::Func_1<TResponse> __get_getFailureResponse() const;

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 TResponse __declspec(property(get=__get__response_5__2, put=__set__response_5__2))  _response_5__2;

constexpr void __set__response_5__2(TResponse value) ;

constexpr TResponse __get__response_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<SendMessageWithRetryAwaitResponseAsync>d__76`1
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13005)), TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13005), inst: 2 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<SendMessageWithRetryAwaitResponseAsync>d__76`1
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "onSendFailedAwaitResponse", ty: "System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>", modifiers: "", def_value: None }, CppParam { name: "_request_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter", modifiers: "", def_value: None }, CppParam { name: "_waiterId_5__3", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, System::Threading::CancellationToken cancellationToken, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, uint32_t protocolVersion, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> onSendFailedAwaitResponse, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter _request_5__2, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> __u__2) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1 const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::IPEndPoint __declspec(property(get=__get_remoteEndPoint, put=__set_remoteEndPoint))  remoteEndPoint;

constexpr void __set_remoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_remoteEndPoint() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> __declspec(property(get=__get_onSendFailedAwaitResponse, put=__set_onSendFailedAwaitResponse))  onSendFailedAwaitResponse;

constexpr void __set_onSendFailedAwaitResponse(System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> value) ;

constexpr System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> __get_onSendFailedAwaitResponse() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter __declspec(property(get=__get__request_5__2, put=__set__request_5__2))  _request_5__2;

constexpr void __set__request_5__2(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter __get__request_5__2() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId __declspec(property(get=__get__waiterId_5__3, put=__set__waiterId_5__3))  _waiterId_5__3;

constexpr void __set__waiterId_5__3(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId __get__waiterId_5__3() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<<WrapOnSendFailedAwaitResponse>b__0>d
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(13006))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13006), inst: 2 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<>c__DisplayClass77_0`1::<<WrapOnSendFailedAwaitResponse>b__0>d
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T> __4__this, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter __7__wrap1, System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T> value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T> __get___4__this() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Net::IPEndPoint __declspec(property(get=__get_remoteEndPoint, put=__set_remoteEndPoint))  remoteEndPoint;

constexpr void __set_remoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_remoteEndPoint() const;

 BGNet::Core::Messages::IUnconnectedReliableRequest __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value) ;

constexpr BGNet::Core::Messages::IUnconnectedReliableRequest __get_message() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter __get___7__wrap1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<T> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<T> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<T> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass77_0`1
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13007))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13007), inst: 2 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<>c__DisplayClass77_0`1
class CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __WrapOnSendFailedAwaitResponse_b__0_d = GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1&& o) noexcept = default;
  constexpr BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1 const& o) noexcept = default;
                


// Fields

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter __declspec(property(get=__get_waiter, put=__set_waiter))  waiter;

constexpr void __set_waiter(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter __get_waiter() const;

 System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> __declspec(property(get=__get_onSendFailed, put=__set_onSendFailed))  onSendFailed;

constexpr void __set_onSendFailed(System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> value) ;

constexpr System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> __get_onSendFailed() const;


// Methods

// Ctor Parameters []
explicit BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <WrapOnSendFailedAwaitResponse>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task _WrapOnSendFailedAwaitResponse_b__0(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<AwaitResponseAsync>d__78`1
namespace BGNet::Core::Messages {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13008)), TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13008), inst: 2 })
// CS Name: BGNet.Core.Messages.UnconnectedMessageHandler::<AwaitResponseAsync>d__78`1
struct CORDL_TYPE BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_waiterId_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, System::Threading::CancellationToken cancellationToken, System::Net::IPEndPoint remoteEndPoint, uint32_t requestId, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> __u__1) noexcept;


                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1(BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1 const&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1(BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1&&) = default;
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1& operator=(BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::UnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::UnconnectedMessageHandler __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Net::IPEndPoint __declspec(property(get=__get_remoteEndPoint, put=__set_remoteEndPoint))  remoteEndPoint;

constexpr void __set_remoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_remoteEndPoint() const;

 uint32_t __declspec(property(get=__get_requestId, put=__set_requestId))  requestId;

constexpr void __set_requestId(uint32_t value) ;

constexpr uint32_t __get_requestId() const;

 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId __declspec(property(get=__get__waiterId_5__2, put=__set__waiterId_5__2))  _waiterId_5__2;

constexpr void __set__waiterId_5__2(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId __get__waiterId_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass46_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass52_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass53_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass77_0`1");
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState, "BGNet.Core.Messages", "UnconnectedMessageHandler/ConnectionState");
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter, "BGNet.Core.Messages", "UnconnectedMessageHandler/MultipartMessageWaiter");
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter, "BGNet.Core.Messages", "UnconnectedMessageHandler/RequestResponseWaiter");
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter, "BGNet.Core.Messages", "UnconnectedMessageHandler/RequestWaiter");
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter, "BGNet.Core.Messages", "UnconnectedMessageHandler/SentRequestWaiter");
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass74_0");
NEED_NO_BOX(::BGNet::Core::Messages::UnconnectedMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::UnconnectedMessageHandler, "BGNet.Core.Messages", "UnconnectedMessageHandler");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<AwaitResponseAsync>d__78`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2, "BGNet.Core.Messages", "UnconnectedMessageHandler/<GetAndSendResponseAsync>d__58`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2, "BGNet.Core.Messages", "UnconnectedMessageHandler/<GetAndSendResponse>d__57`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2, "BGNet.Core.Messages", "UnconnectedMessageHandler/<GetAndSendUnreilableResponse>d__59`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1, "BGNet.Core.Messages", "UnconnectedMessageHandler/<SendMessageWithRetryAwaitResponseAsync>d__76`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d, "BGNet.Core.Messages", "UnconnectedMessageHandler/<>c__DisplayClass77_0`1/<<WrapOnSendFailedAwaitResponse>b__0>d");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin, "BGNet.Core.Messages", "UnconnectedMessageHandler/MessageOrigin");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId, "BGNet.Core.Messages", "UnconnectedMessageHandler/RequestWaiterId");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75, "BGNet.Core.Messages", "UnconnectedMessageHandler/<SendMessageWithRetryAsyncInternal>d__75");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72, "BGNet.Core.Messages", "UnconnectedMessageHandler/<SendMessageWithRetry>d__72");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74, "BGNet.Core.Messages", "UnconnectedMessageHandler/<SendMultipartMessageWithRetryAsync>d__74");
} // end anonymous namespace
