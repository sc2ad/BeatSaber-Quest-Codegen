#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngineInternal/Input/zzzz__NativeInputEventBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "eventBuffer", ty: "void*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "eventCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "capacityInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputEventBuffer::NativeInputEventBuffer(void* eventBuffer, int32_t eventCount, int32_t sizeInBytes, int32_t capacityInBytes) noexcept : ::bs_hook::ValueTypeWrapper() {this->eventBuffer = eventBuffer;
this->eventCount = eventCount;
this->sizeInBytes = sizeInBytes;
this->capacityInBytes = capacityInBytes;
}
constexpr void ::UnityEngineInternal::Input::NativeInputEventBuffer::__set_eventBuffer(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::UnityEngineInternal::Input::NativeInputEventBuffer::__get_eventBuffer() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
constexpr void ::UnityEngineInternal::Input::NativeInputEventBuffer::__set_eventCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngineInternal::Input::NativeInputEventBuffer::__get_eventCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngineInternal::Input::NativeInputEventBuffer::__set_sizeInBytes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngineInternal::Input::NativeInputEventBuffer::__get_sizeInBytes() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngineInternal::Input::NativeInputEventBuffer::__set_capacityInBytes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngineInternal::Input::NativeInputEventBuffer::__get_capacityInBytes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
} // end anonymous namespace
