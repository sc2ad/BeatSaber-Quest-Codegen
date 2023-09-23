#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Collections/Generic/zzzz__TreeRotation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Collections::Generic::TreeRotation::TreeRotation(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Collections::Generic::TreeRotation::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Collections::Generic::TreeRotation::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr System::Collections::Generic::TreeRotation  System::Collections::Generic::TreeRotation::Left{0u};
constexpr System::Collections::Generic::TreeRotation  System::Collections::Generic::TreeRotation::LeftRight{1u};
constexpr System::Collections::Generic::TreeRotation  System::Collections::Generic::TreeRotation::Right{2u};
constexpr System::Collections::Generic::TreeRotation  System::Collections::Generic::TreeRotation::RightLeft{3u};
