#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/IO/zzzz__FileShare_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::IO::FileShare::FileShare(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::IO::FileShare::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::IO::FileShare::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::IO::FileShare  System::IO::FileShare::None{0};
constexpr System::IO::FileShare  System::IO::FileShare::Read{1};
constexpr System::IO::FileShare  System::IO::FileShare::Write{2};
constexpr System::IO::FileShare  System::IO::FileShare::ReadWrite{3};
constexpr System::IO::FileShare  System::IO::FileShare::Delete{4};
constexpr System::IO::FileShare  System::IO::FileShare::Inheritable{16};
