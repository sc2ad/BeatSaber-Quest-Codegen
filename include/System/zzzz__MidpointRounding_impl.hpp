#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__MidpointRounding_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::MidpointRounding::MidpointRounding(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::MidpointRounding::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::MidpointRounding::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::MidpointRounding  ::System::MidpointRounding::ToEven{0};
constexpr ::System::MidpointRounding  ::System::MidpointRounding::AwayFromZero{1};
} // end anonymous namespace
