#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace LiteNetLib {
class INetSocketListener;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class IPAddress;
}
namespace System::Threading {
struct ThreadPriority;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Threading {
class Thread;
}
namespace System::Net::Sockets {
struct SocketError;
}
// Forward declare root types
namespace LiteNetLib {
class NetSocket;
}
// Type: LiteNetLib::NetSocket
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14461))
// CS Name: LiteNetLib.NetSocket
class CORDL_TYPE NetSocket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~NetSocket() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSocket", modifiers: " const&", def_value: None }]
constexpr NetSocket(NetSocket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSocket", modifiers: "&&", def_value: None }]
constexpr NetSocket(NetSocket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSocket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetSocket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSocket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSocket& operator=(NetSocket&& o) noexcept = default;
  constexpr NetSocket& operator=(NetSocket const& o) noexcept = default;
                


// Fields

/// @brief Field ReceivePollingTime offset 0
static constexpr int32_t  ReceivePollingTime{500000};

 ::System::Net::Sockets::Socket __declspec(property(get=__get__udpSocketv4, put=__set__udpSocketv4))  _udpSocketv4;

constexpr void __set__udpSocketv4(::System::Net::Sockets::Socket value) ;

constexpr ::System::Net::Sockets::Socket __get__udpSocketv4() const;

 ::System::Net::Sockets::Socket __declspec(property(get=__get__udpSocketv6, put=__set__udpSocketv6))  _udpSocketv6;

constexpr void __set__udpSocketv6(::System::Net::Sockets::Socket value) ;

constexpr ::System::Net::Sockets::Socket __get__udpSocketv6() const;

 ::System::Threading::Thread __declspec(property(get=__get__threadv4, put=__set__threadv4))  _threadv4;

constexpr void __set__threadv4(::System::Threading::Thread value) ;

constexpr ::System::Threading::Thread __get__threadv4() const;

 ::System::Threading::Thread __declspec(property(get=__get__threadv6, put=__set__threadv6))  _threadv6;

constexpr void __set__threadv6(::System::Threading::Thread value) ;

constexpr ::System::Threading::Thread __get__threadv6() const;

 ::LiteNetLib::INetSocketListener __declspec(property(get=__get__listener, put=__set__listener))  _listener;

constexpr void __set__listener(::LiteNetLib::INetSocketListener value) ;

constexpr ::LiteNetLib::INetSocketListener __get__listener() const;

/// @brief Field SioUdpConnreset offset 0
static constexpr int32_t  SioUdpConnreset{-1744830452};

static ::System::Net::IPAddress __declspec(property(get=__get_MulticastAddressV6, put=__set_MulticastAddressV6))  MulticastAddressV6;

static void __set_MulticastAddressV6(::System::Net::IPAddress value) ;

static ::System::Net::IPAddress __get_MulticastAddressV6() ;

static bool __declspec(property(get=__get_IPv6Support, put=__set_IPv6Support))  IPv6Support;

static void __set_IPv6Support(bool value) ;

static bool __get_IPv6Support() ;

 int32_t __declspec(property(get=__get__LocalPort_k__BackingField, put=__set__LocalPort_k__BackingField))  _LocalPort_k__BackingField;

constexpr void __set__LocalPort_k__BackingField(int32_t value) ;

constexpr int32_t __get__LocalPort_k__BackingField() const;

 bool __declspec(property(get=__get_IsRunning, put=__set_IsRunning))  IsRunning;

constexpr void __set_IsRunning(bool value) ;

constexpr bool __get_IsRunning() const;


// Properties

 int32_t __declspec(property(get=get_LocalPort, put=set_LocalPort))  LocalPort;

 int16_t __declspec(property(get=get_Ttl, put=set_Ttl))  Ttl;


// Methods

/// @brief Method get_LocalPort addr 0x209173c size 0x8 virtual false final false
 int32_t get_LocalPort() ;

/// @brief Method set_LocalPort addr 0x2091744 size 0x8 virtual false final false
 void set_LocalPort(int32_t value) ;

/// @brief Method get_Ttl addr 0x209174c size 0x1c virtual false final false
 int16_t get_Ttl() ;

/// @brief Method set_Ttl addr 0x2088140 size 0x1c virtual false final false
 void set_Ttl(int16_t value) ;

// Ctor Parameters [CppParam { name: "listener", ty: "::LiteNetLib::INetSocketListener", modifiers: "", def_value: None }]
explicit NetSocket(::LiteNetLib::INetSocketListener listener) ;

/// @brief Method .ctor addr 0x2089a44 size 0x28 virtual false final false
 void _ctor(::LiteNetLib::INetSocketListener listener) ;

/// @brief Method IsActive addr 0x2091830 size 0x18 virtual false final false
 bool IsActive() ;

/// @brief Method ReceiveLogic addr 0x2091848 size 0x578 virtual false final false
 void ReceiveLogic(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method Bind addr 0x208d6a8 size 0x404 virtual false final false
 bool Bind(::System::Net::IPAddress addressIPv4, ::System::Net::IPAddress addressIPv6, int32_t port, bool reuseAddress, bool ipv6, ::System::Threading::ThreadPriority priority) ;

/// @brief Method BindSocket addr 0x2091dc0 size 0x6bc virtual false final false
 bool BindSocket(::System::Net::Sockets::Socket socket, ::System::Net::IPEndPoint ep, bool reuseAddress) ;

/// @brief Method SendBroadcast addr 0x208e070 size 0x30c virtual false final false
 bool SendBroadcast(::ArrayW<uint8_t> data, int32_t offset, int32_t size, int32_t port) ;

/// @brief Method SendTo addr 0x208815c size 0x360 virtual false final false
 int32_t SendTo(::ArrayW<uint8_t> data, int32_t offset, int32_t size, ::System::Net::IPEndPoint remoteEndPoint, ByRef<::System::Net::Sockets::SocketError> errorCode) ;

/// @brief Method Close addr 0x208ef08 size 0xa8 virtual false final false
 void Close(bool suspend) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::NetSocket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetSocket, "LiteNetLib", "NetSocket");
