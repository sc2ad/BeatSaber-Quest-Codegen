#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Zenject/zzzz__BindingInheritanceMethods_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::BindingInheritanceMethods::BindingInheritanceMethods(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Zenject::BindingInheritanceMethods::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::BindingInheritanceMethods::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::None{0};
constexpr Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::CopyIntoAll{1};
constexpr Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::CopyDirectOnly{2};
constexpr Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::MoveIntoAll{3};
constexpr Zenject::BindingInheritanceMethods  Zenject::BindingInheritanceMethods::MoveDirectOnly{4};
