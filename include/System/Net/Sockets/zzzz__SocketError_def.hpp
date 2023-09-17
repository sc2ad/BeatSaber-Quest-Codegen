#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::Sockets {
struct SocketError;
}
// Type: System.Net.Sockets::SocketError
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8198))
// CS Name: System.Net.Sockets.SocketError
struct CORDL_TYPE SocketError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketError(int32_t value__) noexcept;


                    constexpr SocketError(SocketError const&) = default;
                    constexpr SocketError(SocketError&&) = default;
                    constexpr SocketError& operator=(SocketError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SocketError& operator=(SocketError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SocketError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SocketError_Unwrapped : int32_t {
__Success = 0,
__SocketError = -1,
__Interrupted = 10004,
__AccessDenied = 10013,
__Fault = 10014,
__InvalidArgument = 10022,
__TooManyOpenSockets = 10024,
__WouldBlock = 10035,
__InProgress = 10036,
__AlreadyInProgress = 10037,
__NotSocket = 10038,
__DestinationAddressRequired = 10039,
__MessageSize = 10040,
__ProtocolType = 10041,
__ProtocolOption = 10042,
__ProtocolNotSupported = 10043,
__SocketNotSupported = 10044,
__OperationNotSupported = 10045,
__ProtocolFamilyNotSupported = 10046,
__AddressFamilyNotSupported = 10047,
__AddressAlreadyInUse = 10048,
__AddressNotAvailable = 10049,
__NetworkDown = 10050,
__NetworkUnreachable = 10051,
__NetworkReset = 10052,
__ConnectionAborted = 10053,
__ConnectionReset = 10054,
__NoBufferSpaceAvailable = 10055,
__IsConnected = 10056,
__NotConnected = 10057,
__Shutdown = 10058,
__TimedOut = 10060,
__ConnectionRefused = 10061,
__HostDown = 10064,
__HostUnreachable = 10065,
__ProcessLimit = 10067,
__SystemNotReady = 10091,
__VersionNotSupported = 10092,
__NotInitialized = 10093,
__Disconnecting = 10101,
__TypeNotFound = 10109,
__HostNotFound = 11001,
__TryAgain = 11002,
__NoRecovery = 11003,
__NoData = 11004,
__IOPending = 997,
__OperationAborted = 995,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketError_Unwrapped () const noexcept {
return std::bit_cast<__SocketError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static ::System::Net::Sockets::SocketError const Success;

/// @brief Field SocketError offset 0
static ::System::Net::Sockets::SocketError const SocketError;

/// @brief Field Interrupted offset 0
static ::System::Net::Sockets::SocketError const Interrupted;

/// @brief Field AccessDenied offset 0
static ::System::Net::Sockets::SocketError const AccessDenied;

/// @brief Field Fault offset 0
static ::System::Net::Sockets::SocketError const Fault;

/// @brief Field InvalidArgument offset 0
static ::System::Net::Sockets::SocketError const InvalidArgument;

/// @brief Field TooManyOpenSockets offset 0
static ::System::Net::Sockets::SocketError const TooManyOpenSockets;

/// @brief Field WouldBlock offset 0
static ::System::Net::Sockets::SocketError const WouldBlock;

/// @brief Field InProgress offset 0
static ::System::Net::Sockets::SocketError const InProgress;

/// @brief Field AlreadyInProgress offset 0
static ::System::Net::Sockets::SocketError const AlreadyInProgress;

/// @brief Field NotSocket offset 0
static ::System::Net::Sockets::SocketError const NotSocket;

/// @brief Field DestinationAddressRequired offset 0
static ::System::Net::Sockets::SocketError const DestinationAddressRequired;

/// @brief Field MessageSize offset 0
static ::System::Net::Sockets::SocketError const MessageSize;

/// @brief Field ProtocolType offset 0
static ::System::Net::Sockets::SocketError const ProtocolType;

/// @brief Field ProtocolOption offset 0
static ::System::Net::Sockets::SocketError const ProtocolOption;

/// @brief Field ProtocolNotSupported offset 0
static ::System::Net::Sockets::SocketError const ProtocolNotSupported;

/// @brief Field SocketNotSupported offset 0
static ::System::Net::Sockets::SocketError const SocketNotSupported;

/// @brief Field OperationNotSupported offset 0
static ::System::Net::Sockets::SocketError const OperationNotSupported;

/// @brief Field ProtocolFamilyNotSupported offset 0
static ::System::Net::Sockets::SocketError const ProtocolFamilyNotSupported;

/// @brief Field AddressFamilyNotSupported offset 0
static ::System::Net::Sockets::SocketError const AddressFamilyNotSupported;

/// @brief Field AddressAlreadyInUse offset 0
static ::System::Net::Sockets::SocketError const AddressAlreadyInUse;

/// @brief Field AddressNotAvailable offset 0
static ::System::Net::Sockets::SocketError const AddressNotAvailable;

/// @brief Field NetworkDown offset 0
static ::System::Net::Sockets::SocketError const NetworkDown;

/// @brief Field NetworkUnreachable offset 0
static ::System::Net::Sockets::SocketError const NetworkUnreachable;

/// @brief Field NetworkReset offset 0
static ::System::Net::Sockets::SocketError const NetworkReset;

/// @brief Field ConnectionAborted offset 0
static ::System::Net::Sockets::SocketError const ConnectionAborted;

/// @brief Field ConnectionReset offset 0
static ::System::Net::Sockets::SocketError const ConnectionReset;

/// @brief Field NoBufferSpaceAvailable offset 0
static ::System::Net::Sockets::SocketError const NoBufferSpaceAvailable;

/// @brief Field IsConnected offset 0
static ::System::Net::Sockets::SocketError const IsConnected;

/// @brief Field NotConnected offset 0
static ::System::Net::Sockets::SocketError const NotConnected;

/// @brief Field Shutdown offset 0
static ::System::Net::Sockets::SocketError const Shutdown;

/// @brief Field TimedOut offset 0
static ::System::Net::Sockets::SocketError const TimedOut;

/// @brief Field ConnectionRefused offset 0
static ::System::Net::Sockets::SocketError const ConnectionRefused;

/// @brief Field HostDown offset 0
static ::System::Net::Sockets::SocketError const HostDown;

/// @brief Field HostUnreachable offset 0
static ::System::Net::Sockets::SocketError const HostUnreachable;

/// @brief Field ProcessLimit offset 0
static ::System::Net::Sockets::SocketError const ProcessLimit;

/// @brief Field SystemNotReady offset 0
static ::System::Net::Sockets::SocketError const SystemNotReady;

/// @brief Field VersionNotSupported offset 0
static ::System::Net::Sockets::SocketError const VersionNotSupported;

/// @brief Field NotInitialized offset 0
static ::System::Net::Sockets::SocketError const NotInitialized;

/// @brief Field Disconnecting offset 0
static ::System::Net::Sockets::SocketError const Disconnecting;

/// @brief Field TypeNotFound offset 0
static ::System::Net::Sockets::SocketError const TypeNotFound;

/// @brief Field HostNotFound offset 0
static ::System::Net::Sockets::SocketError const HostNotFound;

/// @brief Field TryAgain offset 0
static ::System::Net::Sockets::SocketError const TryAgain;

/// @brief Field NoRecovery offset 0
static ::System::Net::Sockets::SocketError const NoRecovery;

/// @brief Field NoData offset 0
static ::System::Net::Sockets::SocketError const NoData;

/// @brief Field IOPending offset 0
static ::System::Net::Sockets::SocketError const IOPending;

/// @brief Field OperationAborted offset 0
static ::System::Net::Sockets::SocketError const OperationAborted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketError, "System.Net.Sockets", "SocketError");
