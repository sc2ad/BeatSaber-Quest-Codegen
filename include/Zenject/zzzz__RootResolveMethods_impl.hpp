#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Zenject/zzzz__RootResolveMethods_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::RootResolveMethods::RootResolveMethods(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Zenject::RootResolveMethods::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Zenject::RootResolveMethods::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Zenject::RootResolveMethods  ::Zenject::RootResolveMethods::NonLazyOnly{0};
constexpr ::Zenject::RootResolveMethods  ::Zenject::RootResolveMethods::All{1};
} // end anonymous namespace
