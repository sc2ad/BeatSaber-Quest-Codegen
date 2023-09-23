#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class BaseChannel;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct ShutdownResult;
}
namespace LiteNetLib {
struct DisconnectResult;
}
namespace System {
struct DateTime;
}
namespace LiteNetLib {
class NetConnectRequestPacket;
}
namespace LiteNetLib {
class NetPacketPool;
}
namespace LiteNetLib {
class NetStatistics;
}
namespace LiteNetLib {
class NetManager;
}
namespace LiteNetLib {
struct ConnectRequestResult;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace LiteNetLib {
class NetConnectAcceptPacket;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
struct ConnectionState;
}
// Forward declare root types
namespace LiteNetLib {
class LiteNetLib__NetPeer__IncomingFragments;
}
namespace LiteNetLib {
class NetPeer;
}
// Type: ::IncomingFragments
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14458))
// CS Name: LiteNetLib.NetPeer::IncomingFragments
class CORDL_TYPE LiteNetLib__NetPeer__IncomingFragments : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LiteNetLib__NetPeer__IncomingFragments() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NetPeer__IncomingFragments", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__NetPeer__IncomingFragments(LiteNetLib__NetPeer__IncomingFragments const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NetPeer__IncomingFragments", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__NetPeer__IncomingFragments(LiteNetLib__NetPeer__IncomingFragments&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__NetPeer__IncomingFragments(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LiteNetLib__NetPeer__IncomingFragments& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__NetPeer__IncomingFragments& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__NetPeer__IncomingFragments& operator=(LiteNetLib__NetPeer__IncomingFragments&& o) noexcept = default;
  constexpr LiteNetLib__NetPeer__IncomingFragments& operator=(LiteNetLib__NetPeer__IncomingFragments const& o) noexcept = default;
                


// Fields

 ::ArrayW<LiteNetLib::NetPacket> __declspec(property(get=__get_Fragments, put=__set_Fragments))  Fragments;

constexpr void __set_Fragments(::ArrayW<LiteNetLib::NetPacket> value) ;

constexpr ::ArrayW<LiteNetLib::NetPacket> __get_Fragments() const;

 int32_t __declspec(property(get=__get_ReceivedCount, put=__set_ReceivedCount))  ReceivedCount;

constexpr void __set_ReceivedCount(int32_t value) ;

constexpr int32_t __get_ReceivedCount() const;

 int32_t __declspec(property(get=__get_TotalSize, put=__set_TotalSize))  TotalSize;

constexpr void __set_TotalSize(int32_t value) ;

constexpr int32_t __get_TotalSize() const;

 uint8_t __declspec(property(get=__get_ChannelId, put=__set_ChannelId))  ChannelId;

constexpr void __set_ChannelId(uint8_t value) ;

constexpr uint8_t __get_ChannelId() const;


// Methods

// Ctor Parameters []
explicit LiteNetLib__NetPeer__IncomingFragments() ;

/// @brief Method .ctor addr 0x2090dc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: LiteNetLib::NetPeer
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14459))
// CS Name: LiteNetLib.NetPeer
class CORDL_TYPE NetPeer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using IncomingFragments = LiteNetLib::LiteNetLib__NetPeer__IncomingFragments;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x148};

