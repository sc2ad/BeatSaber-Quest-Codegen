#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__LogEventParameter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::LogEventParameter::LogEventParameter(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::LogEventParameter::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::LogEventParameter::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::Unknown{0};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrCurrency{1};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrRegistrationMethod{2};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrContentType{3};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrContent{4};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrContentId{5};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrSearchString{6};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrSuccess{7};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrMaxRatingValue{8};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrPaymentInfoAvailable{9};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrNumItems{10};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrLevel{11};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrDescription{12};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::AdType{13};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrOrderId{14};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::EventName{15};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::LogTime{16};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::ImplicitlyLogged{17};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::InBackground{18};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrPushCampaign{19};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrPushAction{20};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrIapProductType{21};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrContentTitle{22};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrTransactionId{23};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrTransactionDate{24};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrIapSubsPeriod{25};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrIapIsStartTrial{26};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrIapHasFreeTrial{27};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrIapTrialPeriod{28};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::VrIapTrialPrice{29};
constexpr Oculus::Platform::LogEventParameter  Oculus::Platform::LogEventParameter::SessionId{30};
