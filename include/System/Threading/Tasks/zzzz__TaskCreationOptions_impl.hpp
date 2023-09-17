#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::TaskCreationOptions::TaskCreationOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::Tasks::TaskCreationOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::Tasks::TaskCreationOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::Tasks::TaskCreationOptions  ::System::Threading::Tasks::TaskCreationOptions::None{0};
constexpr ::System::Threading::Tasks::TaskCreationOptions  ::System::Threading::Tasks::TaskCreationOptions::PreferFairness{1};
constexpr ::System::Threading::Tasks::TaskCreationOptions  ::System::Threading::Tasks::TaskCreationOptions::LongRunning{2};
constexpr ::System::Threading::Tasks::TaskCreationOptions  ::System::Threading::Tasks::TaskCreationOptions::AttachedToParent{4};
constexpr ::System::Threading::Tasks::TaskCreationOptions  ::System::Threading::Tasks::TaskCreationOptions::DenyChildAttach{8};
constexpr ::System::Threading::Tasks::TaskCreationOptions  ::System::Threading::Tasks::TaskCreationOptions::HideScheduler{16};
constexpr ::System::Threading::Tasks::TaskCreationOptions  ::System::Threading::Tasks::TaskCreationOptions::RunContinuationsAsynchronously{64};
} // end anonymous namespace
