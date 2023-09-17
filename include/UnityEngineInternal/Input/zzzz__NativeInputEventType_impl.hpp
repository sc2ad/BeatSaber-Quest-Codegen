#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngineInternal/Input/zzzz__NativeInputEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputEventType::NativeInputEventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngineInternal::Input::NativeInputEventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngineInternal::Input::NativeInputEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngineInternal::Input::NativeInputEventType  ::UnityEngineInternal::Input::NativeInputEventType::DeviceRemoved{1146242381};
constexpr ::UnityEngineInternal::Input::NativeInputEventType  ::UnityEngineInternal::Input::NativeInputEventType::DeviceConfigChanged{1145259591};
constexpr ::UnityEngineInternal::Input::NativeInputEventType  ::UnityEngineInternal::Input::NativeInputEventType::Text{1413830740};
constexpr ::UnityEngineInternal::Input::NativeInputEventType  ::UnityEngineInternal::Input::NativeInputEventType::State{1398030676};
constexpr ::UnityEngineInternal::Input::NativeInputEventType  ::UnityEngineInternal::Input::NativeInputEventType::Delta{1145852993};
} // end anonymous namespace
