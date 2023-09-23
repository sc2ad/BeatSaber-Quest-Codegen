#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Zenject/zzzz__LoadSceneRelationship_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::LoadSceneRelationship::LoadSceneRelationship(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Zenject::LoadSceneRelationship::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::LoadSceneRelationship::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Zenject::LoadSceneRelationship  Zenject::LoadSceneRelationship::None{0};
constexpr Zenject::LoadSceneRelationship  Zenject::LoadSceneRelationship::Child{1};
constexpr Zenject::LoadSceneRelationship  Zenject::LoadSceneRelationship::Sibling{2};
