#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Threading/zzzz__SynchronizationContextProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Threading::SynchronizationContextProperties::SynchronizationContextProperties(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Threading::SynchronizationContextProperties::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Threading::SynchronizationContextProperties::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Threading::SynchronizationContextProperties  System::Threading::SynchronizationContextProperties::None{0};
constexpr System::Threading::SynchronizationContextProperties  System::Threading::SynchronizationContextProperties::RequireWaitNotification{1};
