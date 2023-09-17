#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngineInternal/Input/zzzz__NativeInputEvent_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputEventType_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngineInternal::Input::NativeInputEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeInBytes", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputEvent::NativeInputEvent(::UnityEngineInternal::Input::NativeInputEventType type, uint16_t sizeInBytes, uint16_t deviceId, double_t time, int32_t eventId) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->sizeInBytes = sizeInBytes;
this->deviceId = deviceId;
this->time = time;
this->eventId = eventId;
}
constexpr void ::UnityEngineInternal::Input::NativeInputEvent::__set_type(::UnityEngineInternal::Input::NativeInputEventType value)  {
::cordl_internals::setInstanceField<::UnityEngineInternal::Input::NativeInputEventType, 0x0>(this->__instance, std::forward<::UnityEngineInternal::Input::NativeInputEventType>(value));
}
constexpr ::UnityEngineInternal::Input::NativeInputEventType ::UnityEngineInternal::Input::NativeInputEvent::__get_type() const {
return ::cordl_internals::getInstanceField<::UnityEngineInternal::Input::NativeInputEventType, 0x0>(this->__instance);
}
constexpr void ::UnityEngineInternal::Input::NativeInputEvent::__set_sizeInBytes(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x4>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::UnityEngineInternal::Input::NativeInputEvent::__get_sizeInBytes() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngineInternal::Input::NativeInputEvent::__set_deviceId(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x6>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::UnityEngineInternal::Input::NativeInputEvent::__get_deviceId() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x6>(this->__instance);
}
constexpr void ::UnityEngineInternal::Input::NativeInputEvent::__set_time(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngineInternal::Input::NativeInputEvent::__get_time() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngineInternal::Input::NativeInputEvent::__set_eventId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngineInternal::Input::NativeInputEvent::__get_eventId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
} // end anonymous namespace
