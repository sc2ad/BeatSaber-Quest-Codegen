#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Zenject/zzzz__ValidationErrorResponses_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::ValidationErrorResponses::ValidationErrorResponses(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Zenject::ValidationErrorResponses::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Zenject::ValidationErrorResponses::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Zenject::ValidationErrorResponses  ::Zenject::ValidationErrorResponses::Log{0};
constexpr ::Zenject::ValidationErrorResponses  ::Zenject::ValidationErrorResponses::Throw{1};
} // end anonymous namespace
