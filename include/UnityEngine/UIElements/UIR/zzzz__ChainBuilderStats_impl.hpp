#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
// Ctor Parameters [CppParam { name: "elementsAdded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementsRemoved", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveClipUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nonRecursiveClipUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveTransformUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveTransformUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveOpacityUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveOpacityUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveVisualUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "recursiveVisualUpdatesExpanded", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nonRecursiveVisualUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dirtyProcessed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nudgeTransformed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "boneTransformed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "skipTransformed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visualUpdateTransformed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "updatedMeshAllocations", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "newMeshAllocations", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupTransformElementsChanged", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "immedateRenderersActive", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textUpdates", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats::ChainBuilderStats(uint32_t elementsAdded, uint32_t elementsRemoved, uint32_t recursiveClipUpdates, uint32_t recursiveClipUpdatesExpanded, uint32_t nonRecursiveClipUpdates, uint32_t recursiveTransformUpdates, uint32_t recursiveTransformUpdatesExpanded, uint32_t recursiveOpacityUpdates, uint32_t recursiveOpacityUpdatesExpanded, uint32_t colorUpdates, uint32_t colorUpdatesExpanded, uint32_t recursiveVisualUpdates, uint32_t recursiveVisualUpdatesExpanded, uint32_t nonRecursiveVisualUpdates, uint32_t dirtyProcessed, uint32_t nudgeTransformed, uint32_t boneTransformed, uint32_t skipTransformed, uint32_t visualUpdateTransformed, uint32_t updatedMeshAllocations, uint32_t newMeshAllocations, uint32_t groupTransformElementsChanged, uint32_t immedateRenderersActive, uint32_t textUpdates) noexcept : ::bs_hook::ValueTypeWrapper() {this->elementsAdded = elementsAdded;
this->elementsRemoved = elementsRemoved;
this->recursiveClipUpdates = recursiveClipUpdates;
this->recursiveClipUpdatesExpanded = recursiveClipUpdatesExpanded;
this->nonRecursiveClipUpdates = nonRecursiveClipUpdates;
this->recursiveTransformUpdates = recursiveTransformUpdates;
this->recursiveTransformUpdatesExpanded = recursiveTransformUpdatesExpanded;
this->recursiveOpacityUpdates = recursiveOpacityUpdates;
this->recursiveOpacityUpdatesExpanded = recursiveOpacityUpdatesExpanded;
this->colorUpdates = colorUpdates;
this->colorUpdatesExpanded = colorUpdatesExpanded;
this->recursiveVisualUpdates = recursiveVisualUpdates;
this->recursiveVisualUpdatesExpanded = recursiveVisualUpdatesExpanded;
this->nonRecursiveVisualUpdates = nonRecursiveVisualUpdates;
this->dirtyProcessed = dirtyProcessed;
this->nudgeTransformed = nudgeTransformed;
this->boneTransformed = boneTransformed;
this->skipTransformed = skipTransformed;
this->visualUpdateTransformed = visualUpdateTransformed;
this->updatedMeshAllocations = updatedMeshAllocations;
this->newMeshAllocations = newMeshAllocations;
this->groupTransformElementsChanged = groupTransformElementsChanged;
this->immedateRenderersActive = immedateRenderersActive;
this->textUpdates = textUpdates;
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_elementsAdded(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_elementsAdded() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_elementsRemoved(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_elementsRemoved() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_recursiveClipUpdates(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_recursiveClipUpdates() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_recursiveClipUpdatesExpanded(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_recursiveClipUpdatesExpanded() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_nonRecursiveClipUpdates(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_nonRecursiveClipUpdates() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_recursiveTransformUpdates(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_recursiveTransformUpdates() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_recursiveTransformUpdatesExpanded(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_recursiveTransformUpdatesExpanded() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_recursiveOpacityUpdates(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_recursiveOpacityUpdates() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_recursiveOpacityUpdatesExpanded(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_recursiveOpacityUpdatesExpanded() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_colorUpdates(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x24>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_colorUpdates() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x24>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_colorUpdatesExpanded(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x28>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_colorUpdatesExpanded() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_recursiveVisualUpdates(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x2c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_recursiveVisualUpdates() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x2c>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_recursiveVisualUpdatesExpanded(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_recursiveVisualUpdatesExpanded() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_nonRecursiveVisualUpdates(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x34>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_nonRecursiveVisualUpdates() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x34>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_dirtyProcessed(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x38>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_dirtyProcessed() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x38>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_nudgeTransformed(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x3c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_nudgeTransformed() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x3c>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_boneTransformed(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x40>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_boneTransformed() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x40>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_skipTransformed(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x44>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_skipTransformed() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x44>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_visualUpdateTransformed(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x48>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_visualUpdateTransformed() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x48>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_updatedMeshAllocations(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_updatedMeshAllocations() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4c>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_newMeshAllocations(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x50>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_newMeshAllocations() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x50>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_groupTransformElementsChanged(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x54>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_groupTransformElementsChanged() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x54>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_immedateRenderersActive(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x58>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_immedateRenderersActive() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x58>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::ChainBuilderStats::__set_textUpdates(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x5c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::ChainBuilderStats::__get_textUpdates() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x5c>(this->__instance);
}
} // end anonymous namespace
