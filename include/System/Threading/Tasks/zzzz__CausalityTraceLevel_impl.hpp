#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/Tasks/zzzz__CausalityTraceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::CausalityTraceLevel::CausalityTraceLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::Tasks::CausalityTraceLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::Tasks::CausalityTraceLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::Tasks::CausalityTraceLevel  ::System::Threading::Tasks::CausalityTraceLevel::Required{0};
constexpr ::System::Threading::Tasks::CausalityTraceLevel  ::System::Threading::Tasks::CausalityTraceLevel::Important{1};
constexpr ::System::Threading::Tasks::CausalityTraceLevel  ::System::Threading::Tasks::CausalityTraceLevel::Verbose{2};
} // end anonymous namespace
