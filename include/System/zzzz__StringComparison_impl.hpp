#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__StringComparison_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::StringComparison::StringComparison(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::StringComparison::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::StringComparison::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::StringComparison  System::StringComparison::CurrentCulture{0};
constexpr System::StringComparison  System::StringComparison::CurrentCultureIgnoreCase{1};
constexpr System::StringComparison  System::StringComparison::InvariantCulture{2};
constexpr System::StringComparison  System::StringComparison::InvariantCultureIgnoreCase{3};
constexpr System::StringComparison  System::StringComparison::Ordinal{4};
constexpr System::StringComparison  System::StringComparison::OrdinalIgnoreCase{5};
