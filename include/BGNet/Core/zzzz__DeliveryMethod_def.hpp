#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace BGNet::Core {
struct DeliveryMethod;
}
// Type: BGNet.Core::DeliveryMethod
namespace BGNet::Core {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12941))
// CS Name: BGNet.Core.DeliveryMethod
struct CORDL_TYPE DeliveryMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DeliveryMethod(uint8_t value__) noexcept;


                    constexpr DeliveryMethod(DeliveryMethod const&) = default;
                    constexpr DeliveryMethod(DeliveryMethod&&) = default;
                    constexpr DeliveryMethod& operator=(DeliveryMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DeliveryMethod& operator=(DeliveryMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DeliveryMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DeliveryMethod_Unwrapped : uint8_t {
__Unreliable = 0u,
__ReliableOrdered = 1u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeliveryMethod_Unwrapped () const noexcept {
return std::bit_cast<__DeliveryMethod_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Unreliable offset 0
static BGNet::Core::DeliveryMethod const Unreliable;

/// @brief Field ReliableOrdered offset 0
static BGNet::Core::DeliveryMethod const ReliableOrdered;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::DeliveryMethod, "BGNet.Core", "DeliveryMethod");
