#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct CollisionFlags;
}
// Type: UnityEngine::CollisionFlags
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15478))
// CS Name: UnityEngine.CollisionFlags
struct CORDL_TYPE CollisionFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CollisionFlags(int32_t value__) noexcept;


                    constexpr CollisionFlags(CollisionFlags const&) = default;
                    constexpr CollisionFlags(CollisionFlags&&) = default;
                    constexpr CollisionFlags& operator=(CollisionFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CollisionFlags& operator=(CollisionFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CollisionFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CollisionFlags_Unwrapped : int32_t {
__None = 0,
__Sides = 1,
__Above = 2,
__Below = 4,
__CollidedSides = 1,
__CollidedAbove = 2,
__CollidedBelow = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CollisionFlags_Unwrapped () const noexcept {
return std::bit_cast<__CollisionFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::CollisionFlags const None;

/// @brief Field Sides offset 0
static UnityEngine::CollisionFlags const Sides;

/// @brief Field Above offset 0
static UnityEngine::CollisionFlags const Above;

/// @brief Field Below offset 0
static UnityEngine::CollisionFlags const Below;

/// @brief Field CollidedSides offset 0
static UnityEngine::CollisionFlags const CollidedSides;

/// @brief Field CollidedAbove offset 0
static UnityEngine::CollisionFlags const CollidedAbove;

/// @brief Field CollidedBelow offset 0
static UnityEngine::CollisionFlags const CollidedBelow;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CollisionFlags, "UnityEngine", "CollisionFlags");
