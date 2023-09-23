#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct RenderHints;
}
// Type: UnityEngine.UIElements::RenderHints
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6951))
// CS Name: UnityEngine.UIElements.RenderHints
struct CORDL_TYPE RenderHints : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderHints(int32_t value__) noexcept;


                    constexpr RenderHints(RenderHints const&) = default;
                    constexpr RenderHints(RenderHints&&) = default;
                    constexpr RenderHints& operator=(RenderHints const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderHints& operator=(RenderHints&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderHints(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderHints_Unwrapped : int32_t {
__None = 0,
__GroupTransform = 1,
__BoneTransform = 2,
__ClipWithScissors = 4,
__MaskContainer = 8,
__DynamicColor = 16,
__DirtyOffset = 5,
__DirtyGroupTransform = 32,
__DirtyBoneTransform = 64,
__DirtyClipWithScissors = 128,
__DirtyMaskContainer = 256,
__DirtyAll = 480,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderHints_Unwrapped () const noexcept {
return std::bit_cast<__RenderHints_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::RenderHints const None;

/// @brief Field GroupTransform offset 0
static UnityEngine::UIElements::RenderHints const GroupTransform;

/// @brief Field BoneTransform offset 0
static UnityEngine::UIElements::RenderHints const BoneTransform;

/// @brief Field ClipWithScissors offset 0
static UnityEngine::UIElements::RenderHints const ClipWithScissors;

/// @brief Field MaskContainer offset 0
static UnityEngine::UIElements::RenderHints const MaskContainer;

/// @brief Field DynamicColor offset 0
static UnityEngine::UIElements::RenderHints const DynamicColor;

/// @brief Field DirtyOffset offset 0
static UnityEngine::UIElements::RenderHints const DirtyOffset;

/// @brief Field DirtyGroupTransform offset 0
static UnityEngine::UIElements::RenderHints const DirtyGroupTransform;

/// @brief Field DirtyBoneTransform offset 0
static UnityEngine::UIElements::RenderHints const DirtyBoneTransform;

/// @brief Field DirtyClipWithScissors offset 0
static UnityEngine::UIElements::RenderHints const DirtyClipWithScissors;

/// @brief Field DirtyMaskContainer offset 0
static UnityEngine::UIElements::RenderHints const DirtyMaskContainer;

/// @brief Field DirtyAll offset 0
static UnityEngine::UIElements::RenderHints const DirtyAll;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::RenderHints, "UnityEngine.UIElements", "RenderHints");
