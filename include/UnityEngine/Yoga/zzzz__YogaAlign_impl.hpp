#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Yoga/zzzz__YogaAlign_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Yoga::YogaAlign::YogaAlign(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Yoga::YogaAlign::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Yoga::YogaAlign::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::Auto{0};
constexpr UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::FlexStart{1};
constexpr UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::Center{2};
constexpr UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::FlexEnd{3};
constexpr UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::Stretch{4};
constexpr UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::Baseline{5};
constexpr UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::SpaceBetween{6};
constexpr UnityEngine::Yoga::YogaAlign  UnityEngine::Yoga::YogaAlign::SpaceAround{7};
