#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "MidiParser/zzzz__MetaEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MidiParser::MetaEventType::MetaEventType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::MidiParser::MetaEventType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::MidiParser::MetaEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::MidiParser::MetaEventType  ::MidiParser::MetaEventType::Tempo{81u};
} // end anonymous namespace
