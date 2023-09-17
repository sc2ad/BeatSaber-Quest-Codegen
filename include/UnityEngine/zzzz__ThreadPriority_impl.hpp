#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ThreadPriority_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ThreadPriority::ThreadPriority(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ThreadPriority::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ThreadPriority::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ThreadPriority  ::UnityEngine::ThreadPriority::Low{0};
constexpr ::UnityEngine::ThreadPriority  ::UnityEngine::ThreadPriority::BelowNormal{1};
constexpr ::UnityEngine::ThreadPriority  ::UnityEngine::ThreadPriority::Normal{2};
constexpr ::UnityEngine::ThreadPriority  ::UnityEngine::ThreadPriority::High{4};
} // end anonymous namespace