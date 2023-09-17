#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE::TEXTURE_DEVICE(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LIV::SDK::Unity::TEXTURE_DEVICE::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::LIV::SDK::Unity::TEXTURE_DEVICE::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE  ::LIV::SDK::Unity::TEXTURE_DEVICE::UNDEFINED{0u};
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE  ::LIV::SDK::Unity::TEXTURE_DEVICE::RAW{1u};
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE  ::LIV::SDK::Unity::TEXTURE_DEVICE::DIRECTX{2u};
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE  ::LIV::SDK::Unity::TEXTURE_DEVICE::OPENGL{3u};
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE  ::LIV::SDK::Unity::TEXTURE_DEVICE::VULKAN{4u};
constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE  ::LIV::SDK::Unity::TEXTURE_DEVICE::METAL{5u};
} // end anonymous namespace
