#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct IOControlCode;
}
// Type: System.Net.Sockets::IOControlCode
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8189))
// CS Name: System.Net.Sockets.IOControlCode
struct CORDL_TYPE IOControlCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
constexpr IOControlCode(int64_t value__) noexcept;


                    constexpr IOControlCode(IOControlCode const&) = default;
                    constexpr IOControlCode(IOControlCode&&) = default;
                    constexpr IOControlCode& operator=(IOControlCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IOControlCode& operator=(IOControlCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IOControlCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __IOControlCode_Unwrapped : int64_t {
__AsyncIO = 2147772029,
__NonBlockingIO = 2147772030,
__DataToRead = 1074030207,
__OobDataRead = 1074033415,
__AssociateHandle = 2281701377,
__EnableCircularQueuing = 671088642,
__Flush = 671088644,
__GetBroadcastAddress = 1207959557,
__GetExtensionFunctionPointer = 3355443206,
__GetQos = 3355443207,
__GetGroupQos = 3355443208,
__MultipointLoopback = 2281701385,
__MulticastScope = 2281701386,
__SetQos = 2281701387,
__SetGroupQos = 2281701388,
__TranslateHandle = 3355443213,
__RoutingInterfaceQuery = 3355443220,
__RoutingInterfaceChange = 2281701397,
__AddressListQuery = 1207959574,
__AddressListChange = 671088663,
__QueryTargetPnpHandle = 1207959576,
__NamespaceChange = 2281701401,
__AddressListSort = 3355443225,
__ReceiveAll = 2550136833,
__ReceiveAllMulticast = 2550136834,
__ReceiveAllIgmpMulticast = 2550136835,
__KeepAliveValues = 2550136836,
__AbsorbRouterAlert = 2550136837,
__UnicastInterface = 2550136838,
__LimitBroadcasts = 2550136839,
__BindToInterface = 2550136840,
__MulticastInterface = 2550136841,
__AddMulticastGroupOnInterface = 2550136842,
__DeleteMulticastGroupFromInterface = 2550136843,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IOControlCode_Unwrapped () const noexcept {
return std::bit_cast<__IOControlCode_Unwrapped>(__instance);
}


// Fields

 int64_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int64_t value) ;

constexpr int64_t __get_value__() const;

/// @brief Field AsyncIO offset 0
static System::Net::Sockets::IOControlCode const AsyncIO;

/// @brief Field NonBlockingIO offset 0
static System::Net::Sockets::IOControlCode const NonBlockingIO;

/// @brief Field DataToRead offset 0
static System::Net::Sockets::IOControlCode const DataToRead;

/// @brief Field OobDataRead offset 0
static System::Net::Sockets::IOControlCode const OobDataRead;

/// @brief Field AssociateHandle offset 0
static System::Net::Sockets::IOControlCode const AssociateHandle;

/// @brief Field EnableCircularQueuing offset 0
static System::Net::Sockets::IOControlCode const EnableCircularQueuing;

/// @brief Field Flush offset 0
static System::Net::Sockets::IOControlCode const Flush;

/// @brief Field GetBroadcastAddress offset 0
static System::Net::Sockets::IOControlCode const GetBroadcastAddress;

/// @brief Field GetExtensionFunctionPointer offset 0
static System::Net::Sockets::IOControlCode const GetExtensionFunctionPointer;

/// @brief Field GetQos offset 0
static System::Net::Sockets::IOControlCode const GetQos;

/// @brief Field GetGroupQos offset 0
static System::Net::Sockets::IOControlCode const GetGroupQos;

/// @brief Field MultipointLoopback offset 0
static System::Net::Sockets::IOControlCode const MultipointLoopback;

/// @brief Field MulticastScope offset 0
static System::Net::Sockets::IOControlCode const MulticastScope;

/// @brief Field SetQos offset 0
static System::Net::Sockets::IOControlCode const SetQos;

/// @brief Field SetGroupQos offset 0
static System::Net::Sockets::IOControlCode const SetGroupQos;

/// @brief Field TranslateHandle offset 0
static System::Net::Sockets::IOControlCode const TranslateHandle;

/// @brief Field RoutingInterfaceQuery offset 0
static System::Net::Sockets::IOControlCode const RoutingInterfaceQuery;

/// @brief Field RoutingInterfaceChange offset 0
static System::Net::Sockets::IOControlCode const RoutingInterfaceChange;

/// @brief Field AddressListQuery offset 0
static System::Net::Sockets::IOControlCode const AddressListQuery;

/// @brief Field AddressListChange offset 0
static System::Net::Sockets::IOControlCode const AddressListChange;

/// @brief Field QueryTargetPnpHandle offset 0
static System::Net::Sockets::IOControlCode const QueryTargetPnpHandle;

/// @brief Field NamespaceChange offset 0
static System::Net::Sockets::IOControlCode const NamespaceChange;

/// @brief Field AddressListSort offset 0
static System::Net::Sockets::IOControlCode const AddressListSort;

/// @brief Field ReceiveAll offset 0
static System::Net::Sockets::IOControlCode const ReceiveAll;

/// @brief Field ReceiveAllMulticast offset 0
static System::Net::Sockets::IOControlCode const ReceiveAllMulticast;

/// @brief Field ReceiveAllIgmpMulticast offset 0
static System::Net::Sockets::IOControlCode const ReceiveAllIgmpMulticast;

/// @brief Field KeepAliveValues offset 0
static System::Net::Sockets::IOControlCode const KeepAliveValues;

/// @brief Field AbsorbRouterAlert offset 0
static System::Net::Sockets::IOControlCode const AbsorbRouterAlert;

/// @brief Field UnicastInterface offset 0
static System::Net::Sockets::IOControlCode const UnicastInterface;

/// @brief Field LimitBroadcasts offset 0
static System::Net::Sockets::IOControlCode const LimitBroadcasts;

/// @brief Field BindToInterface offset 0
static System::Net::Sockets::IOControlCode const BindToInterface;

/// @brief Field MulticastInterface offset 0
static System::Net::Sockets::IOControlCode const MulticastInterface;

/// @brief Field AddMulticastGroupOnInterface offset 0
static System::Net::Sockets::IOControlCode const AddMulticastGroupOnInterface;

/// @brief Field DeleteMulticastGroupFromInterface offset 0
static System::Net::Sockets::IOControlCode const DeleteMulticastGroupFromInterface;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::IOControlCode, "System.Net.Sockets", "IOControlCode");
