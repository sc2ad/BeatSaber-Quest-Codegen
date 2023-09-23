#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Timeline {
struct AppliedOffsetMode;
}
// Type: UnityEngine.Timeline::AppliedOffsetMode
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14050))
// CS Name: UnityEngine.Timeline.AppliedOffsetMode
struct CORDL_TYPE AppliedOffsetMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AppliedOffsetMode(int32_t value__) noexcept;


                    constexpr AppliedOffsetMode(AppliedOffsetMode const&) = default;
                    constexpr AppliedOffsetMode(AppliedOffsetMode&&) = default;
                    constexpr AppliedOffsetMode& operator=(AppliedOffsetMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AppliedOffsetMode& operator=(AppliedOffsetMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AppliedOffsetMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AppliedOffsetMode_Unwrapped : int32_t {
__NoRootTransform = 0,
__TransformOffset = 1,
__SceneOffset = 2,
__TransformOffsetLegacy = 3,
__SceneOffsetLegacy = 4,
__SceneOffsetEditor = 5,
__SceneOffsetLegacyEditor = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AppliedOffsetMode_Unwrapped () const noexcept {
return std::bit_cast<__AppliedOffsetMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoRootTransform offset 0
static UnityEngine::Timeline::AppliedOffsetMode const NoRootTransform;

/// @brief Field TransformOffset offset 0
static UnityEngine::Timeline::AppliedOffsetMode const TransformOffset;

/// @brief Field SceneOffset offset 0
static UnityEngine::Timeline::AppliedOffsetMode const SceneOffset;

/// @brief Field TransformOffsetLegacy offset 0
static UnityEngine::Timeline::AppliedOffsetMode const TransformOffsetLegacy;

/// @brief Field SceneOffsetLegacy offset 0
static UnityEngine::Timeline::AppliedOffsetMode const SceneOffsetLegacy;

/// @brief Field SceneOffsetEditor offset 0
static UnityEngine::Timeline::AppliedOffsetMode const SceneOffsetEditor;

/// @brief Field SceneOffsetLegacyEditor offset 0
static UnityEngine::Timeline::AppliedOffsetMode const SceneOffsetLegacyEditor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AppliedOffsetMode, "UnityEngine.Timeline", "AppliedOffsetMode");