virtual ~NetPeer() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetPeer", modifiers: " const&", def_value: None }]
constexpr NetPeer(NetPeer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetPeer", modifiers: "&&", def_value: None }]
constexpr NetPeer(NetPeer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetPeer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetPeer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetPeer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetPeer& operator=(NetPeer&& o) noexcept = default;
  constexpr NetPeer& operator=(NetPeer const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__rtt, put=__set__rtt))  _rtt;

constexpr void __set__rtt(int32_t value) ;

constexpr int32_t __get__rtt() const;

 int32_t __declspec(property(get=__get__avgRtt, put=__set__avgRtt))  _avgRtt;

constexpr void __set__avgRtt(int32_t value) ;

constexpr int32_t __get__avgRtt() const;

 int32_t __declspec(property(get=__get__rttCount, put=__set__rttCount))  _rttCount;

constexpr void __set__rttCount(int32_t value) ;

constexpr int32_t __get__rttCount() const;

 double_t __declspec(property(get=__get__resendDelay, put=__set__resendDelay))  _resendDelay;

constexpr void __set__resendDelay(double_t value) ;

constexpr double_t __get__resendDelay() const;

 int32_t __declspec(property(get=__get__pingSendTimer, put=__set__pingSendTimer))  _pingSendTimer;

constexpr void __set__pingSendTimer(int32_t value) ;

constexpr int32_t __get__pingSendTimer() const;

 int32_t __declspec(property(get=__get__rttResetTimer, put=__set__rttResetTimer))  _rttResetTimer;

constexpr void __set__rttResetTimer(int32_t value) ;

constexpr int32_t __get__rttResetTimer() const;

 System::Diagnostics::Stopwatch __declspec(property(get=__get__pingTimer, put=__set__pingTimer))  _pingTimer;

constexpr void __set__pingTimer(System::Diagnostics::Stopwatch value) ;

constexpr System::Diagnostics::Stopwatch __get__pingTimer() const;

 int32_t __declspec(property(get=__get__timeSinceLastPacket, put=__set__timeSinceLastPacket))  _timeSinceLastPacket;

constexpr void __set__timeSinceLastPacket(int32_t value) ;

constexpr int32_t __get__timeSinceLastPacket() const;

 int64_t __declspec(property(get=__get__remoteDelta, put=__set__remoteDelta))  _remoteDelta;

constexpr void __set__remoteDelta(int64_t value) ;

constexpr int64_t __get__remoteDelta() const;

 LiteNetLib::NetPacketPool __declspec(property(get=__get__packetPool, put=__set__packetPool))  _packetPool;

constexpr void __set__packetPool(LiteNetLib::NetPacketPool value) ;

constexpr LiteNetLib::NetPacketPool __get__packetPool() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__flushLock, put=__set__flushLock))  _flushLock;

constexpr void __set__flushLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__flushLock() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__sendLock, put=__set__sendLock))  _sendLock;

constexpr void __set__sendLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__sendLock() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__shutdownLock, put=__set__shutdownLock))  _shutdownLock;

constexpr void __set__shutdownLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__shutdownLock() const;

 LiteNetLib::NetPeer __declspec(property(get=__get_NextPeer, put=__set_NextPeer))  NextPeer;

constexpr void __set_NextPeer(LiteNetLib::NetPeer value) ;

constexpr LiteNetLib::NetPeer __get_NextPeer() const;

 LiteNetLib::NetPeer __declspec(property(get=__get_PrevPeer, put=__set_PrevPeer))  PrevPeer;

constexpr void __set_PrevPeer(LiteNetLib::NetPeer value) ;

constexpr LiteNetLib::NetPeer __get_PrevPeer() const;

 System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> __declspec(property(get=__get__unreliableChannel, put=__set__unreliableChannel))  _unreliableChannel;

constexpr void __set__unreliableChannel(System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> value) ;

constexpr System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> __get__unreliableChannel() const;

 ::ArrayW<LiteNetLib::BaseChannel> __declspec(property(get=__get__channels, put=__set__channels))  _channels;

constexpr void __set__channels(::ArrayW<LiteNetLib::BaseChannel> value) ;

constexpr ::ArrayW<LiteNetLib::BaseChannel> __get__channels() const;

 LiteNetLib::BaseChannel __declspec(property(get=__get__headChannel, put=__set__headChannel))  _headChannel;

constexpr void __set__headChannel(LiteNetLib::BaseChannel value) ;

constexpr LiteNetLib::BaseChannel __get__headChannel() const;

 int32_t __declspec(property(get=__get__mtu, put=__set__mtu))  _mtu;

constexpr void __set__mtu(int32_t value) ;

constexpr int32_t __get__mtu() const;

 int32_t __declspec(property(get=__get__mtuIdx, put=__set__mtuIdx))  _mtuIdx;

