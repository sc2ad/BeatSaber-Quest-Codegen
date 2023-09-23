#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Action;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class IAsyncResult;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System::Net::Sockets {
class TcpListener;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRNetwork__OVRNetworkTcpClient;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRNetwork__OVRNetworkTcpServer;
}
namespace GlobalNamespace {
class OVRNetwork;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRNetwork__FrameHeader;
}
// Type: ::FrameHeader
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8936))
// CS Name: OVRNetwork::FrameHeader
struct CORDL_TYPE GlobalNamespace__OVRNetwork__FrameHeader : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "protocolIdentifier", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "payloadType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "payloadLength", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRNetwork__FrameHeader(uint32_t protocolIdentifier, int32_t payloadType, int32_t payloadLength) noexcept;


                    constexpr GlobalNamespace__OVRNetwork__FrameHeader(GlobalNamespace__OVRNetwork__FrameHeader const&) = default;
                    constexpr GlobalNamespace__OVRNetwork__FrameHeader(GlobalNamespace__OVRNetwork__FrameHeader&&) = default;
                    constexpr GlobalNamespace__OVRNetwork__FrameHeader& operator=(GlobalNamespace__OVRNetwork__FrameHeader const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRNetwork__FrameHeader& operator=(GlobalNamespace__OVRNetwork__FrameHeader&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRNetwork__FrameHeader(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_protocolIdentifier, put=__set_protocolIdentifier))  protocolIdentifier;

constexpr void __set_protocolIdentifier(uint32_t value) ;

constexpr uint32_t __get_protocolIdentifier() const;

 int32_t __declspec(property(get=__get_payloadType, put=__set_payloadType))  payloadType;

constexpr void __set_payloadType(int32_t value) ;

constexpr int32_t __get_payloadType() const;

 int32_t __declspec(property(get=__get_payloadLength, put=__set_payloadLength))  payloadLength;

constexpr void __set_payloadLength(int32_t value) ;

constexpr int32_t __get_payloadLength() const;

/// @brief Field StructSize offset 0
static constexpr int32_t  StructSize{12};


// Methods

/// @brief Method ToBytes addr 0x2629150 size 0x120 virtual false final false
 ::ArrayW<uint8_t> ToBytes() ;

/// @brief Method FromBytes addr 0x2629270 size 0x130 virtual false final false
static GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader FromBytes(::ArrayW<uint8_t> arr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRNetworkTcpServer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8937))
// CS Name: OVRNetwork::OVRNetworkTcpServer
class CORDL_TYPE GlobalNamespace__OVRNetwork__OVRNetworkTcpServer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__OVRNetwork__OVRNetworkTcpServer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRNetwork__OVRNetworkTcpServer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpServer(GlobalNamespace__OVRNetwork__OVRNetworkTcpServer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRNetwork__OVRNetworkTcpServer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpServer(GlobalNamespace__OVRNetwork__OVRNetworkTcpServer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRNetwork__OVRNetworkTcpServer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpServer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpServer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpServer& operator=(GlobalNamespace__OVRNetwork__OVRNetworkTcpServer&& o) noexcept = default;
  constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpServer& operator=(GlobalNamespace__OVRNetwork__OVRNetworkTcpServer const& o) noexcept = default;
                


// Fields

 System::Net::Sockets::TcpListener __declspec(property(get=__get_tcpListener, put=__set_tcpListener))  tcpListener;

constexpr void __set_tcpListener(System::Net::Sockets::TcpListener value) ;

constexpr System::Net::Sockets::TcpListener __get_tcpListener() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_clientsLock, put=__set_clientsLock))  clientsLock;

constexpr void __set_clientsLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_clientsLock() const;

 System::Collections::Generic::List_1<System::Net::Sockets::TcpClient> __declspec(property(get=__get_clients, put=__set_clients))  clients;

constexpr void __set_clients(System::Collections::Generic::List_1<System::Net::Sockets::TcpClient> value) ;

constexpr System::Collections::Generic::List_1<System::Net::Sockets::TcpClient> __get_clients() const;


// Methods

/// @brief Method StartListening addr 0x26293a0 size 0x528 virtual false final false
 void StartListening(int32_t listeningPort) ;

/// @brief Method StopListening addr 0x26298c8 size 0x1c0 virtual false final false
 void StopListening() ;

/// @brief Method DoAcceptTcpClientCallback addr 0x2629a88 size 0x54c virtual false final false
 void DoAcceptTcpClientCallback(System::IAsyncResult ar) ;

/// @brief Method HasConnectedClient addr 0x2629fd4 size 0x254 virtual false final false
 bool HasConnectedClient() ;

/// @brief Method Broadcast addr 0x262a228 size 0x5b0 virtual false final false
 void Broadcast(int32_t payloadType, ::ArrayW<uint8_t> payload) ;

/// @brief Method DoWriteDataCallback addr 0x262a7d8 size 0xf4 virtual false final false
 void DoWriteDataCallback(System::IAsyncResult ar) ;

// Ctor Parameters []
explicit GlobalNamespace__OVRNetwork__OVRNetworkTcpServer() ;

