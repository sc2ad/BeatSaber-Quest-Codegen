#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct ForceMode;
}
// Type: UnityEngine::ForceMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15476))
// CS Name: UnityEngine.ForceMode
struct CORDL_TYPE ForceMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ForceMode(int32_t value__) noexcept;


                    constexpr ForceMode(ForceMode const&) = default;
                    constexpr ForceMode(ForceMode&&) = default;
                    constexpr ForceMode& operator=(ForceMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ForceMode& operator=(ForceMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ForceMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ForceMode_Unwrapped : int32_t {
__Force = 0,
__Acceleration = 5,
__Impulse = 1,
__VelocityChange = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ForceMode_Unwrapped () const noexcept {
return std::bit_cast<__ForceMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Force offset 0
static UnityEngine::ForceMode const Force;

/// @brief Field Acceleration offset 0
static UnityEngine::ForceMode const Acceleration;

/// @brief Field Impulse offset 0
static UnityEngine::ForceMode const Impulse;

/// @brief Field VelocityChange offset 0
static UnityEngine::ForceMode const VelocityChange;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ForceMode, "UnityEngine", "ForceMode");
