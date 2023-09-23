#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::DayOfWeek::DayOfWeek(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::DayOfWeek::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::DayOfWeek::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::DayOfWeek  System::DayOfWeek::Sunday{0};
constexpr System::DayOfWeek  System::DayOfWeek::Monday{1};
constexpr System::DayOfWeek  System::DayOfWeek::Tuesday{2};
constexpr System::DayOfWeek  System::DayOfWeek::Wednesday{3};
constexpr System::DayOfWeek  System::DayOfWeek::Thursday{4};
constexpr System::DayOfWeek  System::DayOfWeek::Friday{5};
constexpr System::DayOfWeek  System::DayOfWeek::Saturday{6};
