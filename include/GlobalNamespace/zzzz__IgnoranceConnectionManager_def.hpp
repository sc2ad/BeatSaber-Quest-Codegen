#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace GlobalNamespace {
class IConnection;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
namespace IgnoranceCore {
class IgnoranceClient;
}
namespace IgnoranceCore {
class IgnoranceServer;
}
namespace System::Threading::Tasks {
class Task;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace System {
class IDisposable;
}
namespace IgnoranceCore {
struct IgnoranceChannelTypes;
}
namespace System {
class Action;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class IPollable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__IgnoranceConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection;
}
namespace GlobalNamespace {
class GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase;
}
namespace GlobalNamespace {
class GlobalNamespace__IgnoranceConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
class GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0;
}
namespace GlobalNamespace {
class GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1;
}
namespace GlobalNamespace {
class IgnoranceConnectionManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99;
}
namespace GlobalNamespace {
struct GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77;
}
// Type: ::ConnectionState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12729))
// CS Name: IgnoranceConnectionManager::ConnectionState
struct CORDL_TYPE GlobalNamespace__IgnoranceConnectionManager__ConnectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectionState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectionState(GlobalNamespace__IgnoranceConnectionManager__ConnectionState const&) = default;
                    constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectionState(GlobalNamespace__IgnoranceConnectionManager__ConnectionState&&) = default;
                    constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectionState& operator=(GlobalNamespace__IgnoranceConnectionManager__ConnectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectionState& operator=(GlobalNamespace__IgnoranceConnectionManager__ConnectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IgnoranceConnectionManager__ConnectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__IgnoranceConnectionManager__ConnectionState_Unwrapped : int32_t {
__Connecting = 0,
__Connected = 1,
__Disconnecting = 2,
__Disconnected = 3,
__Disposed = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__IgnoranceConnectionManager__ConnectionState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__IgnoranceConnectionManager__ConnectionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Connecting offset 0
static GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState const Connecting;

/// @brief Field Connected offset 0
static GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState const Connected;

/// @brief Field Disconnecting offset 0
static GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState const Disconnecting;

/// @brief Field Disconnected offset 0
static GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState const Disconnected;

/// @brief Field Disposed offset 0
static GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState const Disposed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IgnoranceConnectionParamsBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12730))
// CS Name: IgnoranceConnectionManager::IgnoranceConnectionParamsBase
class CORDL_TYPE GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::IgnoranceConnectionManager>
constexpr operator  GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::IgnoranceConnectionManager>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase(GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase(GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase& operator=(GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase&& o) noexcept = default;
  constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase& operator=(GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectionRequestHandler __declspec(property(get=__get_connectionRequestHandler, put=__set_connectionRequestHandler))  connectionRequestHandler;

constexpr void __set_connectionRequestHandler(GlobalNamespace::IConnectionRequestHandler value) ;

constexpr GlobalNamespace::IConnectionRequestHandler __get_connectionRequestHandler() const;

 bool __declspec(property(get=__get_useSsl, put=__set_useSsl))  useSsl;

constexpr void __set_useSsl(bool value) ;

constexpr bool __get_useSsl() const;

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;

 bool __declspec(property(get=__get_enableBackgroundSentry, put=__set_enableBackgroundSentry))  enableBackgroundSentry;

constexpr void __set_enableBackgroundSentry(bool value) ;

constexpr bool __get_enableBackgroundSentry() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase() ;

/// @brief Method .ctor addr 0xdb1d2c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartServerParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12730))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12731))
// CS Name: IgnoranceConnectionManager::StartServerParams
class CORDL_TYPE GlobalNamespace__IgnoranceConnectionManager__StartServerParams : public GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GlobalNamespace__IgnoranceConnectionManager__StartServerParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager__StartServerParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager__StartServerParams(GlobalNamespace__IgnoranceConnectionManager__StartServerParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager__StartServerParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager__StartServerParams(GlobalNamespace__IgnoranceConnectionManager__StartServerParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IgnoranceConnectionManager__StartServerParams(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase(ptr) {
}


  constexpr GlobalNamespace__IgnoranceConnectionManager__StartServerParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager__StartServerParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager__StartServerParams& operator=(GlobalNamespace__IgnoranceConnectionManager__StartServerParams&& o) noexcept = default;
  constexpr GlobalNamespace__IgnoranceConnectionManager__StartServerParams& operator=(GlobalNamespace__IgnoranceConnectionManager__StartServerParams const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_port, put=__set_port))  port;

constexpr void __set_port(int32_t value) ;

constexpr int32_t __get_port() const;

 ::StringW __declspec(property(get=__get_certificatePath, put=__set_certificatePath))  certificatePath;

constexpr void __set_certificatePath(::StringW value) ;

constexpr ::StringW __get_certificatePath() const;

 ::StringW __declspec(property(get=__get_certificate, put=__set_certificate))  certificate;

constexpr void __set_certificate(::StringW value) ;

constexpr ::StringW __get_certificate() const;

 ::StringW __declspec(property(get=__get_privateKeyPath, put=__set_privateKeyPath))  privateKeyPath;

constexpr void __set_privateKeyPath(::StringW value) ;

constexpr ::StringW __get_privateKeyPath() const;

 ::StringW __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(::StringW value) ;

constexpr ::StringW __get_privateKey() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__IgnoranceConnectionManager__StartServerParams() ;

/// @brief Method .ctor addr 0xdb1d3c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectToServerParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12730))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12732))
// CS Name: IgnoranceConnectionManager::ConnectToServerParams
class CORDL_TYPE GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams : public GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams(GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams(GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase(ptr) {
}


  constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams& operator=(GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams&& o) noexcept = default;
  constexpr GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams& operator=(GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_hostName, put=__set_hostName))  hostName;

constexpr void __set_hostName(::StringW value) ;

constexpr ::StringW __get_hostName() const;

 int32_t __declspec(property(get=__get_port, put=__set_port))  port;

constexpr void __set_port(int32_t value) ;

constexpr int32_t __get_port() const;

 ::StringW __declspec(property(get=__get_serverUserId, put=__set_serverUserId))  serverUserId;

constexpr void __set_serverUserId(::StringW value) ;

constexpr ::StringW __get_serverUserId() const;

 ::StringW __declspec(property(get=__get_serverUserName, put=__set_serverUserName))  serverUserName;

constexpr void __set_serverUserName(::StringW value) ;

constexpr ::StringW __get_serverUserName() const;

 bool __declspec(property(get=__get_validateCertificate, put=__set_validateCertificate))  validateCertificate;

constexpr void __set_validateCertificate(bool value) ;

constexpr bool __get_validateCertificate() const;

 ::StringW __declspec(property(get=__get_rootCertificatePath, put=__set_rootCertificatePath))  rootCertificatePath;

constexpr void __set_rootCertificatePath(::StringW value) ;

constexpr ::StringW __get_rootCertificatePath() const;

 ::StringW __declspec(property(get=__get_rootCertificate, put=__set_rootCertificate))  rootCertificate;

constexpr void __set_rootCertificate(::StringW value) ;

constexpr ::StringW __get_rootCertificate() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams() ;

/// @brief Method .ctor addr 0xdabcb0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IgnoranceConnection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12733))
// CS Name: IgnoranceConnectionManager::IgnoranceConnection
class CORDL_TYPE GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnection
constexpr operator  GlobalNamespace::IConnection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection(GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection(GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection& operator=(GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection&& o) noexcept = default;
  constexpr GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection& operator=(GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IgnoranceConnectionManager __declspec(property(get=__get__connectionManager, put=__set__connectionManager))  _connectionManager;

constexpr void __set__connectionManager(GlobalNamespace::IgnoranceConnectionManager value) ;

constexpr GlobalNamespace::IgnoranceConnectionManager __get__connectionManager() const;

 uint32_t __declspec(property(get=__get_peerId, put=__set_peerId))  peerId;

constexpr void __set_peerId(uint32_t value) ;

constexpr uint32_t __get_peerId() const;

 ::StringW __declspec(property(get=__get__userId_k__BackingField, put=__set__userId_k__BackingField))  _userId_k__BackingField;

constexpr void __set__userId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__userId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__userName_k__BackingField, put=__set__userName_k__BackingField))  _userName_k__BackingField;

constexpr void __set__userName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__userName_k__BackingField() const;

 bool __declspec(property(get=__get__isConnectionOwner_k__BackingField, put=__set__isConnectionOwner_k__BackingField))  _isConnectionOwner_k__BackingField;

constexpr void __set__isConnectionOwner_k__BackingField(bool value) ;

constexpr bool __get__isConnectionOwner_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_userId, put=set_userId))  userId;

 ::StringW __declspec(property(get=get_userName, put=set_userName))  userName;

 bool __declspec(property(get=get_isConnectionOwner, put=set_isConnectionOwner))  isConnectionOwner;


// Methods

/// @brief Method get_userId addr 0xdb1d4c size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method set_userId addr 0xdb1d54 size 0x8 virtual false final false
 void set_userId(::StringW value) ;

/// @brief Method get_userName addr 0xdb1d5c size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method set_userName addr 0xdb1d64 size 0x8 virtual false final false
 void set_userName(::StringW value) ;

/// @brief Method get_isConnectionOwner addr 0xdb1d6c size 0x8 virtual true final true
 bool get_isConnectionOwner() ;

/// @brief Method set_isConnectionOwner addr 0xdb1d74 size 0xc virtual false final false
 void set_isConnectionOwner(bool value) ;

// Ctor Parameters [CppParam { name: "connectionManager", ty: "GlobalNamespace::IgnoranceConnectionManager", modifiers: "", def_value: None }, CppParam { name: "peerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isConnectionOwner", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection(GlobalNamespace::IgnoranceConnectionManager connectionManager, uint32_t peerId, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method .ctor addr 0xdb1430 size 0x58 virtual false final false
 void _ctor(GlobalNamespace::IgnoranceConnectionManager connectionManager, uint32_t peerId, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method Send addr 0xdb1d80 size 0x28 virtual true final true
 void Send(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method Disconnect addr 0xdb1da8 size 0x24 virtual true final true
 void Disconnect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass77_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12734))
// CS Name: IgnoranceConnectionManager::<>c__DisplayClass77_0
class CORDL_TYPE GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0(GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0(GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0& operator=(GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0&& o) noexcept = default;
  constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0& operator=(GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0 const& o) noexcept = default;
                


// Fields

 IgnoranceCore::IgnoranceClient __declspec(property(get=__get_client, put=__set_client))  client;

constexpr void __set_client(IgnoranceCore::IgnoranceClient value) ;

constexpr IgnoranceCore::IgnoranceClient __get_client() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0() ;

/// @brief Method .ctor addr 0xdb1dcc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DisposeAsync>b__0 addr 0xdb1dd4 size 0x8 virtual false final false
 void _DisposeAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass77_1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12735))
// CS Name: IgnoranceConnectionManager::<>c__DisplayClass77_1
class CORDL_TYPE GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1(GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1(GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1& operator=(GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1&& o) noexcept = default;
  constexpr GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1& operator=(GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1 const& o) noexcept = default;
                


// Fields

 IgnoranceCore::IgnoranceServer __declspec(property(get=__get_server, put=__set_server))  server;

constexpr void __set_server(IgnoranceCore::IgnoranceServer value) ;

constexpr IgnoranceCore::IgnoranceServer __get_server() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1() ;

/// @brief Method .ctor addr 0xdb1ddc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DisposeAsync>b__1 addr 0xdb1de4 size 0x8 virtual false final false
 void _DisposeAsync_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<DisposeAsync>d__77
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12736))
// CS Name: IgnoranceConnectionManager::<DisposeAsync>d__77
struct CORDL_TYPE GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::IgnoranceConnectionManager", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::IgnoranceConnectionManager __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77(GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77 const&) = default;
                    constexpr GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77(GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77&&) = default;
                    constexpr GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77& operator=(GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77& operator=(GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::IgnoranceConnectionManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::IgnoranceConnectionManager value) ;

constexpr GlobalNamespace::IgnoranceConnectionManager __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdb1dec size 0x3dc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdb21c8 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<BackgroundDisconnectSentry>d__99
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12737))
// CS Name: IgnoranceConnectionManager::<BackgroundDisconnectSentry>d__99
struct CORDL_TYPE GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::IgnoranceConnectionManager", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::IgnoranceConnectionManager __4__this, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99(GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99 const&) = default;
                    constexpr GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99(GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99&&) = default;
                    constexpr GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99& operator=(GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99& operator=(GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::IgnoranceConnectionManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::IgnoranceConnectionManager value) ;

constexpr GlobalNamespace::IgnoranceConnectionManager __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdb21d4 size 0x3e0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdb25b4 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IgnoranceConnectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12738))
// CS Name: IgnoranceConnectionManager
class CORDL_TYPE IgnoranceConnectionManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _BackgroundDisconnectSentry_d__99 = GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99;

using _DisposeAsync_d__77 = GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77;

using __c__DisplayClass77_1 = GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1;

using __c__DisplayClass77_0 = GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0;

using IgnoranceConnection = GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection;

using ConnectToServerParams = GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams;

using StartServerParams = GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams;

using IgnoranceConnectionParamsBase = GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase;

using ConnectionState = GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState;

/// @brief Convert operator to GlobalNamespace::IConnectionManager
constexpr operator  GlobalNamespace::IConnectionManager() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~IgnoranceConnectionManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceConnectionManager", modifiers: " const&", def_value: None }]
constexpr IgnoranceConnectionManager(IgnoranceConnectionManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceConnectionManager", modifiers: "&&", def_value: None }]
constexpr IgnoranceConnectionManager(IgnoranceConnectionManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IgnoranceConnectionManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IgnoranceConnectionManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IgnoranceConnectionManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IgnoranceConnectionManager& operator=(IgnoranceConnectionManager&& o) noexcept = default;
  constexpr IgnoranceConnectionManager& operator=(IgnoranceConnectionManager const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_onInitializedEvent, put=__set_onInitializedEvent))  onInitializedEvent;

constexpr void __set_onInitializedEvent(System::Action value) ;

constexpr System::Action __get_onInitializedEvent() const;

 System::Action __declspec(property(get=__get_onConnectedEvent, put=__set_onConnectedEvent))  onConnectedEvent;

constexpr void __set_onConnectedEvent(System::Action value) ;

constexpr System::Action __get_onConnectedEvent() const;

 System::Action_1<GlobalNamespace::DisconnectedReason> __declspec(property(get=__get_onDisconnectedEvent, put=__set_onDisconnectedEvent))  onDisconnectedEvent;

constexpr void __set_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

constexpr System::Action_1<GlobalNamespace::DisconnectedReason> __get_onDisconnectedEvent() const;

 System::Action_1<GlobalNamespace::ConnectionFailedReason> __declspec(property(get=__get_onConnectionFailedEvent, put=__set_onConnectionFailedEvent))  onConnectionFailedEvent;

constexpr void __set_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

constexpr System::Action_1<GlobalNamespace::ConnectionFailedReason> __get_onConnectionFailedEvent() const;

 System::Action_1<GlobalNamespace::IConnection> __declspec(property(get=__get_onConnectionConnectedEvent, put=__set_onConnectionConnectedEvent))  onConnectionConnectedEvent;

constexpr void __set_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

constexpr System::Action_1<GlobalNamespace::IConnection> __get_onConnectionConnectedEvent() const;

 System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> __declspec(property(get=__get_onConnectionDisconnectedEvent, put=__set_onConnectionDisconnectedEvent))  onConnectionDisconnectedEvent;

constexpr void __set_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

constexpr System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> __get_onConnectionDisconnectedEvent() const;

 System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> __declspec(property(get=__get_onReceivedDataEvent, put=__set_onReceivedDataEvent))  onReceivedDataEvent;

constexpr void __set_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

constexpr System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> __get_onReceivedDataEvent() const;

 ::StringW __declspec(property(get=__get__userId_k__BackingField, put=__set__userId_k__BackingField))  _userId_k__BackingField;

constexpr void __set__userId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__userId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__userName_k__BackingField, put=__set__userName_k__BackingField))  _userName_k__BackingField;

constexpr void __set__userName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__userName_k__BackingField() const;

 ::ArrayW<IgnoranceCore::IgnoranceChannelTypes> __declspec(property(get=__get__channels, put=__set__channels))  _channels;

constexpr void __set__channels(::ArrayW<IgnoranceCore::IgnoranceChannelTypes> value) ;

constexpr ::ArrayW<IgnoranceCore::IgnoranceChannelTypes> __get__channels() const;

/// @brief Field kIgnoranceConnectHeader offset 0
static constexpr ::ConstString  kIgnoranceConnectHeader{u"IgnCon"};

/// @brief Field kBackgroundDisconnectTimeoutMs offset 0
static constexpr int64_t  kBackgroundDisconnectTimeoutMs{120000};

/// @brief Field kMaxServerShutdownTimeMs offset 0
static constexpr int32_t  kMaxServerShutdownTimeMs{300};

/// @brief Field kMaxClientShutdownTimeMs offset 0
static constexpr int32_t  kMaxClientShutdownTimeMs{30};

 GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState value) ;

constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState __get__state() const;

 IgnoranceCore::IgnoranceClient __declspec(property(get=__get__client, put=__set__client))  _client;

constexpr void __set__client(IgnoranceCore::IgnoranceClient value) ;

constexpr IgnoranceCore::IgnoranceClient __get__client() const;

 IgnoranceCore::IgnoranceServer __declspec(property(get=__get__server, put=__set__server))  _server;

constexpr void __set__server(IgnoranceCore::IgnoranceServer value) ;

constexpr IgnoranceCore::IgnoranceServer __get__server() const;

 GlobalNamespace::IConnectionRequestHandler __declspec(property(get=__get__connectionRequestHandler, put=__set__connectionRequestHandler))  _connectionRequestHandler;

constexpr void __set__connectionRequestHandler(GlobalNamespace::IConnectionRequestHandler value) ;

constexpr GlobalNamespace::IConnectionRequestHandler __get__connectionRequestHandler() const;

 System::Collections::Generic::List_1<uint32_t> __declspec(property(get=__get__pendingConnections, put=__set__pendingConnections))  _pendingConnections;

constexpr void __set__pendingConnections(System::Collections::Generic::List_1<uint32_t> value) ;

constexpr System::Collections::Generic::List_1<uint32_t> __get__pendingConnections() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection> __declspec(property(get=__get__connections, put=__set__connections))  _connections;

constexpr void __set__connections(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection> __get__connections() const;

 LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__incomingDataWriter, put=__set__incomingDataWriter))  _incomingDataWriter;

constexpr void __set__incomingDataWriter(LiteNetLib::Utils::NetDataWriter value) ;

constexpr LiteNetLib::Utils::NetDataWriter __get__incomingDataWriter() const;

 LiteNetLib::Utils::NetDataReader __declspec(property(get=__get__incomingDataReader, put=__set__incomingDataReader))  _incomingDataReader;

constexpr void __set__incomingDataReader(LiteNetLib::Utils::NetDataReader value) ;

constexpr LiteNetLib::Utils::NetDataReader __get__incomingDataReader() const;

 LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__connectionRequestWriter, put=__set__connectionRequestWriter))  _connectionRequestWriter;

