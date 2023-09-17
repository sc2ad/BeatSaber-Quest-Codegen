#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__EntityType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::EntityType::EntityType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::EntityType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::EntityType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::EntityType  ::UnityEngine::ProBuilder::EntityType::Detail{0};
constexpr ::UnityEngine::ProBuilder::EntityType  ::UnityEngine::ProBuilder::EntityType::Occluder{1};
constexpr ::UnityEngine::ProBuilder::EntityType  ::UnityEngine::ProBuilder::EntityType::Trigger{2};
constexpr ::UnityEngine::ProBuilder::EntityType  ::UnityEngine::ProBuilder::EntityType::Collider{3};
constexpr ::UnityEngine::ProBuilder::EntityType  ::UnityEngine::ProBuilder::EntityType::Mover{4};
} // end anonymous namespace
