#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Tilemaps::TileFlags::TileFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Tilemaps::TileFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Tilemaps::TileFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::None{0};
constexpr UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::LockColor{1};
constexpr UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::LockTransform{2};
constexpr UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::InstantiateGameObjectRuntimeOnly{4};
constexpr UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::KeepGameObjectRuntimeOnly{8};
constexpr UnityEngine::Tilemaps::TileFlags  UnityEngine::Tilemaps::TileFlags::LockAll{3};
