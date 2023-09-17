#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__ComputedTransitionProperty_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}") }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::ComputedTransitionProperty::ComputedTransitionProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t,float_t> easingCurve) noexcept : ::bs_hook::ValueTypeWrapper() {this->id = id;
this->durationMs = durationMs;
this->delayMs = delayMs;
this->easingCurve = easingCurve;
}
constexpr void ::UnityEngine::UIElements::ComputedTransitionProperty::__set_id(::UnityEngine::UIElements::StyleSheets::StylePropertyId value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x0>(this->__instance, std::forward<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(value));
}
constexpr ::UnityEngine::UIElements::StyleSheets::StylePropertyId ::UnityEngine::UIElements::ComputedTransitionProperty::__get_id() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::StyleSheets::StylePropertyId, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::ComputedTransitionProperty::__set_durationMs(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::ComputedTransitionProperty::__get_durationMs() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::ComputedTransitionProperty::__set_delayMs(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::ComputedTransitionProperty::__get_delayMs() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::ComputedTransitionProperty::__set_easingCurve(::System::Func_2<float_t,float_t> value)  {
::cordl_internals::setInstanceField<::System::Func_2<float_t,float_t>, 0x10>(this->__instance, std::forward<::System::Func_2<float_t,float_t>>(value));
}
constexpr ::System::Func_2<float_t,float_t> ::UnityEngine::UIElements::ComputedTransitionProperty::__get_easingCurve() const {
return ::cordl_internals::getInstanceField<::System::Func_2<float_t,float_t>, 0x10>(this->__instance);
}
} // end anonymous namespace
