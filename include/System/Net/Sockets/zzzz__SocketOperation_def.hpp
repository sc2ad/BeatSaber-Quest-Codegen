#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct SocketOperation;
}
// Type: System.Net.Sockets::SocketOperation
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8211))
// CS Name: System.Net.Sockets.SocketOperation
struct CORDL_TYPE SocketOperation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketOperation(int32_t value__) noexcept;


                    constexpr SocketOperation(SocketOperation const&) = default;
                    constexpr SocketOperation(SocketOperation&&) = default;
                    constexpr SocketOperation& operator=(SocketOperation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SocketOperation& operator=(SocketOperation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SocketOperation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SocketOperation_Unwrapped : int32_t {
__Accept = 0,
__Connect = 1,
__Receive = 2,
__ReceiveFrom = 3,
__Send = 4,
__SendTo = 5,
__RecvJustCallback = 6,
__SendJustCallback = 7,
__Disconnect = 8,
__AcceptReceive = 9,
__ReceiveGeneric = 10,
__SendGeneric = 11,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketOperation_Unwrapped () const noexcept {
return std::bit_cast<__SocketOperation_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Accept offset 0
static System::Net::Sockets::SocketOperation const Accept;

/// @brief Field Connect offset 0
static System::Net::Sockets::SocketOperation const Connect;

/// @brief Field Receive offset 0
static System::Net::Sockets::SocketOperation const Receive;

/// @brief Field ReceiveFrom offset 0
static System::Net::Sockets::SocketOperation const ReceiveFrom;

/// @brief Field Send offset 0
static System::Net::Sockets::SocketOperation const Send;

/// @brief Field SendTo offset 0
static System::Net::Sockets::SocketOperation const SendTo;

/// @brief Field RecvJustCallback offset 0
static System::Net::Sockets::SocketOperation const RecvJustCallback;

/// @brief Field SendJustCallback offset 0
static System::Net::Sockets::SocketOperation const SendJustCallback;

/// @brief Field Disconnect offset 0
static System::Net::Sockets::SocketOperation const Disconnect;

/// @brief Field AcceptReceive offset 0
static System::Net::Sockets::SocketOperation const AcceptReceive;

/// @brief Field ReceiveGeneric offset 0
static System::Net::Sockets::SocketOperation const ReceiveGeneric;

/// @brief Field SendGeneric offset 0
static System::Net::Sockets::SocketOperation const SendGeneric;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketOperation, "System.Net.Sockets", "SocketOperation");
