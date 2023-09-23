#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "RootMotion/zzzz__InterpolationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr RootMotion::InterpolationMode::InterpolationMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void RootMotion::InterpolationMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t RootMotion::InterpolationMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::None{0};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InOutCubic{1};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InOutQuintic{2};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InOutSine{3};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InQuintic{4};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InQuartic{5};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InCubic{6};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InQuadratic{7};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InElastic{8};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InElasticSmall{9};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InElasticBig{10};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InSine{11};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::InBack{12};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutQuintic{13};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutQuartic{14};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutCubic{15};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutInCubic{16};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutInQuartic{17};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutElastic{18};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutElasticSmall{19};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutElasticBig{20};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutSine{21};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutBack{22};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutBackCubic{23};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::OutBackQuartic{24};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::BackInCubic{25};
constexpr RootMotion::InterpolationMode  RootMotion::InterpolationMode::BackInQuartic{26};
