#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IDiffieHellmanKeyPair;
}
namespace GlobalNamespace {
class ICertificateEncryptionProvider;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class IAsyncComputeManager;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
namespace BGNet::Core::Messages {
class ClientHelloWithCookieRequest;
}
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin;
}
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateRequest;
}
namespace System::Net {
class IPEndPoint;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace BGNet::Core::Messages {
class ClientHelloRequest;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core {
class IAnalyticsManager;
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
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace GlobalNamespace {
class GlobalNamespace__EncryptionUtility__IEncryptionState;
}
namespace BGNet::Core::Messages {
class ClientKeyExchangeRequest;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation;
}
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation;
}
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c;
}
namespace BGNet::Core::Messages {
class BaseServerUnconnectedMessageHandler;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21;
}
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19;
}
namespace {
// Type: ::SigningComputeOperation
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12608), inst: 772 }), TypeDefinitionIndex(TypeDefinitionIndex(12608))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12956))
// CS Name: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler::SigningComputeOperation
class CORDL_TYPE BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation : public GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation(void* ptr) noexcept : GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t>>(ptr) {
}


  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation&& o) noexcept = default;
  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__clientRandom, put=__set__clientRandom))  _clientRandom;

constexpr void __set__clientRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__clientRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__serverRandom, put=__set__serverRandom))  _serverRandom;

constexpr void __set__serverRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__serverRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__serverKey, put=__set__serverKey))  _serverKey;

constexpr void __set__serverKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__serverKey() const;

 GlobalNamespace::ICertificateEncryptionProvider __declspec(property(get=__get__certificateEncryptionProvider, put=__set__certificateEncryptionProvider))  _certificateEncryptionProvider;

constexpr void __set__certificateEncryptionProvider(GlobalNamespace::ICertificateEncryptionProvider value) ;

constexpr GlobalNamespace::ICertificateEncryptionProvider __get__certificateEncryptionProvider() const;

 LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__writer, put=__set__writer))  _writer;

constexpr void __set__writer(LiteNetLib::Utils::NetDataWriter value) ;

constexpr LiteNetLib::Utils::NetDataWriter __get__writer() const;


// Methods

// Ctor Parameters [CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "certificateEncryptionProvider", ty: "GlobalNamespace::ICertificateEncryptionProvider", modifiers: "", def_value: None }, CppParam { name: "writer", ty: "LiteNetLib::Utils::NetDataWriter", modifiers: "", def_value: None }]
explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, GlobalNamespace::ICertificateEncryptionProvider certificateEncryptionProvider, LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method .ctor addr 0xde0a7c size 0x88 virtual false final false
 void _ctor(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, GlobalNamespace::ICertificateEncryptionProvider certificateEncryptionProvider, LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Compute addr 0xde0b04 size 0xf8 virtual true final false
 ::ArrayW<uint8_t> Compute() ;

/// @brief Method Finally addr 0xde0bfc size 0x1c virtual true final false
 void Finally() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::GetPreMasterSecretComputeOperation
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12608), inst: 772 }), TypeDefinitionIndex(TypeDefinitionIndex(12608))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12957))
// CS Name: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation
class CORDL_TYPE BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation : public GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation(void* ptr) noexcept : GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t>>(ptr) {
}


  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation&& o) noexcept = default;
  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IDiffieHellmanKeyPair __declspec(property(get=__get__serverKey, put=__set__serverKey))  _serverKey;

constexpr void __set__serverKey(GlobalNamespace::IDiffieHellmanKeyPair value) ;

constexpr GlobalNamespace::IDiffieHellmanKeyPair __get__serverKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__clientKey, put=__set__clientKey))  _clientKey;

constexpr void __set__clientKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__clientKey() const;


// Methods

// Ctor Parameters [CppParam { name: "serverKey", ty: "GlobalNamespace::IDiffieHellmanKeyPair", modifiers: "", def_value: None }, CppParam { name: "clientKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation(GlobalNamespace::IDiffieHellmanKeyPair serverKey, ::ArrayW<uint8_t> clientKey) ;

/// @brief Method .ctor addr 0xde0c18 size 0x64 virtual false final false
 void _ctor(GlobalNamespace::IDiffieHellmanKeyPair serverKey, ::ArrayW<uint8_t> clientKey) ;

