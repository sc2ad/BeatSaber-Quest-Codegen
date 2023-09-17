#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::Sockets {
struct SocketOptionLevel;
}
// Type: System.Net.Sockets::SocketOptionLevel
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8200))
// CS Name: System.Net.Sockets.SocketOptionLevel
struct CORDL_TYPE SocketOptionLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketOptionLevel(int32_t value__) noexcept;


                    constexpr SocketOptionLevel(SocketOptionLevel const&) = default;
                    constexpr SocketOptionLevel(SocketOptionLevel&&) = default;
                    constexpr SocketOptionLevel& operator=(SocketOptionLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SocketOptionLevel& operator=(SocketOptionLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SocketOptionLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SocketOptionLevel_Unwrapped : int32_t {
__Socket = 65535,
__IP = 0,
__IPv6 = 41,
__Tcp = 6,
__Udp = 17,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketOptionLevel_Unwrapped () const noexcept {
return std::bit_cast<__SocketOptionLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Socket offset 0
static ::System::Net::Sockets::SocketOptionLevel const Socket;

/// @brief Field IP offset 0
static ::System::Net::Sockets::SocketOptionLevel const IP;

/// @brief Field IPv6 offset 0
static ::System::Net::Sockets::SocketOptionLevel const IPv6;

/// @brief Field Tcp offset 0
static ::System::Net::Sockets::SocketOptionLevel const Tcp;

/// @brief Field Udp offset 0
static ::System::Net::Sockets::SocketOptionLevel const Udp;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOptionLevel, "System.Net.Sockets", "SocketOptionLevel");
