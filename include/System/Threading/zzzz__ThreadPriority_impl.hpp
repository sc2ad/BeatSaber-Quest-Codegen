#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ThreadPriority::ThreadPriority(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::ThreadPriority::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::ThreadPriority::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::ThreadPriority  ::System::Threading::ThreadPriority::Lowest{0};
constexpr ::System::Threading::ThreadPriority  ::System::Threading::ThreadPriority::BelowNormal{1};
constexpr ::System::Threading::ThreadPriority  ::System::Threading::ThreadPriority::Normal{2};
constexpr ::System::Threading::ThreadPriority  ::System::Threading::ThreadPriority::AboveNormal{3};
constexpr ::System::Threading::ThreadPriority  ::System::Threading::ThreadPriority::Highest{4};
} // end anonymous namespace
