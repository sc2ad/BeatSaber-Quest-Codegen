#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/IO/zzzz__FileMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::FileMode::FileMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::IO::FileMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::IO::FileMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::IO::FileMode  ::System::IO::FileMode::CreateNew{1};
constexpr ::System::IO::FileMode  ::System::IO::FileMode::Create{2};
constexpr ::System::IO::FileMode  ::System::IO::FileMode::Open{3};
constexpr ::System::IO::FileMode  ::System::IO::FileMode::OpenOrCreate{4};
constexpr ::System::IO::FileMode  ::System::IO::FileMode::Truncate{5};
constexpr ::System::IO::FileMode  ::System::IO::FileMode::Append{6};
} // end anonymous namespace
