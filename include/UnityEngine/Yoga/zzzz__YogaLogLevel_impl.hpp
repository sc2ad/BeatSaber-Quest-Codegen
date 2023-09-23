#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Yoga/zzzz__YogaLogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Yoga::YogaLogLevel::YogaLogLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Yoga::YogaLogLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Yoga::YogaLogLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Error{0};
constexpr UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Warn{1};
constexpr UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Info{2};
constexpr UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Debug{3};
constexpr UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Verbose{4};
constexpr UnityEngine::Yoga::YogaLogLevel  UnityEngine::Yoga::YogaLogLevel::Fatal{5};
