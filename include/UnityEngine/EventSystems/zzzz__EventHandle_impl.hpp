#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/EventSystems/zzzz__EventHandle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::EventSystems::EventHandle::EventHandle(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::EventSystems::EventHandle::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::EventSystems::EventHandle::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::EventSystems::EventHandle  ::UnityEngine::EventSystems::EventHandle::Unused{0};
constexpr ::UnityEngine::EventSystems::EventHandle  ::UnityEngine::EventSystems::EventHandle::Used{1};
} // end anonymous namespace
