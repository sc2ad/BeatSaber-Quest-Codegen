#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__ReportRequestResponse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::ReportRequestResponse::ReportRequestResponse(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::ReportRequestResponse::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::ReportRequestResponse::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Unknown{0};
constexpr Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Handled{1};
constexpr Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Unhandled{2};
constexpr Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Unavailable{3};
