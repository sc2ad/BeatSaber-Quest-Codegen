#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct SocketAsyncOperation;
}
// Type: System.Net.Sockets::SocketAsyncOperation
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8196))
// CS Name: System.Net.Sockets.SocketAsyncOperation
struct CORDL_TYPE SocketAsyncOperation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketAsyncOperation(int32_t value__) noexcept;


                    constexpr SocketAsyncOperation(SocketAsyncOperation const&) = default;
                    constexpr SocketAsyncOperation(SocketAsyncOperation&&) = default;
                    constexpr SocketAsyncOperation& operator=(SocketAsyncOperation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SocketAsyncOperation& operator=(SocketAsyncOperation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SocketAsyncOperation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SocketAsyncOperation_Unwrapped : int32_t {
__None = 0,
__Accept = 1,
__Connect = 2,
__Disconnect = 3,
__Receive = 4,
__ReceiveFrom = 5,
__ReceiveMessageFrom = 6,
__Send = 7,
__SendPackets = 8,
__SendTo = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketAsyncOperation_Unwrapped () const noexcept {
return std::bit_cast<__SocketAsyncOperation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Net::Sockets::SocketAsyncOperation const None;

/// @brief Field Accept offset 0
static System::Net::Sockets::SocketAsyncOperation const Accept;

/// @brief Field Connect offset 0
static System::Net::Sockets::SocketAsyncOperation const Connect;

/// @brief Field Disconnect offset 0
static System::Net::Sockets::SocketAsyncOperation const Disconnect;

/// @brief Field Receive offset 0
static System::Net::Sockets::SocketAsyncOperation const Receive;

/// @brief Field ReceiveFrom offset 0
static System::Net::Sockets::SocketAsyncOperation const ReceiveFrom;

/// @brief Field ReceiveMessageFrom offset 0
static System::Net::Sockets::SocketAsyncOperation const ReceiveMessageFrom;

/// @brief Field Send offset 0
static System::Net::Sockets::SocketAsyncOperation const Send;

/// @brief Field SendPackets offset 0
static System::Net::Sockets::SocketAsyncOperation const SendPackets;

/// @brief Field SendTo offset 0
static System::Net::Sockets::SocketAsyncOperation const SendTo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketAsyncOperation, "System.Net.Sockets", "SocketAsyncOperation");
