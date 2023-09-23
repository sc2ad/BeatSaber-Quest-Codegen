#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__PointerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::PointerType::PointerType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::PointerType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::PointerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::PointerType  UnityEngine::PointerType::Mouse{0};
constexpr UnityEngine::PointerType  UnityEngine::PointerType::Touch{1};
constexpr UnityEngine::PointerType  UnityEngine::PointerType::Pen{2};
