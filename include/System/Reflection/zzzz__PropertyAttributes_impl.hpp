#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Reflection/zzzz__PropertyAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::PropertyAttributes::PropertyAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Reflection::PropertyAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::PropertyAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Reflection::PropertyAttributes  ::System::Reflection::PropertyAttributes::None{0};
constexpr ::System::Reflection::PropertyAttributes  ::System::Reflection::PropertyAttributes::SpecialName{512};
constexpr ::System::Reflection::PropertyAttributes  ::System::Reflection::PropertyAttributes::RTSpecialName{1024};
constexpr ::System::Reflection::PropertyAttributes  ::System::Reflection::PropertyAttributes::HasDefault{4096};
constexpr ::System::Reflection::PropertyAttributes  ::System::Reflection::PropertyAttributes::Reserved2{8192};
constexpr ::System::Reflection::PropertyAttributes  ::System::Reflection::PropertyAttributes::Reserved3{16384};
constexpr ::System::Reflection::PropertyAttributes  ::System::Reflection::PropertyAttributes::Reserved4{32768};
constexpr ::System::Reflection::PropertyAttributes  ::System::Reflection::PropertyAttributes::ReservedMask{62464};
} // end anonymous namespace
