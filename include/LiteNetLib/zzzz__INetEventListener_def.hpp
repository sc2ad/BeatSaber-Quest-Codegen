#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct DisconnectInfo;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
struct UnconnectedMessageType;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib {
class INetEventListener;
}
// Type: LiteNetLib::INetEventListener
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14414))
// CS Name: LiteNetLib.INetEventListener
class CORDL_TYPE INetEventListener : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetEventListener() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetEventListener(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnPeerConnected addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPeerConnected(LiteNetLib::NetPeer peer) ;

/// @brief Method OnPeerDisconnected addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnPeerDisconnected(LiteNetLib::NetPeer peer, LiteNetLib::DisconnectInfo disconnectInfo) ;

/// @brief Method OnNetworkError addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNetworkError(System::Net::IPEndPoint endPoint, System::Net::Sockets::SocketError socketError) ;

/// @brief Method OnNetworkReceive addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNetworkReceive(LiteNetLib::NetPeer peer, LiteNetLib::NetPacketReader reader, LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method OnNetworkReceiveUnconnected addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNetworkReceiveUnconnected(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::NetPacketReader reader, LiteNetLib::UnconnectedMessageType messageType) ;

/// @brief Method OnNetworkLatencyUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnNetworkLatencyUpdate(LiteNetLib::NetPeer peer, int32_t latency) ;

/// @brief Method OnConnectionRequest addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnConnectionRequest(LiteNetLib::ConnectionRequest request) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::INetEventListener);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::INetEventListener, "LiteNetLib", "INetEventListener");
