#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Yoga/zzzz__YogaPositionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaPositionType::YogaPositionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Yoga::YogaPositionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Yoga::YogaPositionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Yoga::YogaPositionType  ::UnityEngine::Yoga::YogaPositionType::Relative{0};
constexpr ::UnityEngine::Yoga::YogaPositionType  ::UnityEngine::Yoga::YogaPositionType::Absolute{1};
} // end anonymous namespace
