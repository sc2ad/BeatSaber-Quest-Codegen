#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::WebExceptionStatus::WebExceptionStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::WebExceptionStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::WebExceptionStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::Success{0};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::NameResolutionFailure{1};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ConnectFailure{2};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ReceiveFailure{3};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::SendFailure{4};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::PipelineFailure{5};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::RequestCanceled{6};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ProtocolError{7};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ConnectionClosed{8};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::TrustFailure{9};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::SecureChannelFailure{10};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ServerProtocolViolation{11};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::KeepAliveFailure{12};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::Pending{13};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::Timeout{14};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::ProxyNameResolutionFailure{15};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::UnknownError{16};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::MessageLengthLimitExceeded{17};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::CacheEntryNotFound{18};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::RequestProhibitedByCachePolicy{19};
constexpr System::Net::WebExceptionStatus  System::Net::WebExceptionStatus::RequestProhibitedByProxy{20};
