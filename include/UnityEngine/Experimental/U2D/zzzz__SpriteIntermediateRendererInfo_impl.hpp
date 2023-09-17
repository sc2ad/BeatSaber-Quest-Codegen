#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Experimental/U2D/zzzz__SpriteIntermediateRendererInfo_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
// Ctor Parameters [CppParam { name: "SpriteID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TextureID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaterialID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}") }, CppParam { name: "Layer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SortingLayer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SortingOrder", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VertexCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ShaderChannelMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::SpriteIntermediateRendererInfo(int32_t SpriteID, int32_t TextureID, int32_t MaterialID, ::UnityEngine::Color Color, ::UnityEngine::Matrix4x4 Transform, ::UnityEngine::Bounds Bounds, int32_t Layer, int32_t SortingLayer, int32_t SortingOrder, uint64_t SceneCullingMask, ::cordl_internals::intptr_t IndexData, ::cordl_internals::intptr_t VertexData, int32_t IndexCount, int32_t VertexCount, int32_t ShaderChannelMask) noexcept : ::bs_hook::ValueTypeWrapper() {this->SpriteID = SpriteID;
this->TextureID = TextureID;
this->MaterialID = MaterialID;
this->Color = Color;
this->Transform = Transform;
this->Bounds = Bounds;
this->Layer = Layer;
this->SortingLayer = SortingLayer;
this->SortingOrder = SortingOrder;
this->SceneCullingMask = SceneCullingMask;
this->IndexData = IndexData;
this->VertexData = VertexData;
this->IndexCount = IndexCount;
this->VertexCount = VertexCount;
this->ShaderChannelMask = ShaderChannelMask;
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_SpriteID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_SpriteID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_TextureID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_TextureID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_MaterialID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_MaterialID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_Color(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xc>(this->__instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_Color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_Transform(::UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x1c>(this->__instance, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4 ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_Transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x1c>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_Bounds(::UnityEngine::Bounds value)  {
::cordl_internals::setInstanceField<::UnityEngine::Bounds, 0x5c>(this->__instance, std::forward<::UnityEngine::Bounds>(value));
}
constexpr ::UnityEngine::Bounds ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_Bounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0x5c>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_Layer(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_Layer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_SortingLayer(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_SortingLayer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_SortingOrder(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x7c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_SortingOrder() const {
return ::cordl_internals::getInstanceField<int32_t, 0x7c>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_SceneCullingMask(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x80>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_SceneCullingMask() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x80>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_IndexData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x88>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_IndexData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x88>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_VertexData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x90>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_VertexData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x90>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_IndexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_IndexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_VertexCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_VertexCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this->__instance);
}
constexpr void ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__set_ShaderChannelMask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo::__get_ShaderChannelMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this->__instance);
}
} // end anonymous namespace
