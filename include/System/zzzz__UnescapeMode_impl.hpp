#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__UnescapeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::UnescapeMode::UnescapeMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::UnescapeMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::UnescapeMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::UnescapeMode  ::System::UnescapeMode::CopyOnly{0};
constexpr ::System::UnescapeMode  ::System::UnescapeMode::Escape{1};
constexpr ::System::UnescapeMode  ::System::UnescapeMode::Unescape{2};
constexpr ::System::UnescapeMode  ::System::UnescapeMode::EscapeUnescape{3};
constexpr ::System::UnescapeMode  ::System::UnescapeMode::V1ToStringFlag{4};
constexpr ::System::UnescapeMode  ::System::UnescapeMode::UnescapeAll{8};
constexpr ::System::UnescapeMode  ::System::UnescapeMode::UnescapeAllOrThrow{24};
} // end anonymous namespace
