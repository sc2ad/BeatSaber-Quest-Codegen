#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus::ValueTaskSourceStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::Tasks::Sources::ValueTaskSourceStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::Tasks::Sources::ValueTaskSourceStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus  ::System::Threading::Tasks::Sources::ValueTaskSourceStatus::Pending{0};
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus  ::System::Threading::Tasks::Sources::ValueTaskSourceStatus::Succeeded{1};
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus  ::System::Threading::Tasks::Sources::ValueTaskSourceStatus::Faulted{2};
constexpr ::System::Threading::Tasks::Sources::ValueTaskSourceStatus  ::System::Threading::Tasks::Sources::ValueTaskSourceStatus::Canceled{3};
} // end anonymous namespace
