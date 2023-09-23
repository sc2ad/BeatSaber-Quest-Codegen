#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace ENet {
struct PacketFlags;
}
// Type: ENet::PacketFlags
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15253))
// CS Name: ENet.PacketFlags
struct CORDL_TYPE PacketFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PacketFlags(int32_t value__) noexcept;


                    constexpr PacketFlags(PacketFlags const&) = default;
                    constexpr PacketFlags(PacketFlags&&) = default;
                    constexpr PacketFlags& operator=(PacketFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PacketFlags& operator=(PacketFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PacketFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PacketFlags_Unwrapped : int32_t {
__None = 0,
__Reliable = 1,
__Unsequenced = 2,
__NoAllocate = 4,
__UnreliableFragmented = 8,
__Instant = 16,
__Unthrottled = 32,
__Sent = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PacketFlags_Unwrapped () const noexcept {
return std::bit_cast<__PacketFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ENet::PacketFlags const None;

/// @brief Field Reliable offset 0
static ENet::PacketFlags const Reliable;

/// @brief Field Unsequenced offset 0
static ENet::PacketFlags const Unsequenced;

/// @brief Field NoAllocate offset 0
static ENet::PacketFlags const NoAllocate;

/// @brief Field UnreliableFragmented offset 0
static ENet::PacketFlags const UnreliableFragmented;

/// @brief Field Instant offset 0
static ENet::PacketFlags const Instant;

/// @brief Field Unthrottled offset 0
static ENet::PacketFlags const Unthrottled;

/// @brief Field Sent offset 0
static ENet::PacketFlags const Sent;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::PacketFlags, "ENet", "PacketFlags");
