#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
class INetSocketListener;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace LiteNetLib {
class NetConnectRequestPacket;
}
namespace LiteNetLib {
class LiteNetLib__NetManager__IPEndPointComparer;
}
namespace LiteNetLib::Layers {
class PacketLayerBase;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace LiteNetLib {
struct ConnectionState;
}
namespace LiteNetLib {
struct LiteNetLib__NetManager__NetPeerEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace LiteNetLib {
class IDeliveryEventListener;
}
namespace LiteNetLib {
class NetSocket;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace LiteNetLib {
struct LiteNetLib__NetEvent__EType;
}
namespace System::Collections {
class IEnumerator;
}
namespace LiteNetLib {
class INetEventListener;
}
namespace LiteNetLib {
class NetPeer;
}
namespace System::Threading {
class Thread;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct DisconnectReason;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace LiteNetLib {
class NetEvent;
}
namespace LiteNetLib {
class NetPacket;
}
namespace System::Net {
class IPAddress;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace LiteNetLib {
class NetPacketPool;
}
namespace LiteNetLib {
class NetStatistics;
}
namespace LiteNetLib {
class NatPunchModule;
}
namespace System::Threading {
struct ThreadPriority;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace LiteNetLib {
class LiteNetLib__NetManager__IPEndPointComparer;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
struct LiteNetLib__NetManager__NetPeerEnumerator;
}
// Type: ::IPEndPointComparer
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14446))
// CS Name: LiteNetLib.NetManager::IPEndPointComparer
class CORDL_TYPE LiteNetLib__NetManager__IPEndPointComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<System::Net::IPEndPoint>
constexpr operator  System::Collections::Generic::IEqualityComparer_1<System::Net::IPEndPoint>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LiteNetLib__NetManager__IPEndPointComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NetManager__IPEndPointComparer", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__NetManager__IPEndPointComparer(LiteNetLib__NetManager__IPEndPointComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NetManager__IPEndPointComparer", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__NetManager__IPEndPointComparer(LiteNetLib__NetManager__IPEndPointComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__NetManager__IPEndPointComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LiteNetLib__NetManager__IPEndPointComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__NetManager__IPEndPointComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__NetManager__IPEndPointComparer& operator=(LiteNetLib__NetManager__IPEndPointComparer&& o) noexcept = default;
  constexpr LiteNetLib__NetManager__IPEndPointComparer& operator=(LiteNetLib__NetManager__IPEndPointComparer const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x208f2bc size 0x5c virtual true final true
 bool Equals(System::Net::IPEndPoint x, System::Net::IPEndPoint y) ;

/// @brief Method GetHashCode addr 0x208f318 size 0x20 virtual true final true
 int32_t GetHashCode(System::Net::IPEndPoint obj) ;

static LiteNetLib::LiteNetLib__NetManager__IPEndPointComparer New_ctor() ;

/// @brief Method .ctor addr 0x2089b0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::NetPeerEnumerator
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14447))
// CS Name: LiteNetLib.NetManager::NetPeerEnumerator
struct CORDL_TYPE LiteNetLib__NetManager__NetPeerEnumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<LiteNetLib::NetPeer>
constexpr operator  System::Collections::Generic::IEnumerator_1<LiteNetLib::NetPeer>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "_initialPeer", ty: "LiteNetLib::NetPeer", modifiers: "", def_value: None }, CppParam { name: "_p", ty: "LiteNetLib::NetPeer", modifiers: "", def_value: None }]
constexpr LiteNetLib__NetManager__NetPeerEnumerator(LiteNetLib::NetPeer _initialPeer, LiteNetLib::NetPeer _p) noexcept;


