#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
class Thread;
}
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
namespace IgnoranceCore {
struct IgnoranceConnectionEvent;
}
namespace IgnoranceCore {
struct IgnoranceOutgoingPacket;
}
namespace IgnoranceThirdparty {
template<typename T>
class RingBuffer_1;
}
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
namespace IgnoranceCore {
struct IgnoranceServerStats;
}
// Forward declare root types
namespace IgnoranceCore {
class IgnoranceServer;
}
namespace IgnoranceCore {
struct IgnoranceCore__IgnoranceServer__ThreadParamInfo;
}
// Type: ::ThreadParamInfo
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15280))
// CS Name: IgnoranceCore.IgnoranceServer::ThreadParamInfo
struct CORDL_TYPE IgnoranceCore__IgnoranceServer__ThreadParamInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "IsFruityDevice", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "BindAllInterfaces", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Peers", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PollTime", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Port", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Verbosity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "UseSsl", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "CertificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Certificate", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "PrivateKeyPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "PrivateKey", ty: "::StringW", modifiers: "", def_value: None }]
constexpr IgnoranceCore__IgnoranceServer__ThreadParamInfo(bool IsFruityDevice, bool BindAllInterfaces, int32_t Channels, int32_t Peers, int32_t PollTime, int32_t Port, int32_t PacketSizeLimit, int32_t Verbosity, ::StringW Address, bool UseSsl, ::StringW CertificatePath, ::StringW Certificate, ::StringW PrivateKeyPath, ::StringW PrivateKey) noexcept;


                    constexpr IgnoranceCore__IgnoranceServer__ThreadParamInfo(IgnoranceCore__IgnoranceServer__ThreadParamInfo const&) = default;
                    constexpr IgnoranceCore__IgnoranceServer__ThreadParamInfo(IgnoranceCore__IgnoranceServer__ThreadParamInfo&&) = default;
                    constexpr IgnoranceCore__IgnoranceServer__ThreadParamInfo& operator=(IgnoranceCore__IgnoranceServer__ThreadParamInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IgnoranceCore__IgnoranceServer__ThreadParamInfo& operator=(IgnoranceCore__IgnoranceServer__ThreadParamInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IgnoranceCore__IgnoranceServer__ThreadParamInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_IsFruityDevice, put=__set_IsFruityDevice))  IsFruityDevice;

constexpr void __set_IsFruityDevice(bool value) ;

constexpr bool __get_IsFruityDevice() const;

 bool __declspec(property(get=__get_BindAllInterfaces, put=__set_BindAllInterfaces))  BindAllInterfaces;

constexpr void __set_BindAllInterfaces(bool value) ;

constexpr bool __get_BindAllInterfaces() const;

 int32_t __declspec(property(get=__get_Channels, put=__set_Channels))  Channels;

constexpr void __set_Channels(int32_t value) ;

constexpr int32_t __get_Channels() const;

 int32_t __declspec(property(get=__get_Peers, put=__set_Peers))  Peers;

constexpr void __set_Peers(int32_t value) ;

constexpr int32_t __get_Peers() const;

 int32_t __declspec(property(get=__get_PollTime, put=__set_PollTime))  PollTime;

constexpr void __set_PollTime(int32_t value) ;

constexpr int32_t __get_PollTime() const;

 int32_t __declspec(property(get=__get_Port, put=__set_Port))  Port;

constexpr void __set_Port(int32_t value) ;

constexpr int32_t __get_Port() const;

 int32_t __declspec(property(get=__get_PacketSizeLimit, put=__set_PacketSizeLimit))  PacketSizeLimit;

constexpr void __set_PacketSizeLimit(int32_t value) ;

constexpr int32_t __get_PacketSizeLimit() const;

 int32_t __declspec(property(get=__get_Verbosity, put=__set_Verbosity))  Verbosity;

constexpr void __set_Verbosity(int32_t value) ;

constexpr int32_t __get_Verbosity() const;

 ::StringW __declspec(property(get=__get_Address, put=__set_Address))  Address;

constexpr void __set_Address(::StringW value) ;

constexpr ::StringW __get_Address() const;

 bool __declspec(property(get=__get_UseSsl, put=__set_UseSsl))  UseSsl;

constexpr void __set_UseSsl(bool value) ;

constexpr bool __get_UseSsl() const;

 ::StringW __declspec(property(get=__get_CertificatePath, put=__set_CertificatePath))  CertificatePath;

constexpr void __set_CertificatePath(::StringW value) ;

constexpr ::StringW __get_CertificatePath() const;

 ::StringW __declspec(property(get=__get_Certificate, put=__set_Certificate))  Certificate;

