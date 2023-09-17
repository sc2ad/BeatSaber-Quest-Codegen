#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__UILineInfo_def.hpp"
// Ctor Parameters [CppParam { name: "startCharIdx", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leading", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UILineInfo::UILineInfo(int32_t startCharIdx, int32_t height, float_t topY, float_t leading) noexcept : ::bs_hook::ValueTypeWrapper() {this->startCharIdx = startCharIdx;
this->height = height;
this->topY = topY;
this->leading = leading;
}
constexpr void ::UnityEngine::UILineInfo::__set_startCharIdx(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UILineInfo::__get_startCharIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UILineInfo::__set_height(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UILineInfo::__get_height() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::UILineInfo::__set_topY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UILineInfo::__get_topY() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UILineInfo::__set_leading(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UILineInfo::__get_leading() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
} // end anonymous namespace
