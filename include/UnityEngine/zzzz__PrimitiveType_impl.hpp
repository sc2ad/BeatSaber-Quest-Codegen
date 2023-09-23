#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__PrimitiveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::PrimitiveType::PrimitiveType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::PrimitiveType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::PrimitiveType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Sphere{0};
constexpr UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Capsule{1};
constexpr UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Cylinder{2};
constexpr UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Cube{3};
constexpr UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Plane{4};
constexpr UnityEngine::PrimitiveType  UnityEngine::PrimitiveType::Quad{5};
