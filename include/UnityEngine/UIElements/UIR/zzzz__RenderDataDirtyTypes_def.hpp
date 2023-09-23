#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
// Type: UnityEngine.UIElements.UIR::RenderDataDirtyTypes
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7494))
// CS Name: UnityEngine.UIElements.UIR.RenderDataDirtyTypes
struct CORDL_TYPE RenderDataDirtyTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderDataDirtyTypes(int32_t value__) noexcept;


                    constexpr RenderDataDirtyTypes(RenderDataDirtyTypes const&) = default;
                    constexpr RenderDataDirtyTypes(RenderDataDirtyTypes&&) = default;
                    constexpr RenderDataDirtyTypes& operator=(RenderDataDirtyTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderDataDirtyTypes& operator=(RenderDataDirtyTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderDataDirtyTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderDataDirtyTypes_Unwrapped : int32_t {
__None = 0,
__Transform = 1,
__ClipRectSize = 2,
__Clipping = 4,
__ClippingHierarchy = 8,
__Visuals = 16,
__VisualsHierarchy = 32,
__Opacity = 64,
__OpacityHierarchy = 128,
__Color = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderDataDirtyTypes_Unwrapped () const noexcept {
return std::bit_cast<__RenderDataDirtyTypes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const None;

/// @brief Field Transform offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Transform;

/// @brief Field ClipRectSize offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const ClipRectSize;

/// @brief Field Clipping offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Clipping;

/// @brief Field ClippingHierarchy offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const ClippingHierarchy;

/// @brief Field Visuals offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Visuals;

/// @brief Field VisualsHierarchy offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const VisualsHierarchy;

/// @brief Field Opacity offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Opacity;

/// @brief Field OpacityHierarchy offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const OpacityHierarchy;

/// @brief Field Color offset 0
static UnityEngine::UIElements::UIR::RenderDataDirtyTypes const Color;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::RenderDataDirtyTypes, "UnityEngine.UIElements.UIR", "RenderDataDirtyTypes");
