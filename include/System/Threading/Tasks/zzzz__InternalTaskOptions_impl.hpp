#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::InternalTaskOptions::InternalTaskOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::Tasks::InternalTaskOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::Tasks::InternalTaskOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::Tasks::InternalTaskOptions  ::System::Threading::Tasks::InternalTaskOptions::None{0};
constexpr ::System::Threading::Tasks::InternalTaskOptions  ::System::Threading::Tasks::InternalTaskOptions::InternalOptionsMask{65280};
constexpr ::System::Threading::Tasks::InternalTaskOptions  ::System::Threading::Tasks::InternalTaskOptions::ContinuationTask{512};
constexpr ::System::Threading::Tasks::InternalTaskOptions  ::System::Threading::Tasks::InternalTaskOptions::PromiseTask{1024};
constexpr ::System::Threading::Tasks::InternalTaskOptions  ::System::Threading::Tasks::InternalTaskOptions::LazyCancellation{4096};
constexpr ::System::Threading::Tasks::InternalTaskOptions  ::System::Threading::Tasks::InternalTaskOptions::QueuedByRuntime{8192};
constexpr ::System::Threading::Tasks::InternalTaskOptions  ::System::Threading::Tasks::InternalTaskOptions::DoNotDispose{16384};
} // end anonymous namespace
