#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityOpus/zzzz__ErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityOpus::ErrorCode::ErrorCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityOpus::ErrorCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityOpus::ErrorCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityOpus::ErrorCode  UnityOpus::ErrorCode::OK{0};
constexpr UnityOpus::ErrorCode  UnityOpus::ErrorCode::BadArg{-1};
constexpr UnityOpus::ErrorCode  UnityOpus::ErrorCode::BufferTooSmall{-2};
constexpr UnityOpus::ErrorCode  UnityOpus::ErrorCode::InternalError{-3};
constexpr UnityOpus::ErrorCode  UnityOpus::ErrorCode::InvalidPacket{-4};
constexpr UnityOpus::ErrorCode  UnityOpus::ErrorCode::Unimplemented{-5};
constexpr UnityOpus::ErrorCode  UnityOpus::ErrorCode::InvalidState{-6};
constexpr UnityOpus::ErrorCode  UnityOpus::ErrorCode::AllocFail{-7};
