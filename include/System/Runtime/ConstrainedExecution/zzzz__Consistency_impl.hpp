#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Consistency_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::ConstrainedExecution::Consistency::Consistency(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::ConstrainedExecution::Consistency::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::ConstrainedExecution::Consistency::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::ConstrainedExecution::Consistency  System::Runtime::ConstrainedExecution::Consistency::MayCorruptProcess{0};
constexpr System::Runtime::ConstrainedExecution::Consistency  System::Runtime::ConstrainedExecution::Consistency::MayCorruptAppDomain{1};
constexpr System::Runtime::ConstrainedExecution::Consistency  System::Runtime::ConstrainedExecution::Consistency::MayCorruptInstance{2};
constexpr System::Runtime::ConstrainedExecution::Consistency  System::Runtime::ConstrainedExecution::Consistency::WillNotCorruptState{3};
