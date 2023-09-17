#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__ColliderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::ColliderType::ColliderType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::ColliderType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::ColliderType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::ColliderType  ::UnityEngine::ProBuilder::ColliderType::None{0};
constexpr ::UnityEngine::ProBuilder::ColliderType  ::UnityEngine::ProBuilder::ColliderType::BoxCollider{1};
constexpr ::UnityEngine::ProBuilder::ColliderType  ::UnityEngine::ProBuilder::ColliderType::MeshCollider{2};
} // end anonymous namespace
