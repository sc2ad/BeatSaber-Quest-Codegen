#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__UriFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UriFormat::UriFormat(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::UriFormat::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::UriFormat::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::UriFormat  ::System::UriFormat::UriEscaped{1};
constexpr ::System::UriFormat  ::System::UriFormat::Unescaped{2};
constexpr ::System::UriFormat  ::System::UriFormat::SafeUnescaped{3};
} // end anonymous namespace
