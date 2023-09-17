#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__LogEventName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LogEventName::LogEventName(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::LogEventName::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::LogEventName::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::Unknown{0};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::AdClick{1};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::AdImpression{2};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrCompleteRegistration{3};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrTutorialCompletion{4};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::Contact{5};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::CustomizeProduct{6};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::Donate{7};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::FindLocation{8};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrRate{9};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::Schedule{10};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrSearch{11};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::SmartTrial{12};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::SubmitApplication{13};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::Subscribe{14};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrContentView{15};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrSdkInitialize{16};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrSdkBackgroundStatusAvailable{17};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrSdkBackgroundStatusDenied{18};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrSdkBackgroundStatusRestricted{19};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrAddPaymentInfo{20};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrAddToCart{21};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrAddToWishlist{22};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrInitiatedCheckout{23};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrPurchase{24};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrCatalogUpdate{25};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrPurchaseFailed{26};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrPurchaseRestored{27};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::SubscriptionInitiatedCheckout{28};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::SubscriptionFailed{29};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::SubscriptionRestore{30};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrLevelAchieved{31};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrAchievementUnlocked{32};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrSpentCredits{33};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrObtainPushToken{34};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrPushOpened{35};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrActivateApp{36};
constexpr ::Oculus::Platform::LogEventName  ::Oculus::Platform::LogEventName::VrDeactivateApp{37};
} // end anonymous namespace
