#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LiteNetLib/zzzz__ShutdownResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr LiteNetLib::ShutdownResult::ShutdownResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LiteNetLib::ShutdownResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::ShutdownResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr LiteNetLib::ShutdownResult  LiteNetLib::ShutdownResult::None{0};
constexpr LiteNetLib::ShutdownResult  LiteNetLib::ShutdownResult::Success{1};
constexpr LiteNetLib::ShutdownResult  LiteNetLib::ShutdownResult::WasConnected{2};
