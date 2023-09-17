#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/zzzz__ReadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::ReadState::ReadState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::ReadState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::ReadState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::ReadState  ::System::Net::ReadState::None{0};
constexpr ::System::Net::ReadState  ::System::Net::ReadState::Status{1};
constexpr ::System::Net::ReadState  ::System::Net::ReadState::Headers{2};
constexpr ::System::Net::ReadState  ::System::Net::ReadState::Content{3};
constexpr ::System::Net::ReadState  ::System::Net::ReadState::Aborted{4};
} // end anonymous namespace
