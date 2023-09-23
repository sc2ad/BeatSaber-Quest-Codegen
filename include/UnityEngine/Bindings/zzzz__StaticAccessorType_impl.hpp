#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Bindings/zzzz__StaticAccessorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Bindings::StaticAccessorType::StaticAccessorType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Bindings::StaticAccessorType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Bindings::StaticAccessorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Bindings::StaticAccessorType  UnityEngine::Bindings::StaticAccessorType::Dot{0};
constexpr UnityEngine::Bindings::StaticAccessorType  UnityEngine::Bindings::StaticAccessorType::Arrow{1};
constexpr UnityEngine::Bindings::StaticAccessorType  UnityEngine::Bindings::StaticAccessorType::DoubleColon{2};
constexpr UnityEngine::Bindings::StaticAccessorType  UnityEngine::Bindings::StaticAccessorType::ArrowWithDefaultReturnIfNull{3};
