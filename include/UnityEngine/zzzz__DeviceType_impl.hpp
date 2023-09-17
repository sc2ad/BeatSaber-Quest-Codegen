#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__DeviceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::DeviceType::DeviceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::DeviceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::DeviceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::DeviceType  ::UnityEngine::DeviceType::Unknown{0};
constexpr ::UnityEngine::DeviceType  ::UnityEngine::DeviceType::Handheld{1};
constexpr ::UnityEngine::DeviceType  ::UnityEngine::DeviceType::Console{2};
constexpr ::UnityEngine::DeviceType  ::UnityEngine::DeviceType::Desktop{3};
} // end anonymous namespace