/// @brief Method .ctor addr 0x262a8cc size 0xac virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectionState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8938))
// CS Name: OVRNetwork::OVRNetworkTcpClient::ConnectionState
struct CORDL_TYPE GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState(GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState const&) = default;
                    constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState(GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState&&) = default;
                    constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState& operator=(GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState& operator=(GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState_Unwrapped : int32_t {
__Disconnected = 0,
__Connected = 1,
__Connecting = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Disconnected offset 0
static GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState const Disconnected;

/// @brief Field Connected offset 0
static GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState const Connected;

/// @brief Field Connecting offset 0
static GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState const Connecting;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRNetworkTcpClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8939))
// CS Name: OVRNetwork::OVRNetworkTcpClient
class CORDL_TYPE GlobalNamespace__OVRNetwork__OVRNetworkTcpClient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ConnectionState = GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__OVRNetwork__OVRNetworkTcpClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRNetwork__OVRNetworkTcpClient", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient(GlobalNamespace__OVRNetwork__OVRNetworkTcpClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRNetwork__OVRNetworkTcpClient", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient(GlobalNamespace__OVRNetwork__OVRNetworkTcpClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRNetwork__OVRNetworkTcpClient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient& operator=(GlobalNamespace__OVRNetwork__OVRNetworkTcpClient&& o) noexcept = default;
  constexpr GlobalNamespace__OVRNetwork__OVRNetworkTcpClient& operator=(GlobalNamespace__OVRNetwork__OVRNetworkTcpClient const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_connectionStateChangedCallback, put=__set_connectionStateChangedCallback))  connectionStateChangedCallback;

constexpr void __set_connectionStateChangedCallback(System::Action value) ;

constexpr System::Action __get_connectionStateChangedCallback() const;

 System::Action_4<int32_t,::ArrayW<uint8_t>,int32_t,int32_t> __declspec(property(get=__get_payloadReceivedCallback, put=__set_payloadReceivedCallback))  payloadReceivedCallback;

constexpr void __set_payloadReceivedCallback(System::Action_4<int32_t,::ArrayW<uint8_t>,int32_t,int32_t> value) ;

constexpr System::Action_4<int32_t,::ArrayW<uint8_t>,int32_t,int32_t> __get_payloadReceivedCallback() const;

 System::Net::Sockets::TcpClient __declspec(property(get=__get_tcpClient, put=__set_tcpClient))  tcpClient;

constexpr void __set_tcpClient(System::Net::Sockets::TcpClient value) ;

constexpr System::Net::Sockets::TcpClient __get_tcpClient() const;

 ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_receivedBuffers, put=__set_receivedBuffers))  receivedBuffers;

constexpr void __set_receivedBuffers(::ArrayW<::ArrayW<uint8_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint8_t>> __get_receivedBuffers() const;

 int32_t __declspec(property(get=__get_receivedBufferIndex, put=__set_receivedBufferIndex))  receivedBufferIndex;

constexpr void __set_receivedBufferIndex(int32_t value) ;

constexpr int32_t __get_receivedBufferIndex() const;

 int32_t __declspec(property(get=__get_receivedBufferDataSize, put=__set_receivedBufferDataSize))  receivedBufferDataSize;

constexpr void __set_receivedBufferDataSize(int32_t value) ;

constexpr int32_t __get_receivedBufferDataSize() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get_readyReceiveDataEvent, put=__set_readyReceiveDataEvent))  readyReceiveDataEvent;

constexpr void __set_readyReceiveDataEvent(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get_readyReceiveDataEvent() const;


// Properties

 GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState __declspec(property(get=get_connectionState))  connectionState;

 bool __declspec(property(get=get_Connected))  Connected;


// Methods

/// @brief Method get_connectionState addr 0x262a978 size 0x28 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState get_connectionState() ;

/// @brief Method get_Connected addr 0x262a9a0 size 0x14 virtual false final false
 bool get_Connected() ;

/// @brief Method Connect addr 0x262a9b4 size 0x17c virtual false final false
 void Connect(int32_t listeningPort) ;

/// @brief Method ConnectCallback addr 0x262ab30 size 0x300 virtual false final false
 void ConnectCallback(System::IAsyncResult ar) ;

/// @brief Method Disconnect addr 0x262ae30 size 0x238 virtual false final false
 void Disconnect() ;

/// @brief Method Tick addr 0x262b068 size 0x218 virtual false final false
 void Tick() ;

/// @brief Method OnReadDataCallback addr 0x262b280 size 0x4dc virtual false final false
 void OnReadDataCallback(System::IAsyncResult ar) ;

// Ctor Parameters []
explicit GlobalNamespace__OVRNetwork__OVRNetworkTcpClient() ;

/// @brief Method .ctor addr 0x262b75c size 0x134 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRNetwork
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8940))
// CS Name: OVRNetwork
class CORDL_TYPE OVRNetwork : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OVRNetworkTcpClient = GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient;

using OVRNetworkTcpServer = GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer;

using FrameHeader = GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRNetwork() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRNetwork", modifiers: " const&", def_value: None }]
constexpr OVRNetwork(OVRNetwork const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRNetwork", modifiers: "&&", def_value: None }]
constexpr OVRNetwork(OVRNetwork&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRNetwork(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRNetwork& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRNetwork& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRNetwork& operator=(OVRNetwork&& o) noexcept = default;
  constexpr OVRNetwork& operator=(OVRNetwork const& o) noexcept = default;
                


// Fields

/// @brief Field MaxBufferLength offset 0
static constexpr int32_t  MaxBufferLength{65536};

/// @brief Field MaxPayloadLength offset 0
static constexpr int32_t  MaxPayloadLength{65524};

/// @brief Field FrameHeaderMagicIdentifier offset 0
static constexpr uint32_t  FrameHeaderMagicIdentifier{1384359787u};


// Methods

// Ctor Parameters []
explicit OVRNetwork() ;

/// @brief Method .ctor addr 0x2629148 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient__ConnectionState, "", "OVRNetwork/OVRNetworkTcpClient/ConnectionState");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpClient, "", "OVRNetwork/OVRNetworkTcpClient");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRNetwork__OVRNetworkTcpServer, "", "OVRNetwork/OVRNetworkTcpServer");
NEED_NO_BOX(GlobalNamespace::OVRNetwork);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNetwork, "", "OVRNetwork");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRNetwork__FrameHeader, "", "OVRNetwork/FrameHeader");
