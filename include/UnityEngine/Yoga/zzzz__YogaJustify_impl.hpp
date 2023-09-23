#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Yoga/zzzz__YogaJustify_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Yoga::YogaJustify::YogaJustify(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Yoga::YogaJustify::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Yoga::YogaJustify::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Yoga::YogaJustify  UnityEngine::Yoga::YogaJustify::FlexStart{0};
constexpr UnityEngine::Yoga::YogaJustify  UnityEngine::Yoga::YogaJustify::Center{1};
constexpr UnityEngine::Yoga::YogaJustify  UnityEngine::Yoga::YogaJustify::FlexEnd{2};
constexpr UnityEngine::Yoga::YogaJustify  UnityEngine::Yoga::YogaJustify::SpaceBetween{3};
constexpr UnityEngine::Yoga::YogaJustify  UnityEngine::Yoga::YogaJustify::SpaceAround{4};
