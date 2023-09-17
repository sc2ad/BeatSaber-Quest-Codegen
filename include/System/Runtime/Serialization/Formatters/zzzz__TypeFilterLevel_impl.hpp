#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/Serialization/Formatters/zzzz__TypeFilterLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel::TypeFilterLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::Serialization::Formatters::TypeFilterLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::Formatters::TypeFilterLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel  ::System::Runtime::Serialization::Formatters::TypeFilterLevel::Low{2};
constexpr ::System::Runtime::Serialization::Formatters::TypeFilterLevel  ::System::Runtime::Serialization::Formatters::TypeFilterLevel::Full{3};
} // end anonymous namespace