constexpr void __set__connectionRequestWriter(LiteNetLib::Utils::NetDataWriter value) ;

constexpr LiteNetLib::Utils::NetDataWriter __get__connectionRequestWriter() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__backgroundSentryDisconnectCts, put=__set__backgroundSentryDisconnectCts))  _backgroundSentryDisconnectCts;

constexpr void __set__backgroundSentryDisconnectCts(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__backgroundSentryDisconnectCts() const;

 bool __declspec(property(get=__get__sentryDisconnected, put=__set__sentryDisconnected))  _sentryDisconnected;

constexpr void __set__sentryDisconnected(bool value) ;

constexpr bool __get__sentryDisconnected() const;

 int64_t __declspec(property(get=__get__lastPollUpdateTime, put=__set__lastPollUpdateTime))  _lastPollUpdateTime;

constexpr void __set__lastPollUpdateTime(int64_t value) ;

constexpr int64_t __get__lastPollUpdateTime() const;

 BGNet::Core::ITimeProvider __declspec(property(get=__get__timeProvider, put=__set__timeProvider))  _timeProvider;

constexpr void __set__timeProvider(BGNet::Core::ITimeProvider value) ;

constexpr BGNet::Core::ITimeProvider __get__timeProvider() const;

 BGNet::Core::ITaskUtility __declspec(property(get=__get__taskUtility, put=__set__taskUtility))  _taskUtility;

constexpr void __set__taskUtility(BGNet::Core::ITaskUtility value) ;

constexpr BGNet::Core::ITaskUtility __get__taskUtility() const;

 ::StringW __declspec(property(get=__get__serverUserId_k__BackingField, put=__set__serverUserId_k__BackingField))  _serverUserId_k__BackingField;

constexpr void __set__serverUserId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__serverUserId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__serverUserName_k__BackingField, put=__set__serverUserName_k__BackingField))  _serverUserName_k__BackingField;

