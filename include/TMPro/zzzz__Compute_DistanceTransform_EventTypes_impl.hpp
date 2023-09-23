#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/zzzz__Compute_DistanceTransform_EventTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::Compute_DistanceTransform_EventTypes::Compute_DistanceTransform_EventTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::Compute_DistanceTransform_EventTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::Compute_DistanceTransform_EventTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::Compute_DistanceTransform_EventTypes  TMPro::Compute_DistanceTransform_EventTypes::Processing{0};
constexpr TMPro::Compute_DistanceTransform_EventTypes  TMPro::Compute_DistanceTransform_EventTypes::Completed{1};
