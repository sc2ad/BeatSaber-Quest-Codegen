#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Diagnostics::Tracing::EventKeywords::EventKeywords(int64_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Diagnostics::Tracing::EventKeywords::__set_value__(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Diagnostics::Tracing::EventKeywords::__get_value__() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::None{0};
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::All{-1};
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::MicrosoftTelemetry{562949953421312};
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::WdiContext{562949953421312};
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::WdiDiagnostic{1125899906842624};
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::Sqm{2251799813685248};
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::AuditFailure{4503599627370496};
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::AuditSuccess{9007199254740992};
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::CorrelationHint{4503599627370496};
constexpr System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::EventLogClassic{36028797018963968};
