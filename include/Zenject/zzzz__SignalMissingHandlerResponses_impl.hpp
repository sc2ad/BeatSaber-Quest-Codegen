#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Zenject/zzzz__SignalMissingHandlerResponses_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::SignalMissingHandlerResponses::SignalMissingHandlerResponses(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Zenject::SignalMissingHandlerResponses::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::SignalMissingHandlerResponses::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Zenject::SignalMissingHandlerResponses  Zenject::SignalMissingHandlerResponses::Ignore{0};
constexpr Zenject::SignalMissingHandlerResponses  Zenject::SignalMissingHandlerResponses::Throw{1};
constexpr Zenject::SignalMissingHandlerResponses  Zenject::SignalMissingHandlerResponses::Warn{2};
