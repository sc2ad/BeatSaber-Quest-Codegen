#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Zenject/zzzz__ScopeTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::ScopeTypes::ScopeTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Zenject::ScopeTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::ScopeTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Zenject::ScopeTypes  Zenject::ScopeTypes::Unset{0};
constexpr Zenject::ScopeTypes  Zenject::ScopeTypes::Transient{1};
constexpr Zenject::ScopeTypes  Zenject::ScopeTypes::Singleton{2};
