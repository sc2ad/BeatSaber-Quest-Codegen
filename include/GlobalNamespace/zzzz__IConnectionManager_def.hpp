#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace GlobalNamespace {
class IConnection;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IPollable;
}
namespace System {
class IDisposable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnectionManager;
}
// Type: ::IConnectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12722))
// CS Name: IConnectionManager
class CORDL_TYPE IConnectionManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IPollable
constexpr operator  ::GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IConnectionManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConnectionManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isConnecting))  isConnecting;

 bool __declspec(property(get=get_isDisconnecting))  isDisconnecting;

 int32_t __declspec(property(get=get_connectionCount))  connectionCount;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 bool __declspec(property(get=get_isDisposed))  isDisposed;


// Methods

/// @brief Method add_onInitializedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_onInitializedEvent(::System::Action value) ;

/// @brief Method remove_onInitializedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_onInitializedEvent(::System::Action value) ;

/// @brief Method add_onConnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_onConnectedEvent(::System::Action value) ;

/// @brief Method remove_onConnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_onConnectedEvent(::System::Action value) ;

/// @brief Method add_onDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_onDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onConnectionFailedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method remove_onConnectionFailedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_onConnectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method add_onConnectionConnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection> value) ;

/// @brief Method remove_onConnectionConnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_onConnectionConnectedEvent(::System::Action_1<::GlobalNamespace::IConnection> value) ;

/// @brief Method add_onConnectionDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onConnectionDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_onConnectionDisconnectedEvent(::System::Action_2<::GlobalNamespace::IConnection,::GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onReceivedDataEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod> value) ;

/// @brief Method remove_onReceivedDataEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_onReceivedDataEvent(::System::Action_3<::GlobalNamespace::IConnection,::LiteNetLib::Utils::NetDataReader,::BGNet::Core::DeliveryMethod> value) ;

/// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userName() ;

/// @brief Method get_isConnected addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnected() ;

/// @brief Method get_isConnecting addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnecting() ;

/// @brief Method get_isDisconnecting addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isDisconnecting() ;

/// @brief Method get_connectionCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_connectionCount() ;

/// @brief Method get_isConnectionOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnectionOwner() ;

/// @brief Method get_isDisposed addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isDisposed() ;

/// @brief Method SendToAll addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendToAll(::LiteNetLib::Utils::NetDataWriter writer, ::BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method SendToAll addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendToAll(::LiteNetLib::Utils::NetDataWriter writer, ::BGNet::Core::DeliveryMethod deliveryMethod, ::GlobalNamespace::IConnection excludingConnection) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 bool Init(::GlobalNamespace::IConnectionInitParams_1<T> initParams) ;

/// @brief Method Disconnect addr 0x0 size 0xffffffffffffffff virtual true final false
 void Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method GetConnection addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IConnection GetConnection(int32_t index) ;

/// @brief Method DisposeAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task DisposeAsync() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnectionManager, "", "IConnectionManager");
