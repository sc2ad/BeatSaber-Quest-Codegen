#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/UIR/zzzz__Transform3x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "v0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "v1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "v2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Transform3x4::Transform3x4(::UnityEngine::Vector4 v0, ::UnityEngine::Vector4 v1, ::UnityEngine::Vector4 v2) noexcept : ::bs_hook::ValueTypeWrapper() {this->v0 = v0;
this->v1 = v1;
this->v2 = v2;
}
constexpr void ::UnityEngine::UIElements::UIR::Transform3x4::__set_v0(::UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x0>(this->__instance, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4 ::UnityEngine::UIElements::UIR::Transform3x4::__get_v0() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Transform3x4::__set_v1(::UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x10>(this->__instance, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4 ::UnityEngine::UIElements::UIR::Transform3x4::__get_v1() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Transform3x4::__set_v2(::UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x20>(this->__instance, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4 ::UnityEngine::UIElements::UIR::Transform3x4::__get_v2() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x20>(this->__instance);
}
} // end anonymous namespace
