#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
// Ctor Parameters [CppParam { name: "m_ClipInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorClipInfo::AnimatorClipInfo(int32_t m_ClipInstanceID, float_t m_Weight) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_ClipInstanceID = m_ClipInstanceID;
this->m_Weight = m_Weight;
}
constexpr void ::UnityEngine::AnimatorClipInfo::__set_m_ClipInstanceID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::AnimatorClipInfo::__get_m_ClipInstanceID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::AnimatorClipInfo::__set_m_Weight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::AnimatorClipInfo::__get_m_Weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
} // end anonymous namespace
