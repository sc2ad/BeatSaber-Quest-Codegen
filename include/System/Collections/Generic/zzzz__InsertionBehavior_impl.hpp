#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Collections/Generic/zzzz__InsertionBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Collections::Generic::InsertionBehavior::InsertionBehavior(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Collections::Generic::InsertionBehavior::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Collections::Generic::InsertionBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::System::Collections::Generic::InsertionBehavior  ::System::Collections::Generic::InsertionBehavior::None{0u};
constexpr ::System::Collections::Generic::InsertionBehavior  ::System::Collections::Generic::InsertionBehavior::OverwriteExisting{1u};
constexpr ::System::Collections::Generic::InsertionBehavior  ::System::Collections::Generic::InsertionBehavior::ThrowOnExisting{2u};
} // end anonymous namespace
