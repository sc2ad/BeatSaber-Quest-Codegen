#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__UriKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriKind::UriKind(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::UriKind::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::UriKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::UriKind  ::System::UriKind::RelativeOrAbsolute{0};
constexpr ::System::UriKind  ::System::UriKind::Absolute{1};
constexpr ::System::UriKind  ::System::UriKind::Relative{2};
} // end anonymous namespace
