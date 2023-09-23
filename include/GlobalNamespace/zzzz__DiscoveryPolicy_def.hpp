#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct DiscoveryPolicy;
}
// Type: ::DiscoveryPolicy
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12663))
// CS Name: DiscoveryPolicy
struct CORDL_TYPE DiscoveryPolicy : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DiscoveryPolicy(uint8_t value__) noexcept;


                    constexpr DiscoveryPolicy(DiscoveryPolicy const&) = default;
                    constexpr DiscoveryPolicy(DiscoveryPolicy&&) = default;
                    constexpr DiscoveryPolicy& operator=(DiscoveryPolicy const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DiscoveryPolicy& operator=(DiscoveryPolicy&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DiscoveryPolicy(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DiscoveryPolicy_Unwrapped : uint8_t {
__Hidden = 0u,
__WithCode = 1u,
__Public = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DiscoveryPolicy_Unwrapped () const noexcept {
return std::bit_cast<__DiscoveryPolicy_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Hidden offset 0
static GlobalNamespace::DiscoveryPolicy const Hidden;

/// @brief Field WithCode offset 0
static GlobalNamespace::DiscoveryPolicy const WithCode;

/// @brief Field Public offset 0
static GlobalNamespace::DiscoveryPolicy const Public;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiscoveryPolicy, "", "DiscoveryPolicy");
