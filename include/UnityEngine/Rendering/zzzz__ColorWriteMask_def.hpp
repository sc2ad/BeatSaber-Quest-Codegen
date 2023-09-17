#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Rendering {
struct ColorWriteMask;
}
// Type: UnityEngine.Rendering::ColorWriteMask
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10271))
// CS Name: UnityEngine.Rendering.ColorWriteMask
struct CORDL_TYPE ColorWriteMask : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ColorWriteMask(int32_t value__) noexcept;


                    constexpr ColorWriteMask(ColorWriteMask const&) = default;
                    constexpr ColorWriteMask(ColorWriteMask&&) = default;
                    constexpr ColorWriteMask& operator=(ColorWriteMask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ColorWriteMask& operator=(ColorWriteMask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ColorWriteMask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ColorWriteMask_Unwrapped : int32_t {
__Alpha = 1,
__Blue = 2,
__Green = 4,
__Red = 8,
__All = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorWriteMask_Unwrapped () const noexcept {
return std::bit_cast<__ColorWriteMask_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Alpha offset 0
static ::UnityEngine::Rendering::ColorWriteMask const Alpha;

/// @brief Field Blue offset 0
static ::UnityEngine::Rendering::ColorWriteMask const Blue;

/// @brief Field Green offset 0
static ::UnityEngine::Rendering::ColorWriteMask const Green;

/// @brief Field Red offset 0
static ::UnityEngine::Rendering::ColorWriteMask const Red;

/// @brief Field All offset 0
static ::UnityEngine::Rendering::ColorWriteMask const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ColorWriteMask, "UnityEngine.Rendering", "ColorWriteMask");
