#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
struct VisualElementFlags;
}
// Type: UnityEngine.UIElements::VisualElementFlags
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6908))
// CS Name: UnityEngine.UIElements.VisualElementFlags
struct CORDL_TYPE VisualElementFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VisualElementFlags(int32_t value__) noexcept;


                    constexpr VisualElementFlags(VisualElementFlags const&) = default;
                    constexpr VisualElementFlags(VisualElementFlags&&) = default;
                    constexpr VisualElementFlags& operator=(VisualElementFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VisualElementFlags& operator=(VisualElementFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VisualElementFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VisualElementFlags_Unwrapped : int32_t {
__WorldTransformDirty = 1,
__WorldTransformInverseDirty = 2,
__WorldClipDirty = 4,
__BoundingBoxDirty = 8,
__WorldBoundingBoxDirty = 16,
__LayoutManual = 32,
__CompositeRoot = 64,
__RequireMeasureFunction = 128,
__EnableViewDataPersistence = 256,
__DisableClipping = 512,
__NeedsAttachToPanelEvent = 1024,
__HierarchyDisplayed = 2048,
__StyleInitialized = 4096,
__Init = 2079,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualElementFlags_Unwrapped () const noexcept {
return std::bit_cast<__VisualElementFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field WorldTransformDirty offset 0
static ::UnityEngine::UIElements::VisualElementFlags const WorldTransformDirty;

/// @brief Field WorldTransformInverseDirty offset 0
static ::UnityEngine::UIElements::VisualElementFlags const WorldTransformInverseDirty;

/// @brief Field WorldClipDirty offset 0
static ::UnityEngine::UIElements::VisualElementFlags const WorldClipDirty;

/// @brief Field BoundingBoxDirty offset 0
static ::UnityEngine::UIElements::VisualElementFlags const BoundingBoxDirty;

/// @brief Field WorldBoundingBoxDirty offset 0
static ::UnityEngine::UIElements::VisualElementFlags const WorldBoundingBoxDirty;

/// @brief Field LayoutManual offset 0
static ::UnityEngine::UIElements::VisualElementFlags const LayoutManual;

/// @brief Field CompositeRoot offset 0
static ::UnityEngine::UIElements::VisualElementFlags const CompositeRoot;

/// @brief Field RequireMeasureFunction offset 0
static ::UnityEngine::UIElements::VisualElementFlags const RequireMeasureFunction;

/// @brief Field EnableViewDataPersistence offset 0
static ::UnityEngine::UIElements::VisualElementFlags const EnableViewDataPersistence;

/// @brief Field DisableClipping offset 0
static ::UnityEngine::UIElements::VisualElementFlags const DisableClipping;

/// @brief Field NeedsAttachToPanelEvent offset 0
static ::UnityEngine::UIElements::VisualElementFlags const NeedsAttachToPanelEvent;

/// @brief Field HierarchyDisplayed offset 0
static ::UnityEngine::UIElements::VisualElementFlags const HierarchyDisplayed;

/// @brief Field StyleInitialized offset 0
static ::UnityEngine::UIElements::VisualElementFlags const StyleInitialized;

/// @brief Field Init offset 0
static ::UnityEngine::UIElements::VisualElementFlags const Init;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFlags, "UnityEngine.UIElements", "VisualElementFlags");
