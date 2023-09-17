#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
namespace IgnoranceThirdparty {
template<typename T>
class RingBuffer_1;
}
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
namespace IgnoranceCore {
struct IgnoranceOutgoingPacket;
}
namespace IgnoranceCore {
struct IgnoranceConnectionEvent;
}
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace IgnoranceCore {
class IgnoranceClient;
}
namespace IgnoranceCore {
struct ____IgnoranceCore__IgnoranceClient__ThreadParamInfo;
}
// Type: ::ThreadParamInfo
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15278))
// CS Name: IgnoranceCore.IgnoranceClient::ThreadParamInfo
struct CORDL_TYPE ____IgnoranceCore__IgnoranceClient__ThreadParamInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PollTime", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Port", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PacketSizeLimit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Verbosity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Address", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "UseSsl", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ValidateCertificate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "RootCertificatePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "RootCertificate", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ____IgnoranceCore__IgnoranceClient__ThreadParamInfo(int32_t Channels, int32_t PollTime, int32_t Port, int32_t PacketSizeLimit, int32_t Verbosity, ::StringW Address, bool UseSsl, bool ValidateCertificate, ::StringW RootCertificatePath, ::StringW RootCertificate) noexcept;


                    constexpr ____IgnoranceCore__IgnoranceClient__ThreadParamInfo(____IgnoranceCore__IgnoranceClient__ThreadParamInfo const&) = default;
                    constexpr ____IgnoranceCore__IgnoranceClient__ThreadParamInfo(____IgnoranceCore__IgnoranceClient__ThreadParamInfo&&) = default;
                    constexpr ____IgnoranceCore__IgnoranceClient__ThreadParamInfo& operator=(____IgnoranceCore__IgnoranceClient__ThreadParamInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____IgnoranceCore__IgnoranceClient__ThreadParamInfo& operator=(____IgnoranceCore__IgnoranceClient__ThreadParamInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____IgnoranceCore__IgnoranceClient__ThreadParamInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Channels, put=__set_Channels))  Channels;

constexpr void __set_Channels(int32_t value) ;

constexpr int32_t __get_Channels() const;

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

 bool __declspec(property(get=__get_ValidateCertificate, put=__set_ValidateCertificate))  ValidateCertificate;

constexpr void __set_ValidateCertificate(bool value) ;

constexpr bool __get_ValidateCertificate() const;

 ::StringW __declspec(property(get=__get_RootCertificatePath, put=__set_RootCertificatePath))  RootCertificatePath;

constexpr void __set_RootCertificatePath(::StringW value) ;

constexpr ::StringW __get_RootCertificatePath() const;

 ::StringW __declspec(property(get=__get_RootCertificate, put=__set_RootCertificate))  RootCertificate;

constexpr void __set_RootCertificate(::StringW value) ;

