#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/zzzz__ThreadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ThreadState::ThreadState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::ThreadState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::ThreadState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::Running{0};
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::StopRequested{1};
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::SuspendRequested{2};
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::Background{4};
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::Unstarted{8};
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::Stopped{16};
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::WaitSleepJoin{32};
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::Suspended{64};
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::AbortRequested{128};
constexpr ::System::Threading::ThreadState  ::System::Threading::ThreadState::Aborted{256};
} // end anonymous namespace
