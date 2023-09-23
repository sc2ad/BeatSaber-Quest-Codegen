#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
namespace GlobalNamespace {
class IConnection;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class IPollable;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace Oculus::Platform {
struct SendPolicy;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OculusConnectionManager__NetworkMode;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusConnectionManager__OculusConnection;
}
namespace GlobalNamespace {
class GlobalNamespace__OculusConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
class OculusConnectionManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61;
}
// Type: ::NetworkMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4578))
// CS Name: OculusConnectionManager::NetworkMode
struct CORDL_TYPE GlobalNamespace__OculusConnectionManager__NetworkMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusConnectionManager__NetworkMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OculusConnectionManager__NetworkMode(GlobalNamespace__OculusConnectionManager__NetworkMode const&) = default;
                    constexpr GlobalNamespace__OculusConnectionManager__NetworkMode(GlobalNamespace__OculusConnectionManager__NetworkMode&&) = default;
                    constexpr GlobalNamespace__OculusConnectionManager__NetworkMode& operator=(GlobalNamespace__OculusConnectionManager__NetworkMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusConnectionManager__NetworkMode& operator=(GlobalNamespace__OculusConnectionManager__NetworkMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusConnectionManager__NetworkMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OculusConnectionManager__NetworkMode_Unwrapped : int32_t {
__None = 0,
__Client = 1,
__Server = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OculusConnectionManager__NetworkMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OculusConnectionManager__NetworkMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OculusConnectionManager__NetworkMode const None;

/// @brief Field Client offset 0
static GlobalNamespace::GlobalNamespace__OculusConnectionManager__NetworkMode const Client;

/// @brief Field Server offset 0
static GlobalNamespace::GlobalNamespace__OculusConnectionManager__NetworkMode const Server;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusConnection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4579))
// CS Name: OculusConnectionManager::OculusConnection
class CORDL_TYPE GlobalNamespace__OculusConnectionManager__OculusConnection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnection
constexpr operator  GlobalNamespace::IConnection() const noexcept;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection>
constexpr operator  System::IEquatable_1<GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__OculusConnectionManager__OculusConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusConnectionManager__OculusConnection", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusConnectionManager__OculusConnection(GlobalNamespace__OculusConnectionManager__OculusConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusConnectionManager__OculusConnection", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusConnectionManager__OculusConnection(GlobalNamespace__OculusConnectionManager__OculusConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusConnectionManager__OculusConnection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusConnectionManager__OculusConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusConnectionManager__OculusConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusConnectionManager__OculusConnection& operator=(GlobalNamespace__OculusConnectionManager__OculusConnection&& o) noexcept = default;
  constexpr GlobalNamespace__OculusConnectionManager__OculusConnection& operator=(GlobalNamespace__OculusConnectionManager__OculusConnection const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(uint64_t value) ;

constexpr uint64_t __get__id() const;

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 bool __declspec(property(get=__get__isConnectionOwner, put=__set__isConnectionOwner))  _isConnectionOwner;

constexpr void __set__isConnectionOwner(bool value) ;

constexpr bool __get__isConnectionOwner() const;


// Properties

 uint64_t __declspec(property(get=get_id))  id;

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;


// Methods

/// @brief Method get_id addr 0x220bf3c size 0x8 virtual false final false
 uint64_t get_id() ;

/// @brief Method get_userId addr 0x220bf44 size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x220bf4c size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_isConnectionOwner addr 0x220bf54 size 0x8 virtual true final true
 bool get_isConnectionOwner() ;

// Ctor Parameters [CppParam { name: "id", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isConnectionOwner", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__OculusConnectionManager__OculusConnection(uint64_t id, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method .ctor addr 0x220bf5c size 0xac virtual false final false
 void _ctor(uint64_t id, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method Send addr 0x220c008 size 0x144 virtual true final true
 void Send(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method Disconnect addr 0x220c14c size 0xc virtual true final true
 void Disconnect() ;

/// @brief Method Equals addr 0x220c158 size 0x30 virtual true final true
 bool Equals(GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection other) ;

/// @brief Method Equals addr 0x220c188 size 0x110 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x220c298 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x220c2b8 size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartServerParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4580))
// CS Name: OculusConnectionManager::StartServerParams
class CORDL_TYPE GlobalNamespace__OculusConnectionManager__StartServerParams : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager>
constexpr operator  GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__OculusConnectionManager__StartServerParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusConnectionManager__StartServerParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusConnectionManager__StartServerParams(GlobalNamespace__OculusConnectionManager__StartServerParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusConnectionManager__StartServerParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusConnectionManager__StartServerParams(GlobalNamespace__OculusConnectionManager__StartServerParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusConnectionManager__StartServerParams(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusConnectionManager__StartServerParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusConnectionManager__StartServerParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusConnectionManager__StartServerParams& operator=(GlobalNamespace__OculusConnectionManager__StartServerParams&& o) noexcept = default;
  constexpr GlobalNamespace__OculusConnectionManager__StartServerParams& operator=(GlobalNamespace__OculusConnectionManager__StartServerParams const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get_oculusNetworkPlayerModel, put=__set_oculusNetworkPlayerModel))  oculusNetworkPlayerModel;

constexpr void __set_oculusNetworkPlayerModel(GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr GlobalNamespace::OculusNetworkPlayerModel __get_oculusNetworkPlayerModel() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusConnectionManager__StartServerParams() ;

/// @brief Method .ctor addr 0x220c340 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectToServerParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4581))
// CS Name: OculusConnectionManager::ConnectToServerParams
class CORDL_TYPE GlobalNamespace__OculusConnectionManager__ConnectToServerParams : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager>
constexpr operator  GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::OculusConnectionManager>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__OculusConnectionManager__ConnectToServerParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusConnectionManager__ConnectToServerParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OculusConnectionManager__ConnectToServerParams(GlobalNamespace__OculusConnectionManager__ConnectToServerParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OculusConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OculusConnectionManager__ConnectToServerParams(GlobalNamespace__OculusConnectionManager__ConnectToServerParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusConnectionManager__ConnectToServerParams(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OculusConnectionManager__ConnectToServerParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OculusConnectionManager__ConnectToServerParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OculusConnectionManager__ConnectToServerParams& operator=(GlobalNamespace__OculusConnectionManager__ConnectToServerParams&& o) noexcept = default;
  constexpr GlobalNamespace__OculusConnectionManager__ConnectToServerParams& operator=(GlobalNamespace__OculusConnectionManager__ConnectToServerParams const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get_oculusNetworkPlayerModel, put=__set_oculusNetworkPlayerModel))  oculusNetworkPlayerModel;

constexpr void __set_oculusNetworkPlayerModel(GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr GlobalNamespace::OculusNetworkPlayerModel __get_oculusNetworkPlayerModel() const;

 uint64_t __declspec(property(get=__get_serverId, put=__set_serverId))  serverId;

constexpr void __set_serverId(uint64_t value) ;

constexpr uint64_t __get_serverId() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OculusConnectionManager__ConnectToServerParams() ;

/// @brief Method .ctor addr 0x220c348 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<HandlePeerConnectionRequest>d__61
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4582))
// CS Name: OculusConnectionManager::<HandlePeerConnectionRequest>d__61
struct CORDL_TYPE GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "message", ty: "Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::OculusConnectionManager", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer> message, GlobalNamespace::OculusConnectionManager __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;


                    constexpr GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61(GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61 const&) = default;
                    constexpr GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61(GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61&&) = default;
                    constexpr GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61& operator=(GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61& operator=(GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer> __declspec(property(get=__get_message, put=__set_message))  message;

constexpr void __set_message(Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer> value) ;

constexpr Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer> __get_message() const;

 GlobalNamespace::OculusConnectionManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OculusConnectionManager value) ;

constexpr GlobalNamespace::OculusConnectionManager __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<bool> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x220c350 size 0x2e4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x220c808 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OculusConnectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4583))
// CS Name: OculusConnectionManager
class CORDL_TYPE OculusConnectionManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _HandlePeerConnectionRequest_d__61 = GlobalNamespace::GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61;

using ConnectToServerParams = GlobalNamespace::GlobalNamespace__OculusConnectionManager__ConnectToServerParams;

using StartServerParams = GlobalNamespace::GlobalNamespace__OculusConnectionManager__StartServerParams;

using OculusConnection = GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection;

using NetworkMode = GlobalNamespace::GlobalNamespace__OculusConnectionManager__NetworkMode;

/// @brief Convert operator to GlobalNamespace::IConnectionManager
constexpr operator  GlobalNamespace::IConnectionManager() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~OculusConnectionManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusConnectionManager", modifiers: " const&", def_value: None }]
constexpr OculusConnectionManager(OculusConnectionManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusConnectionManager", modifiers: "&&", def_value: None }]
constexpr OculusConnectionManager(OculusConnectionManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusConnectionManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusConnectionManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusConnectionManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusConnectionManager& operator=(OculusConnectionManager&& o) noexcept = default;
  constexpr OculusConnectionManager& operator=(OculusConnectionManager const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection> __declspec(property(get=__get__connections, put=__set__connections))  _connections;

constexpr void __set__connections(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection> __get__connections() const;

 LiteNetLib::Utils::NetDataReader __declspec(property(get=__get__dataReader, put=__set__dataReader))  _dataReader;

constexpr void __set__dataReader(LiteNetLib::Utils::NetDataReader value) ;

constexpr LiteNetLib::Utils::NetDataReader __get__dataReader() const;

 GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get__oculusNetworkPlayerModel, put=__set__oculusNetworkPlayerModel))  _oculusNetworkPlayerModel;

constexpr void __set__oculusNetworkPlayerModel(GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr GlobalNamespace::OculusNetworkPlayerModel __get__oculusNetworkPlayerModel() const;

 GlobalNamespace::GlobalNamespace__OculusConnectionManager__NetworkMode __declspec(property(get=__get__mode, put=__set__mode))  _mode;

constexpr void __set__mode(GlobalNamespace::GlobalNamespace__OculusConnectionManager__NetworkMode value) ;

constexpr GlobalNamespace::GlobalNamespace__OculusConnectionManager__NetworkMode __get__mode() const;

 bool __declspec(property(get=__get__connectionEstablished, put=__set__connectionEstablished))  _connectionEstablished;

constexpr void __set__connectionEstablished(bool value) ;

constexpr bool __get__connectionEstablished() const;

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

 bool __declspec(property(get=__get__isDisconnecting_k__BackingField, put=__set__isDisconnecting_k__BackingField))  _isDisconnecting_k__BackingField;

constexpr void __set__isDisconnecting_k__BackingField(bool value) ;

constexpr bool __get__isDisconnecting_k__BackingField() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__buffer() const;


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isConnecting))  isConnecting;

 bool __declspec(property(get=get_isDisconnecting, put=set_isDisconnecting))  isDisconnecting;

 bool __declspec(property(get=get_isDisposed))  isDisposed;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 bool __declspec(property(get=get_isServer))  isServer;

 bool __declspec(property(get=get_isClient))  isClient;

 int32_t __declspec(property(get=get_connectionCount))  connectionCount;


// Methods

/// @brief Method add_onInitializedEvent addr 0x22098b4 size 0x9c virtual true final true
 void add_onInitializedEvent(System::Action value) ;

/// @brief Method remove_onInitializedEvent addr 0x2209950 size 0x9c virtual true final true
 void remove_onInitializedEvent(System::Action value) ;

/// @brief Method add_onConnectedEvent addr 0x22099ec size 0x9c virtual true final true
 void add_onConnectedEvent(System::Action value) ;

/// @brief Method remove_onConnectedEvent addr 0x2209a88 size 0x9c virtual true final true
 void remove_onConnectedEvent(System::Action value) ;

/// @brief Method add_onDisconnectedEvent addr 0x2209b24 size 0xb0 virtual true final true
 void add_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onDisconnectedEvent addr 0x2209bd4 size 0xb0 virtual true final true
 void remove_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onConnectionFailedEvent addr 0x2209c84 size 0xb0 virtual true final true
 void add_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method remove_onConnectionFailedEvent addr 0x2209d34 size 0xb0 virtual true final true
 void remove_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method add_onConnectionConnectedEvent addr 0x2209de4 size 0xb0 virtual true final true
 void add_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

/// @brief Method remove_onConnectionConnectedEvent addr 0x2209e94 size 0xb0 virtual true final true
 void remove_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

/// @brief Method add_onConnectionDisconnectedEvent addr 0x2209f44 size 0xb0 virtual true final true
 void add_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onConnectionDisconnectedEvent addr 0x2209ff4 size 0xb0 virtual true final true
 void remove_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onReceivedDataEvent addr 0x220a0a4 size 0xb0 virtual true final true
 void add_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

/// @brief Method remove_onReceivedDataEvent addr 0x220a154 size 0xb0 virtual true final true
 void remove_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

/// @brief Method get_userId addr 0x220a204 size 0xa8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x220a2ac size 0xac virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_isConnected addr 0x220a358 size 0x34 virtual true final true
 bool get_isConnected() ;

/// @brief Method get_isConnecting addr 0x220a38c size 0x24 virtual true final true
 bool get_isConnecting() ;

/// @brief Method get_isDisconnecting addr 0x220a3b0 size 0x8 virtual true final true
 bool get_isDisconnecting() ;

/// @brief Method set_isDisconnecting addr 0x220a3b8 size 0xc virtual false final false
 void set_isDisconnecting(bool value) ;

/// @brief Method get_isDisposed addr 0x220a3c4 size 0x10 virtual true final true
 bool get_isDisposed() ;

/// @brief Method get_isConnectionOwner addr 0x220a3d4 size 0x10 virtual true final true
 bool get_isConnectionOwner() ;

/// @brief Method get_isServer addr 0x220a3e4 size 0x10 virtual false final false
 bool get_isServer() ;

/// @brief Method get_isClient addr 0x220a3f4 size 0x10 virtual false final false
 bool get_isClient() ;

/// @brief Method get_connectionCount addr 0x220a404 size 0x48 virtual true final true
 int32_t get_connectionCount() ;

/// @brief Method SendToAll addr 0x220a44c size 0x8 virtual true final true
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method SendToAll addr 0x220a454 size 0xd4 virtual true final true
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod, GlobalNamespace::IConnection excludingConnection) ;

/// @brief Method PollUpdate addr 0x220a528 size 0xf8 virtual true final true
 void PollUpdate() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 bool Init(GlobalNamespace::IConnectionInitParams_1<T> initParams) ;

/// @brief Method Disconnect addr 0x220a854 size 0x8 virtual true final true
 void Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method DisconnectInternal addr 0x220a85c size 0x22c virtual false final false
 void DisconnectInternal(GlobalNamespace::DisconnectedReason disconnectedReason, GlobalNamespace::ConnectionFailedReason connectionFailedReason) ;

/// @brief Method Dispose addr 0x220aa88 size 0xc virtual true final true
 void Dispose() ;

/// @brief Method DisposeAsync addr 0x220aa94 size 0x9c virtual true final true
 System::Threading::Tasks::Task DisposeAsync() ;

/// @brief Method GetConnection addr 0x220ab30 size 0x58 virtual true final true
 GlobalNamespace::IConnection GetConnection(int32_t index) ;

/// @brief Method HandlePeerConnectionRequest addr 0x220ab88 size 0x9c virtual false final false
 void HandlePeerConnectionRequest(Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer> message) ;

/// @brief Method HandleConnectionStateChanged addr 0x220ac24 size 0x100 virtual false final false
 void HandleConnectionStateChanged(Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer> message) ;

/// @brief Method GetConnection addr 0x220a620 size 0x1b8 virtual false final false
 GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection GetConnection(uint64_t user) ;

/// @brief Method RemoveConnection addr 0x220ad24 size 0x134 virtual false final false
 void RemoveConnection(uint64_t id, GlobalNamespace::DisconnectedReason reason) ;

/// @brief Method AcquireBuffer addr 0x220a7d8 size 0x6c virtual false final false
 ::ArrayW<uint8_t> AcquireBuffer(int32_t size) ;

/// @brief Method ReleaseBuffer addr 0x220a850 size 0x4 virtual false final false
 void ReleaseBuffer(::ArrayW<uint8_t> buffer) ;

/// @brief Method DeliveryMethodToSendPolicy addr 0x220ae58 size 0x10 virtual false final false
static Oculus::Platform::SendPolicy DeliveryMethodToSendPolicy(BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method SendPolicyToDeliveryMethod addr 0x220a844 size 0xc virtual false final false
static BGNet::Core::DeliveryMethod SendPolicyToDeliveryMethod(Oculus::Platform::SendPolicy sendPolicy) ;

/// @brief Method VoidHandler addr 0x220ae68 size 0x4 virtual false final false
static void VoidHandler(Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer> message) ;

// Ctor Parameters []
explicit OculusConnectionManager() ;

/// @brief Method .ctor addr 0x220ae6c size 0x10d0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusConnectionManager__NetworkMode, "", "OculusConnectionManager/NetworkMode");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusConnectionManager__ConnectToServerParams, "", "OculusConnectionManager/ConnectToServerParams");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusConnectionManager__OculusConnection, "", "OculusConnectionManager/OculusConnection");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OculusConnectionManager__StartServerParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusConnectionManager__StartServerParams, "", "OculusConnectionManager/StartServerParams");
NEED_NO_BOX(GlobalNamespace::OculusConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusConnectionManager, "", "OculusConnectionManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OculusConnectionManager___HandlePeerConnectionRequest_d__61, "", "OculusConnectionManager/<HandlePeerConnectionRequest>d__61");
