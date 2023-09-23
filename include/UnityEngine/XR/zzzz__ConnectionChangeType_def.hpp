#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
struct ConnectionChangeType;
}
// Type: UnityEngine.XR::ConnectionChangeType
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15565))
// CS Name: UnityEngine.XR.ConnectionChangeType
struct CORDL_TYPE ConnectionChangeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ConnectionChangeType(uint32_t value__) noexcept;


                    constexpr ConnectionChangeType(ConnectionChangeType const&) = default;
                    constexpr ConnectionChangeType(ConnectionChangeType&&) = default;
                    constexpr ConnectionChangeType& operator=(ConnectionChangeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConnectionChangeType& operator=(ConnectionChangeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConnectionChangeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConnectionChangeType_Unwrapped : uint32_t {
__Connected = 0u,
__Disconnected = 1u,
__ConfigChange = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionChangeType_Unwrapped () const noexcept {
return std::bit_cast<__ConnectionChangeType_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field Connected offset 0
static UnityEngine::XR::ConnectionChangeType const Connected;

/// @brief Field Disconnected offset 0
static UnityEngine::XR::ConnectionChangeType const Disconnected;

/// @brief Field ConfigChange offset 0
static UnityEngine::XR::ConnectionChangeType const ConfigChange;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::ConnectionChangeType, "UnityEngine.XR", "ConnectionChangeType");
