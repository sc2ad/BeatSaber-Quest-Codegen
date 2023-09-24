#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct ProtocolType;
}
// Type: System.Net.Sockets::ProtocolType
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8194))
// CS Name: System.Net.Sockets.ProtocolType
struct CORDL_TYPE ProtocolType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ProtocolType(int32_t value__) noexcept;


                    constexpr ProtocolType(ProtocolType const&) = default;
                    constexpr ProtocolType(ProtocolType&&) = default;
                    constexpr ProtocolType& operator=(ProtocolType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ProtocolType& operator=(ProtocolType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ProtocolType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ProtocolType_Unwrapped : int32_t {
__IP = 0,
__IPv6HopByHopOptions = 0,
__Icmp = 1,
__Igmp = 2,
__Ggp = 3,
__IPv4 = 4,
__Tcp = 6,
__Pup = 12,
__Udp = 17,
__Idp = 22,
__IPv6 = 41,
__IPv6RoutingHeader = 43,
__IPv6FragmentHeader = 44,
__IPSecEncapsulatingSecurityPayload = 50,
__IPSecAuthenticationHeader = 51,
__IcmpV6 = 58,
__IPv6NoNextHeader = 59,
__IPv6DestinationOptions = 60,
__ND = 77,
__Raw = 255,
__Unspecified = 0,
__Ipx = 1000,
__Spx = 1256,
__SpxII = 1257,
__Unknown = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProtocolType_Unwrapped () const noexcept {
return std::bit_cast<__ProtocolType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IP offset 0
static System::Net::Sockets::ProtocolType const IP;

/// @brief Field IPv6HopByHopOptions offset 0
static System::Net::Sockets::ProtocolType const IPv6HopByHopOptions;

/// @brief Field Icmp offset 0
static System::Net::Sockets::ProtocolType const Icmp;

/// @brief Field Igmp offset 0
static System::Net::Sockets::ProtocolType const Igmp;

/// @brief Field Ggp offset 0
static System::Net::Sockets::ProtocolType const Ggp;

/// @brief Field IPv4 offset 0
static System::Net::Sockets::ProtocolType const IPv4;

/// @brief Field Tcp offset 0
static System::Net::Sockets::ProtocolType const Tcp;

/// @brief Field Pup offset 0
static System::Net::Sockets::ProtocolType const Pup;

/// @brief Field Udp offset 0
static System::Net::Sockets::ProtocolType const Udp;

/// @brief Field Idp offset 0
static System::Net::Sockets::ProtocolType const Idp;

/// @brief Field IPv6 offset 0
static System::Net::Sockets::ProtocolType const IPv6;

/// @brief Field IPv6RoutingHeader offset 0
static System::Net::Sockets::ProtocolType const IPv6RoutingHeader;

/// @brief Field IPv6FragmentHeader offset 0
static System::Net::Sockets::ProtocolType const IPv6FragmentHeader;

/// @brief Field IPSecEncapsulatingSecurityPayload offset 0
static System::Net::Sockets::ProtocolType const IPSecEncapsulatingSecurityPayload;

/// @brief Field IPSecAuthenticationHeader offset 0
static System::Net::Sockets::ProtocolType const IPSecAuthenticationHeader;

/// @brief Field IcmpV6 offset 0
static System::Net::Sockets::ProtocolType const IcmpV6;

/// @brief Field IPv6NoNextHeader offset 0
static System::Net::Sockets::ProtocolType const IPv6NoNextHeader;

/// @brief Field IPv6DestinationOptions offset 0
static System::Net::Sockets::ProtocolType const IPv6DestinationOptions;

/// @brief Field ND offset 0
static System::Net::Sockets::ProtocolType const ND;

/// @brief Field Raw offset 0
static System::Net::Sockets::ProtocolType const Raw;

/// @brief Field Unspecified offset 0
static System::Net::Sockets::ProtocolType const Unspecified;

/// @brief Field Ipx offset 0
static System::Net::Sockets::ProtocolType const Ipx;

/// @brief Field Spx offset 0
static System::Net::Sockets::ProtocolType const Spx;

/// @brief Field SpxII offset 0
static System::Net::Sockets::ProtocolType const SpxII;

/// @brief Field Unknown offset 0
static System::Net::Sockets::ProtocolType const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::ProtocolType, "System.Net.Sockets", "ProtocolType");
