#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
// Type: UnityEngine.Rendering::ShadowCastingMode
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10277))
// CS Name: UnityEngine.Rendering.ShadowCastingMode
struct CORDL_TYPE ShadowCastingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShadowCastingMode(int32_t value__) noexcept;


                    constexpr ShadowCastingMode(ShadowCastingMode const&) = default;
                    constexpr ShadowCastingMode(ShadowCastingMode&&) = default;
                    constexpr ShadowCastingMode& operator=(ShadowCastingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ShadowCastingMode& operator=(ShadowCastingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ShadowCastingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ShadowCastingMode_Unwrapped : int32_t {
__Off = 0,
__On = 1,
__TwoSided = 2,
__ShadowsOnly = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShadowCastingMode_Unwrapped () const noexcept {
return std::bit_cast<__ShadowCastingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static UnityEngine::Rendering::ShadowCastingMode const Off;

/// @brief Field On offset 0
static UnityEngine::Rendering::ShadowCastingMode const On;

/// @brief Field TwoSided offset 0
static UnityEngine::Rendering::ShadowCastingMode const TwoSided;

/// @brief Field ShadowsOnly offset 0
static UnityEngine::Rendering::ShadowCastingMode const ShadowsOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ShadowCastingMode, "UnityEngine.Rendering", "ShadowCastingMode");
