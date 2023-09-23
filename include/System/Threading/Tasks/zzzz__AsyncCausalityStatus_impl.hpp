#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Threading/Tasks/zzzz__AsyncCausalityStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::Tasks::AsyncCausalityStatus::AsyncCausalityStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Threading::Tasks::AsyncCausalityStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::AsyncCausalityStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Started{0};
constexpr System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Completed{1};
constexpr System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Canceled{2};
constexpr System::Threading::Tasks::AsyncCausalityStatus  System::Threading::Tasks::AsyncCausalityStatus::Error{3};
