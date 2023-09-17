#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FFTWindow::FFTWindow(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::FFTWindow::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::FFTWindow::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::FFTWindow  ::UnityEngine::FFTWindow::Rectangular{0};
constexpr ::UnityEngine::FFTWindow  ::UnityEngine::FFTWindow::Triangle{1};
constexpr ::UnityEngine::FFTWindow  ::UnityEngine::FFTWindow::Hamming{2};
constexpr ::UnityEngine::FFTWindow  ::UnityEngine::FFTWindow::Hanning{3};
constexpr ::UnityEngine::FFTWindow  ::UnityEngine::FFTWindow::Blackman{4};
constexpr ::UnityEngine::FFTWindow  ::UnityEngine::FFTWindow::BlackmanHarris{5};
} // end anonymous namespace
