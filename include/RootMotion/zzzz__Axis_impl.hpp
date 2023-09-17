#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "RootMotion/zzzz__Axis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::Axis::Axis(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::RootMotion::Axis::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::RootMotion::Axis::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::RootMotion::Axis  ::RootMotion::Axis::X{0};
constexpr ::RootMotion::Axis  ::RootMotion::Axis::Y{1};
constexpr ::RootMotion::Axis  ::RootMotion::Axis::Z{2};
} // end anonymous namespace