/// @brief Method Compute addr 0xde0c7c size 0xac virtual true final false
 ::ArrayW<uint8_t> Compute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<>c
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12958))
// CS Name: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler::<>c
class CORDL_TYPE BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c&& o) noexcept = default;
  constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c const& o) noexcept = default;
                


// Fields

static BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c value) ;

static BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c __get___9() ;

static System::Func_2<System::Security::Cryptography::X509Certificates::X509Certificate2,::ArrayW<uint8_t>> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(System::Func_2<System::Security::Cryptography::X509Certificates::X509Certificate2,::ArrayW<uint8_t>> value) ;

static System::Func_2<System::Security::Cryptography::X509Certificates::X509Certificate2,::ArrayW<uint8_t>> __get___9__12_0() ;


// Methods

// Ctor Parameters []
explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c() ;

/// @brief Method .ctor addr 0xde0d8c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__12_0 addr 0xde0d94 size 0x24 virtual false final false
 ::ArrayW<uint8_t> __ctor_b__12_0(System::Security::Cryptography::X509Certificates::X509Certificate2 cert) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<StartServerAuthenticationFlow>d__19
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12959))
// CS Name: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler::<StartServerAuthenticationFlow>d__19
struct CORDL_TYPE BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "certificateResponseId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, uint32_t protocolVersion, System::Net::IPEndPoint endPoint, uint32_t requestId, uint32_t certificateResponseId, ::ArrayW<uint8_t> clientRandom, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19 const&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19&&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __get___4__this() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Net::IPEndPoint __declspec(property(get=__get_endPoint, put=__set_endPoint))  endPoint;

constexpr void __set_endPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_endPoint() const;

 uint32_t __declspec(property(get=__get_requestId, put=__set_requestId))  requestId;

constexpr void __set_requestId(uint32_t value) ;

constexpr uint32_t __get_requestId() const;

 uint32_t __declspec(property(get=__get_certificateResponseId, put=__set_certificateResponseId))  certificateResponseId;

constexpr void __set_certificateResponseId(uint32_t value) ;

constexpr uint32_t __get_certificateResponseId() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientRandom, put=__set_clientRandom))  clientRandom;

constexpr void __set_clientRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientRandom() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xde0db8 size 0x2a8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xde1060 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<StartServerAuthenticationFlowAsync>d__21
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12960))
// CS Name: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler::<StartServerAuthenticationFlowAsync>d__21
struct CORDL_TYPE BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "certificateResponseId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_serverRandom_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_serverKeys_5__3", ty: "GlobalNamespace::IDiffieHellmanKeyPair", modifiers: "", def_value: None }, CppParam { name: "_responseId_5__4", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_encryptionState_5__5", ty: "GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>", modifiers: "", def_value: None }, CppParam { name: "__u__5", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, ::ArrayW<uint8_t> clientRandom, uint32_t protocolVersion, System::Net::IPEndPoint endPoint, uint32_t certificateResponseId, uint32_t requestId, ::ArrayW<uint8_t> _serverRandom_5__2, GlobalNamespace::IDiffieHellmanKeyPair _serverKeys_5__3, uint32_t _responseId_5__4, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState _encryptionState_5__5, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __u__3, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> __u__4, System::Runtime::CompilerServices::TaskAwaiter __u__5) noexcept;


                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21 const&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21&&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientRandom, put=__set_clientRandom))  clientRandom;

constexpr void __set_clientRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientRandom() const;

 uint32_t __declspec(property(get=__get_protocolVersion, put=__set_protocolVersion))  protocolVersion;

constexpr void __set_protocolVersion(uint32_t value) ;

constexpr uint32_t __get_protocolVersion() const;

 System::Net::IPEndPoint __declspec(property(get=__get_endPoint, put=__set_endPoint))  endPoint;

constexpr void __set_endPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_endPoint() const;

 uint32_t __declspec(property(get=__get_certificateResponseId, put=__set_certificateResponseId))  certificateResponseId;

constexpr void __set_certificateResponseId(uint32_t value) ;

constexpr uint32_t __get_certificateResponseId() const;

 uint32_t __declspec(property(get=__get_requestId, put=__set_requestId))  requestId;

constexpr void __set_requestId(uint32_t value) ;

constexpr uint32_t __get_requestId() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__serverRandom_5__2, put=__set__serverRandom_5__2))  _serverRandom_5__2;

