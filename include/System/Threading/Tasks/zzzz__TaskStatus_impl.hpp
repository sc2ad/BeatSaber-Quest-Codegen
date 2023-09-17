#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/Tasks/zzzz__TaskStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::TaskStatus::TaskStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::Tasks::TaskStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::Tasks::TaskStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::Tasks::TaskStatus  ::System::Threading::Tasks::TaskStatus::Created{0};
constexpr ::System::Threading::Tasks::TaskStatus  ::System::Threading::Tasks::TaskStatus::WaitingForActivation{1};
constexpr ::System::Threading::Tasks::TaskStatus  ::System::Threading::Tasks::TaskStatus::WaitingToRun{2};
constexpr ::System::Threading::Tasks::TaskStatus  ::System::Threading::Tasks::TaskStatus::Running{3};
constexpr ::System::Threading::Tasks::TaskStatus  ::System::Threading::Tasks::TaskStatus::WaitingForChildrenToComplete{4};
constexpr ::System::Threading::Tasks::TaskStatus  ::System::Threading::Tasks::TaskStatus::RanToCompletion{5};
constexpr ::System::Threading::Tasks::TaskStatus  ::System::Threading::Tasks::TaskStatus::Canceled{6};
constexpr ::System::Threading::Tasks::TaskStatus  ::System::Threading::Tasks::TaskStatus::Faulted{7};
} // end anonymous namespace
