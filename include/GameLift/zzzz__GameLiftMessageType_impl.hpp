#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GameLift/zzzz__GameLiftMessageType_def.hpp"
namespace {
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GameLift::GameLiftMessageType::GameLiftMessageType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GameLift::GameLiftMessageType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GameLift::GameLiftMessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GameLift::GameLiftMessageType  GameLift::GameLiftMessageType::AuthenticateUserRequest{0};
constexpr GameLift::GameLiftMessageType  GameLift::GameLiftMessageType::AuthenticateUserResponse{1};
constexpr GameLift::GameLiftMessageType  GameLift::GameLiftMessageType::MessageReceivedAcknowledge{2};
constexpr GameLift::GameLiftMessageType  GameLift::GameLiftMessageType::MultipartMessage{3};
} // end anonymous namespace
