#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Reflection/zzzz__ExceptionHandlingClauseOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Reflection::ExceptionHandlingClauseOptions::ExceptionHandlingClauseOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Reflection::ExceptionHandlingClauseOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::ExceptionHandlingClauseOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Clause{0};
constexpr System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Filter{1};
constexpr System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Finally{2};
constexpr System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Fault{4};
