#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EIOBufferError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EIOBufferError::EIOBufferError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EIOBufferError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EIOBufferError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EIOBufferError  ::OVR::OpenVR::EIOBufferError::IOBuffer_Success{0};
constexpr ::OVR::OpenVR::EIOBufferError  ::OVR::OpenVR::EIOBufferError::IOBuffer_OperationFailed{100};
constexpr ::OVR::OpenVR::EIOBufferError  ::OVR::OpenVR::EIOBufferError::IOBuffer_InvalidHandle{101};
constexpr ::OVR::OpenVR::EIOBufferError  ::OVR::OpenVR::EIOBufferError::IOBuffer_InvalidArgument{102};
constexpr ::OVR::OpenVR::EIOBufferError  ::OVR::OpenVR::EIOBufferError::IOBuffer_PathExists{103};
constexpr ::OVR::OpenVR::EIOBufferError  ::OVR::OpenVR::EIOBufferError::IOBuffer_PathDoesNotExist{104};
constexpr ::OVR::OpenVR::EIOBufferError  ::OVR::OpenVR::EIOBufferError::IOBuffer_Permission{105};
} // end anonymous namespace