constexpr void __set__serverUserName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__serverUserName_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_userId, put=set_userId))  userId;

 ::StringW __declspec(property(get=get_userName, put=set_userName))  userName;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isConnecting))  isConnecting;

 bool __declspec(property(get=get_isDisconnecting))  isDisconnecting;

 int32_t __declspec(property(get=get_connectionCount))  connectionCount;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 bool __declspec(property(get=get_isDisposed))  isDisposed;

 ::StringW __declspec(property(get=get_serverUserId, put=set_serverUserId))  serverUserId;

 ::StringW __declspec(property(get=get_serverUserName, put=set_serverUserName))  serverUserName;


// Methods

/// @brief Method add_onInitializedEvent addr 0xdafb20 size 0x9c virtual true final true
 void add_onInitializedEvent(System::Action value) ;

/// @brief Method remove_onInitializedEvent addr 0xdafbbc size 0x9c virtual true final true
 void remove_onInitializedEvent(System::Action value) ;

/// @brief Method add_onConnectedEvent addr 0xdafc58 size 0x9c virtual true final true
 void add_onConnectedEvent(System::Action value) ;

/// @brief Method remove_onConnectedEvent addr 0xdafcf4 size 0x9c virtual true final true
 void remove_onConnectedEvent(System::Action value) ;

