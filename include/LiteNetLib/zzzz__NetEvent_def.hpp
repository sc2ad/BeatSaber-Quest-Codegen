#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
struct DisconnectReason;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib {
struct ____LiteNetLib__NetEvent__EType;
}
namespace LiteNetLib {
class NetEvent;
}
// Type: ::EType
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14444))
// CS Name: LiteNetLib.NetEvent::EType
struct CORDL_TYPE ____LiteNetLib__NetEvent__EType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____LiteNetLib__NetEvent__EType(int32_t value__) noexcept;


                    constexpr ____LiteNetLib__NetEvent__EType(____LiteNetLib__NetEvent__EType const&) = default;
                    constexpr ____LiteNetLib__NetEvent__EType(____LiteNetLib__NetEvent__EType&&) = default;
                    constexpr ____LiteNetLib__NetEvent__EType& operator=(____LiteNetLib__NetEvent__EType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____LiteNetLib__NetEvent__EType& operator=(____LiteNetLib__NetEvent__EType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____LiteNetLib__NetEvent__EType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______LiteNetLib__NetEvent__EType_Unwrapped : int32_t {
__Connect = 0,
__Disconnect = 1,
__Receive = 2,
__ReceiveUnconnected = 3,
__Error = 4,
__ConnectionLatencyUpdated = 5,
__Broadcast = 6,
__ConnectionRequest = 7,
__MessageDelivered = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______LiteNetLib__NetEvent__EType_Unwrapped () const noexcept {
return std::bit_cast<______LiteNetLib__NetEvent__EType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Connect offset 0
static ::LiteNetLib::____LiteNetLib__NetEvent__EType const Connect;

/// @brief Field Disconnect offset 0
static ::LiteNetLib::____LiteNetLib__NetEvent__EType const Disconnect;

/// @brief Field Receive offset 0
static ::LiteNetLib::____LiteNetLib__NetEvent__EType const Receive;

/// @brief Field ReceiveUnconnected offset 0
static ::LiteNetLib::____LiteNetLib__NetEvent__EType const ReceiveUnconnected;

/// @brief Field Error offset 0
static ::LiteNetLib::____LiteNetLib__NetEvent__EType const Error;

/// @brief Field ConnectionLatencyUpdated offset 0
static ::LiteNetLib::____LiteNetLib__NetEvent__EType const ConnectionLatencyUpdated;

/// @brief Field Broadcast offset 0
static ::LiteNetLib::____LiteNetLib__NetEvent__EType const Broadcast;

/// @brief Field ConnectionRequest offset 0
static ::LiteNetLib::____LiteNetLib__NetEvent__EType const ConnectionRequest;

/// @brief Field MessageDelivered offset 0
static ::LiteNetLib::____LiteNetLib__NetEvent__EType const MessageDelivered;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: LiteNetLib::NetEvent
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14445))
// CS Name: LiteNetLib.NetEvent
class CORDL_TYPE NetEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EType = ::LiteNetLib::____LiteNetLib__NetEvent__EType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~NetEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetEvent", modifiers: " const&", def_value: None }]
constexpr NetEvent(NetEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetEvent", modifiers: "&&", def_value: None }]
constexpr NetEvent(NetEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetEvent& operator=(NetEvent&& o) noexcept = default;
  constexpr NetEvent& operator=(NetEvent const& o) noexcept = default;
                


// Fields

 ::LiteNetLib::____LiteNetLib__NetEvent__EType __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(::LiteNetLib::____LiteNetLib__NetEvent__EType value) ;

constexpr ::LiteNetLib::____LiteNetLib__NetEvent__EType __get_Type() const;

 ::LiteNetLib::NetPeer __declspec(property(get=__get_Peer, put=__set_Peer))  Peer;

constexpr void __set_Peer(::LiteNetLib::NetPeer value) ;

constexpr ::LiteNetLib::NetPeer __get_Peer() const;

 ::System::Net::IPEndPoint __declspec(property(get=__get_RemoteEndPoint, put=__set_RemoteEndPoint))  RemoteEndPoint;

constexpr void __set_RemoteEndPoint(::System::Net::IPEndPoint value) ;

constexpr ::System::Net::IPEndPoint __get_RemoteEndPoint() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_UserData, put=__set_UserData))  UserData;

constexpr void __set_UserData(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_UserData() const;

 int32_t __declspec(property(get=__get_Latency, put=__set_Latency))  Latency;

constexpr void __set_Latency(int32_t value) ;

constexpr int32_t __get_Latency() const;

 ::System::Net::Sockets::SocketError __declspec(property(get=__get_ErrorCode, put=__set_ErrorCode))  ErrorCode;

constexpr void __set_ErrorCode(::System::Net::Sockets::SocketError value) ;

constexpr ::System::Net::Sockets::SocketError __get_ErrorCode() const;

 ::LiteNetLib::DisconnectReason __declspec(property(get=__get_DisconnectReason, put=__set_DisconnectReason))  DisconnectReason;

constexpr void __set_DisconnectReason(::LiteNetLib::DisconnectReason value) ;

constexpr ::LiteNetLib::DisconnectReason __get_DisconnectReason() const;

 ::LiteNetLib::ConnectionRequest __declspec(property(get=__get_ConnectionRequest, put=__set_ConnectionRequest))  ConnectionRequest;

constexpr void __set_ConnectionRequest(::LiteNetLib::ConnectionRequest value) ;

constexpr ::LiteNetLib::ConnectionRequest __get_ConnectionRequest() const;

 ::LiteNetLib::DeliveryMethod __declspec(property(get=__get_DeliveryMethod, put=__set_DeliveryMethod))  DeliveryMethod;

constexpr void __set_DeliveryMethod(::LiteNetLib::DeliveryMethod value) ;

constexpr ::LiteNetLib::DeliveryMethod __get_DeliveryMethod() const;

 ::LiteNetLib::NetPacketReader __declspec(property(get=__get_DataReader, put=__set_DataReader))  DataReader;

constexpr void __set_DataReader(::LiteNetLib::NetPacketReader value) ;

constexpr ::LiteNetLib::NetPacketReader __get_DataReader() const;


// Methods

// Ctor Parameters [CppParam { name: "manager", ty: "::LiteNetLib::NetManager", modifiers: "", def_value: None }]
explicit NetEvent(::LiteNetLib::NetManager manager) ;

/// @brief Method .ctor addr 0x2088fc4 size 0x7c virtual false final false
 void _ctor(::LiteNetLib::NetManager manager) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::____LiteNetLib__NetEvent__EType, "LiteNetLib", "NetEvent/EType");
NEED_NO_BOX(::LiteNetLib::NetEvent);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetEvent, "LiteNetLib", "NetEvent");
