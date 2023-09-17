#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETextureType::ETextureType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::ETextureType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::ETextureType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::ETextureType  ::OVR::OpenVR::ETextureType::Invalid{-1};
constexpr ::OVR::OpenVR::ETextureType  ::OVR::OpenVR::ETextureType::DirectX{0};
constexpr ::OVR::OpenVR::ETextureType  ::OVR::OpenVR::ETextureType::OpenGL{1};
constexpr ::OVR::OpenVR::ETextureType  ::OVR::OpenVR::ETextureType::Vulkan{2};
constexpr ::OVR::OpenVR::ETextureType  ::OVR::OpenVR::ETextureType::IOSurface{3};
constexpr ::OVR::OpenVR::ETextureType  ::OVR::OpenVR::ETextureType::DirectX12{4};
constexpr ::OVR::OpenVR::ETextureType  ::OVR::OpenVR::ETextureType::DXGISharedHandle{5};
constexpr ::OVR::OpenVR::ETextureType  ::OVR::OpenVR::ETextureType::Metal{6};
} // end anonymous namespace
