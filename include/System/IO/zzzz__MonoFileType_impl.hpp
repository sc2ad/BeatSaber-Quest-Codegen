#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/IO/zzzz__MonoFileType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MonoFileType::MonoFileType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::IO::MonoFileType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::IO::MonoFileType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::IO::MonoFileType  ::System::IO::MonoFileType::Unknown{0};
constexpr ::System::IO::MonoFileType  ::System::IO::MonoFileType::Disk{1};
constexpr ::System::IO::MonoFileType  ::System::IO::MonoFileType::Char{2};
constexpr ::System::IO::MonoFileType  ::System::IO::MonoFileType::Pipe{3};
constexpr ::System::IO::MonoFileType  ::System::IO::MonoFileType::Remote{32768};
} // end anonymous namespace
