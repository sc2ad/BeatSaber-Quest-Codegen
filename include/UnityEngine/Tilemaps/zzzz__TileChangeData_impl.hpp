#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Tilemaps/zzzz__TileChangeData_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TileAsset", ty: "::UnityEngine::Object", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::TileChangeData::TileChangeData(::UnityEngine::Vector3Int m_Position, ::UnityEngine::Object m_TileAsset, ::UnityEngine::Color m_Color, ::UnityEngine::Matrix4x4 m_Transform) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Position = m_Position;
this->m_TileAsset = m_TileAsset;
this->m_Color = m_Color;
this->m_Transform = m_Transform;
}
constexpr void ::UnityEngine::Tilemaps::TileChangeData::__set_m_Position(::UnityEngine::Vector3Int value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3Int, 0x0>(this->__instance, std::forward<::UnityEngine::Vector3Int>(value));
}
constexpr ::UnityEngine::Vector3Int ::UnityEngine::Tilemaps::TileChangeData::__get_m_Position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3Int, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Tilemaps::TileChangeData::__set_m_TileAsset(::UnityEngine::Object value)  {
::cordl_internals::setInstanceField<::UnityEngine::Object, 0x10>(this->__instance, std::forward<::UnityEngine::Object>(value));
}
constexpr ::UnityEngine::Object ::UnityEngine::Tilemaps::TileChangeData::__get_m_TileAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Object, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::Tilemaps::TileChangeData::__set_m_Color(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x18>(this->__instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::UnityEngine::Tilemaps::TileChangeData::__get_m_Color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::Tilemaps::TileChangeData::__set_m_Transform(::UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x28>(this->__instance, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4 ::UnityEngine::Tilemaps::TileChangeData::__get_m_Transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x28>(this->__instance);
}
} // end anonymous namespace