constexpr void __set__mtuIdx(int32_t value) ;

constexpr int32_t __get__mtuIdx() const;

 bool __declspec(property(get=__get__finishMtu, put=__set__finishMtu))  _finishMtu;

constexpr void __set__finishMtu(bool value) ;

constexpr bool __get__finishMtu() const;

 int32_t __declspec(property(get=__get__mtuCheckTimer, put=__set__mtuCheckTimer))  _mtuCheckTimer;

constexpr void __set__mtuCheckTimer(int32_t value) ;

constexpr int32_t __get__mtuCheckTimer() const;

 int32_t __declspec(property(get=__get__mtuCheckAttempts, put=__set__mtuCheckAttempts))  _mtuCheckAttempts;

constexpr void __set__mtuCheckAttempts(int32_t value) ;

constexpr int32_t __get__mtuCheckAttempts() const;

/// @brief Field MtuCheckDelay offset 0
static constexpr int32_t  MtuCheckDelay{1000};

/// @brief Field MaxMtuCheckAttempts offset 0
static constexpr int32_t  MaxMtuCheckAttempts{4};

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__mtuMutex, put=__set__mtuMutex))  _mtuMutex;

constexpr void __set__mtuMutex(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__mtuMutex() const;

 uint16_t __declspec(property(get=__get__fragmentId, put=__set__fragmentId))  _fragmentId;

constexpr void __set__fragmentId(uint16_t value) ;

constexpr uint16_t __get__fragmentId() const;

 System::Collections::Generic::Dictionary_2<uint16_t,LiteNetLib::LiteNetLib__NetPeer__IncomingFragments> __declspec(property(get=__get__holdedFragments, put=__set__holdedFragments))  _holdedFragments;

constexpr void __set__holdedFragments(System::Collections::Generic::Dictionary_2<uint16_t,LiteNetLib::LiteNetLib__NetPeer__IncomingFragments> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint16_t,LiteNetLib::LiteNetLib__NetPeer__IncomingFragments> __get__holdedFragments() const;

 System::Collections::Generic::Dictionary_2<uint16_t,uint16_t> __declspec(property(get=__get__deliveredFramgnets, put=__set__deliveredFramgnets))  _deliveredFramgnets;

constexpr void __set__deliveredFramgnets(System::Collections::Generic::Dictionary_2<uint16_t,uint16_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<uint16_t,uint16_t> __get__deliveredFramgnets() const;

 LiteNetLib::NetPacket __declspec(property(get=__get__mergeData, put=__set__mergeData))  _mergeData;

constexpr void __set__mergeData(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__mergeData() const;

 int32_t __declspec(property(get=__get__mergePos, put=__set__mergePos))  _mergePos;

constexpr void __set__mergePos(int32_t value) ;

constexpr int32_t __get__mergePos() const;

 int32_t __declspec(property(get=__get__mergeCount, put=__set__mergeCount))  _mergeCount;

constexpr void __set__mergeCount(int32_t value) ;

constexpr int32_t __get__mergeCount() const;

 int32_t __declspec(property(get=__get__connectAttempts, put=__set__connectAttempts))  _connectAttempts;

constexpr void __set__connectAttempts(int32_t value) ;

constexpr int32_t __get__connectAttempts() const;

 int32_t __declspec(property(get=__get__connectTimer, put=__set__connectTimer))  _connectTimer;

constexpr void __set__connectTimer(int32_t value) ;

constexpr int32_t __get__connectTimer() const;

 int64_t __declspec(property(get=__get__connectTime, put=__set__connectTime))  _connectTime;

constexpr void __set__connectTime(int64_t value) ;

constexpr int64_t __get__connectTime() const;

 uint8_t __declspec(property(get=__get__connectNum, put=__set__connectNum))  _connectNum;

constexpr void __set__connectNum(uint8_t value) ;

constexpr uint8_t __get__connectNum() const;

 LiteNetLib::ConnectionState __declspec(property(get=__get__connectionState, put=__set__connectionState))  _connectionState;

constexpr void __set__connectionState(LiteNetLib::ConnectionState value) ;

constexpr LiteNetLib::ConnectionState __get__connectionState() const;

 LiteNetLib::NetPacket __declspec(property(get=__get__shutdownPacket, put=__set__shutdownPacket))  _shutdownPacket;

constexpr void __set__shutdownPacket(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__shutdownPacket() const;

/// @brief Field ShutdownDelay offset 0
static constexpr int32_t  ShutdownDelay{300};

 int32_t __declspec(property(get=__get__shutdownTimer, put=__set__shutdownTimer))  _shutdownTimer;

constexpr void __set__shutdownTimer(int32_t value) ;

constexpr int32_t __get__shutdownTimer() const;

 LiteNetLib::NetPacket __declspec(property(get=__get__pingPacket, put=__set__pingPacket))  _pingPacket;

constexpr void __set__pingPacket(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__pingPacket() const;

 LiteNetLib::NetPacket __declspec(property(get=__get__pongPacket, put=__set__pongPacket))  _pongPacket;

constexpr void __set__pongPacket(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__pongPacket() const;

 LiteNetLib::NetPacket __declspec(property(get=__get__connectRequestPacket, put=__set__connectRequestPacket))  _connectRequestPacket;

constexpr void __set__connectRequestPacket(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__connectRequestPacket() const;

 LiteNetLib::NetPacket __declspec(property(get=__get__connectAcceptPacket, put=__set__connectAcceptPacket))  _connectAcceptPacket;

constexpr void __set__connectAcceptPacket(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__connectAcceptPacket() const;

 System::Net::IPEndPoint __declspec(property(get=__get_EndPoint, put=__set_EndPoint))  EndPoint;

constexpr void __set_EndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_EndPoint() const;

 LiteNetLib::NetManager __declspec(property(get=__get_NetManager, put=__set_NetManager))  NetManager;

constexpr void __set_NetManager(LiteNetLib::NetManager value) ;

constexpr LiteNetLib::NetManager __get_NetManager() const;

 int32_t __declspec(property(get=__get_Id, put=__set_Id))  Id;

constexpr void __set_Id(int32_t value) ;

constexpr int32_t __get_Id() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Tag, put=__set_Tag))  Tag;

constexpr void __set_Tag(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Tag() const;

 LiteNetLib::NetStatistics __declspec(property(get=__get_Statistics, put=__set_Statistics))  Statistics;

constexpr void __set_Statistics(LiteNetLib::NetStatistics value) ;

constexpr LiteNetLib::NetStatistics __get_Statistics() const;


// Properties

 uint8_t __declspec(property(get=get_ConnectionNum, put=set_ConnectionNum))  ConnectionNum;

 LiteNetLib::ConnectionState __declspec(property(get=get_ConnectionState))  ConnectionState;

 int64_t __declspec(property(get=get_ConnectTime))  ConnectTime;

 int32_t __declspec(property(get=get_Ping))  Ping;

 int32_t __declspec(property(get=get_Mtu))  Mtu;

 int64_t __declspec(property(get=get_RemoteTimeDelta))  RemoteTimeDelta;

 System::DateTime __declspec(property(get=get_RemoteUtcTime))  RemoteUtcTime;

 int32_t __declspec(property(get=get_TimeSinceLastPacket))  TimeSinceLastPacket;

 double_t __declspec(property(get=get_ResendDelay))  ResendDelay;


// Methods

/// @brief Method get_ConnectionNum addr 0x208fb48 size 0x8 virtual false final false
 uint8_t get_ConnectionNum() ;

/// @brief Method set_ConnectionNum addr 0x208fb50 size 0x4c virtual false final false
 void set_ConnectionNum(uint8_t value) ;

/// @brief Method get_ConnectionState addr 0x208fb9c size 0x8 virtual false final false
 LiteNetLib::ConnectionState get_ConnectionState() ;

/// @brief Method get_ConnectTime addr 0x208fba4 size 0x8 virtual false final false
 int64_t get_ConnectTime() ;

/// @brief Method get_Ping addr 0x208fbac size 0x14 virtual false final false
 int32_t get_Ping() ;

/// @brief Method get_Mtu addr 0x208fbc0 size 0x8 virtual false final false
 int32_t get_Mtu() ;

/// @brief Method get_RemoteTimeDelta addr 0x208fbc8 size 0x8 virtual false final false
 int64_t get_RemoteTimeDelta() ;

/// @brief Method get_RemoteUtcTime addr 0x208fbd0 size 0x90 virtual false final false
 System::DateTime get_RemoteUtcTime() ;

/// @brief Method get_TimeSinceLastPacket addr 0x208fc60 size 0x8 virtual false final false
 int32_t get_TimeSinceLastPacket() ;

/// @brief Method get_ResendDelay addr 0x208fc68 size 0x8 virtual false final false
 double_t get_ResendDelay() ;

// Ctor Parameters [CppParam { name: "netManager", ty: "LiteNetLib::NetManager", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }]
explicit NetPeer(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id) ;

/// @brief Method .ctor addr 0x208bb2c size 0x320 virtual false final false
 void _ctor(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id) ;

/// @brief Method SetMtu addr 0x208fc70 size 0xac virtual false final false
 void SetMtu(int32_t mtuIdx) ;

/// @brief Method GetPacketsCountInReliableQueue addr 0x208fd1c size 0xb0 virtual false final false
 int32_t GetPacketsCountInReliableQueue(uint8_t channelNumber, bool ordered) ;

/// @brief Method CreateChannel addr 0x208fdcc size 0x174 virtual false final false
 LiteNetLib::BaseChannel CreateChannel(uint8_t idx) ;

// Ctor Parameters [CppParam { name: "netManager", ty: "LiteNetLib::NetManager", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "connectNum", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "connectData", ty: "LiteNetLib::Utils::NetDataWriter", modifiers: "", def_value: None }]
explicit NetPeer(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id, uint8_t connectNum, LiteNetLib::Utils::NetDataWriter connectData) ;

/// @brief Method .ctor addr 0x208eb3c size 0x110 virtual false final false
 void _ctor(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id, uint8_t connectNum, LiteNetLib::Utils::NetDataWriter connectData) ;

// Ctor Parameters [CppParam { name: "netManager", ty: "LiteNetLib::NetManager", modifiers: "", def_value: None }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "connectId", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "connectNum", ty: "uint8_t", modifiers: "", def_value: None }]
explicit NetPeer(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum) ;

/// @brief Method .ctor addr 0x208be68 size 0x68 virtual false final false
 void _ctor(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum) ;

/// @brief Method Reject addr 0x208be4c size 0x1c virtual false final false
 void Reject(int64_t connectionId, uint8_t connectionNumber, ::ArrayW<uint8_t> data, int32_t start, int32_t length) ;

/// @brief Method ProcessConnectAccept addr 0x208c8dc size 0x64 virtual false final false
 bool ProcessConnectAccept(LiteNetLib::NetConnectAcceptPacket packet) ;

/// @brief Method GetMaxSinglePacketSize addr 0x2090170 size 0x74 virtual false final false
 int32_t GetMaxSinglePacketSize(LiteNetLib::DeliveryMethod options) ;

/// @brief Method SendWithDeliveryEvent addr 0x20901e4 size 0x84 virtual false final false
 void SendWithDeliveryEvent(::ArrayW<uint8_t> data, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method SendWithDeliveryEvent addr 0x2090720 size 0x64 virtual false final false
 void SendWithDeliveryEvent(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method SendWithDeliveryEvent addr 0x2090784 size 0x8c virtual false final false
 void SendWithDeliveryEvent(LiteNetLib::Utils::NetDataWriter dataWriter, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method Send addr 0x2090810 size 0x28 virtual false final false
 void Send(::ArrayW<uint8_t> data, LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method Send addr 0x2090838 size 0x30 virtual false final false
 void Send(LiteNetLib::Utils::NetDataWriter dataWriter, LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method Send addr 0x2090868 size 0x10 virtual false final false
 void Send(::ArrayW<uint8_t> data, int32_t start, int32_t length, LiteNetLib::DeliveryMethod options) ;

/// @brief Method Send addr 0x2090878 size 0x28 virtual false final false
 void Send(::ArrayW<uint8_t> data, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method Send addr 0x20908a0 size 0x30 virtual false final false
 void Send(LiteNetLib::Utils::NetDataWriter dataWriter, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method Send addr 0x208d2f8 size 0x8 virtual false final false
 void Send(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method SendInternal addr 0x2090268 size 0x4b8 virtual false final false
 void SendInternal(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::bs_hook::Il2CppWrapperType userData) ;

/// @brief Method Disconnect addr 0x20908d0 size 0x24 virtual false final false
 void Disconnect(::ArrayW<uint8_t> data) ;

/// @brief Method Disconnect addr 0x20908f4 size 0x24 virtual false final false
 void Disconnect(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Disconnect addr 0x2090918 size 0x48 virtual false final false
 void Disconnect(::ArrayW<uint8_t> data, int32_t start, int32_t count) ;

/// @brief Method Disconnect addr 0x2090960 size 0x44 virtual false final false
 void Disconnect() ;

/// @brief Method ProcessDisconnect addr 0x208c70c size 0xc8 virtual false final false
 LiteNetLib::DisconnectResult ProcessDisconnect(LiteNetLib::NetPacket packet) ;

/// @brief Method Shutdown addr 0x208a424 size 0x2bc virtual false final false
 LiteNetLib::ShutdownResult Shutdown(::ArrayW<uint8_t> data, int32_t start, int32_t length, bool force) ;

/// @brief Method UpdateRoundTripTime addr 0x20909a4 size 0x3c virtual false final false
 void UpdateRoundTripTime(int32_t roundTripTime) ;

/// @brief Method AddReliablePacket addr 0x20909e0 size 0x3e0 virtual false final false
 void AddReliablePacket(LiteNetLib::DeliveryMethod method, LiteNetLib::NetPacket p) ;

/// @brief Method ProcessMtuPacket addr 0x2090dc8 size 0x3e8 virtual false final false
 void ProcessMtuPacket(LiteNetLib::NetPacket packet) ;

/// @brief Method UpdateMtuLogic addr 0x20911b0 size 0x244 virtual false final false
 void UpdateMtuLogic(int32_t deltaTime) ;

/// @brief Method ProcessConnectRequest addr 0x208c1b8 size 0x12c virtual false final false
 LiteNetLib::ConnectRequestResult ProcessConnectRequest(LiteNetLib::NetConnectRequestPacket connRequest) ;

/// @brief Method ProcessPacket addr 0x208c940 size 0x574 virtual false final false
 void ProcessPacket(LiteNetLib::NetPacket packet) ;

/// @brief Method SendMerged addr 0x2091420 size 0xa0 virtual false final false
 void SendMerged() ;

/// @brief Method SendUserData addr 0x20914c0 size 0x11c virtual false final false
 void SendUserData(LiteNetLib::NetPacket packet) ;

/// @brief Method Flush addr 0x208e3a4 size 0x250 virtual false final false
 void Flush() ;

/// @brief Method Update addr 0x208ae54 size 0x284 virtual false final false
 void Update(int32_t deltaTime) ;

/// @brief Method RecycleAndDeliver addr 0x20915dc size 0x160 virtual false final false
 void RecycleAndDeliver(LiteNetLib::NetPacket packet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::LiteNetLib__NetPeer__IncomingFragments);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__NetPeer__IncomingFragments, "LiteNetLib", "NetPeer/IncomingFragments");
NEED_NO_BOX(LiteNetLib::NetPeer);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPeer, "LiteNetLib", "NetPeer");
