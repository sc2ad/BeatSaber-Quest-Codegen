#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "IgnoranceCore/zzzz__IgnoranceCommandPacket_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceCommandType_def.hpp"
// Ctor Parameters [CppParam { name: "Type", ty: "::IgnoranceCore::IgnoranceCommandType", modifiers: "", def_value: Some("{}") }, CppParam { name: "PeerId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::IgnoranceCore::IgnoranceCommandPacket::IgnoranceCommandPacket(::IgnoranceCore::IgnoranceCommandType Type, uint32_t PeerId) noexcept : ::bs_hook::ValueTypeWrapper() {this->Type = Type;
this->PeerId = PeerId;
}
constexpr void ::IgnoranceCore::IgnoranceCommandPacket::__set_Type(::IgnoranceCore::IgnoranceCommandType value)  {
::cordl_internals::setInstanceField<::IgnoranceCore::IgnoranceCommandType, 0x0>(this->__instance, std::forward<::IgnoranceCore::IgnoranceCommandType>(value));
}
constexpr ::IgnoranceCore::IgnoranceCommandType ::IgnoranceCore::IgnoranceCommandPacket::__get_Type() const {
return ::cordl_internals::getInstanceField<::IgnoranceCore::IgnoranceCommandType, 0x0>(this->__instance);
}
constexpr void ::IgnoranceCore::IgnoranceCommandPacket::__set_PeerId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::IgnoranceCore::IgnoranceCommandPacket::__get_PeerId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
} // end anonymous namespace