/// @brief Method add_onDisconnectedEvent addr 0xdafd90 size 0xb0 virtual true final true
 void add_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onDisconnectedEvent addr 0xdafe40 size 0xb0 virtual true final true
 void remove_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onConnectionFailedEvent addr 0xdafef0 size 0xb0 virtual true final true
 void add_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method remove_onConnectionFailedEvent addr 0xdaffa0 size 0xb0 virtual true final true
 void remove_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method add_onConnectionConnectedEvent addr 0xdb0050 size 0xb0 virtual true final true
 void add_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

/// @brief Method remove_onConnectionConnectedEvent addr 0xdb0100 size 0xb0 virtual true final true
 void remove_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

/// @brief Method add_onConnectionDisconnectedEvent addr 0xdb01b0 size 0xb0 virtual true final true
 void add_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onConnectionDisconnectedEvent addr 0xdb0260 size 0xb0 virtual true final true
 void remove_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onReceivedDataEvent addr 0xdb0310 size 0xb0 virtual true final true
 void add_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

/// @brief Method remove_onReceivedDataEvent addr 0xdb03c0 size 0xb0 virtual true final true
 void remove_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

/// @brief Method get_userId addr 0xdb0470 size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method set_userId addr 0xdb0478 size 0x8 virtual false final false
 void set_userId(::StringW value) ;

