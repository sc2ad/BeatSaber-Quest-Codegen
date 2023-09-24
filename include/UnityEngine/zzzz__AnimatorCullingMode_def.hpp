#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct AnimatorCullingMode;
}
// Type: UnityEngine::AnimatorCullingMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15047))
// CS Name: UnityEngine.AnimatorCullingMode
struct CORDL_TYPE AnimatorCullingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorCullingMode(int32_t value__) noexcept;


                    constexpr AnimatorCullingMode(AnimatorCullingMode const&) = default;
                    constexpr AnimatorCullingMode(AnimatorCullingMode&&) = default;
                    constexpr AnimatorCullingMode& operator=(AnimatorCullingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimatorCullingMode& operator=(AnimatorCullingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimatorCullingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AnimatorCullingMode_Unwrapped : int32_t {
__AlwaysAnimate = 0,
__CullUpdateTransforms = 1,
__CullCompletely = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimatorCullingMode_Unwrapped () const noexcept {
return std::bit_cast<__AnimatorCullingMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AlwaysAnimate offset 0
static UnityEngine::AnimatorCullingMode const AlwaysAnimate;

/// @brief Field CullUpdateTransforms offset 0
static UnityEngine::AnimatorCullingMode const CullUpdateTransforms;

/// @brief Field CullCompletely offset 0
static UnityEngine::AnimatorCullingMode const CullCompletely;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorCullingMode, "UnityEngine", "AnimatorCullingMode");
