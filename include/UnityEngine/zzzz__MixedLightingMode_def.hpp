#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct MixedLightingMode;
}
// Type: UnityEngine::MixedLightingMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10048))
// CS Name: UnityEngine.MixedLightingMode
struct CORDL_TYPE MixedLightingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MixedLightingMode(int32_t value__) noexcept;


                    constexpr MixedLightingMode(MixedLightingMode const&) = default;
                    constexpr MixedLightingMode(MixedLightingMode&&) = default;
                    constexpr MixedLightingMode& operator=(MixedLightingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MixedLightingMode& operator=(MixedLightingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MixedLightingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MixedLightingMode_Unwrapped : int32_t {
__IndirectOnly = 0,
__Shadowmask = 2,
__Subtractive = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MixedLightingMode_Unwrapped () const noexcept {
return std::bit_cast<__MixedLightingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IndirectOnly offset 0
static UnityEngine::MixedLightingMode const IndirectOnly;

/// @brief Field Shadowmask offset 0
static UnityEngine::MixedLightingMode const Shadowmask;

/// @brief Field Subtractive offset 0
static UnityEngine::MixedLightingMode const Subtractive;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MixedLightingMode, "UnityEngine", "MixedLightingMode");