constexpr void __set_Certificate(::StringW value) ;

constexpr ::StringW __get_Certificate() const;

 ::StringW __declspec(property(get=__get_PrivateKeyPath, put=__set_PrivateKeyPath))  PrivateKeyPath;

constexpr void __set_PrivateKeyPath(::StringW value) ;

constexpr ::StringW __get_PrivateKeyPath() const;

 ::StringW __declspec(property(get=__get_PrivateKey, put=__set_PrivateKey))  PrivateKey;

constexpr void __set_PrivateKey(::StringW value) ;

constexpr ::StringW __get_PrivateKey() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
// Type: IgnoranceCore::IgnoranceServer
namespace IgnoranceCore {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15281))
// CS Name: IgnoranceCore.IgnoranceServer
class CORDL_TYPE IgnoranceServer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ThreadParamInfo = IgnoranceCore::IgnoranceCore__IgnoranceServer__ThreadParamInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~IgnoranceServer() = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceServer", modifiers: " const&", def_value: None }]
constexpr IgnoranceServer(IgnoranceServer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceServer", modifiers: "&&", def_value: None }]
constexpr IgnoranceServer(IgnoranceServer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IgnoranceServer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IgnoranceServer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IgnoranceServer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IgnoranceServer& operator=(IgnoranceServer&& o) noexcept = default;
  constexpr IgnoranceServer& operator=(IgnoranceServer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_BindAddress, put=__set_BindAddress))  BindAddress;

constexpr void __set_BindAddress(::StringW value) ;

constexpr ::StringW __get_BindAddress() const;

 int32_t __declspec(property(get=__get_BindPort, put=__set_BindPort))  BindPort;

constexpr void __set_BindPort(int32_t value) ;

constexpr int32_t __get_BindPort() const;

 int32_t __declspec(property(get=__get_MaximumChannels, put=__set_MaximumChannels))  MaximumChannels;

constexpr void __set_MaximumChannels(int32_t value) ;

constexpr int32_t __get_MaximumChannels() const;

 int32_t __declspec(property(get=__get_MaximumPeers, put=__set_MaximumPeers))  MaximumPeers;

constexpr void __set_MaximumPeers(int32_t value) ;

constexpr int32_t __get_MaximumPeers() const;

 int32_t __declspec(property(get=__get_MaximumPacketSize, put=__set_MaximumPacketSize))  MaximumPacketSize;

constexpr void __set_MaximumPacketSize(int32_t value) ;

constexpr int32_t __get_MaximumPacketSize() const;

 int32_t __declspec(property(get=__get_PollTime, put=__set_PollTime))  PollTime;

constexpr void __set_PollTime(int32_t value) ;

constexpr int32_t __get_PollTime() const;

 int32_t __declspec(property(get=__get_Verbosity, put=__set_Verbosity))  Verbosity;

constexpr void __set_Verbosity(int32_t value) ;

constexpr int32_t __get_Verbosity() const;

 int32_t __declspec(property(get=__get_IncomingOutgoingBufferSize, put=__set_IncomingOutgoingBufferSize))  IncomingOutgoingBufferSize;

constexpr void __set_IncomingOutgoingBufferSize(int32_t value) ;

constexpr int32_t __get_IncomingOutgoingBufferSize() const;

 int32_t __declspec(property(get=__get_ConnectionEventBufferSize, put=__set_ConnectionEventBufferSize))  ConnectionEventBufferSize;

constexpr void __set_ConnectionEventBufferSize(int32_t value) ;

constexpr int32_t __get_ConnectionEventBufferSize() const;

 bool __declspec(property(get=__get_IsFruityDevice, put=__set_IsFruityDevice))  IsFruityDevice;

constexpr void __set_IsFruityDevice(bool value) ;

constexpr bool __get_IsFruityDevice() const;

 bool __declspec(property(get=__get_BindAllInterfaces, put=__set_BindAllInterfaces))  BindAllInterfaces;

constexpr void __set_BindAllInterfaces(bool value) ;

constexpr bool __get_BindAllInterfaces() const;

 bool __declspec(property(get=__get_UseSsl, put=__set_UseSsl))  UseSsl;

constexpr void __set_UseSsl(bool value) ;

constexpr bool __get_UseSsl() const;

 ::StringW __declspec(property(get=__get_CertificatePath, put=__set_CertificatePath))  CertificatePath;

constexpr void __set_CertificatePath(::StringW value) ;

constexpr ::StringW __get_CertificatePath() const;

 ::StringW __declspec(property(get=__get_Certificate, put=__set_Certificate))  Certificate;

constexpr void __set_Certificate(::StringW value) ;

constexpr ::StringW __get_Certificate() const;

 ::StringW __declspec(property(get=__get_PrivateKeyPath, put=__set_PrivateKeyPath))  PrivateKeyPath;

constexpr void __set_PrivateKeyPath(::StringW value) ;

constexpr ::StringW __get_PrivateKeyPath() const;

 ::StringW __declspec(property(get=__get_PrivateKey, put=__set_PrivateKey))  PrivateKey;

constexpr void __set_PrivateKey(::StringW value) ;

constexpr ::StringW __get_PrivateKey() const;

 bool __declspec(property(get=__get_CeaseOperation, put=__set_CeaseOperation))  CeaseOperation;

constexpr void __set_CeaseOperation(bool value) ;

constexpr bool __get_CeaseOperation() const;

 IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceIncomingPacket> __declspec(property(get=__get_Incoming, put=__set_Incoming))  Incoming;

constexpr void __set_Incoming(IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceIncomingPacket> value) ;

constexpr IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceIncomingPacket> __get_Incoming() const;

 IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceOutgoingPacket> __declspec(property(get=__get_Outgoing, put=__set_Outgoing))  Outgoing;

constexpr void __set_Outgoing(IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceOutgoingPacket> value) ;

constexpr IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceOutgoingPacket> __get_Outgoing() const;

 IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceCommandPacket> __declspec(property(get=__get_Commands, put=__set_Commands))  Commands;

constexpr void __set_Commands(IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceCommandPacket> value) ;

constexpr IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceCommandPacket> __get_Commands() const;

 IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceConnectionEvent> __declspec(property(get=__get_ConnectionEvents, put=__set_ConnectionEvents))  ConnectionEvents;

constexpr void __set_ConnectionEvents(IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceConnectionEvent> value) ;

constexpr IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceConnectionEvent> __get_ConnectionEvents() const;

 IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceConnectionEvent> __declspec(property(get=__get_DisconnectionEvents, put=__set_DisconnectionEvents))  DisconnectionEvents;

constexpr void __set_DisconnectionEvents(IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceConnectionEvent> value) ;

constexpr IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceConnectionEvent> __get_DisconnectionEvents() const;

 IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceServerStats> __declspec(property(get=__get_StatusUpdates, put=__set_StatusUpdates))  StatusUpdates;

constexpr void __set_StatusUpdates(IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceServerStats> value) ;

constexpr IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceServerStats> __get_StatusUpdates() const;

 IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceServerStats> __declspec(property(get=__get_RecycledServerStatBlocks, put=__set_RecycledServerStatBlocks))  RecycledServerStatBlocks;

constexpr void __set_RecycledServerStatBlocks(IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceServerStats> value) ;

constexpr IgnoranceThirdparty::RingBuffer_1<IgnoranceCore::IgnoranceServerStats> __get_RecycledServerStatBlocks() const;

 System::Threading::Thread __declspec(property(get=__get_WorkerThread, put=__set_WorkerThread))  WorkerThread;

constexpr void __set_WorkerThread(System::Threading::Thread value) ;

constexpr System::Threading::Thread __get_WorkerThread() const;


// Properties

 bool __declspec(property(get=get_IsAlive))  IsAlive;


// Methods

/// @brief Method get_IsAlive addr 0x2082f6c size 0x14 virtual false final false
 bool get_IsAlive() ;

/// @brief Method Start addr 0x2082f80 size 0x3b8 virtual false final false
 void Start() ;

/// @brief Method Stop addr 0x208357c size 0x9c virtual false final false
 void Stop() ;

/// @brief Method ThreadWorker addr 0x2083618 size 0x1180 virtual false final false
 void ThreadWorker(::bs_hook::Il2CppWrapperType parameters) ;

/// @brief Method SetupRingBuffersIfNull addr 0x2083338 size 0x244 virtual false final false
 void SetupRingBuffersIfNull() ;

// Ctor Parameters []
explicit IgnoranceServer() ;

/// @brief Method .ctor addr 0x2084798 size 0xbc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceCore
NEED_NO_BOX(IgnoranceCore::IgnoranceServer);
DEFINE_IL2CPP_ARG_TYPE(IgnoranceCore::IgnoranceServer, "IgnoranceCore", "IgnoranceServer");
DEFINE_IL2CPP_ARG_TYPE(IgnoranceCore::IgnoranceCore__IgnoranceServer__ThreadParamInfo, "IgnoranceCore", "IgnoranceServer/ThreadParamInfo");
