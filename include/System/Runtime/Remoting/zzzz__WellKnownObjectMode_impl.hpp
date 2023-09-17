#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Remoting::WellKnownObjectMode::WellKnownObjectMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::Remoting::WellKnownObjectMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Remoting::WellKnownObjectMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::Remoting::WellKnownObjectMode  ::System::Runtime::Remoting::WellKnownObjectMode::Singleton{1};
constexpr ::System::Runtime::Remoting::WellKnownObjectMode  ::System::Runtime::Remoting::WellKnownObjectMode::SingleCall{2};
} // end anonymous namespace