/// @brief Method get_userName addr 0xdb0480 size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method set_userName addr 0xdb0488 size 0x8 virtual false final false
 void set_userName(::StringW value) ;

/// @brief Method get_isConnected addr 0xdb0490 size 0x10 virtual true final true
 bool get_isConnected() ;

/// @brief Method get_isConnecting addr 0xdb04a0 size 0x10 virtual true final true
 bool get_isConnecting() ;

/// @brief Method get_isDisconnecting addr 0xdb04b0 size 0x10 virtual true final true
 bool get_isDisconnecting() ;

/// @brief Method get_connectionCount addr 0xdb04c0 size 0x48 virtual true final true
 int32_t get_connectionCount() ;

/// @brief Method get_isConnectionOwner addr 0xdb0508 size 0x10 virtual true final true
 bool get_isConnectionOwner() ;

/// @brief Method get_isDisposed addr 0xdb0518 size 0x10 virtual true final true
 bool get_isDisposed() ;

/// @brief Method get_serverUserId addr 0xdb0528 size 0x8 virtual false final false
 ::StringW get_serverUserId() ;

/// @brief Method set_serverUserId addr 0xdb0530 size 0x8 virtual false final false
 void set_serverUserId(::StringW value) ;

/// @brief Method get_serverUserName addr 0xdb0538 size 0x8 virtual false final false
 ::StringW get_serverUserName() ;

