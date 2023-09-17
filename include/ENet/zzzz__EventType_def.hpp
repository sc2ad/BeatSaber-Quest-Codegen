#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace ENet {
struct EventType;
}
// Type: ENet::EventType
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15254))
// CS Name: ENet.EventType
struct CORDL_TYPE EventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventType(int32_t value__) noexcept;


                    constexpr EventType(EventType const&) = default;
                    constexpr EventType(EventType&&) = default;
                    constexpr EventType& operator=(EventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventType& operator=(EventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EventType_Unwrapped : int32_t {
__None = 0,
__Connect = 1,
__Disconnect = 2,
__Receive = 3,
__Timeout = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventType_Unwrapped () const noexcept {
return std::bit_cast<__EventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::ENet::EventType const None;

/// @brief Field Connect offset 0
static ::ENet::EventType const Connect;

/// @brief Field Disconnect offset 0
static ::ENet::EventType const Disconnect;

/// @brief Field Receive offset 0
static ::ENet::EventType const Receive;

/// @brief Field Timeout offset 0
static ::ENet::EventType const Timeout;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::ENet::EventType, "ENet", "EventType");
