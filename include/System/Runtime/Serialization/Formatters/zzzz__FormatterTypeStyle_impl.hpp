#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle::FormatterTypeStyle(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle  ::System::Runtime::Serialization::Formatters::FormatterTypeStyle::TypesWhenNeeded{0};
constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle  ::System::Runtime::Serialization::Formatters::FormatterTypeStyle::TypesAlways{1};
constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle  ::System::Runtime::Serialization::Formatters::FormatterTypeStyle::XsdString{2};
} // end anonymous namespace
