#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct NetworkReachability;
}
// Type: UnityEngine::NetworkReachability
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10212))
// CS Name: UnityEngine.NetworkReachability
struct CORDL_TYPE NetworkReachability : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkReachability(int32_t value__) noexcept;


                    constexpr NetworkReachability(NetworkReachability const&) = default;
                    constexpr NetworkReachability(NetworkReachability&&) = default;
                    constexpr NetworkReachability& operator=(NetworkReachability const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NetworkReachability& operator=(NetworkReachability&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NetworkReachability(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NetworkReachability_Unwrapped : int32_t {
__NotReachable = 0,
__ReachableViaCarrierDataNetwork = 1,
__ReachableViaLocalAreaNetwork = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkReachability_Unwrapped () const noexcept {
return std::bit_cast<__NetworkReachability_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NotReachable offset 0
static ::UnityEngine::NetworkReachability const NotReachable;

/// @brief Field ReachableViaCarrierDataNetwork offset 0
static ::UnityEngine::NetworkReachability const ReachableViaCarrierDataNetwork;

/// @brief Field ReachableViaLocalAreaNetwork offset 0
static ::UnityEngine::NetworkReachability const ReachableViaLocalAreaNetwork;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NetworkReachability, "UnityEngine", "NetworkReachability");
