#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct SpritePackingRotation;
}
// Type: UnityEngine::SpritePackingRotation
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10226))
// CS Name: UnityEngine.SpritePackingRotation
struct CORDL_TYPE SpritePackingRotation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpritePackingRotation(int32_t value__) noexcept;


                    constexpr SpritePackingRotation(SpritePackingRotation const&) = default;
                    constexpr SpritePackingRotation(SpritePackingRotation&&) = default;
                    constexpr SpritePackingRotation& operator=(SpritePackingRotation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpritePackingRotation& operator=(SpritePackingRotation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpritePackingRotation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SpritePackingRotation_Unwrapped : int32_t {
__None = 0,
__FlipHorizontal = 1,
__FlipVertical = 2,
__Rotate180 = 3,
__Any = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpritePackingRotation_Unwrapped () const noexcept {
return std::bit_cast<__SpritePackingRotation_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::SpritePackingRotation const None;

/// @brief Field FlipHorizontal offset 0
static UnityEngine::SpritePackingRotation const FlipHorizontal;

/// @brief Field FlipVertical offset 0
static UnityEngine::SpritePackingRotation const FlipVertical;

/// @brief Field Rotate180 offset 0
static UnityEngine::SpritePackingRotation const Rotate180;

/// @brief Field Any offset 0
static UnityEngine::SpritePackingRotation const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpritePackingRotation, "UnityEngine", "SpritePackingRotation");
