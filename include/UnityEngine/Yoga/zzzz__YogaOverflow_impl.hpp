#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Yoga/zzzz__YogaOverflow_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Yoga::YogaOverflow::YogaOverflow(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Yoga::YogaOverflow::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Yoga::YogaOverflow::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Yoga::YogaOverflow  UnityEngine::Yoga::YogaOverflow::Visible{0};
constexpr UnityEngine::Yoga::YogaOverflow  UnityEngine::Yoga::YogaOverflow::Hidden{1};
constexpr UnityEngine::Yoga::YogaOverflow  UnityEngine::Yoga::YogaOverflow::Scroll{2};
