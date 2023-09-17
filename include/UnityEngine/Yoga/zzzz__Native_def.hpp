#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::Yoga {
struct YogaDisplay;
}
namespace UnityEngine::Yoga {
struct YogaDirection;
}
namespace UnityEngine::Yoga {
struct YogaPositionType;
}
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
struct YogaOverflow;
}
namespace UnityEngine::Yoga {
struct YogaJustify;
}
namespace UnityEngine::Yoga {
struct YogaAlign;
}
namespace UnityEngine::Yoga {
struct YogaFlexDirection;
}
namespace UnityEngine::Yoga {
struct YogaWrap;
}
namespace UnityEngine::Yoga {
struct YogaEdge;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class Native;
}
// Type: UnityEngine.Yoga::Native
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15380))
// CS Name: UnityEngine.Yoga.Native
class CORDL_TYPE Native : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Native() = default;

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: " const&", def_value: None }]
constexpr Native(Native const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "&&", def_value: None }]
constexpr Native(Native&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Native(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Native& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Native& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Native& operator=(Native&& o) noexcept = default;
  constexpr Native& operator=(Native const& o) noexcept = default;
                


// Methods

/// @brief Method YGNodeNewWithConfig addr 0x2d2b864 size 0x3c virtual false final false
static ::cordl_internals::intptr_t YGNodeNewWithConfig(::cordl_internals::intptr_t config) ;

/// @brief Method YGNodeFree addr 0x2d2b938 size 0x8c virtual false final false
static void YGNodeFree(::cordl_internals::intptr_t ygNode) ;

/// @brief Method YGNodeFreeInternal addr 0x2d2d8e0 size 0x3c virtual false final false
static void YGNodeFreeInternal(::cordl_internals::intptr_t ygNode) ;

/// @brief Method YGSetManagedObject addr 0x2d2d3c0 size 0x44 virtual false final false
static void YGSetManagedObject(::cordl_internals::intptr_t ygNode, ::UnityEngine::Yoga::YogaNode node) ;

/// @brief Method YGNodeSetConfig addr 0x2d2ba74 size 0x44 virtual false final false
static void YGNodeSetConfig(::cordl_internals::intptr_t ygNode, ::cordl_internals::intptr_t config) ;

/// @brief Method YGConfigGetDefault addr 0x2d2d91c size 0x28 virtual false final false
static ::cordl_internals::intptr_t YGConfigGetDefault() ;

/// @brief Method YGConfigNew addr 0x2d2d944 size 0x28 virtual false final false
static ::cordl_internals::intptr_t YGConfigNew() ;

/// @brief Method YGConfigFree addr 0x2d2d96c size 0x8c virtual false final false
static void YGConfigFree(::cordl_internals::intptr_t config) ;

/// @brief Method YGConfigFreeInternal addr 0x2d2d9f8 size 0x3c virtual false final false
static void YGConfigFreeInternal(::cordl_internals::intptr_t config) ;

/// @brief Method YGConfigSetUseWebDefaults addr 0x2d2da34 size 0x44 virtual false final false
static void YGConfigSetUseWebDefaults(::cordl_internals::intptr_t config, bool useWebDefaults) ;

/// @brief Method YGConfigGetUseWebDefaults addr 0x2d2da78 size 0x3c virtual false final false
static bool YGConfigGetUseWebDefaults(::cordl_internals::intptr_t config) ;

/// @brief Method YGConfigSetPointScaleFactor addr 0x2d2dab4 size 0x4c virtual false final false
static void YGConfigSetPointScaleFactor(::cordl_internals::intptr_t config, float_t pixelsInPoint) ;

/// @brief Method YGNodeInsertChild addr 0x2d2d124 size 0x54 virtual false final false
static void YGNodeInsertChild(::cordl_internals::intptr_t node, ::cordl_internals::intptr_t child, uint32_t index) ;

/// @brief Method YGNodeRemoveChild addr 0x2d2d240 size 0x44 virtual false final false
static void YGNodeRemoveChild(::cordl_internals::intptr_t node, ::cordl_internals::intptr_t child) ;

/// @brief Method YGNodeCalculateLayout addr 0x2d2d53c size 0x5c virtual false final false
static void YGNodeCalculateLayout(::cordl_internals::intptr_t node, float_t availableWidth, float_t availableHeight, ::UnityEngine::Yoga::YogaDirection parentDirection) ;

/// @brief Method YGNodeMarkDirty addr 0x2d2bb6c size 0x3c virtual false final false
static void YGNodeMarkDirty(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeIsDirty addr 0x2d2baf4 size 0x3c virtual false final false
static bool YGNodeIsDirty(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeCopyStyle addr 0x2d2bc8c size 0x44 virtual false final false
static void YGNodeCopyStyle(::cordl_internals::intptr_t dstNode, ::cordl_internals::intptr_t srcNode) ;

/// @brief Method YGNodeSetMeasureFunc addr 0x2d2d440 size 0x3c virtual false final false
static void YGNodeSetMeasureFunc(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeRemoveMeasureFunc addr 0x2d2d404 size 0x3c virtual false final false
static void YGNodeRemoveMeasureFunc(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeMeasureInvoke addr 0x2d2db00 size 0x64 virtual false final false
static void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height, ::UnityEngine::Yoga::YogaMeasureMode heightMode, ::cordl_internals::intptr_t returnValueAddress) ;

/// @brief Method YGNodeBaselineInvoke addr 0x2d2db64 size 0x4c virtual false final false
static void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode node, float_t width, float_t height, ::cordl_internals::intptr_t returnValueAddress) ;

/// @brief Method YGNodeSetHasNewLayout addr 0x2d2cfbc size 0x44 virtual false final false
static void YGNodeSetHasNewLayout(::cordl_internals::intptr_t node, bool hasNewLayout) ;

/// @brief Method YGNodeGetHasNewLayout addr 0x2d2bbe4 size 0x3c virtual false final false
static bool YGNodeGetHasNewLayout(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeStyleGetDirection addr 0x2d2d500 size 0x3c virtual false final false
static ::UnityEngine::Yoga::YogaDirection YGNodeStyleGetDirection(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeStyleSetFlexDirection addr 0x2d2bd14 size 0x44 virtual false final false
static void YGNodeStyleSetFlexDirection(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaFlexDirection flexDirection) ;

/// @brief Method YGNodeStyleSetJustifyContent addr 0x2d2bd9c size 0x44 virtual false final false
static void YGNodeStyleSetJustifyContent(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaJustify justifyContent) ;

/// @brief Method YGNodeStyleSetAlignContent addr 0x2d2bfbc size 0x44 virtual false final false
static void YGNodeStyleSetAlignContent(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaAlign alignContent) ;

/// @brief Method YGNodeStyleSetAlignItems addr 0x2d2beac size 0x44 virtual false final false
static void YGNodeStyleSetAlignItems(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaAlign alignItems) ;

/// @brief Method YGNodeStyleSetAlignSelf addr 0x2d2bf34 size 0x44 virtual false final false
static void YGNodeStyleSetAlignSelf(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaAlign alignSelf) ;

/// @brief Method YGNodeStyleSetPositionType addr 0x2d2c044 size 0x44 virtual false final false
static void YGNodeStyleSetPositionType(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaPositionType positionType) ;

/// @brief Method YGNodeStyleSetFlexWrap addr 0x2d2c0cc size 0x44 virtual false final false
static void YGNodeStyleSetFlexWrap(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaWrap flexWrap) ;

/// @brief Method YGNodeStyleSetOverflow addr 0x2d2ceec size 0x44 virtual false final false
static void YGNodeStyleSetOverflow(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaOverflow flexWrap) ;

/// @brief Method YGNodeStyleSetDisplay addr 0x2d2be24 size 0x44 virtual false final false
static void YGNodeStyleSetDisplay(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaDisplay display) ;

/// @brief Method YGNodeStyleSetFlex addr 0x2d2c15c size 0x4c virtual false final false
static void YGNodeStyleSetFlex(::cordl_internals::intptr_t node, float_t flex) ;

/// @brief Method YGNodeStyleSetFlexGrow addr 0x2d2c1f4 size 0x4c virtual false final false
static void YGNodeStyleSetFlexGrow(::cordl_internals::intptr_t node, float_t flexGrow) ;

/// @brief Method YGNodeStyleSetFlexShrink addr 0x2d2c28c size 0x4c virtual false final false
static void YGNodeStyleSetFlexShrink(::cordl_internals::intptr_t node, float_t flexShrink) ;

/// @brief Method YGNodeStyleSetFlexBasis addr 0x2d2c41c size 0x4c virtual false final false
static void YGNodeStyleSetFlexBasis(::cordl_internals::intptr_t node, float_t flexBasis) ;

/// @brief Method YGNodeStyleSetFlexBasisPercent addr 0x2d2c394 size 0x4c virtual false final false
static void YGNodeStyleSetFlexBasisPercent(::cordl_internals::intptr_t node, float_t flexBasis) ;

/// @brief Method YGNodeStyleSetFlexBasisAuto addr 0x2d2c3e0 size 0x3c virtual false final false
static void YGNodeStyleSetFlexBasisAuto(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeStyleSetWidth addr 0x2d2c5ac size 0x4c virtual false final false
static void YGNodeStyleSetWidth(::cordl_internals::intptr_t node, float_t width) ;

/// @brief Method YGNodeStyleSetWidthPercent addr 0x2d2c524 size 0x4c virtual false final false
static void YGNodeStyleSetWidthPercent(::cordl_internals::intptr_t node, float_t width) ;

/// @brief Method YGNodeStyleSetWidthAuto addr 0x2d2c570 size 0x3c virtual false final false
static void YGNodeStyleSetWidthAuto(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeStyleSetHeight addr 0x2d2c73c size 0x4c virtual false final false
static void YGNodeStyleSetHeight(::cordl_internals::intptr_t node, float_t height) ;

/// @brief Method YGNodeStyleSetHeightPercent addr 0x2d2c6b4 size 0x4c virtual false final false
static void YGNodeStyleSetHeightPercent(::cordl_internals::intptr_t node, float_t height) ;

/// @brief Method YGNodeStyleSetHeightAuto addr 0x2d2c700 size 0x3c virtual false final false
static void YGNodeStyleSetHeightAuto(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeStyleSetMinWidth addr 0x2d2ca78 size 0x4c virtual false final false
static void YGNodeStyleSetMinWidth(::cordl_internals::intptr_t node, float_t minWidth) ;

/// @brief Method YGNodeStyleSetMinWidthPercent addr 0x2d2ca2c size 0x4c virtual false final false
static void YGNodeStyleSetMinWidthPercent(::cordl_internals::intptr_t node, float_t minWidth) ;

/// @brief Method YGNodeStyleSetMinHeight addr 0x2d2cb8c size 0x4c virtual false final false
static void YGNodeStyleSetMinHeight(::cordl_internals::intptr_t node, float_t minHeight) ;

/// @brief Method YGNodeStyleSetMinHeightPercent addr 0x2d2cb40 size 0x4c virtual false final false
static void YGNodeStyleSetMinHeightPercent(::cordl_internals::intptr_t node, float_t minHeight) ;

/// @brief Method YGNodeStyleSetMaxWidth addr 0x2d2c850 size 0x4c virtual false final false
static void YGNodeStyleSetMaxWidth(::cordl_internals::intptr_t node, float_t maxWidth) ;

/// @brief Method YGNodeStyleSetMaxWidthPercent addr 0x2d2c804 size 0x4c virtual false final false
static void YGNodeStyleSetMaxWidthPercent(::cordl_internals::intptr_t node, float_t maxWidth) ;

/// @brief Method YGNodeStyleSetMaxHeight addr 0x2d2c964 size 0x4c virtual false final false
static void YGNodeStyleSetMaxHeight(::cordl_internals::intptr_t node, float_t maxHeight) ;

/// @brief Method YGNodeStyleSetMaxHeightPercent addr 0x2d2c918 size 0x4c virtual false final false
static void YGNodeStyleSetMaxHeightPercent(::cordl_internals::intptr_t node, float_t maxHeight) ;

/// @brief Method YGNodeStyleSetPosition addr 0x2d2ae38 size 0x54 virtual false final false
static void YGNodeStyleSetPosition(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge, float_t position) ;

/// @brief Method YGNodeStyleSetPositionPercent addr 0x2d2ade4 size 0x54 virtual false final false
static void YGNodeStyleSetPositionPercent(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge, float_t position) ;

/// @brief Method YGNodeStyleSetMargin addr 0x2d2b01c size 0x54 virtual false final false
static void YGNodeStyleSetMargin(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin) ;

/// @brief Method YGNodeStyleSetMarginPercent addr 0x2d2af84 size 0x54 virtual false final false
static void YGNodeStyleSetMarginPercent(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge, float_t margin) ;

/// @brief Method YGNodeStyleSetMarginAuto addr 0x2d2afd8 size 0x44 virtual false final false
static void YGNodeStyleSetMarginAuto(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge) ;

/// @brief Method YGNodeStyleSetPadding addr 0x2d2b178 size 0x54 virtual false final false
static void YGNodeStyleSetPadding(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding) ;

/// @brief Method YGNodeStyleSetPaddingPercent addr 0x2d2b124 size 0x54 virtual false final false
static void YGNodeStyleSetPaddingPercent(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge, float_t padding) ;

/// @brief Method YGNodeStyleSetBorder addr 0x2d2b21c size 0x54 virtual false final false
static void YGNodeStyleSetBorder(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge, float_t border) ;

/// @brief Method YGNodeLayoutGetLeft addr 0x2d2cc14 size 0x3c virtual false final false
static float_t YGNodeLayoutGetLeft(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeLayoutGetTop addr 0x2d2cc8c size 0x3c virtual false final false
static float_t YGNodeLayoutGetTop(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeLayoutGetRight addr 0x2d2cd04 size 0x3c virtual false final false
static float_t YGNodeLayoutGetRight(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeLayoutGetBottom addr 0x2d2cd7c size 0x3c virtual false final false
static float_t YGNodeLayoutGetBottom(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeLayoutGetWidth addr 0x2d2cdf4 size 0x3c virtual false final false
static float_t YGNodeLayoutGetWidth(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeLayoutGetHeight addr 0x2d2ce6c size 0x3c virtual false final false
static float_t YGNodeLayoutGetHeight(::cordl_internals::intptr_t node) ;

/// @brief Method YGNodeLayoutGetMargin addr 0x2d2b3a0 size 0x44 virtual false final false
static float_t YGNodeLayoutGetMargin(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge) ;

/// @brief Method YGNodeLayoutGetPadding addr 0x2d2b4e4 size 0x44 virtual false final false
static float_t YGNodeLayoutGetPadding(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge) ;

/// @brief Method YGNodeLayoutGetBorder addr 0x2d2b628 size 0x44 virtual false final false
static float_t YGNodeLayoutGetBorder(::cordl_internals::intptr_t node, ::UnityEngine::Yoga::YogaEdge edge) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Yoga::Native);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Native, "UnityEngine.Yoga", "Native");