constexpr ::StringW __get_RootCertificate() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
// Type: IgnoranceCore::IgnoranceClient
namespace IgnoranceCore {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15279))
// CS Name: IgnoranceCore.IgnoranceClient
class CORDL_TYPE IgnoranceClient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ThreadParamInfo = ::IgnoranceCore::____IgnoranceCore__IgnoranceClient__ThreadParamInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~IgnoranceClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceClient", modifiers: " const&", def_value: None }]
constexpr IgnoranceClient(IgnoranceClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoranceClient", modifiers: "&&", def_value: None }]
constexpr IgnoranceClient(IgnoranceClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IgnoranceClient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IgnoranceClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IgnoranceClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IgnoranceClient& operator=(IgnoranceClient&& o) noexcept = default;
  constexpr IgnoranceClient& operator=(IgnoranceClient const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_ConnectAddress, put=__set_ConnectAddress))  ConnectAddress;

constexpr void __set_ConnectAddress(::StringW value) ;

constexpr ::StringW __get_ConnectAddress() const;

 int32_t __declspec(property(get=__get_ConnectPort, put=__set_ConnectPort))  ConnectPort;

constexpr void __set_ConnectPort(int32_t value) ;

constexpr int32_t __get_ConnectPort() const;

 int32_t __declspec(property(get=__get_ExpectedChannels, put=__set_ExpectedChannels))  ExpectedChannels;

constexpr void __set_ExpectedChannels(int32_t value) ;

constexpr int32_t __get_ExpectedChannels() const;

 int32_t __declspec(property(get=__get_PollTime, put=__set_PollTime))  PollTime;

constexpr void __set_PollTime(int32_t value) ;

constexpr int32_t __get_PollTime() const;

 int32_t __declspec(property(get=__get_MaximumPacketSize, put=__set_MaximumPacketSize))  MaximumPacketSize;

constexpr void __set_MaximumPacketSize(int32_t value) ;

constexpr int32_t __get_MaximumPacketSize() const;

 int32_t __declspec(property(get=__get_Verbosity, put=__set_Verbosity))  Verbosity;

constexpr void __set_Verbosity(int32_t value) ;

constexpr int32_t __get_Verbosity() const;

 int32_t __declspec(property(get=__get_IncomingOutgoingBufferSize, put=__set_IncomingOutgoingBufferSize))  IncomingOutgoingBufferSize;

constexpr void __set_IncomingOutgoingBufferSize(int32_t value) ;

constexpr int32_t __get_IncomingOutgoingBufferSize() const;

 int32_t __declspec(property(get=__get_ConnectionEventBufferSize, put=__set_ConnectionEventBufferSize))  ConnectionEventBufferSize;

constexpr void __set_ConnectionEventBufferSize(int32_t value) ;

constexpr int32_t __get_ConnectionEventBufferSize() const;

 bool __declspec(property(get=__get_UseSsl, put=__set_UseSsl))  UseSsl;

constexpr void __set_UseSsl(bool value) ;

constexpr bool __get_UseSsl() const;

 bool __declspec(property(get=__get_ValidateCertificate, put=__set_ValidateCertificate))  ValidateCertificate;

constexpr void __set_ValidateCertificate(bool value) ;

constexpr bool __get_ValidateCertificate() const;

 ::StringW __declspec(property(get=__get_RootCertificatePath, put=__set_RootCertificatePath))  RootCertificatePath;

constexpr void __set_RootCertificatePath(::StringW value) ;

constexpr ::StringW __get_RootCertificatePath() const;

 ::StringW __declspec(property(get=__get_RootCertificate, put=__set_RootCertificate))  RootCertificate;

constexpr void __set_RootCertificate(::StringW value) ;

constexpr ::StringW __get_RootCertificate() const;

 ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket> __declspec(property(get=__get_Incoming, put=__set_Incoming))  Incoming;

constexpr void __set_Incoming(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket> value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceIncomingPacket> __get_Incoming() const;

 ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket> __declspec(property(get=__get_Outgoing, put=__set_Outgoing))  Outgoing;

constexpr void __set_Outgoing(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket> value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceOutgoingPacket> __get_Outgoing() const;

 ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket> __declspec(property(get=__get_Commands, put=__set_Commands))  Commands;

constexpr void __set_Commands(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket> value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceCommandPacket> __get_Commands() const;

 ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent> __declspec(property(get=__get_ConnectionEvents, put=__set_ConnectionEvents))  ConnectionEvents;

constexpr void __set_ConnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent> value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent> __get_ConnectionEvents() const;

 ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent> __declspec(property(get=__get_DisconnectionEvents, put=__set_DisconnectionEvents))  DisconnectionEvents;

constexpr void __set_DisconnectionEvents(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent> value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceConnectionEvent> __get_DisconnectionEvents() const;

 ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats> __declspec(property(get=__get_StatusUpdates, put=__set_StatusUpdates))  StatusUpdates;

constexpr void __set_StatusUpdates(::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats> value) ;

constexpr ::IgnoranceThirdparty::RingBuffer_1<::IgnoranceCore::IgnoranceClientStats> __get_StatusUpdates() const;

 bool __declspec(property(get=__get_CeaseOperation, put=__set_CeaseOperation))  CeaseOperation;

constexpr void __set_CeaseOperation(bool value) ;

constexpr bool __get_CeaseOperation() const;

 ::System::Threading::Thread __declspec(property(get=__get_WorkerThread, put=__set_WorkerThread))  WorkerThread;

constexpr void __set_WorkerThread(::System::Threading::Thread value) ;

constexpr ::System::Threading::Thread __get_WorkerThread() const;


// Properties

 bool __declspec(property(get=get_IsAlive))  IsAlive;


// Methods

/// @brief Method get_IsAlive addr 0x2081a0c size 0x14 virtual false final false
 bool get_IsAlive() ;

/// @brief Method Start addr 0x2081a20 size 0x370 virtual false final false
 void Start() ;

/// @brief Method Stop addr 0x2081fd4 size 0x90 virtual false final false
 void Stop() ;

/// @brief Method ThreadWorker addr 0x2082064 size 0xe90 virtual false final false
 void ThreadWorker(::bs_hook::Il2CppWrapperType parameters) ;

/// @brief Method SetupRingBuffersIfNull addr 0x2081d90 size 0x244 virtual false final false
 void SetupRingBuffersIfNull() ;

// Ctor Parameters []
explicit IgnoranceClient() ;

/// @brief Method .ctor addr 0x2082ef4 size 0x78 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IgnoranceCore
} // end anonymous namespace
NEED_NO_BOX(::IgnoranceCore::IgnoranceClient);
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceClient, "IgnoranceCore", "IgnoranceClient");
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::____IgnoranceCore__IgnoranceClient__ThreadParamInfo, "IgnoranceCore", "IgnoranceClient/ThreadParamInfo");
