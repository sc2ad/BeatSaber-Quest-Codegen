#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__RotationOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RotationOrder::RotationOrder(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::RotationOrder::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::RotationOrder::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::RotationOrder  ::UnityEngine::RotationOrder::OrderXYZ{0};
constexpr ::UnityEngine::RotationOrder  ::UnityEngine::RotationOrder::OrderXZY{1};
constexpr ::UnityEngine::RotationOrder  ::UnityEngine::RotationOrder::OrderYZX{2};
constexpr ::UnityEngine::RotationOrder  ::UnityEngine::RotationOrder::OrderYXZ{3};
constexpr ::UnityEngine::RotationOrder  ::UnityEngine::RotationOrder::OrderZXY{4};
constexpr ::UnityEngine::RotationOrder  ::UnityEngine::RotationOrder::OrderZYX{5};
} // end anonymous namespace