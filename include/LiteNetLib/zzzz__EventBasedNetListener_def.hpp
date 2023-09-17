#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Net::Sockets {
struct SocketError;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct DisconnectInfo;
}
namespace LiteNetLib {
class INetEventListener;
}
namespace LiteNetLib {
class IDeliveryEventListener;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
class NetPeer;
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
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace LiteNetLib {
class EventBasedNetListener;
}
namespace LiteNetLib {
class ____LiteNetLib__EventBasedNetListener__OnConnectionRequest;
}
namespace LiteNetLib {
class ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent;
}
namespace LiteNetLib {
class ____LiteNetLib__EventBasedNetListener__OnNetworkError;
}
namespace LiteNetLib {
class ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate;
}
namespace LiteNetLib {
class ____LiteNetLib__EventBasedNetListener__OnNetworkReceive;
}
namespace LiteNetLib {
class ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected;
}
namespace LiteNetLib {
class ____LiteNetLib__EventBasedNetListener__OnPeerConnected;
}
namespace LiteNetLib {
class ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected;
}
// Type: ::OnPeerConnected
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14416))
// CS Name: LiteNetLib.EventBasedNetListener::OnPeerConnected
class CORDL_TYPE ____LiteNetLib__EventBasedNetListener__OnPeerConnected : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____LiteNetLib__EventBasedNetListener__OnPeerConnected() = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnPeerConnected", modifiers: " const&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnPeerConnected(____LiteNetLib__EventBasedNetListener__OnPeerConnected const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnPeerConnected", modifiers: "&&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnPeerConnected(____LiteNetLib__EventBasedNetListener__OnPeerConnected&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____LiteNetLib__EventBasedNetListener__OnPeerConnected(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____LiteNetLib__EventBasedNetListener__OnPeerConnected& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnPeerConnected& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnPeerConnected& operator=(____LiteNetLib__EventBasedNetListener__OnPeerConnected&& o) noexcept = default;
  constexpr ____LiteNetLib__EventBasedNetListener__OnPeerConnected& operator=(____LiteNetLib__EventBasedNetListener__OnPeerConnected const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____LiteNetLib__EventBasedNetListener__OnPeerConnected(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2085e38 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2085f64 size 0x14 virtual true final false
 void Invoke(::LiteNetLib::NetPeer peer) ;

/// @brief Method BeginInvoke addr 0x2085f78 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::LiteNetLib::NetPeer peer, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2085f98 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::OnPeerDisconnected
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14417))
// CS Name: LiteNetLib.EventBasedNetListener::OnPeerDisconnected
class CORDL_TYPE ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____LiteNetLib__EventBasedNetListener__OnPeerDisconnected() = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnPeerDisconnected", modifiers: " const&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected(____LiteNetLib__EventBasedNetListener__OnPeerDisconnected const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnPeerDisconnected", modifiers: "&&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected(____LiteNetLib__EventBasedNetListener__OnPeerDisconnected&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected& operator=(____LiteNetLib__EventBasedNetListener__OnPeerDisconnected&& o) noexcept = default;
  constexpr ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected& operator=(____LiteNetLib__EventBasedNetListener__OnPeerDisconnected const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____LiteNetLib__EventBasedNetListener__OnPeerDisconnected(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2085fa4 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x20860d4 size 0x14 virtual true final false
 void Invoke(::LiteNetLib::NetPeer peer, ::LiteNetLib::DisconnectInfo disconnectInfo) ;

/// @brief Method BeginInvoke addr 0x20860e8 size 0x94 virtual true final false
 ::System::IAsyncResult BeginInvoke(::LiteNetLib::NetPeer peer, ::LiteNetLib::DisconnectInfo disconnectInfo, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x208617c size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::OnNetworkError
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14418))
// CS Name: LiteNetLib.EventBasedNetListener::OnNetworkError
class CORDL_TYPE ____LiteNetLib__EventBasedNetListener__OnNetworkError : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____LiteNetLib__EventBasedNetListener__OnNetworkError() = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnNetworkError", modifiers: " const&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkError(____LiteNetLib__EventBasedNetListener__OnNetworkError const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnNetworkError", modifiers: "&&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkError(____LiteNetLib__EventBasedNetListener__OnNetworkError&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____LiteNetLib__EventBasedNetListener__OnNetworkError(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkError& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkError& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkError& operator=(____LiteNetLib__EventBasedNetListener__OnNetworkError&& o) noexcept = default;
  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkError& operator=(____LiteNetLib__EventBasedNetListener__OnNetworkError const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____LiteNetLib__EventBasedNetListener__OnNetworkError(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2086188 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x20862b8 size 0x14 virtual true final false
 void Invoke(::System::Net::IPEndPoint endPoint, ::System::Net::Sockets::SocketError socketError) ;

/// @brief Method BeginInvoke addr 0x20862cc size 0x94 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::Net::IPEndPoint endPoint, ::System::Net::Sockets::SocketError socketError, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2086360 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::OnNetworkReceive
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14419))
// CS Name: LiteNetLib.EventBasedNetListener::OnNetworkReceive
class CORDL_TYPE ____LiteNetLib__EventBasedNetListener__OnNetworkReceive : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____LiteNetLib__EventBasedNetListener__OnNetworkReceive() = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnNetworkReceive", modifiers: " const&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceive(____LiteNetLib__EventBasedNetListener__OnNetworkReceive const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnNetworkReceive", modifiers: "&&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceive(____LiteNetLib__EventBasedNetListener__OnNetworkReceive&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____LiteNetLib__EventBasedNetListener__OnNetworkReceive(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceive& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceive& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceive& operator=(____LiteNetLib__EventBasedNetListener__OnNetworkReceive&& o) noexcept = default;
  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceive& operator=(____LiteNetLib__EventBasedNetListener__OnNetworkReceive const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____LiteNetLib__EventBasedNetListener__OnNetworkReceive(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x208636c size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x208649c size 0x14 virtual true final false
 void Invoke(::LiteNetLib::NetPeer peer, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method BeginInvoke addr 0x20864b0 size 0x98 virtual true final false
 ::System::IAsyncResult BeginInvoke(::LiteNetLib::NetPeer peer, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2086548 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::OnNetworkReceiveUnconnected
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14420))
// CS Name: LiteNetLib.EventBasedNetListener::OnNetworkReceiveUnconnected
class CORDL_TYPE ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected() = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected", modifiers: " const&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected(____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected", modifiers: "&&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected(____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected& operator=(____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected&& o) noexcept = default;
  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected& operator=(____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2086554 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2086684 size 0x14 virtual true final false
 void Invoke(::System::Net::IPEndPoint remoteEndPoint, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::UnconnectedMessageType messageType) ;

/// @brief Method BeginInvoke addr 0x2086698 size 0x98 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::Net::IPEndPoint remoteEndPoint, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::UnconnectedMessageType messageType, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2086730 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::OnNetworkLatencyUpdate
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14421))
// CS Name: LiteNetLib.EventBasedNetListener::OnNetworkLatencyUpdate
class CORDL_TYPE ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate", modifiers: " const&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate(____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate", modifiers: "&&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate(____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate& operator=(____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate&& o) noexcept = default;
  constexpr ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate& operator=(____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x208673c size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x208686c size 0x14 virtual true final false
 void Invoke(::LiteNetLib::NetPeer peer, int32_t latency) ;

/// @brief Method BeginInvoke addr 0x2086880 size 0x94 virtual true final false
 ::System::IAsyncResult BeginInvoke(::LiteNetLib::NetPeer peer, int32_t latency, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2086914 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::OnConnectionRequest
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14422))
// CS Name: LiteNetLib.EventBasedNetListener::OnConnectionRequest
class CORDL_TYPE ____LiteNetLib__EventBasedNetListener__OnConnectionRequest : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____LiteNetLib__EventBasedNetListener__OnConnectionRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnConnectionRequest", modifiers: " const&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnConnectionRequest(____LiteNetLib__EventBasedNetListener__OnConnectionRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnConnectionRequest", modifiers: "&&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnConnectionRequest(____LiteNetLib__EventBasedNetListener__OnConnectionRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____LiteNetLib__EventBasedNetListener__OnConnectionRequest(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____LiteNetLib__EventBasedNetListener__OnConnectionRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnConnectionRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnConnectionRequest& operator=(____LiteNetLib__EventBasedNetListener__OnConnectionRequest&& o) noexcept = default;
  constexpr ____LiteNetLib__EventBasedNetListener__OnConnectionRequest& operator=(____LiteNetLib__EventBasedNetListener__OnConnectionRequest const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____LiteNetLib__EventBasedNetListener__OnConnectionRequest(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2086920 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2086a4c size 0x14 virtual true final false
 void Invoke(::LiteNetLib::ConnectionRequest request) ;

/// @brief Method BeginInvoke addr 0x2086a60 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::LiteNetLib::ConnectionRequest request, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2086a80 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::OnDeliveryEvent
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14423))
// CS Name: LiteNetLib.EventBasedNetListener::OnDeliveryEvent
class CORDL_TYPE ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____LiteNetLib__EventBasedNetListener__OnDeliveryEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnDeliveryEvent", modifiers: " const&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent(____LiteNetLib__EventBasedNetListener__OnDeliveryEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____LiteNetLib__EventBasedNetListener__OnDeliveryEvent", modifiers: "&&", def_value: None }]
constexpr ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent(____LiteNetLib__EventBasedNetListener__OnDeliveryEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent& operator=(____LiteNetLib__EventBasedNetListener__OnDeliveryEvent&& o) noexcept = default;
  constexpr ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent& operator=(____LiteNetLib__EventBasedNetListener__OnDeliveryEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____LiteNetLib__EventBasedNetListener__OnDeliveryEvent(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2086a8c size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2086bbc size 0x14 virtual true final false
 void Invoke(::LiteNetLib::NetPeer peer, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method BeginInvoke addr 0x2086bd0 size 0x28 virtual true final false
 ::System::IAsyncResult BeginInvoke(::LiteNetLib::NetPeer peer, ::bs_hook::Il2CppWrapperType userData, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2086bf8 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: LiteNetLib::EventBasedNetListener
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14424))
// CS Name: LiteNetLib.EventBasedNetListener
class CORDL_TYPE EventBasedNetListener : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OnDeliveryEvent = ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnDeliveryEvent;

using OnConnectionRequest = ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnConnectionRequest;

using OnNetworkLatencyUpdate = ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate;

using OnNetworkReceiveUnconnected = ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected;

using OnNetworkReceive = ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceive;

using OnNetworkError = ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkError;

using OnPeerDisconnected = ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerDisconnected;

using OnPeerConnected = ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerConnected;

/// @brief Convert operator to ::LiteNetLib::INetEventListener
constexpr operator  ::LiteNetLib::INetEventListener() const noexcept;

/// @brief Convert operator to ::LiteNetLib::IDeliveryEventListener
constexpr operator  ::LiteNetLib::IDeliveryEventListener() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~EventBasedNetListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener", modifiers: " const&", def_value: None }]
constexpr EventBasedNetListener(EventBasedNetListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBasedNetListener", modifiers: "&&", def_value: None }]
constexpr EventBasedNetListener(EventBasedNetListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventBasedNetListener(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventBasedNetListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventBasedNetListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventBasedNetListener& operator=(EventBasedNetListener&& o) noexcept = default;
  constexpr EventBasedNetListener& operator=(EventBasedNetListener const& o) noexcept = default;
                


// Fields

 ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerConnected __declspec(property(get=__get_PeerConnectedEvent, put=__set_PeerConnectedEvent))  PeerConnectedEvent;

constexpr void __set_PeerConnectedEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerConnected value) ;

constexpr ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerConnected __get_PeerConnectedEvent() const;

 ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerDisconnected __declspec(property(get=__get_PeerDisconnectedEvent, put=__set_PeerDisconnectedEvent))  PeerDisconnectedEvent;

constexpr void __set_PeerDisconnectedEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerDisconnected value) ;

constexpr ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerDisconnected __get_PeerDisconnectedEvent() const;

 ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkError __declspec(property(get=__get_NetworkErrorEvent, put=__set_NetworkErrorEvent))  NetworkErrorEvent;

constexpr void __set_NetworkErrorEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkError value) ;

constexpr ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkError __get_NetworkErrorEvent() const;

 ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceive __declspec(property(get=__get_NetworkReceiveEvent, put=__set_NetworkReceiveEvent))  NetworkReceiveEvent;

constexpr void __set_NetworkReceiveEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceive value) ;

constexpr ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceive __get_NetworkReceiveEvent() const;

 ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected __declspec(property(get=__get_NetworkReceiveUnconnectedEvent, put=__set_NetworkReceiveUnconnectedEvent))  NetworkReceiveUnconnectedEvent;

constexpr void __set_NetworkReceiveUnconnectedEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected value) ;

constexpr ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected __get_NetworkReceiveUnconnectedEvent() const;

 ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate __declspec(property(get=__get_NetworkLatencyUpdateEvent, put=__set_NetworkLatencyUpdateEvent))  NetworkLatencyUpdateEvent;

constexpr void __set_NetworkLatencyUpdateEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate value) ;

constexpr ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate __get_NetworkLatencyUpdateEvent() const;

 ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnConnectionRequest __declspec(property(get=__get_ConnectionRequestEvent, put=__set_ConnectionRequestEvent))  ConnectionRequestEvent;

constexpr void __set_ConnectionRequestEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnConnectionRequest value) ;

constexpr ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnConnectionRequest __get_ConnectionRequestEvent() const;

 ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnDeliveryEvent __declspec(property(get=__get_DeliveryEvent, put=__set_DeliveryEvent))  DeliveryEvent;

constexpr void __set_DeliveryEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnDeliveryEvent value) ;

constexpr ::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnDeliveryEvent __get_DeliveryEvent() const;


// Methods

/// @brief Method add_PeerConnectedEvent addr 0x2085350 size 0x9c virtual false final false
 void add_PeerConnectedEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerConnected value) ;

/// @brief Method remove_PeerConnectedEvent addr 0x20853ec size 0x9c virtual false final false
 void remove_PeerConnectedEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerConnected value) ;

/// @brief Method add_PeerDisconnectedEvent addr 0x2085488 size 0x9c virtual false final false
 void add_PeerDisconnectedEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerDisconnected value) ;

/// @brief Method remove_PeerDisconnectedEvent addr 0x2085524 size 0x9c virtual false final false
 void remove_PeerDisconnectedEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerDisconnected value) ;

/// @brief Method add_NetworkErrorEvent addr 0x20855c0 size 0x9c virtual false final false
 void add_NetworkErrorEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkError value) ;

/// @brief Method remove_NetworkErrorEvent addr 0x208565c size 0x9c virtual false final false
 void remove_NetworkErrorEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkError value) ;

/// @brief Method add_NetworkReceiveEvent addr 0x20856f8 size 0x9c virtual false final false
 void add_NetworkReceiveEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceive value) ;

/// @brief Method remove_NetworkReceiveEvent addr 0x2085794 size 0x9c virtual false final false
 void remove_NetworkReceiveEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceive value) ;

/// @brief Method add_NetworkReceiveUnconnectedEvent addr 0x2085830 size 0x9c virtual false final false
 void add_NetworkReceiveUnconnectedEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected value) ;

/// @brief Method remove_NetworkReceiveUnconnectedEvent addr 0x20858cc size 0x9c virtual false final false
 void remove_NetworkReceiveUnconnectedEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected value) ;

/// @brief Method add_NetworkLatencyUpdateEvent addr 0x2085968 size 0x9c virtual false final false
 void add_NetworkLatencyUpdateEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate value) ;

/// @brief Method remove_NetworkLatencyUpdateEvent addr 0x2085a04 size 0x9c virtual false final false
 void remove_NetworkLatencyUpdateEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate value) ;

/// @brief Method add_ConnectionRequestEvent addr 0x2085aa0 size 0x9c virtual false final false
 void add_ConnectionRequestEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnConnectionRequest value) ;

/// @brief Method remove_ConnectionRequestEvent addr 0x2085b3c size 0x9c virtual false final false
 void remove_ConnectionRequestEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnConnectionRequest value) ;

/// @brief Method add_DeliveryEvent addr 0x2085bd8 size 0x9c virtual false final false
 void add_DeliveryEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnDeliveryEvent value) ;

/// @brief Method remove_DeliveryEvent addr 0x2085c74 size 0x9c virtual false final false
 void remove_DeliveryEvent(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnDeliveryEvent value) ;

/// @brief Method ClearPeerConnectedEvent addr 0x2085d10 size 0x8 virtual false final false
 void ClearPeerConnectedEvent() ;

/// @brief Method ClearPeerDisconnectedEvent addr 0x2085d18 size 0x8 virtual false final false
 void ClearPeerDisconnectedEvent() ;

/// @brief Method ClearNetworkErrorEvent addr 0x2085d20 size 0x8 virtual false final false
 void ClearNetworkErrorEvent() ;

/// @brief Method ClearNetworkReceiveEvent addr 0x2085d28 size 0x8 virtual false final false
 void ClearNetworkReceiveEvent() ;

/// @brief Method ClearNetworkReceiveUnconnectedEvent addr 0x2085d30 size 0x8 virtual false final false
 void ClearNetworkReceiveUnconnectedEvent() ;

/// @brief Method ClearNetworkLatencyUpdateEvent addr 0x2085d38 size 0x8 virtual false final false
 void ClearNetworkLatencyUpdateEvent() ;

/// @brief Method ClearConnectionRequestEvent addr 0x2085d40 size 0x8 virtual false final false
 void ClearConnectionRequestEvent() ;

/// @brief Method ClearDeliveryEvent addr 0x2085d48 size 0x8 virtual false final false
 void ClearDeliveryEvent() ;

/// @brief Method LiteNetLib.INetEventListener.OnPeerConnected addr 0x2085d50 size 0x1c virtual true final true
 void LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer peer) ;

/// @brief Method LiteNetLib.INetEventListener.OnPeerDisconnected addr 0x2085d6c size 0x1c virtual true final true
 void LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer peer, ::LiteNetLib::DisconnectInfo disconnectInfo) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkError addr 0x2085d88 size 0x1c virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint endPoint, ::System::Net::Sockets::SocketError socketErrorCode) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkReceive addr 0x2085da4 size 0x1c virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer peer, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected addr 0x2085dc0 size 0x1c virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint remoteEndPoint, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::UnconnectedMessageType messageType) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkLatencyUpdate addr 0x2085ddc size 0x1c virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer peer, int32_t latency) ;

