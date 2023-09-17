#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::TraceEventType::TraceEventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Diagnostics::TraceEventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::TraceEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Critical{1};
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Error{2};
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Warning{4};
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Information{8};
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Verbose{16};
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Start{256};
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Stop{512};
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Suspend{1024};
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Resume{2048};
constexpr ::System::Diagnostics::TraceEventType  ::System::Diagnostics::TraceEventType::Transfer{4096};
} // end anonymous namespace
