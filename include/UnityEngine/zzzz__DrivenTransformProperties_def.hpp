#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct DrivenTransformProperties;
}
// Type: UnityEngine::DrivenTransformProperties
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10218))
// CS Name: UnityEngine.DrivenTransformProperties
struct CORDL_TYPE DrivenTransformProperties : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DrivenTransformProperties(int32_t value__) noexcept;


                    constexpr DrivenTransformProperties(DrivenTransformProperties const&) = default;
                    constexpr DrivenTransformProperties(DrivenTransformProperties&&) = default;
                    constexpr DrivenTransformProperties& operator=(DrivenTransformProperties const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DrivenTransformProperties& operator=(DrivenTransformProperties&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DrivenTransformProperties(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DrivenTransformProperties_Unwrapped : int32_t {
__None = 0,
__All = -1,
__AnchoredPositionX = 2,
__AnchoredPositionY = 4,
__AnchoredPositionZ = 8,
__Rotation = 16,
__ScaleX = 32,
__ScaleY = 64,
__ScaleZ = 128,
__AnchorMinX = 256,
__AnchorMinY = 512,
__AnchorMaxX = 1024,
__AnchorMaxY = 2048,
__SizeDeltaX = 4096,
__SizeDeltaY = 8192,
__PivotX = 16384,
__PivotY = 32768,
__AnchoredPosition = 6,
__AnchoredPosition3D = 14,
__Scale = 224,
__AnchorMin = 768,
__AnchorMax = 3072,
__Anchors = 3840,
__SizeDelta = 12288,
__Pivot = 49152,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DrivenTransformProperties_Unwrapped () const noexcept {
return std::bit_cast<__DrivenTransformProperties_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::DrivenTransformProperties const None;

/// @brief Field All offset 0
static ::UnityEngine::DrivenTransformProperties const All;

/// @brief Field AnchoredPositionX offset 0
static ::UnityEngine::DrivenTransformProperties const AnchoredPositionX;

/// @brief Field AnchoredPositionY offset 0
static ::UnityEngine::DrivenTransformProperties const AnchoredPositionY;

/// @brief Field AnchoredPositionZ offset 0
static ::UnityEngine::DrivenTransformProperties const AnchoredPositionZ;

/// @brief Field Rotation offset 0
static ::UnityEngine::DrivenTransformProperties const Rotation;

/// @brief Field ScaleX offset 0
static ::UnityEngine::DrivenTransformProperties const ScaleX;

/// @brief Field ScaleY offset 0
static ::UnityEngine::DrivenTransformProperties const ScaleY;

/// @brief Field ScaleZ offset 0
static ::UnityEngine::DrivenTransformProperties const ScaleZ;

/// @brief Field AnchorMinX offset 0
static ::UnityEngine::DrivenTransformProperties const AnchorMinX;

/// @brief Field AnchorMinY offset 0
static ::UnityEngine::DrivenTransformProperties const AnchorMinY;

/// @brief Field AnchorMaxX offset 0
static ::UnityEngine::DrivenTransformProperties const AnchorMaxX;

/// @brief Field AnchorMaxY offset 0
static ::UnityEngine::DrivenTransformProperties const AnchorMaxY;

/// @brief Field SizeDeltaX offset 0
static ::UnityEngine::DrivenTransformProperties const SizeDeltaX;

/// @brief Field SizeDeltaY offset 0
static ::UnityEngine::DrivenTransformProperties const SizeDeltaY;

/// @brief Field PivotX offset 0
static ::UnityEngine::DrivenTransformProperties const PivotX;

/// @brief Field PivotY offset 0
static ::UnityEngine::DrivenTransformProperties const PivotY;

/// @brief Field AnchoredPosition offset 0
static ::UnityEngine::DrivenTransformProperties const AnchoredPosition;

/// @brief Field AnchoredPosition3D offset 0
static ::UnityEngine::DrivenTransformProperties const AnchoredPosition3D;

/// @brief Field Scale offset 0
static ::UnityEngine::DrivenTransformProperties const Scale;

/// @brief Field AnchorMin offset 0
static ::UnityEngine::DrivenTransformProperties const AnchorMin;

/// @brief Field AnchorMax offset 0
static ::UnityEngine::DrivenTransformProperties const AnchorMax;

/// @brief Field Anchors offset 0
static ::UnityEngine::DrivenTransformProperties const Anchors;

/// @brief Field SizeDelta offset 0
static ::UnityEngine::DrivenTransformProperties const SizeDelta;

/// @brief Field Pivot offset 0
static ::UnityEngine::DrivenTransformProperties const Pivot;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DrivenTransformProperties, "UnityEngine", "DrivenTransformProperties");
