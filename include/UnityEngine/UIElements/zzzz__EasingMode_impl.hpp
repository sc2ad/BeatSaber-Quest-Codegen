#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EasingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::EasingMode::EasingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::EasingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::EasingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::Ease{0};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseIn{1};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseOut{2};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInOut{3};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::Linear{4};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInSine{5};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseOutSine{6};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInOutSine{7};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInCubic{8};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseOutCubic{9};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInOutCubic{10};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInCirc{11};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseOutCirc{12};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInOutCirc{13};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInElastic{14};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseOutElastic{15};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInOutElastic{16};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInBack{17};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseOutBack{18};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInOutBack{19};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInBounce{20};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseOutBounce{21};
constexpr UnityEngine::UIElements::EasingMode  UnityEngine::UIElements::EasingMode::EaseInOutBounce{22};
