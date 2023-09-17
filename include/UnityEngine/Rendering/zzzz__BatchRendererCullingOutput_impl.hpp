#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
// Ctor Parameters [CppParam { name: "cullingJobsFence", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPlanes", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "batchVisibility", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "visibleIndices", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "visibleIndicesY", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cullingPlanesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchVisibilityCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleIndicesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchRendererCullingOutput::BatchRendererCullingOutput(::Unity::Jobs::JobHandle cullingJobsFence, ::UnityEngine::Matrix4x4 cullingMatrix, void* cullingPlanes, void* batchVisibility, void* visibleIndices, void* visibleIndicesY, int32_t cullingPlanesCount, int32_t batchVisibilityCount, int32_t visibleIndicesCount, float_t nearPlane) noexcept : ::bs_hook::ValueTypeWrapper() {this->cullingJobsFence = cullingJobsFence;
this->cullingMatrix = cullingMatrix;
this->cullingPlanes = cullingPlanes;
this->batchVisibility = batchVisibility;
this->visibleIndices = visibleIndices;
this->visibleIndicesY = visibleIndicesY;
this->cullingPlanesCount = cullingPlanesCount;
this->batchVisibilityCount = batchVisibilityCount;
this->visibleIndicesCount = visibleIndicesCount;
this->nearPlane = nearPlane;
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_cullingJobsFence(::Unity::Jobs::JobHandle value)  {
::cordl_internals::setInstanceField<::Unity::Jobs::JobHandle, 0x0>(this->__instance, std::forward<::Unity::Jobs::JobHandle>(value));
}
constexpr ::Unity::Jobs::JobHandle ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingJobsFence() const {
return ::cordl_internals::getInstanceField<::Unity::Jobs::JobHandle, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_cullingMatrix(::UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x10>(this->__instance, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4 ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_cullingPlanes(void* value)  {
::cordl_internals::setInstanceField<void*, 0x50>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingPlanes() const {
return ::cordl_internals::getInstanceField<void*, 0x50>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_batchVisibility(void* value)  {
::cordl_internals::setInstanceField<void*, 0x58>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_batchVisibility() const {
return ::cordl_internals::getInstanceField<void*, 0x58>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_visibleIndices(void* value)  {
::cordl_internals::setInstanceField<void*, 0x60>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_visibleIndices() const {
return ::cordl_internals::getInstanceField<void*, 0x60>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_visibleIndicesY(void* value)  {
::cordl_internals::setInstanceField<void*, 0x68>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_visibleIndicesY() const {
return ::cordl_internals::getInstanceField<void*, 0x68>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_cullingPlanesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_cullingPlanesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_batchVisibilityCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_batchVisibilityCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_visibleIndicesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_visibleIndicesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->__instance);
}
constexpr void ::UnityEngine::Rendering::BatchRendererCullingOutput::__set_nearPlane(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Rendering::BatchRendererCullingOutput::__get_nearPlane() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this->__instance);
}
} // end anonymous namespace
