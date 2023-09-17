#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
// Type: UnityEngine.Rendering::GraphicsTier
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10279))
// CS Name: UnityEngine.Rendering.GraphicsTier
struct CORDL_TYPE GraphicsTier : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsTier(int32_t value__) noexcept;


                    constexpr GraphicsTier(GraphicsTier const&) = default;
                    constexpr GraphicsTier(GraphicsTier&&) = default;
                    constexpr GraphicsTier& operator=(GraphicsTier const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GraphicsTier& operator=(GraphicsTier&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GraphicsTier(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GraphicsTier_Unwrapped : int32_t {
__Tier1 = 0,
__Tier2 = 1,
__Tier3 = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsTier_Unwrapped () const noexcept {
return std::bit_cast<__GraphicsTier_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Tier1 offset 0
static ::UnityEngine::Rendering::GraphicsTier const Tier1;

/// @brief Field Tier2 offset 0
static ::UnityEngine::Rendering::GraphicsTier const Tier2;

/// @brief Field Tier3 offset 0
static ::UnityEngine::Rendering::GraphicsTier const Tier3;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsTier, "UnityEngine.Rendering", "GraphicsTier");
