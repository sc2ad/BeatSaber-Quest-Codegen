#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Yoga/zzzz__YogaSize_def.hpp"
// Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaSize::YogaSize(float_t width, float_t height) noexcept : ::bs_hook::ValueTypeWrapper() {this->width = width;
this->height = height;
}
constexpr void ::UnityEngine::Yoga::YogaSize::__set_width(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Yoga::YogaSize::__get_width() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Yoga::YogaSize::__set_height(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Yoga::YogaSize::__get_height() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
} // end anonymous namespace
