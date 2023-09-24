#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct AddressFamily;
}
// Type: System.Net.Sockets::AddressFamily
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8188))
// CS Name: System.Net.Sockets.AddressFamily
struct CORDL_TYPE AddressFamily : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddressFamily(int32_t value__) noexcept;


                    constexpr AddressFamily(AddressFamily const&) = default;
                    constexpr AddressFamily(AddressFamily&&) = default;
                    constexpr AddressFamily& operator=(AddressFamily const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AddressFamily& operator=(AddressFamily&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AddressFamily(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AddressFamily_Unwrapped : int32_t {
__Unknown = -1,
__Unspecified = 0,
__Unix = 1,
__InterNetwork = 2,
__ImpLink = 3,
__Pup = 4,
__Chaos = 5,
__NS = 6,
__Ipx = 6,
__Iso = 7,
__Osi = 7,
__Ecma = 8,
__DataKit = 9,
__Ccitt = 10,
__Sna = 11,
__DecNet = 12,
__DataLink = 13,
__Lat = 14,
__HyperChannel = 15,
__AppleTalk = 16,
__NetBios = 17,
__VoiceView = 18,
__FireFox = 19,
__Banyan = 21,
__Atm = 22,
__InterNetworkV6 = 23,
__Cluster = 24,
__Ieee12844 = 25,
__Irda = 26,
__NetworkDesigners = 28,
__Max = 29,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AddressFamily_Unwrapped () const noexcept {
return std::bit_cast<__AddressFamily_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static System::Net::Sockets::AddressFamily const Unknown;

/// @brief Field Unspecified offset 0
static System::Net::Sockets::AddressFamily const Unspecified;

/// @brief Field Unix offset 0
static System::Net::Sockets::AddressFamily const Unix;

/// @brief Field InterNetwork offset 0
static System::Net::Sockets::AddressFamily const InterNetwork;

/// @brief Field ImpLink offset 0
static System::Net::Sockets::AddressFamily const ImpLink;

/// @brief Field Pup offset 0
static System::Net::Sockets::AddressFamily const Pup;

/// @brief Field Chaos offset 0
static System::Net::Sockets::AddressFamily const Chaos;

/// @brief Field NS offset 0
static System::Net::Sockets::AddressFamily const NS;

/// @brief Field Ipx offset 0
static System::Net::Sockets::AddressFamily const Ipx;

/// @brief Field Iso offset 0
static System::Net::Sockets::AddressFamily const Iso;

/// @brief Field Osi offset 0
static System::Net::Sockets::AddressFamily const Osi;

/// @brief Field Ecma offset 0
static System::Net::Sockets::AddressFamily const Ecma;

/// @brief Field DataKit offset 0
static System::Net::Sockets::AddressFamily const DataKit;

/// @brief Field Ccitt offset 0
static System::Net::Sockets::AddressFamily const Ccitt;

/// @brief Field Sna offset 0
static System::Net::Sockets::AddressFamily const Sna;

/// @brief Field DecNet offset 0
static System::Net::Sockets::AddressFamily const DecNet;

/// @brief Field DataLink offset 0
static System::Net::Sockets::AddressFamily const DataLink;

/// @brief Field Lat offset 0
static System::Net::Sockets::AddressFamily const Lat;

/// @brief Field HyperChannel offset 0
static System::Net::Sockets::AddressFamily const HyperChannel;

/// @brief Field AppleTalk offset 0
static System::Net::Sockets::AddressFamily const AppleTalk;

/// @brief Field NetBios offset 0
static System::Net::Sockets::AddressFamily const NetBios;

/// @brief Field VoiceView offset 0
static System::Net::Sockets::AddressFamily const VoiceView;

/// @brief Field FireFox offset 0
static System::Net::Sockets::AddressFamily const FireFox;

/// @brief Field Banyan offset 0
static System::Net::Sockets::AddressFamily const Banyan;

/// @brief Field Atm offset 0
static System::Net::Sockets::AddressFamily const Atm;

/// @brief Field InterNetworkV6 offset 0
static System::Net::Sockets::AddressFamily const InterNetworkV6;

/// @brief Field Cluster offset 0
static System::Net::Sockets::AddressFamily const Cluster;

/// @brief Field Ieee12844 offset 0
static System::Net::Sockets::AddressFamily const Ieee12844;

/// @brief Field Irda offset 0
static System::Net::Sockets::AddressFamily const Irda;

/// @brief Field NetworkDesigners offset 0
static System::Net::Sockets::AddressFamily const NetworkDesigners;

/// @brief Field Max offset 0
static System::Net::Sockets::AddressFamily const Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::AddressFamily, "System.Net.Sockets", "AddressFamily");
