#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ArgInfoType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::Remoting::Messaging::ArgInfoType::ArgInfoType(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::Remoting::Messaging::ArgInfoType::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Runtime::Remoting::Messaging::ArgInfoType::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr System::Runtime::Remoting::Messaging::ArgInfoType  System::Runtime::Remoting::Messaging::ArgInfoType::In{0u};
constexpr System::Runtime::Remoting::Messaging::ArgInfoType  System::Runtime::Remoting::Messaging::ArgInfoType::Out{1u};
