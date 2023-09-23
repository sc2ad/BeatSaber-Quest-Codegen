#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectPositionE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::InternalObjectPositionE(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE  System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::Empty{0};
constexpr System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE  System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::Top{1};
constexpr System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE  System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::Child{2};
constexpr System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE  System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::Headers{3};
