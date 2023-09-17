#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "IgnoranceCore/zzzz__IgnoranceChannelTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::IgnoranceCore::IgnoranceChannelTypes::IgnoranceChannelTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::IgnoranceCore::IgnoranceChannelTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::IgnoranceCore::IgnoranceChannelTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::IgnoranceCore::IgnoranceChannelTypes  ::IgnoranceCore::IgnoranceChannelTypes::Reliable{1};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  ::IgnoranceCore::IgnoranceChannelTypes::ReliableUnsequenced{3};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  ::IgnoranceCore::IgnoranceChannelTypes::Unreliable{2};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  ::IgnoranceCore::IgnoranceChannelTypes::UnreliableFragmented{8};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  ::IgnoranceCore::IgnoranceChannelTypes::UnreliableSequenced{0};
constexpr ::IgnoranceCore::IgnoranceChannelTypes  ::IgnoranceCore::IgnoranceChannelTypes::Unthrottled{32};
} // end anonymous namespace