/// @brief Method set_serverUserName addr 0xdb0540 size 0x8 virtual false final false
 void set_serverUserName(::StringW value) ;

// Ctor Parameters []
explicit IgnoranceConnectionManager() ;

/// @brief Method .ctor addr 0xdaade0 size 0xac virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }]
explicit IgnoranceConnectionManager(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility) ;

/// @brief Method .ctor addr 0xdb0548 size 0x1b0 virtual false final false
 void _ctor(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 bool Init(GlobalNamespace::IConnectionInitParams_1<T> initParams) ;

/// @brief Method PollUpdate addr 0xdb06f8 size 0xf0 virtual true final true
 void PollUpdate() ;

/// @brief Method DisposeAsync addr 0xdb0e20 size 0xc8 virtual true final true
 System::Threading::Tasks::Task DisposeAsync() ;

/// @brief Method Dispose addr 0xdb0ee8 size 0x34 virtual true final true
 void Dispose() ;

/// @brief Method HandleConnectionEvents addr 0xdb080c size 0x278 virtual false final false
 void HandleConnectionEvents() ;

/// @brief Method HandleIncomingEvents addr 0xdb0a84 size 0x2d8 virtual false final false
 void HandleIncomingEvents() ;

/// @brief Method HandleDisconnectionEvents addr 0xdb0d5c size 0xc4 virtual false final false
 void HandleDisconnectionEvents() ;

/// @brief Method GetConnectionMessage addr 0xdb1238 size 0x110 virtual false final false
 LiteNetLib::Utils::NetDataWriter GetConnectionMessage() ;

/// @brief Method TryParseConnectionMessage addr 0xdb1488 size 0x134 virtual false final false
 bool TryParseConnectionMessage(LiteNetLib::Utils::NetDataReader reader, ByRef<::StringW> userId, ByRef<::StringW> userName, ByRef<bool> isConnectionOwner) ;

/// @brief Method Send addr 0xdb1348 size 0xe8 virtual false final false
 void Send(uint32_t peerId, LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method DisconnectPeer addr 0xdb15bc size 0xf0 virtual false final false
 void DisconnectPeer(uint32_t peerId, GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method TryGetConnection addr 0xdb16ac size 0xdc virtual false final false
 bool TryGetConnection(uint32_t peerId, ByRef<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection> connection) ;

/// @brief Method SendToAll addr 0xdb17a4 size 0xb8 virtual true final true
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method SendToAll addr 0xdb185c size 0xe0 virtual true final true
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod, GlobalNamespace::IConnection excludingConnection) ;

/// @brief Method Disconnect addr 0xdb0f1c size 0x1b4 virtual true final true
 void Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method GetConnection addr 0xdb193c size 0x58 virtual true final true
 GlobalNamespace::IConnection GetConnection(int32_t index) ;

/// @brief Method ToDeliveryMethod addr 0xdb1788 size 0xc virtual false final false
static BGNet::Core::DeliveryMethod ToDeliveryMethod(uint8_t channel) ;

/// @brief Method ToChannel addr 0xdb1794 size 0x10 virtual false final false
static uint8_t ToChannel(BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method WaitForClientShutdown addr 0xdb10d0 size 0xb4 virtual false final false
static void WaitForClientShutdown(IgnoranceCore::IgnoranceClient client) ;

/// @brief Method WaitForServerShutdown addr 0xdb1184 size 0xb4 virtual false final false
static void WaitForServerShutdown(IgnoranceCore::IgnoranceServer server) ;

/// @brief Method Log addr 0xdb1a20 size 0x8c virtual false final false
static void Log(::StringW msg) ;

/// @brief Method LogError addr 0xdb1994 size 0x8c virtual false final false
static void LogError(::StringW msg) ;

/// @brief Method StartBackgroundSentry addr 0xdb1aac size 0x1b4 virtual false final false
 void StartBackgroundSentry() ;

/// @brief Method CheckSentryState addr 0xdb07e8 size 0x24 virtual false final false
 void CheckSentryState() ;

/// @brief Method BackgroundDisconnectSentry addr 0xdb1c60 size 0xcc virtual false final false
 System::Threading::Tasks::Task BackgroundDisconnectSentry() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState, "", "IgnoranceConnectionManager/ConnectionState");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams, "", "IgnoranceConnectionManager/ConnectToServerParams");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection, "", "IgnoranceConnectionManager/IgnoranceConnection");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase, "", "IgnoranceConnectionManager/IgnoranceConnectionParamsBase");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams, "", "IgnoranceConnectionManager/StartServerParams");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0, "", "IgnoranceConnectionManager/<>c__DisplayClass77_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1, "", "IgnoranceConnectionManager/<>c__DisplayClass77_1");
NEED_NO_BOX(GlobalNamespace::IgnoranceConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IgnoranceConnectionManager, "", "IgnoranceConnectionManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99, "", "IgnoranceConnectionManager/<BackgroundDisconnectSentry>d__99");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77, "", "IgnoranceConnectionManager/<DisposeAsync>d__77");
