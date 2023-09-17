#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/zzzz__CastHelper_1_def.hpp"
// Ctor Parameters [CppParam { name: "t", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onePointerFurtherThanT", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CastHelper_1::CastHelper_1(T t, ::cordl_internals::intptr_t onePointerFurtherThanT) noexcept : ::bs_hook::ValueTypeWrapper() {this->t = t;
this->onePointerFurtherThanT = onePointerFurtherThanT;
}
constexpr void ::UnityEngine::CastHelper_1::__set_t(T value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->__instance, std::forward<T>(value));
}
constexpr T ::UnityEngine::CastHelper_1::__get_t() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::CastHelper_1::__set_onePointerFurtherThanT(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::CastHelper_1::__get_onePointerFurtherThanT() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
} // end anonymous namespace