constexpr void __set__serverRandom_5__2(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__serverRandom_5__2() const;

 GlobalNamespace::IDiffieHellmanKeyPair __declspec(property(get=__get__serverKeys_5__3, put=__set__serverKeys_5__3))  _serverKeys_5__3;

constexpr void __set__serverKeys_5__3(GlobalNamespace::IDiffieHellmanKeyPair value) ;

constexpr GlobalNamespace::IDiffieHellmanKeyPair __get__serverKeys_5__3() const;

 uint32_t __declspec(property(get=__get__responseId_5__4, put=__set__responseId_5__4))  _responseId_5__4;

constexpr void __set__responseId_5__4(uint32_t value) ;

constexpr uint32_t __get__responseId_5__4() const;

 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState __declspec(property(get=__get__encryptionState_5__5, put=__set__encryptionState_5__5))  _encryptionState_5__5;

constexpr void __set__encryptionState_5__5(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState value) ;

constexpr GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState __get__encryptionState_5__5() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest> __get___u__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __declspec(property(get=__get___u__3, put=__set___u__3))  __u__3;

constexpr void __set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __get___u__3() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> __declspec(property(get=__get___u__4, put=__set___u__4))  __u__4;

constexpr void __set___u__4(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> __get___u__4() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__5, put=__set___u__5))  __u__5;

constexpr void __set___u__5(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__5() const;


// Methods

/// @brief Method MoveNext addr 0xde106c size 0xac8 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xde2080 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<GetSignatureAsync>d__23
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12961))
// CS Name: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler::<GetSignatureAsync>d__23
struct CORDL_TYPE BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "_signingRequest_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, ::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation _signingRequest_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23 const&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23&&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientRandom, put=__set_clientRandom))  clientRandom;

constexpr void __set_clientRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serverRandom, put=__set_serverRandom))  serverRandom;

constexpr void __set_serverRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serverRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serverKey, put=__set_serverKey))  serverKey;

constexpr void __set_serverKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serverKey() const;

 BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __get___4__this() const;

 BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation __declspec(property(get=__get__signingRequest_5__2, put=__set__signingRequest_5__2))  _signingRequest_5__2;

constexpr void __set__signingRequest_5__2(BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation __get__signingRequest_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xde208c size 0x3fc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xde2488 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<GetPreMasterSecretAsync>d__24
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2637)), TypeDefinitionIndex(TypeDefinitionIndex(3368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12962))
// CS Name: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler::<GetPreMasterSecretAsync>d__24
struct CORDL_TYPE BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "serverKeys", ty: "GlobalNamespace::IDiffieHellmanKeyPair", modifiers: "", def_value: None }, CppParam { name: "clientKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "_preMasterSecretRequest_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, GlobalNamespace::IDiffieHellmanKeyPair serverKeys, ::ArrayW<uint8_t> clientKey, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation _preMasterSecretRequest_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24 const&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24&&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::IDiffieHellmanKeyPair __declspec(property(get=__get_serverKeys, put=__set_serverKeys))  serverKeys;

constexpr void __set_serverKeys(GlobalNamespace::IDiffieHellmanKeyPair value) ;

constexpr GlobalNamespace::IDiffieHellmanKeyPair __get_serverKeys() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientKey, put=__set_clientKey))  clientKey;

constexpr void __set_clientKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientKey() const;

 BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __get___4__this() const;

 BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation __declspec(property(get=__get__preMasterSecretRequest_5__2, put=__set__preMasterSecretRequest_5__2))  _preMasterSecretRequest_5__2;

constexpr void __set__preMasterSecretRequest_5__2(BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation value) ;

constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation __get__preMasterSecretRequest_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xde24e0 size 0x3c4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xde28a4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: ::<RotateServerKeysAsync>d__26
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3368)), TypeDefinitionIndex(TypeDefinitionIndex(2637))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12963))
// CS Name: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler::<RotateServerKeysAsync>d__26
struct CORDL_TYPE BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>", modifiers: "", def_value: None }]
constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> __u__1) noexcept;


                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26 const&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26&&) = default;
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26& operator=(BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value) ;

constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xde28fc size 0x2c0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xde2bbc size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: BGNet.Core.Messages::BaseServerUnconnectedMessageHandler
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13009))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12964))
// CS Name: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler
class CORDL_TYPE BaseServerUnconnectedMessageHandler : public BGNet::Core::Messages::UnconnectedMessageHandler {
public:
// Declarations
using _RotateServerKeysAsync_d__26 = BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26;

using _GetPreMasterSecretAsync_d__24 = BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24;

using _GetSignatureAsync_d__23 = BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23;

using _StartServerAuthenticationFlowAsync_d__21 = BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21;

using _StartServerAuthenticationFlow_d__19 = BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19;

using __c = BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c;

using GetPreMasterSecretComputeOperation = BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation;

using SigningComputeOperation = BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~BaseServerUnconnectedMessageHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseServerUnconnectedMessageHandler", modifiers: " const&", def_value: None }]
constexpr BaseServerUnconnectedMessageHandler(BaseServerUnconnectedMessageHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseServerUnconnectedMessageHandler", modifiers: "&&", def_value: None }]
constexpr BaseServerUnconnectedMessageHandler(BaseServerUnconnectedMessageHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseServerUnconnectedMessageHandler(void* ptr) noexcept : BGNet::Core::Messages::UnconnectedMessageHandler(ptr) {
}


  constexpr BaseServerUnconnectedMessageHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseServerUnconnectedMessageHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseServerUnconnectedMessageHandler& operator=(BaseServerUnconnectedMessageHandler&& o) noexcept = default;
  constexpr BaseServerUnconnectedMessageHandler& operator=(BaseServerUnconnectedMessageHandler const& o) noexcept = default;
                


// Fields

/// @brief Field kServerKeyExpirationLength offset 0
static constexpr int64_t  kServerKeyExpirationLength{3000000000};

 GlobalNamespace::ICertificateEncryptionProvider __declspec(property(get=__get__certificateEncryptionProvider, put=__set__certificateEncryptionProvider))  _certificateEncryptionProvider;

constexpr void __set__certificateEncryptionProvider(GlobalNamespace::ICertificateEncryptionProvider value) ;

constexpr GlobalNamespace::ICertificateEncryptionProvider __get__certificateEncryptionProvider() const;

 ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get__certificateChain, put=__set__certificateChain))  _certificateChain;

constexpr void __set__certificateChain(::ArrayW<::ArrayW<uint8_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint8_t>> __get__certificateChain() const;

 LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__cookieWriter, put=__set__cookieWriter))  _cookieWriter;

constexpr void __set__cookieWriter(LiteNetLib::Utils::NetDataWriter value) ;

constexpr LiteNetLib::Utils::NetDataWriter __get__cookieWriter() const;

 LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__signatureWriter, put=__set__signatureWriter))  _signatureWriter;

constexpr void __set__signatureWriter(LiteNetLib::Utils::NetDataWriter value) ;

constexpr LiteNetLib::Utils::NetDataWriter __get__signatureWriter() const;

 GlobalNamespace::IAsyncComputeManager __declspec(property(get=__get__asyncCompute, put=__set__asyncCompute))  _asyncCompute;

constexpr void __set__asyncCompute(GlobalNamespace::IAsyncComputeManager value) ;

constexpr GlobalNamespace::IAsyncComputeManager __get__asyncCompute() const;

 int64_t __declspec(property(get=__get__lastServerKeyPairRequestTime, put=__set__lastServerKeyPairRequestTime))  _lastServerKeyPairRequestTime;

constexpr void __set__lastServerKeyPairRequestTime(int64_t value) ;

constexpr int64_t __get__lastServerKeyPairRequestTime() const;

 GlobalNamespace::IDiffieHellmanKeyPair __declspec(property(get=__get__serverKeys, put=__set__serverKeys))  _serverKeys;

constexpr void __set__serverKeys(GlobalNamespace::IDiffieHellmanKeyPair value) ;

constexpr GlobalNamespace::IDiffieHellmanKeyPair __get__serverKeys() const;

 System::Threading::Tasks::Task __declspec(property(get=__get__serverKeyRotationTask, put=__set__serverKeyRotationTask))  _serverKeyRotationTask;

constexpr void __set__serverKeyRotationTask(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get__serverKeyRotationTask() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__hmacKey, put=__set__hmacKey))  _hmacKey;

constexpr void __set__hmacKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__hmacKey() const;


// Methods

