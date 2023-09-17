#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypeClasses;
}
// Type: UnityEngine.UIElements.UIR::RenderDataDirtyTypeClasses
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7495))
// CS Name: UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses
struct CORDL_TYPE RenderDataDirtyTypeClasses : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderDataDirtyTypeClasses(int32_t value__) noexcept;


                    constexpr RenderDataDirtyTypeClasses(RenderDataDirtyTypeClasses const&) = default;
                    constexpr RenderDataDirtyTypeClasses(RenderDataDirtyTypeClasses&&) = default;
                    constexpr RenderDataDirtyTypeClasses& operator=(RenderDataDirtyTypeClasses const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderDataDirtyTypeClasses& operator=(RenderDataDirtyTypeClasses&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderDataDirtyTypeClasses(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderDataDirtyTypeClasses_Unwrapped : int32_t {
__Clipping = 0,
__Opacity = 1,
__Color = 2,
__TransformSize = 3,
__Visuals = 4,
__Count = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderDataDirtyTypeClasses_Unwrapped () const noexcept {
return std::bit_cast<__RenderDataDirtyTypeClasses_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Clipping offset 0
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Clipping;

/// @brief Field Opacity offset 0
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Opacity;

/// @brief Field Color offset 0
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Color;

/// @brief Field TransformSize offset 0
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const TransformSize;

/// @brief Field Visuals offset 0
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Visuals;

/// @brief Field Count offset 0
static ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses const Count;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses, "UnityEngine.UIElements.UIR", "RenderDataDirtyTypeClasses");
