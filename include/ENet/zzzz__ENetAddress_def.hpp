#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace ENet {
struct ENetAddress;
}
// Type: ENet::ENetAddress
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15257))
// CS Name: ENet.ENetAddress
struct CORDL_TYPE ENetAddress : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "port", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr ENetAddress(uint16_t port) noexcept;


                    constexpr ENetAddress(ENetAddress const&) = default;
                    constexpr ENetAddress(ENetAddress&&) = default;
                    constexpr ENetAddress& operator=(ENetAddress const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ENetAddress& operator=(ENetAddress&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x12};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ENetAddress(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint16_t __declspec(property(get=__get_port, put=__set_port))  port;

constexpr void __set_port(uint16_t value) ;

constexpr uint16_t __get_port() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::ENetAddress, "ENet", "ENetAddress");