// Ctor Parameters [CppParam { name: "sender", ty: "GlobalNamespace::IUnconnectedMessageSender", modifiers: "", def_value: None }, CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "asyncCompute", ty: "GlobalNamespace::IAsyncComputeManager", modifiers: "", def_value: None }, CppParam { name: "analytics", ty: "BGNet::Core::IAnalyticsManager", modifiers: "", def_value: None }, CppParam { name: "certificateEncryptionProvider", ty: "GlobalNamespace::ICertificateEncryptionProvider", modifiers: "", def_value: None }, CppParam { name: "certificateList", ty: "System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>", modifiers: "", def_value: None }]
explicit BaseServerUnconnectedMessageHandler(GlobalNamespace::IUnconnectedMessageSender sender, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IAsyncComputeManager asyncCompute, BGNet::Core::IAnalyticsManager analytics, GlobalNamespace::ICertificateEncryptionProvider certificateEncryptionProvider, System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2> certificateList) ;

/// @brief Method .ctor addr 0xdde8c8 size 0x2f4 virtual false final false
 void _ctor(GlobalNamespace::IUnconnectedMessageSender sender, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IAsyncComputeManager asyncCompute, BGNet::Core::IAnalyticsManager analytics, GlobalNamespace::ICertificateEncryptionProvider certificateEncryptionProvider, System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2> certificateList) ;

/// @brief Method PollUpdate addr 0xddf948 size 0x18 virtual true final false
 void PollUpdate() ;

/// @brief Method GetMessageType addr 0xddfb30 size 0x60 virtual true final false
 uint32_t GetMessageType(BGNet::Core::Messages::IUnconnectedMessage message) ;

/// @brief Method ShouldHandleMessage addr 0xddfbf8 size 0x124 virtual true final false
 bool ShouldHandleMessage(BGNet::Core::Messages::IUnconnectedMessage packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method RegisterHandshakeMessageHandlers addr 0xddef5c size 0x928 virtual false final false
 void RegisterHandshakeMessageHandlers() ;

/// @brief Method HandleClientHelloRequest addr 0xde01ac size 0xec virtual false final false
 void HandleClientHelloRequest(BGNet::Core::Messages::ClientHelloRequest packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method HandleClientHelloWithCookieRequest addr 0xde04b8 size 0x74 virtual false final false
 void HandleClientHelloWithCookieRequest(BGNet::Core::Messages::ClientHelloWithCookieRequest packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method StartServerAuthenticationFlow addr 0xde052c size 0xd4 virtual false final false
 void StartServerAuthenticationFlow(uint32_t protocolVersion, System::Net::IPEndPoint endPoint, uint32_t requestId, uint32_t certificateResponseId, ::ArrayW<uint8_t> clientRandom) ;

/// @brief Method VerifyAuthenticationRequest addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task VerifyAuthenticationRequest(uint32_t protocolVersion, System::Net::IPEndPoint endPoint, BGNet::Core::Messages::IUnconnectedAuthenticateRequest authenticateRequest) ;

/// @brief Method StartServerAuthenticationFlowAsync addr 0xde0600 size 0x110 virtual false final false
 System::Threading::Tasks::Task StartServerAuthenticationFlowAsync(uint32_t protocolVersion, System::Net::IPEndPoint endPoint, uint32_t requestId, uint32_t certificateResponseId, ::ArrayW<uint8_t> clientRandom) ;

/// @brief Method GetCookie addr 0xddfd70 size 0x29c virtual false final false
 ::ArrayW<uint8_t> GetCookie(System::Net::IPEndPoint endPoint, ::ArrayW<uint8_t> random) ;

/// @brief Method GetSignatureAsync addr 0xde0710 size 0x110 virtual false final false
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> GetSignatureAsync(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey) ;

/// @brief Method GetPreMasterSecretAsync addr 0xde0820 size 0x108 virtual false final false
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> GetPreMasterSecretAsync(GlobalNamespace::IDiffieHellmanKeyPair serverKeys, ::ArrayW<uint8_t> clientKey) ;

/// @brief Method RotateServerKeys addr 0xddfa0c size 0x124 virtual false final false
 void RotateServerKeys() ;

/// @brief Method RotateServerKeysAsync addr 0xde0928 size 0xc8 virtual false final false
 System::Threading::Tasks::Task RotateServerKeysAsync() ;

/// @brief Method HandshakeLog addr 0xde09f0 size 0x8c virtual false final false
 void HandshakeLog(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/GetPreMasterSecretComputeOperation");
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/SigningComputeOperation");
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<>c");
NEED_NO_BOX(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<GetPreMasterSecretAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<GetSignatureAsync>d__23");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<RotateServerKeysAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<StartServerAuthenticationFlowAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<StartServerAuthenticationFlow>d__19");
} // end anonymous namespace
