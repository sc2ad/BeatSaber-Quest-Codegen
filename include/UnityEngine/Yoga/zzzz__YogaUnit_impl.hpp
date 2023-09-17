#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Yoga/zzzz__YogaUnit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaUnit::YogaUnit(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Yoga::YogaUnit::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Yoga::YogaUnit::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Yoga::YogaUnit  ::UnityEngine::Yoga::YogaUnit::Undefined{0};
constexpr ::UnityEngine::Yoga::YogaUnit  ::UnityEngine::Yoga::YogaUnit::Point{1};
constexpr ::UnityEngine::Yoga::YogaUnit  ::UnityEngine::Yoga::YogaUnit::Percent{2};
constexpr ::UnityEngine::Yoga::YogaUnit  ::UnityEngine::Yoga::YogaUnit::Auto{3};
} // end anonymous namespace
