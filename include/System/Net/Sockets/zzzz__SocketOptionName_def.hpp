#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::Sockets {
struct SocketOptionName;
}
// Type: System.Net.Sockets::SocketOptionName
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8201))
// CS Name: System.Net.Sockets.SocketOptionName
struct CORDL_TYPE SocketOptionName : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketOptionName(int32_t value__) noexcept;


                    constexpr SocketOptionName(SocketOptionName const&) = default;
                    constexpr SocketOptionName(SocketOptionName&&) = default;
                    constexpr SocketOptionName& operator=(SocketOptionName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SocketOptionName& operator=(SocketOptionName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SocketOptionName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SocketOptionName_Unwrapped : int32_t {
__Debug = 1,
__AcceptConnection = 2,
__ReuseAddress = 4,
__KeepAlive = 8,
__DontRoute = 16,
__Broadcast = 32,
__UseLoopback = 64,
__Linger = 128,
__OutOfBandInline = 256,
__DontLinger = -129,
__ExclusiveAddressUse = -5,
__SendBuffer = 4097,
__ReceiveBuffer = 4098,
__SendLowWater = 4099,
__ReceiveLowWater = 4100,
__SendTimeout = 4101,
__ReceiveTimeout = 4102,
__Error = 4103,
__Type = 4104,
__ReuseUnicastPort = 12295,
__MaxConnections = 2147483647,
__IPOptions = 1,
__HeaderIncluded = 2,
__TypeOfService = 3,
__IpTimeToLive = 4,
__MulticastInterface = 9,
__MulticastTimeToLive = 10,
__MulticastLoopback = 11,
__AddMembership = 12,
__DropMembership = 13,
__DontFragment = 14,
__AddSourceMembership = 15,
__DropSourceMembership = 16,
__BlockSource = 17,
__UnblockSource = 18,
__PacketInformation = 19,
__HopLimit = 21,
__IPProtectionLevel = 23,
__IPv6Only = 27,
__NoDelay = 1,
__BsdUrgent = 2,
__Expedited = 2,
__NoChecksum = 1,
__ChecksumCoverage = 20,
__UpdateAcceptContext = 28683,
__UpdateConnectContext = 28688,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketOptionName_Unwrapped () const noexcept {
return std::bit_cast<__SocketOptionName_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Debug offset 0
static ::System::Net::Sockets::SocketOptionName const Debug;

/// @brief Field AcceptConnection offset 0
static ::System::Net::Sockets::SocketOptionName const AcceptConnection;

/// @brief Field ReuseAddress offset 0
static ::System::Net::Sockets::SocketOptionName const ReuseAddress;

/// @brief Field KeepAlive offset 0
static ::System::Net::Sockets::SocketOptionName const KeepAlive;

/// @brief Field DontRoute offset 0
static ::System::Net::Sockets::SocketOptionName const DontRoute;

/// @brief Field Broadcast offset 0
static ::System::Net::Sockets::SocketOptionName const Broadcast;

/// @brief Field UseLoopback offset 0
static ::System::Net::Sockets::SocketOptionName const UseLoopback;

/// @brief Field Linger offset 0
static ::System::Net::Sockets::SocketOptionName const Linger;

/// @brief Field OutOfBandInline offset 0
static ::System::Net::Sockets::SocketOptionName const OutOfBandInline;

/// @brief Field DontLinger offset 0
static ::System::Net::Sockets::SocketOptionName const DontLinger;

/// @brief Field ExclusiveAddressUse offset 0
static ::System::Net::Sockets::SocketOptionName const ExclusiveAddressUse;

/// @brief Field SendBuffer offset 0
static ::System::Net::Sockets::SocketOptionName const SendBuffer;

/// @brief Field ReceiveBuffer offset 0
static ::System::Net::Sockets::SocketOptionName const ReceiveBuffer;

/// @brief Field SendLowWater offset 0
static ::System::Net::Sockets::SocketOptionName const SendLowWater;

/// @brief Field ReceiveLowWater offset 0
static ::System::Net::Sockets::SocketOptionName const ReceiveLowWater;

/// @brief Field SendTimeout offset 0
static ::System::Net::Sockets::SocketOptionName const SendTimeout;

/// @brief Field ReceiveTimeout offset 0
static ::System::Net::Sockets::SocketOptionName const ReceiveTimeout;

/// @brief Field Error offset 0
static ::System::Net::Sockets::SocketOptionName const Error;

/// @brief Field Type offset 0
static ::System::Net::Sockets::SocketOptionName const Type;

/// @brief Field ReuseUnicastPort offset 0
static ::System::Net::Sockets::SocketOptionName const ReuseUnicastPort;

/// @brief Field MaxConnections offset 0
static ::System::Net::Sockets::SocketOptionName const MaxConnections;

/// @brief Field IPOptions offset 0
static ::System::Net::Sockets::SocketOptionName const IPOptions;

/// @brief Field HeaderIncluded offset 0
static ::System::Net::Sockets::SocketOptionName const HeaderIncluded;

/// @brief Field TypeOfService offset 0
static ::System::Net::Sockets::SocketOptionName const TypeOfService;

/// @brief Field IpTimeToLive offset 0
static ::System::Net::Sockets::SocketOptionName const IpTimeToLive;

/// @brief Field MulticastInterface offset 0
static ::System::Net::Sockets::SocketOptionName const MulticastInterface;

/// @brief Field MulticastTimeToLive offset 0
static ::System::Net::Sockets::SocketOptionName const MulticastTimeToLive;

/// @brief Field MulticastLoopback offset 0
static ::System::Net::Sockets::SocketOptionName const MulticastLoopback;

/// @brief Field AddMembership offset 0
static ::System::Net::Sockets::SocketOptionName const AddMembership;

/// @brief Field DropMembership offset 0
static ::System::Net::Sockets::SocketOptionName const DropMembership;

/// @brief Field DontFragment offset 0
static ::System::Net::Sockets::SocketOptionName const DontFragment;

/// @brief Field AddSourceMembership offset 0
static ::System::Net::Sockets::SocketOptionName const AddSourceMembership;

/// @brief Field DropSourceMembership offset 0
static ::System::Net::Sockets::SocketOptionName const DropSourceMembership;

/// @brief Field BlockSource offset 0
static ::System::Net::Sockets::SocketOptionName const BlockSource;

/// @brief Field UnblockSource offset 0
static ::System::Net::Sockets::SocketOptionName const UnblockSource;

/// @brief Field PacketInformation offset 0
static ::System::Net::Sockets::SocketOptionName const PacketInformation;

/// @brief Field HopLimit offset 0
static ::System::Net::Sockets::SocketOptionName const HopLimit;

/// @brief Field IPProtectionLevel offset 0
static ::System::Net::Sockets::SocketOptionName const IPProtectionLevel;

/// @brief Field IPv6Only offset 0
static ::System::Net::Sockets::SocketOptionName const IPv6Only;

/// @brief Field NoDelay offset 0
static ::System::Net::Sockets::SocketOptionName const NoDelay;

/// @brief Field BsdUrgent offset 0
static ::System::Net::Sockets::SocketOptionName const BsdUrgent;

/// @brief Field Expedited offset 0
static ::System::Net::Sockets::SocketOptionName const Expedited;

/// @brief Field NoChecksum offset 0
static ::System::Net::Sockets::SocketOptionName const NoChecksum;

/// @brief Field ChecksumCoverage offset 0
static ::System::Net::Sockets::SocketOptionName const ChecksumCoverage;

/// @brief Field UpdateAcceptContext offset 0
static ::System::Net::Sockets::SocketOptionName const UpdateAcceptContext;

/// @brief Field UpdateConnectContext offset 0
static ::System::Net::Sockets::SocketOptionName const UpdateConnectContext;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOptionName, "System.Net.Sockets", "SocketOptionName");
