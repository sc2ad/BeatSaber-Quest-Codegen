#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/UIR/zzzz__DrawBufferRange_def.hpp"
// Ctor Parameters [CppParam { name: "firstIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minIndexVal", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertsReferenced", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::DrawBufferRange::DrawBufferRange(int32_t firstIndex, int32_t indexCount, int32_t minIndexVal, int32_t vertsReferenced) noexcept : ::bs_hook::ValueTypeWrapper() {this->firstIndex = firstIndex;
this->indexCount = indexCount;
this->minIndexVal = minIndexVal;
this->vertsReferenced = vertsReferenced;
}
constexpr void ::UnityEngine::UIElements::UIR::DrawBufferRange::__set_firstIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::DrawBufferRange::__get_firstIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::DrawBufferRange::__set_indexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::DrawBufferRange::__get_indexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::DrawBufferRange::__set_minIndexVal(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::DrawBufferRange::__get_minIndexVal() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::DrawBufferRange::__set_vertsReferenced(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::DrawBufferRange::__get_vertsReferenced() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
} // end anonymous namespace
