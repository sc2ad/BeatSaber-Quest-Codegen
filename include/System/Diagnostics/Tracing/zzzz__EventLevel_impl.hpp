#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Diagnostics::Tracing::EventLevel::EventLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Diagnostics::Tracing::EventLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Diagnostics::Tracing::EventLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::LogAlways{0};
constexpr System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Critical{1};
constexpr System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Error{2};
constexpr System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Warning{3};
constexpr System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Informational{4};
constexpr System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Verbose{5};
