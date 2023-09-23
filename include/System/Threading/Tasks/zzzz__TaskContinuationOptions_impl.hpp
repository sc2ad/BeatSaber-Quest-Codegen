#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::Tasks::TaskContinuationOptions::TaskContinuationOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Threading::Tasks::TaskContinuationOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::Tasks::TaskContinuationOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::None{0};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::PreferFairness{1};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::LongRunning{2};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::AttachedToParent{4};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::DenyChildAttach{8};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::HideScheduler{16};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::LazyCancellation{32};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::RunContinuationsAsynchronously{64};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::NotOnRanToCompletion{65536};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::NotOnFaulted{131072};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::NotOnCanceled{262144};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::OnlyOnRanToCompletion{393216};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::OnlyOnFaulted{327680};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::OnlyOnCanceled{196608};
constexpr System::Threading::Tasks::TaskContinuationOptions  System::Threading::Tasks::TaskContinuationOptions::ExecuteSynchronously{524288};
