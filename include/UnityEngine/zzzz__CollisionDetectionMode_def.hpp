#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct CollisionDetectionMode;
}
// Type: UnityEngine::CollisionDetectionMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15480))
// CS Name: UnityEngine.CollisionDetectionMode
struct CORDL_TYPE CollisionDetectionMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollisionDetectionMode(int32_t value__) noexcept;


                    constexpr CollisionDetectionMode(CollisionDetectionMode const&) = default;
                    constexpr CollisionDetectionMode(CollisionDetectionMode&&) = default;
                    constexpr CollisionDetectionMode& operator=(CollisionDetectionMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CollisionDetectionMode& operator=(CollisionDetectionMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CollisionDetectionMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CollisionDetectionMode_Unwrapped : int32_t {
__Discrete = 0,
__Continuous = 1,
__ContinuousDynamic = 2,
__ContinuousSpeculative = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CollisionDetectionMode_Unwrapped () const noexcept {
return std::bit_cast<__CollisionDetectionMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Discrete offset 0
static UnityEngine::CollisionDetectionMode const Discrete;

/// @brief Field Continuous offset 0
static UnityEngine::CollisionDetectionMode const Continuous;

/// @brief Field ContinuousDynamic offset 0
static UnityEngine::CollisionDetectionMode const ContinuousDynamic;

/// @brief Field ContinuousSpeculative offset 0
static UnityEngine::CollisionDetectionMode const ContinuousSpeculative;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CollisionDetectionMode, "UnityEngine", "CollisionDetectionMode");
