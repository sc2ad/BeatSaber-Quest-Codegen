#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRRenderModelError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRRenderModelError::EVRRenderModelError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRRenderModelError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRRenderModelError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::None{0};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::Loading{100};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::NotSupported{200};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::InvalidArg{300};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::InvalidModel{301};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::NoShapes{302};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::MultipleShapes{303};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::TooManyVertices{304};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::MultipleTextures{305};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::BufferTooSmall{306};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::NotEnoughNormals{307};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::NotEnoughTexCoords{308};
constexpr ::OVR::OpenVR::EVRRenderModelError  ::OVR::OpenVR::EVRRenderModelError::InvalidTexture{400};
} // end anonymous namespace