                    constexpr LiteNetLib__NetManager__NetPeerEnumerator(LiteNetLib__NetManager__NetPeerEnumerator const&) = default;
                    constexpr LiteNetLib__NetManager__NetPeerEnumerator(LiteNetLib__NetManager__NetPeerEnumerator&&) = default;
                    constexpr LiteNetLib__NetManager__NetPeerEnumerator& operator=(LiteNetLib__NetManager__NetPeerEnumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LiteNetLib__NetManager__NetPeerEnumerator& operator=(LiteNetLib__NetManager__NetPeerEnumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__NetManager__NetPeerEnumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LiteNetLib::NetPeer __declspec(property(get=__get__initialPeer, put=__set__initialPeer))  _initialPeer;

constexpr void __set__initialPeer(LiteNetLib::NetPeer value) ;

constexpr LiteNetLib::NetPeer __get__initialPeer() const;

 LiteNetLib::NetPeer __declspec(property(get=__get__p, put=__set__p))  _p;

constexpr void __set__p(LiteNetLib::NetPeer value) ;

constexpr LiteNetLib::NetPeer __get__p() const;


// Properties

 LiteNetLib::NetPeer __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x208f1f4 size 0x8 virtual false final false
 void _ctor(LiteNetLib::NetPeer p) ;

/// @brief Method Dispose addr 0x208f338 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x208f33c size 0x3c virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x208f378 size 0x40 virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x208f3b8 size 0x8 virtual true final true
 LiteNetLib::NetPeer get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x208f3c0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: LiteNetLib::NetManager
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14448))
// CS Name: LiteNetLib.NetManager
class CORDL_TYPE NetManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NetPeerEnumerator = LiteNetLib::LiteNetLib__NetManager__NetPeerEnumerator;

using IPEndPointComparer = LiteNetLib::LiteNetLib__NetManager__IPEndPointComparer;

/// @brief Convert operator to LiteNetLib::INetSocketListener
constexpr operator  LiteNetLib::INetSocketListener() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<LiteNetLib::NetPeer>
constexpr operator  System::Collections::Generic::IEnumerable_1<LiteNetLib::NetPeer>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~NetManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetManager", modifiers: " const&", def_value: None }]
constexpr NetManager(NetManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetManager", modifiers: "&&", def_value: None }]
constexpr NetManager(NetManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetManager& operator=(NetManager&& o) noexcept = default;
  constexpr NetManager& operator=(NetManager const& o) noexcept = default;
                


// Fields

 LiteNetLib::NetSocket __declspec(property(get=__get__socket, put=__set__socket))  _socket;

constexpr void __set__socket(LiteNetLib::NetSocket value) ;

constexpr LiteNetLib::NetSocket __get__socket() const;

 System::Threading::Thread __declspec(property(get=__get__logicThread, put=__set__logicThread))  _logicThread;

constexpr void __set__logicThread(System::Threading::Thread value) ;

constexpr System::Threading::Thread __get__logicThread() const;

 System::Collections::Generic::Queue_1<LiteNetLib::NetEvent> __declspec(property(get=__get__netEventsQueue, put=__set__netEventsQueue))  _netEventsQueue;

constexpr void __set__netEventsQueue(System::Collections::Generic::Queue_1<LiteNetLib::NetEvent> value) ;

constexpr System::Collections::Generic::Queue_1<LiteNetLib::NetEvent> __get__netEventsQueue() const;

 System::Collections::Generic::Stack_1<LiteNetLib::NetEvent> __declspec(property(get=__get__netEventsPool, put=__set__netEventsPool))  _netEventsPool;

constexpr void __set__netEventsPool(System::Collections::Generic::Stack_1<LiteNetLib::NetEvent> value) ;

constexpr System::Collections::Generic::Stack_1<LiteNetLib::NetEvent> __get__netEventsPool() const;

 LiteNetLib::INetEventListener __declspec(property(get=__get__netEventListener, put=__set__netEventListener))  _netEventListener;

constexpr void __set__netEventListener(LiteNetLib::INetEventListener value) ;

constexpr LiteNetLib::INetEventListener __get__netEventListener() const;

 LiteNetLib::IDeliveryEventListener __declspec(property(get=__get__deliveryEventListener, put=__set__deliveryEventListener))  _deliveryEventListener;

constexpr void __set__deliveryEventListener(LiteNetLib::IDeliveryEventListener value) ;

constexpr LiteNetLib::IDeliveryEventListener __get__deliveryEventListener() const;

 System::Collections::Generic::Dictionary_2<System::Net::IPEndPoint,LiteNetLib::NetPeer> __declspec(property(get=__get__peersDict, put=__set__peersDict))  _peersDict;

constexpr void __set__peersDict(System::Collections::Generic::Dictionary_2<System::Net::IPEndPoint,LiteNetLib::NetPeer> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Net::IPEndPoint,LiteNetLib::NetPeer> __get__peersDict() const;

 System::Collections::Generic::Dictionary_2<System::Net::IPEndPoint,LiteNetLib::ConnectionRequest> __declspec(property(get=__get__requestsDict, put=__set__requestsDict))  _requestsDict;

constexpr void __set__requestsDict(System::Collections::Generic::Dictionary_2<System::Net::IPEndPoint,LiteNetLib::ConnectionRequest> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Net::IPEndPoint,LiteNetLib::ConnectionRequest> __get__requestsDict() const;

 System::Threading::ReaderWriterLockSlim __declspec(property(get=__get__peersLock, put=__set__peersLock))  _peersLock;

constexpr void __set__peersLock(System::Threading::ReaderWriterLockSlim value) ;

constexpr System::Threading::ReaderWriterLockSlim __get__peersLock() const;

 LiteNetLib::NetPeer __declspec(property(get=__get__headPeer, put=__set__headPeer))  _headPeer;

constexpr void __set__headPeer(LiteNetLib::NetPeer value) ;

constexpr LiteNetLib::NetPeer __get__headPeer() const;

 int32_t __declspec(property(get=__get__connectedPeersCount, put=__set__connectedPeersCount))  _connectedPeersCount;

constexpr void __set__connectedPeersCount(int32_t value) ;

constexpr int32_t __get__connectedPeersCount() const;

 System::Collections::Generic::List_1<LiteNetLib::NetPeer> __declspec(property(get=__get__connectedPeerListCache, put=__set__connectedPeerListCache))  _connectedPeerListCache;

constexpr void __set__connectedPeerListCache(System::Collections::Generic::List_1<LiteNetLib::NetPeer> value) ;

constexpr System::Collections::Generic::List_1<LiteNetLib::NetPeer> __get__connectedPeerListCache() const;

 ::ArrayW<LiteNetLib::NetPeer> __declspec(property(get=__get__peersArray, put=__set__peersArray))  _peersArray;

constexpr void __set__peersArray(::ArrayW<LiteNetLib::NetPeer> value) ;

constexpr ::ArrayW<LiteNetLib::NetPeer> __get__peersArray() const;

 LiteNetLib::Layers::PacketLayerBase __declspec(property(get=__get__extraPacketLayer, put=__set__extraPacketLayer))  _extraPacketLayer;

constexpr void __set__extraPacketLayer(LiteNetLib::Layers::PacketLayerBase value) ;

constexpr LiteNetLib::Layers::PacketLayerBase __get__extraPacketLayer() const;

 int32_t __declspec(property(get=__get__lastPeerId, put=__set__lastPeerId))  _lastPeerId;

constexpr void __set__lastPeerId(int32_t value) ;

constexpr int32_t __get__lastPeerId() const;

 System::Collections::Generic::Queue_1<int32_t> __declspec(property(get=__get__peerIds, put=__set__peerIds))  _peerIds;

constexpr void __set__peerIds(System::Collections::Generic::Queue_1<int32_t> value) ;

constexpr System::Collections::Generic::Queue_1<int32_t> __get__peerIds() const;

 uint8_t __declspec(property(get=__get__channelsCount, put=__set__channelsCount))  _channelsCount;

constexpr void __set__channelsCount(uint8_t value) ;

constexpr uint8_t __get__channelsCount() const;

 LiteNetLib::NetPacketPool __declspec(property(get=__get_NetPacketPool, put=__set_NetPacketPool))  NetPacketPool;

constexpr void __set_NetPacketPool(LiteNetLib::NetPacketPool value) ;

constexpr LiteNetLib::NetPacketPool __get_NetPacketPool() const;

 bool __declspec(property(get=__get_UnconnectedMessagesEnabled, put=__set_UnconnectedMessagesEnabled))  UnconnectedMessagesEnabled;

constexpr void __set_UnconnectedMessagesEnabled(bool value) ;

constexpr bool __get_UnconnectedMessagesEnabled() const;

 bool __declspec(property(get=__get_NatPunchEnabled, put=__set_NatPunchEnabled))  NatPunchEnabled;

constexpr void __set_NatPunchEnabled(bool value) ;

constexpr bool __get_NatPunchEnabled() const;

 int32_t __declspec(property(get=__get_UpdateTime, put=__set_UpdateTime))  UpdateTime;

constexpr void __set_UpdateTime(int32_t value) ;

constexpr int32_t __get_UpdateTime() const;

 int32_t __declspec(property(get=__get_PingInterval, put=__set_PingInterval))  PingInterval;

constexpr void __set_PingInterval(int32_t value) ;

constexpr int32_t __get_PingInterval() const;

 int32_t __declspec(property(get=__get_DisconnectTimeout, put=__set_DisconnectTimeout))  DisconnectTimeout;

constexpr void __set_DisconnectTimeout(int32_t value) ;

constexpr int32_t __get_DisconnectTimeout() const;

 bool __declspec(property(get=__get_SimulatePacketLoss, put=__set_SimulatePacketLoss))  SimulatePacketLoss;

constexpr void __set_SimulatePacketLoss(bool value) ;

constexpr bool __get_SimulatePacketLoss() const;

 bool __declspec(property(get=__get_SimulateLatency, put=__set_SimulateLatency))  SimulateLatency;

constexpr void __set_SimulateLatency(bool value) ;

constexpr bool __get_SimulateLatency() const;

 int32_t __declspec(property(get=__get_SimulationPacketLossChance, put=__set_SimulationPacketLossChance))  SimulationPacketLossChance;

constexpr void __set_SimulationPacketLossChance(int32_t value) ;

constexpr int32_t __get_SimulationPacketLossChance() const;

 int32_t __declspec(property(get=__get_SimulationMinLatency, put=__set_SimulationMinLatency))  SimulationMinLatency;

constexpr void __set_SimulationMinLatency(int32_t value) ;

constexpr int32_t __get_SimulationMinLatency() const;

 int32_t __declspec(property(get=__get_SimulationMaxLatency, put=__set_SimulationMaxLatency))  SimulationMaxLatency;

constexpr void __set_SimulationMaxLatency(int32_t value) ;

constexpr int32_t __get_SimulationMaxLatency() const;

 bool __declspec(property(get=__get_UnsyncedEvents, put=__set_UnsyncedEvents))  UnsyncedEvents;

constexpr void __set_UnsyncedEvents(bool value) ;

constexpr bool __get_UnsyncedEvents() const;

 bool __declspec(property(get=__get_UnsyncedDeliveryEvent, put=__set_UnsyncedDeliveryEvent))  UnsyncedDeliveryEvent;

constexpr void __set_UnsyncedDeliveryEvent(bool value) ;

constexpr bool __get_UnsyncedDeliveryEvent() const;

 bool __declspec(property(get=__get_BroadcastReceiveEnabled, put=__set_BroadcastReceiveEnabled))  BroadcastReceiveEnabled;

constexpr void __set_BroadcastReceiveEnabled(bool value) ;

constexpr bool __get_BroadcastReceiveEnabled() const;

 int32_t __declspec(property(get=__get_ReconnectDelay, put=__set_ReconnectDelay))  ReconnectDelay;

constexpr void __set_ReconnectDelay(int32_t value) ;

constexpr int32_t __get_ReconnectDelay() const;

 int32_t __declspec(property(get=__get_MaxConnectAttempts, put=__set_MaxConnectAttempts))  MaxConnectAttempts;

constexpr void __set_MaxConnectAttempts(int32_t value) ;

constexpr int32_t __get_MaxConnectAttempts() const;

 bool __declspec(property(get=__get_ReuseAddress, put=__set_ReuseAddress))  ReuseAddress;

constexpr void __set_ReuseAddress(bool value) ;

constexpr bool __get_ReuseAddress() const;

 LiteNetLib::NetStatistics __declspec(property(get=__get_Statistics, put=__set_Statistics))  Statistics;

constexpr void __set_Statistics(LiteNetLib::NetStatistics value) ;

constexpr LiteNetLib::NetStatistics __get_Statistics() const;

 bool __declspec(property(get=__get_EnableStatistics, put=__set_EnableStatistics))  EnableStatistics;

constexpr void __set_EnableStatistics(bool value) ;

constexpr bool __get_EnableStatistics() const;

 LiteNetLib::NatPunchModule __declspec(property(get=__get_NatPunchModule, put=__set_NatPunchModule))  NatPunchModule;

constexpr void __set_NatPunchModule(LiteNetLib::NatPunchModule value) ;

constexpr LiteNetLib::NatPunchModule __get_NatPunchModule() const;

 bool __declspec(property(get=__get_AutoRecycle, put=__set_AutoRecycle))  AutoRecycle;

constexpr void __set_AutoRecycle(bool value) ;

constexpr bool __get_AutoRecycle() const;

 bool __declspec(property(get=__get_IPv6Enabled, put=__set_IPv6Enabled))  IPv6Enabled;

constexpr void __set_IPv6Enabled(bool value) ;

constexpr bool __get_IPv6Enabled() const;

 System::Threading::ThreadPriority __declspec(property(get=__get_ThreadPriority, put=__set_ThreadPriority))  ThreadPriority;

constexpr void __set_ThreadPriority(System::Threading::ThreadPriority value) ;

constexpr System::Threading::ThreadPriority __get_ThreadPriority() const;


// Properties

 bool __declspec(property(get=get_IsRunning))  IsRunning;

 int32_t __declspec(property(get=get_LocalPort))  LocalPort;

 LiteNetLib::NetPeer __declspec(property(get=get_FirstPeer))  FirstPeer;

 uint8_t __declspec(property(get=get_ChannelsCount, put=set_ChannelsCount))  ChannelsCount;

 System::Collections::Generic::List_1<LiteNetLib::NetPeer> __declspec(property(get=get_ConnectedPeerList))  ConnectedPeerList;

 int32_t __declspec(property(get=get_ConnectedPeersCount))  ConnectedPeersCount;


// Methods

/// @brief Method get_IsRunning addr 0x2089040 size 0x24 virtual false final false
 bool get_IsRunning() ;

/// @brief Method get_LocalPort addr 0x2089064 size 0x1c virtual false final false
 int32_t get_LocalPort() ;

/// @brief Method get_FirstPeer addr 0x2089080 size 0x18 virtual false final false
 LiteNetLib::NetPeer get_FirstPeer() ;

/// @brief Method get_ChannelsCount addr 0x2089098 size 0x8 virtual false final false
 uint8_t get_ChannelsCount() ;

/// @brief Method set_ChannelsCount addr 0x20890a0 size 0x6c virtual false final false
 void set_ChannelsCount(uint8_t value) ;

/// @brief Method get_ConnectedPeerList addr 0x208910c size 0x20 virtual false final false
 System::Collections::Generic::List_1<LiteNetLib::NetPeer> get_ConnectedPeerList() ;

/// @brief Method GetPeerById addr 0x208924c size 0x30 virtual false final false
 LiteNetLib::NetPeer GetPeerById(int32_t id) ;

/// @brief Method get_ConnectedPeersCount addr 0x208927c size 0x18 virtual false final false
 int32_t get_ConnectedPeersCount() ;

/// @brief Method TryGetPeer addr 0x2089294 size 0x98 virtual false final false
 bool TryGetPeer(System::Net::IPEndPoint endPoint, ByRef<LiteNetLib::NetPeer> peer) ;

/// @brief Method AddPeer addr 0x208932c size 0x14c virtual false final false
 void AddPeer(LiteNetLib::NetPeer peer) ;

/// @brief Method RemovePeer addr 0x2089478 size 0x48 virtual false final false
 void RemovePeer(LiteNetLib::NetPeer peer) ;

/// @brief Method RemovePeerInternal addr 0x20894c0 size 0x1b4 virtual false final false
 void RemovePeerInternal(LiteNetLib::NetPeer peer) ;

static LiteNetLib::NetManager New_ctor(LiteNetLib::INetEventListener listener, LiteNetLib::Layers::PacketLayerBase extraPacketLayer) ;

/// @brief Method .ctor addr 0x2089674 size 0x3d0 virtual false final false
 void _ctor(LiteNetLib::INetEventListener listener, LiteNetLib::Layers::PacketLayerBase extraPacketLayer) ;

/// @brief Method ConnectionLatencyUpdated addr 0x2089b14 size 0x40 virtual false final false
 void ConnectionLatencyUpdated(LiteNetLib::NetPeer fromPeer, int32_t latency) ;

/// @brief Method MessageDelivered addr 0x2089e90 size 0x4c virtual false final false
 void MessageDelivered(LiteNetLib::NetPeer fromPeer, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method SendRawAndRecycle addr 0x2089edc size 0x54 virtual false final false
 int32_t SendRawAndRecycle(LiteNetLib::NetPacket packet, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method SendRaw addr 0x208a198 size 0x28 virtual false final false
 int32_t SendRaw(LiteNetLib::NetPacket packet, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method SendRaw addr 0x2089f30 size 0x268 virtual false final false
 int32_t SendRaw(::ArrayW<uint8_t> message, int32_t start, int32_t length, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method DisconnectPeerForce addr 0x208a32c size 0x30 virtual false final false
 void DisconnectPeerForce(LiteNetLib::NetPeer peer, LiteNetLib::DisconnectReason reason, System::Net::Sockets::SocketError socketErrorCode, LiteNetLib::NetPacket eventData) ;

/// @brief Method DisconnectPeer addr 0x208a374 size 0xb0 virtual false final false
 void DisconnectPeer(LiteNetLib::NetPeer peer, LiteNetLib::DisconnectReason reason, System::Net::Sockets::SocketError socketErrorCode, bool force, ::ArrayW<uint8_t> data, int32_t start, int32_t count, LiteNetLib::NetPacket eventData) ;

/// @brief Method CreateEvent addr 0x2089b54 size 0x33c virtual false final false
 void CreateEvent(LiteNetLib::LiteNetLib__NetEvent__EType type, LiteNetLib::NetPeer peer, System::Net::IPEndPoint remoteEndPoint, System::Net::Sockets::SocketError errorCode, int32_t latency, LiteNetLib::DisconnectReason disconnectReason, LiteNetLib::ConnectionRequest connectionRequest, LiteNetLib::DeliveryMethod deliveryMethod, LiteNetLib::NetPacket readerSource, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method ProcessEvent addr 0x208a6e0 size 0x4d4 virtual false final false
 void ProcessEvent(LiteNetLib::NetEvent evt) ;

/// @brief Method RecycleEvent addr 0x2088e44 size 0x114 virtual false final false
 void RecycleEvent(LiteNetLib::NetEvent evt) ;

/// @brief Method UpdateLogic addr 0x208abc4 size 0x290 virtual false final false
 void UpdateLogic() ;

/// @brief Method LiteNetLib.INetSocketListener.OnMessageReceived addr 0x208b0d8 size 0x2b0 virtual true final true
 void LiteNetLib_INetSocketListener_OnMessageReceived(::ArrayW<uint8_t> data, int32_t length, System::Net::Sockets::SocketError errorCode, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method OnConnectionSolved addr 0x2084da0 size 0x3fc virtual false final false
 LiteNetLib::NetPeer OnConnectionSolved(LiteNetLib::ConnectionRequest request, ::ArrayW<uint8_t> rejectData, int32_t start, int32_t length) ;

/// @brief Method GetNextPeerId addr 0x208b9fc size 0x130 virtual false final false
 int32_t GetNextPeerId() ;

/// @brief Method ProcessConnectRequest addr 0x208bed0 size 0x2e8 virtual false final false
 void ProcessConnectRequest(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::NetPeer netPeer, LiteNetLib::NetConnectRequestPacket connRequest) ;

/// @brief Method DataReceived addr 0x208b388 size 0x590 virtual false final false
 void DataReceived(::ArrayW<uint8_t> reusableBuffer, int32_t count, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method CreateReceiveEvent addr 0x208ceb4 size 0x288 virtual false final false
 void CreateReceiveEvent(LiteNetLib::NetPacket packet, LiteNetLib::DeliveryMethod method, LiteNetLib::NetPeer fromPeer) ;

/// @brief Method SendToAll addr 0x208d13c size 0x2c virtual false final false
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, LiteNetLib::DeliveryMethod options) ;

/// @brief Method SendToAll addr 0x208d174 size 0x24 virtual false final false
 void SendToAll(::ArrayW<uint8_t> data, LiteNetLib::DeliveryMethod options) ;

/// @brief Method SendToAll addr 0x208d168 size 0xc virtual false final false
 void SendToAll(::ArrayW<uint8_t> data, int32_t start, int32_t length, LiteNetLib::DeliveryMethod options) ;

/// @brief Method SendToAll addr 0x208d2a8 size 0x2c virtual false final false
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, uint8_t channelNumber, LiteNetLib::DeliveryMethod options) ;

/// @brief Method SendToAll addr 0x208d2d4 size 0x24 virtual false final false
 void SendToAll(::ArrayW<uint8_t> data, uint8_t channelNumber, LiteNetLib::DeliveryMethod options) ;

/// @brief Method SendToAll addr 0x208d198 size 0x110 virtual false final false
 void SendToAll(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, LiteNetLib::DeliveryMethod options) ;

/// @brief Method SendToAll addr 0x208d300 size 0x30 virtual false final false
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, LiteNetLib::DeliveryMethod options, LiteNetLib::NetPeer excludePeer) ;

/// @brief Method SendToAll addr 0x208d454 size 0x28 virtual false final false
 void SendToAll(::ArrayW<uint8_t> data, LiteNetLib::DeliveryMethod options, LiteNetLib::NetPeer excludePeer) ;

/// @brief Method SendToAll addr 0x208d47c size 0x10 virtual false final false
 void SendToAll(::ArrayW<uint8_t> data, int32_t start, int32_t length, LiteNetLib::DeliveryMethod options, LiteNetLib::NetPeer excludePeer) ;

/// @brief Method SendToAll addr 0x208d48c size 0x30 virtual false final false
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, uint8_t channelNumber, LiteNetLib::DeliveryMethod options, LiteNetLib::NetPeer excludePeer) ;

/// @brief Method SendToAll addr 0x208d4bc size 0x28 virtual false final false
 void SendToAll(::ArrayW<uint8_t> data, uint8_t channelNumber, LiteNetLib::DeliveryMethod options, LiteNetLib::NetPeer excludePeer) ;

/// @brief Method SendToAll addr 0x208d330 size 0x124 virtual false final false
 void SendToAll(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, LiteNetLib::DeliveryMethod options, LiteNetLib::NetPeer excludePeer) ;

/// @brief Method Start addr 0x208d4e4 size 0x8 virtual false final false
 bool Start() ;

/// @brief Method Start addr 0x208d560 size 0x148 virtual false final false
 bool Start(System::Net::IPAddress addressIPv4, System::Net::IPAddress addressIPv6, int32_t port) ;

/// @brief Method Start addr 0x208daac size 0x90 virtual false final false
 bool Start(::StringW addressIPv4, ::StringW addressIPv6, int32_t port) ;

/// @brief Method Start addr 0x208d4ec size 0x74 virtual false final false
 bool Start(int32_t port) ;

/// @brief Method SendUnconnectedMessage addr 0x208dcf4 size 0x20 virtual false final false
 bool SendUnconnectedMessage(::ArrayW<uint8_t> message, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method SendUnconnectedMessage addr 0x208dd68 size 0x28 virtual false final false
 bool SendUnconnectedMessage(LiteNetLib::Utils::NetDataWriter writer, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method SendUnconnectedMessage addr 0x208dd14 size 0x54 virtual false final false
 bool SendUnconnectedMessage(::ArrayW<uint8_t> message, int32_t start, int32_t length, System::Net::IPEndPoint remoteEndPoint) ;

/// @brief Method SendBroadcast addr 0x208de68 size 0x28 virtual false final false
 bool SendBroadcast(LiteNetLib::Utils::NetDataWriter writer, int32_t port) ;

/// @brief Method SendBroadcast addr 0x208dff0 size 0x20 virtual false final false
 bool SendBroadcast(::ArrayW<uint8_t> data, int32_t port) ;

/// @brief Method SendBroadcast addr 0x208de90 size 0x160 virtual false final false
 bool SendBroadcast(::ArrayW<uint8_t> data, int32_t start, int32_t length, int32_t port) ;

/// @brief Method Flush addr 0x208e37c size 0x28 virtual false final false
 void Flush() ;

/// @brief Method PollEvents addr 0x208e5f4 size 0x160 virtual false final false
 void PollEvents() ;

/// @brief Method Connect addr 0x208e754 size 0x38 virtual false final false
 LiteNetLib::NetPeer Connect(::StringW address, int32_t port, ::StringW key) ;

/// @brief Method Connect addr 0x208e7fc size 0x148 virtual false final false
 LiteNetLib::NetPeer Connect(::StringW address, int32_t port, LiteNetLib::Utils::NetDataWriter connectionData) ;

/// @brief Method Connect addr 0x208eb0c size 0x30 virtual false final false
 LiteNetLib::NetPeer Connect(System::Net::IPEndPoint target, ::StringW key) ;

/// @brief Method Connect addr 0x208e944 size 0x1c8 virtual false final false
 LiteNetLib::NetPeer Connect(System::Net::IPEndPoint target, LiteNetLib::Utils::NetDataWriter connectionData) ;

/// @brief Method Stop addr 0x208ec4c size 0x8 virtual false final false
 void Stop() ;

/// @brief Method Stop addr 0x208ec54 size 0x2b4 virtual false final false
 void Stop(bool sendDisconnectMessages) ;

/// @brief Method GetPeersCount addr 0x208efb0 size 0x74 virtual false final false
 int32_t GetPeersCount(LiteNetLib::ConnectionState peerState) ;

/// @brief Method GetPeersNonAlloc addr 0x208912c size 0x120 virtual false final false
 void GetPeersNonAlloc(System::Collections::Generic::List_1<LiteNetLib::NetPeer> peers, LiteNetLib::ConnectionState peerState) ;

/// @brief Method DisconnectAll addr 0x208f024 size 0x10 virtual false final false
 void DisconnectAll() ;

/// @brief Method DisconnectAll addr 0x208f034 size 0x90 virtual false final false
 void DisconnectAll(::ArrayW<uint8_t> data, int32_t start, int32_t count) ;

/// @brief Method DisconnectPeerForce addr 0x208f0c4 size 0x34 virtual false final false
 void DisconnectPeerForce(LiteNetLib::NetPeer peer) ;

/// @brief Method DisconnectPeer addr 0x208f0f8 size 0x34 virtual false final false
 void DisconnectPeer(LiteNetLib::NetPeer peer) ;

/// @brief Method DisconnectPeer addr 0x208f160 size 0x3c virtual false final false
 void DisconnectPeer(LiteNetLib::NetPeer peer, ::ArrayW<uint8_t> data) ;

/// @brief Method DisconnectPeer addr 0x208f19c size 0x3c virtual false final false
 void DisconnectPeer(LiteNetLib::NetPeer peer, LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method DisconnectPeer addr 0x208f12c size 0x34 virtual false final false
 void DisconnectPeer(LiteNetLib::NetPeer peer, ::ArrayW<uint8_t> data, int32_t start, int32_t count) ;

/// @brief Method GetEnumerator addr 0x208f1d8 size 0x1c virtual false final false
 LiteNetLib::LiteNetLib__NetManager__NetPeerEnumerator GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<LiteNetLib.NetPeer>.GetEnumerator addr 0x208f1fc size 0x60 virtual true final true
 System::Collections::Generic::IEnumerator_1<LiteNetLib::NetPeer> System_Collections_Generic_IEnumerable_LiteNetLib_NetPeer__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x208f25c size 0x60 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::LiteNetLib__NetManager__IPEndPointComparer);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__NetManager__IPEndPointComparer, "LiteNetLib", "NetManager/IPEndPointComparer");
NEED_NO_BOX(LiteNetLib::NetManager);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetManager, "LiteNetLib", "NetManager");
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__NetManager__NetPeerEnumerator, "LiteNetLib", "NetManager/NetPeerEnumerator");
