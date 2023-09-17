#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/zzzz__RuntimeArgumentHandle_def.hpp"
// Ctor Parameters [CppParam { name: "args", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::RuntimeArgumentHandle::RuntimeArgumentHandle(::cordl_internals::intptr_t args) noexcept : ::bs_hook::ValueTypeWrapper() {this->args = args;
}
constexpr void ::System::RuntimeArgumentHandle::__set_args(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::System::RuntimeArgumentHandle::__get_args() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
} // end anonymous namespace
