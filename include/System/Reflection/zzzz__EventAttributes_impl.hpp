#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Reflection/zzzz__EventAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Reflection::EventAttributes::EventAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Reflection::EventAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::EventAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Reflection::EventAttributes  System::Reflection::EventAttributes::None{0};
constexpr System::Reflection::EventAttributes  System::Reflection::EventAttributes::SpecialName{512};
constexpr System::Reflection::EventAttributes  System::Reflection::EventAttributes::RTSpecialName{1024};
constexpr System::Reflection::EventAttributes  System::Reflection::EventAttributes::ReservedMask{1024};
