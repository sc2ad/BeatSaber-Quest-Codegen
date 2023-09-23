#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::Remoting::Lifetime::LeaseState::LeaseState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::Remoting::Lifetime::LeaseState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::Remoting::Lifetime::LeaseState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Null{0};
constexpr System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Initial{1};
constexpr System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Active{2};
constexpr System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Renewing{3};
constexpr System::Runtime::Remoting::Lifetime::LeaseState  System::Runtime::Remoting::Lifetime::LeaseState::Expired{4};
