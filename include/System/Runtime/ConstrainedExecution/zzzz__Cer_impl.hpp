#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Cer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::ConstrainedExecution::Cer::Cer(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::ConstrainedExecution::Cer::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::ConstrainedExecution::Cer::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::ConstrainedExecution::Cer  System::Runtime::ConstrainedExecution::Cer::None{0};
constexpr System::Runtime::ConstrainedExecution::Cer  System::Runtime::ConstrainedExecution::Cer::MayFail{1};
constexpr System::Runtime::ConstrainedExecution::Cer  System::Runtime::ConstrainedExecution::Cer::Success{2};