/// @brief Method LiteNetLib.INetEventListener.OnConnectionRequest addr 0x2085df8 size 0x1c virtual true final true
 void LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest request) ;

/// @brief Method LiteNetLib.IDeliveryEventListener.OnMessageDelivered addr 0x2085e14 size 0x1c virtual true final true
 void LiteNetLib_IDeliveryEventListener_OnMessageDelivered(::LiteNetLib::NetPeer peer, ::bs_hook::Il2CppWrapperType userData) ;

// Ctor Parameters []
explicit EventBasedNetListener() ;

/// @brief Method .ctor addr 0x2085e30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::EventBasedNetListener);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::EventBasedNetListener, "LiteNetLib", "EventBasedNetListener");
NEED_NO_BOX(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnConnectionRequest, "LiteNetLib", "EventBasedNetListener/OnConnectionRequest");
NEED_NO_BOX(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnDeliveryEvent);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnDeliveryEvent, "LiteNetLib", "EventBasedNetListener/OnDeliveryEvent");
NEED_NO_BOX(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkError);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkError, "LiteNetLib", "EventBasedNetListener/OnNetworkError");
NEED_NO_BOX(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkLatencyUpdate, "LiteNetLib", "EventBasedNetListener/OnNetworkLatencyUpdate");
NEED_NO_BOX(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceive);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceive, "LiteNetLib", "EventBasedNetListener/OnNetworkReceive");
NEED_NO_BOX(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnNetworkReceiveUnconnected, "LiteNetLib", "EventBasedNetListener/OnNetworkReceiveUnconnected");
NEED_NO_BOX(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerConnected);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerConnected, "LiteNetLib", "EventBasedNetListener/OnPeerConnected");
NEED_NO_BOX(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerDisconnected);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::____LiteNetLib__EventBasedNetListener__OnPeerDisconnected, "LiteNetLib", "EventBasedNetListener/OnPeerDisconnected");
