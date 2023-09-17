#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct RefreshMask;
}
// Type: UnityEngine.ProBuilder::RefreshMask
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12110))
// CS Name: UnityEngine.ProBuilder.RefreshMask
struct CORDL_TYPE RefreshMask : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RefreshMask(int32_t value__) noexcept;


                    constexpr RefreshMask(RefreshMask const&) = default;
                    constexpr RefreshMask(RefreshMask&&) = default;
                    constexpr RefreshMask& operator=(RefreshMask const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RefreshMask& operator=(RefreshMask&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RefreshMask(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RefreshMask_Unwrapped : int32_t {
__UV = 1,
__Colors = 2,
__Normals = 4,
__Tangents = 8,
__Collisions = 16,
__Bounds = 22,
__All = 31,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RefreshMask_Unwrapped () const noexcept {
return std::bit_cast<__RefreshMask_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UV offset 0
static ::UnityEngine::ProBuilder::RefreshMask const UV;

/// @brief Field Colors offset 0
static ::UnityEngine::ProBuilder::RefreshMask const Colors;

/// @brief Field Normals offset 0
static ::UnityEngine::ProBuilder::RefreshMask const Normals;

/// @brief Field Tangents offset 0
static ::UnityEngine::ProBuilder::RefreshMask const Tangents;

/// @brief Field Collisions offset 0
static ::UnityEngine::ProBuilder::RefreshMask const Collisions;

/// @brief Field Bounds offset 0
static ::UnityEngine::ProBuilder::RefreshMask const Bounds;

/// @brief Field All offset 0
static ::UnityEngine::ProBuilder::RefreshMask const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::RefreshMask, "UnityEngine.ProBuilder", "RefreshMask");
