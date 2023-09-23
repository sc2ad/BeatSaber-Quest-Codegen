#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::EaseType::EaseType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::EaseType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::EaseType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::None{0};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::Linear{1};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InSine{2};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutSine{3};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutSine{4};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InQuad{5};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutQuad{6};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutQuad{7};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InCubic{8};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutCubic{9};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutCubic{10};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InQuart{11};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutQuart{12};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutQuart{13};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InQuint{14};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutQuint{15};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutQuint{16};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InExpo{17};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutExpo{18};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutExpo{19};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InCirc{20};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutCirc{21};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutCirc{22};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InBack{23};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutBack{24};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutBack{25};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InElastic{26};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutElastic{27};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutElastic{28};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InBounce{29};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::OutBounce{30};
constexpr GlobalNamespace::EaseType  GlobalNamespace::EaseType::InOutBounce{31};
