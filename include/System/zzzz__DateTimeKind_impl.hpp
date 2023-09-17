#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__DateTimeKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeKind::DateTimeKind(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::DateTimeKind::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DateTimeKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::DateTimeKind  ::System::DateTimeKind::Unspecified{0};
constexpr ::System::DateTimeKind  ::System::DateTimeKind::Utc{1};
constexpr ::System::DateTimeKind  ::System::DateTimeKind::Local{2};
} // end anonymous namespace
