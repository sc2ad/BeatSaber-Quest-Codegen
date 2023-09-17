#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Reflection/zzzz__PInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::PInfo::PInfo(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Reflection::PInfo::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::PInfo::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Reflection::PInfo  ::System::Reflection::PInfo::Attributes{1};
constexpr ::System::Reflection::PInfo  ::System::Reflection::PInfo::GetMethod{2};
constexpr ::System::Reflection::PInfo  ::System::Reflection::PInfo::SetMethod{4};
constexpr ::System::Reflection::PInfo  ::System::Reflection::PInfo::ReflectedType{8};
constexpr ::System::Reflection::PInfo  ::System::Reflection::PInfo::DeclaringType{16};
constexpr ::System::Reflection::PInfo  ::System::Reflection::PInfo::Name{32};
} // end anonymous namespace
