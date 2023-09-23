#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Zenject/zzzz__PoolExpandMethods_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::PoolExpandMethods::PoolExpandMethods(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Zenject::PoolExpandMethods::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::PoolExpandMethods::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Zenject::PoolExpandMethods  Zenject::PoolExpandMethods::OneAtATime{0};
constexpr Zenject::PoolExpandMethods  Zenject::PoolExpandMethods::Double{1};
constexpr Zenject::PoolExpandMethods  Zenject::PoolExpandMethods::Disabled{2};
