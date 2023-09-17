#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Internal/Runtime/Augments/zzzz__AsyncStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Internal::Runtime::Augments::AsyncStatus::AsyncStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Internal::Runtime::Augments::AsyncStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Internal::Runtime::Augments::AsyncStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Internal::Runtime::Augments::AsyncStatus  ::Internal::Runtime::Augments::AsyncStatus::Started{0};
constexpr ::Internal::Runtime::Augments::AsyncStatus  ::Internal::Runtime::Augments::AsyncStatus::Completed{1};
constexpr ::Internal::Runtime::Augments::AsyncStatus  ::Internal::Runtime::Augments::AsyncStatus::Canceled{2};
constexpr ::Internal::Runtime::Augments::AsyncStatus  ::Internal::Runtime::Augments::AsyncStatus::Error{3};
} // end anonymous namespace
