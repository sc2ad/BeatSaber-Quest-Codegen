#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct SocketShutdown;
}
// Type: System.Net.Sockets::SocketShutdown
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8202))
// CS Name: System.Net.Sockets.SocketShutdown
struct CORDL_TYPE SocketShutdown : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketShutdown(int32_t value__) noexcept;


                    constexpr SocketShutdown(SocketShutdown const&) = default;
                    constexpr SocketShutdown(SocketShutdown&&) = default;
                    constexpr SocketShutdown& operator=(SocketShutdown const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SocketShutdown& operator=(SocketShutdown&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SocketShutdown(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SocketShutdown_Unwrapped : int32_t {
__Receive = 0,
__Send = 1,
__Both = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketShutdown_Unwrapped () const noexcept {
return std::bit_cast<__SocketShutdown_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Receive offset 0
static System::Net::Sockets::SocketShutdown const Receive;

/// @brief Field Send offset 0
static System::Net::Sockets::SocketShutdown const Send;

/// @brief Field Both offset 0
static System::Net::Sockets::SocketShutdown const Both;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketShutdown, "System.Net.Sockets", "SocketShutdown");
