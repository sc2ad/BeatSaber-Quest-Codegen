#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileDataNative_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
// Ctor Parameters [CppParam { name: "m_Sprite", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Color", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Transform", ty: "UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GameObject", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "UnityEngine::Tilemaps::TileFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ColliderType", ty: "UnityEngine::Tilemaps::UnityEngine__Tilemaps__Tile__ColliderType", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Tilemaps::TileDataNative::TileDataNative(int32_t m_Sprite, UnityEngine::Color m_Color, UnityEngine::Matrix4x4 m_Transform, int32_t m_GameObject, UnityEngine::Tilemaps::TileFlags m_Flags, UnityEngine::Tilemaps::UnityEngine__Tilemaps__Tile__ColliderType m_ColliderType) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Sprite = m_Sprite;
this->m_Color = m_Color;
this->m_Transform = m_Transform;
this->m_GameObject = m_GameObject;
this->m_Flags = m_Flags;
this->m_ColliderType = m_ColliderType;
}
constexpr void UnityEngine::Tilemaps::TileDataNative::__set_m_Sprite(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Tilemaps::TileDataNative::__get_m_Sprite() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::Tilemaps::TileDataNative::__set_m_Color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x4>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::Tilemaps::TileDataNative::__get_m_Color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x4>(this->__instance);
}
constexpr void UnityEngine::Tilemaps::TileDataNative::__set_m_Transform(UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Matrix4x4, 0x14>(this->__instance, std::forward<UnityEngine::Matrix4x4>(value));
}
constexpr UnityEngine::Matrix4x4 UnityEngine::Tilemaps::TileDataNative::__get_m_Transform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Matrix4x4, 0x14>(this->__instance);
}
constexpr void UnityEngine::Tilemaps::TileDataNative::__set_m_GameObject(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Tilemaps::TileDataNative::__get_m_GameObject() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->__instance);
}
constexpr void UnityEngine::Tilemaps::TileDataNative::__set_m_Flags(UnityEngine::Tilemaps::TileFlags value)  {
::cordl_internals::setInstanceField<UnityEngine::Tilemaps::TileFlags, 0x58>(this->__instance, std::forward<UnityEngine::Tilemaps::TileFlags>(value));
}
constexpr UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::TileDataNative::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<UnityEngine::Tilemaps::TileFlags, 0x58>(this->__instance);
}
constexpr void UnityEngine::Tilemaps::TileDataNative::__set_m_ColliderType(UnityEngine::Tilemaps::UnityEngine__Tilemaps__Tile__ColliderType value)  {
::cordl_internals::setInstanceField<UnityEngine::Tilemaps::UnityEngine__Tilemaps__Tile__ColliderType, 0x5c>(this->__instance, std::forward<UnityEngine::Tilemaps::UnityEngine__Tilemaps__Tile__ColliderType>(value));
}
constexpr UnityEngine::Tilemaps::UnityEngine__Tilemaps__Tile__ColliderType UnityEngine::Tilemaps::TileDataNative::__get_m_ColliderType() const {
return ::cordl_internals::getInstanceField<UnityEngine::Tilemaps::UnityEngine__Tilemaps__Tile__ColliderType, 0x5c>(this->__instance);
}
