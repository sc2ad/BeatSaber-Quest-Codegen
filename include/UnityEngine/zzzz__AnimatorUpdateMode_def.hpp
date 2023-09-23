#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct AnimatorUpdateMode;
}
// Type: UnityEngine::AnimatorUpdateMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15048))
// CS Name: UnityEngine.AnimatorUpdateMode
struct CORDL_TYPE AnimatorUpdateMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorUpdateMode(int32_t value__) noexcept;


                    constexpr AnimatorUpdateMode(AnimatorUpdateMode const&) = default;
                    constexpr AnimatorUpdateMode(AnimatorUpdateMode&&) = default;
                    constexpr AnimatorUpdateMode& operator=(AnimatorUpdateMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimatorUpdateMode& operator=(AnimatorUpdateMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimatorUpdateMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AnimatorUpdateMode_Unwrapped : int32_t {
__Normal = 0,
__AnimatePhysics = 1,
__UnscaledTime = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimatorUpdateMode_Unwrapped () const noexcept {
return std::bit_cast<__AnimatorUpdateMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static UnityEngine::AnimatorUpdateMode const Normal;

/// @brief Field AnimatePhysics offset 0
static UnityEngine::AnimatorUpdateMode const AnimatePhysics;

/// @brief Field UnscaledTime offset 0
static UnityEngine::AnimatorUpdateMode const UnscaledTime;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorUpdateMode, "UnityEngine", "AnimatorUpdateMode");
