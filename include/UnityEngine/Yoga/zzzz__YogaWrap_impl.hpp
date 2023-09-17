#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Yoga/zzzz__YogaWrap_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Yoga::YogaWrap::YogaWrap(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Yoga::YogaWrap::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Yoga::YogaWrap::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Yoga::YogaWrap  ::UnityEngine::Yoga::YogaWrap::NoWrap{0};
constexpr ::UnityEngine::Yoga::YogaWrap  ::UnityEngine::Yoga::YogaWrap::Wrap{1};
constexpr ::UnityEngine::Yoga::YogaWrap  ::UnityEngine::Yoga::YogaWrap::WrapReverse{2};
} // end anonymous namespace
