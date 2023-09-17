#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LIV/SDK/Unity/zzzz__TEXTURE_TYPE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::TEXTURE_TYPE::TEXTURE_TYPE(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LIV::SDK::Unity::TEXTURE_TYPE::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::LIV::SDK::Unity::TEXTURE_TYPE::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr ::LIV::SDK::Unity::TEXTURE_TYPE  ::LIV::SDK::Unity::TEXTURE_TYPE::UNDEFINED{0u};
constexpr ::LIV::SDK::Unity::TEXTURE_TYPE  ::LIV::SDK::Unity::TEXTURE_TYPE::COLOR_BUFFER{1u};
} // end anonymous namespace
