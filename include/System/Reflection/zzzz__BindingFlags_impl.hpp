#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::BindingFlags::BindingFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Reflection::BindingFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::BindingFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::Default{0};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::IgnoreCase{1};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::DeclaredOnly{2};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::Instance{4};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::Static{8};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::Public{16};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::NonPublic{32};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::FlattenHierarchy{64};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::InvokeMethod{256};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::CreateInstance{512};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::GetField{1024};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::SetField{2048};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::GetProperty{4096};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::SetProperty{8192};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::PutDispProperty{16384};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::PutRefDispProperty{32768};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::ExactBinding{65536};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::SuppressChangeType{131072};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::OptionalParamBinding{262144};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::IgnoreReturn{16777216};
constexpr ::System::Reflection::BindingFlags  ::System::Reflection::BindingFlags::DoNotWrapExceptions{33554432};
} // end anonymous namespace
