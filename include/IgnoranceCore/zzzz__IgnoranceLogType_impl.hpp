#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceLogType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr IgnoranceCore::IgnoranceLogType::IgnoranceLogType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void IgnoranceCore::IgnoranceLogType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t IgnoranceCore::IgnoranceLogType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr IgnoranceCore::IgnoranceLogType  IgnoranceCore::IgnoranceLogType::Quiet{0};
constexpr IgnoranceCore::IgnoranceLogType  IgnoranceCore::IgnoranceLogType::Standard{1};
constexpr IgnoranceCore::IgnoranceLogType  IgnoranceCore::IgnoranceLogType::Verbose{2};
