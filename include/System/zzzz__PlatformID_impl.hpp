#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__PlatformID_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::PlatformID::PlatformID(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::PlatformID::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::PlatformID::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::PlatformID  System::PlatformID::Win32S{0};
constexpr System::PlatformID  System::PlatformID::Win32Windows{1};
constexpr System::PlatformID  System::PlatformID::Win32NT{2};
constexpr System::PlatformID  System::PlatformID::WinCE{3};
constexpr System::PlatformID  System::PlatformID::Unix{4};
constexpr System::PlatformID  System::PlatformID::Xbox{5};
constexpr System::PlatformID  System::PlatformID::MacOSX{6};
