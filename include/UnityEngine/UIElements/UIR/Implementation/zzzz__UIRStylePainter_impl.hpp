#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__UIRStylePainter_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePainter_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshBuilder_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteData_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VectorImageManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indices", ty: "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "custom", ty: "::UnityEngine::Texture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "font", ty: "::UnityEngine::Texture", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontTexSDFScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: Some("{}") }, CppParam { name: "customCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: Some("csnull") }, CppParam { name: "clipRectID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "addFlags", ty: "::UnityEngine::UIElements::UIR::VertexFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "uvIsDisplacement", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isTextEntry", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isClipRegisterEntry", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "stencilRef", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maskDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Material material, ::UnityEngine::Texture custom, ::UnityEngine::Texture font, float_t fontTexSDFScale, ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::UIElements::UIR::RenderChainCommand customCommand, ::UnityEngine::UIElements::UIR::BMPAlloc clipRectID, ::UnityEngine::UIElements::UIR::VertexFlags addFlags, bool uvIsDisplacement, bool isTextEntry, bool isClipRegisterEntry, int32_t stencilRef, int32_t maskDepth) noexcept : ::bs_hook::ValueTypeWrapper() {this->vertices = vertices;
this->indices = indices;
this->material = material;
this->custom = custom;
this->font = font;
this->fontTexSDFScale = fontTexSDFScale;
this->texture = texture;
this->customCommand = customCommand;
this->clipRectID = clipRectID;
this->addFlags = addFlags;
this->uvIsDisplacement = uvIsDisplacement;
this->isTextEntry = isTextEntry;
this->isClipRegisterEntry = isClipRegisterEntry;
this->stencilRef = stencilRef;
this->maskDepth = maskDepth;
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_vertices(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, 0x0>(this->__instance, std::forward<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(value));
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_vertices() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_indices(::Unity::Collections::NativeSlice_1<uint16_t> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeSlice_1<uint16_t>, 0x10>(this->__instance, std::forward<::Unity::Collections::NativeSlice_1<uint16_t>>(value));
}
constexpr ::Unity::Collections::NativeSlice_1<uint16_t> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_indices() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeSlice_1<uint16_t>, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_material(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x20>(this->__instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_custom(::UnityEngine::Texture value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture, 0x28>(this->__instance, std::forward<::UnityEngine::Texture>(value));
}
constexpr ::UnityEngine::Texture ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_custom() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_font(::UnityEngine::Texture value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture, 0x30>(this->__instance, std::forward<::UnityEngine::Texture>(value));
}
constexpr ::UnityEngine::Texture ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_font() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture, 0x30>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_fontTexSDFScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_fontTexSDFScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_texture(::UnityEngine::UIElements::TextureId value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextureId, 0x3c>(this->__instance, std::forward<::UnityEngine::UIElements::TextureId>(value));
}
constexpr ::UnityEngine::UIElements::TextureId ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_texture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextureId, 0x3c>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_customCommand(::UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x40>(this->__instance, std::forward<::UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_customCommand() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x40>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_clipRectID(::UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::BMPAlloc, 0x48>(this->__instance, std::forward<::UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_clipRectID() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::BMPAlloc, 0x48>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_addFlags(::UnityEngine::UIElements::UIR::VertexFlags value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::VertexFlags, 0x50>(this->__instance, std::forward<::UnityEngine::UIElements::UIR::VertexFlags>(value));
}
constexpr ::UnityEngine::UIElements::UIR::VertexFlags ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_addFlags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::VertexFlags, 0x50>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_uvIsDisplacement(bool value)  {
::cordl_internals::setInstanceField<bool, 0x54>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_uvIsDisplacement() const {
return ::cordl_internals::getInstanceField<bool, 0x54>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_isTextEntry(bool value)  {
::cordl_internals::setInstanceField<bool, 0x55>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_isTextEntry() const {
return ::cordl_internals::getInstanceField<bool, 0x55>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_isClipRegisterEntry(bool value)  {
::cordl_internals::setInstanceField<bool, 0x56>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_isClipRegisterEntry() const {
return ::cordl_internals::getInstanceField<bool, 0x56>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_stencilRef(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_stencilRef() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__set_maskDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry::__get_maskDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this->__instance);
}
// Ctor Parameters [CppParam { name: "needsClosing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "popViewMatrix", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "popScissorClip", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blitAndPopRenderTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "PopDefaultMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipUnregisterDrawCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: Some("csnull") }, CppParam { name: "clipperRegisterVertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipperRegisterIndices", ty: "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipperRegisterIndexOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maskStencilRef", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo(bool needsClosing, bool popViewMatrix, bool popScissorClip, bool blitAndPopRenderTexture, bool PopDefaultMaterial, ::UnityEngine::UIElements::UIR::RenderChainCommand clipUnregisterDrawCommand, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> clipperRegisterVertices, ::Unity::Collections::NativeSlice_1<uint16_t> clipperRegisterIndices, int32_t clipperRegisterIndexOffset, int32_t maskStencilRef) noexcept : ::bs_hook::ValueTypeWrapper() {this->needsClosing = needsClosing;
this->popViewMatrix = popViewMatrix;
this->popScissorClip = popScissorClip;
this->blitAndPopRenderTexture = blitAndPopRenderTexture;
this->PopDefaultMaterial = PopDefaultMaterial;
this->clipUnregisterDrawCommand = clipUnregisterDrawCommand;
this->clipperRegisterVertices = clipperRegisterVertices;
this->clipperRegisterIndices = clipperRegisterIndices;
this->clipperRegisterIndexOffset = clipperRegisterIndexOffset;
this->maskStencilRef = maskStencilRef;
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_needsClosing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_needsClosing() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_popViewMatrix(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_popViewMatrix() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_popScissorClip(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_popScissorClip() const {
return ::cordl_internals::getInstanceField<bool, 0x2>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_blitAndPopRenderTexture(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_blitAndPopRenderTexture() const {
return ::cordl_internals::getInstanceField<bool, 0x3>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_PopDefaultMaterial(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_PopDefaultMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_clipUnregisterDrawCommand(::UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x8>(this->__instance, std::forward<::UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_clipUnregisterDrawCommand() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::RenderChainCommand, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_clipperRegisterVertices(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, 0x10>(this->__instance, std::forward<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>(value));
}
constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_clipperRegisterVertices() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_clipperRegisterIndices(::Unity::Collections::NativeSlice_1<uint16_t> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeSlice_1<uint16_t>, 0x20>(this->__instance, std::forward<::Unity::Collections::NativeSlice_1<uint16_t>>(value));
}
constexpr ::Unity::Collections::NativeSlice_1<uint16_t> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_clipperRegisterIndices() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeSlice_1<uint16_t>, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_clipperRegisterIndexOffset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_clipperRegisterIndexOffset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__set_maskStencilRef(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo::__get_maskStencilRef() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.GetPooledMeshWriteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GetPooledMeshWriteData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2c605e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "GetPooledMeshWriteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AllocRawVertsIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(uint32_t, uint32_t, ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData>)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocRawVertsIndices)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c60708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AllocRawVertsIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AllocThroughDrawMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(uint32_t, uint32_t, ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData>)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocThroughDrawMesh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c607c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AllocThroughDrawMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AllocThroughDrawGradients
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(uint32_t, uint32_t, ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData>)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocThroughDrawGradients)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c60ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AllocThroughDrawGradients",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::UIR::RenderChain)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::_ctor)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2c60fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_meshGenerationContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshGenerationContext (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_meshGenerationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_meshGenerationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_currentElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_currentElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6132c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_currentElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.set_currentElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_currentElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "set_currentElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_entries
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry> (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6133c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_entries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_closingInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_closingInfo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c61344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_closingInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_totalVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_totalVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_totalVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.set_totalVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(int32_t)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_totalVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "set_totalVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_totalIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_totalIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_totalIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.set_totalIndices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(int32_t)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_totalIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "set_totalIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.set_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(bool)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c61388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c61394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(bool)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c613f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Begin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Begin)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x2c6147c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "Begin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.LandClipUnregisterMeshDrawCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::UIR::RenderChainCommand)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::LandClipUnregisterMeshDrawCommand)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c6198c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "LandClipUnregisterMeshDrawCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.LandClipRegisterMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, ::Unity::Collections::NativeSlice_1<uint16_t>, int32_t)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::LandClipRegisterMesh)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c61a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "LandClipRegisterMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AddGradientsEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(int32_t, int32_t, ::UnityEngine::UIElements::TextureId, ::UnityEngine::Material, ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AddGradientsEntry)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2c60cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AddGradientsEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteData (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(int32_t, int32_t, ::UnityEngine::Texture, ::UnityEngine::Material, ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawMesh)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x2c607d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams, ::UnityEngine::UIElements::ITextHandle, float_t)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawText)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2c61a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawTextNative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams, ::UnityEngine::UIElements::ITextHandle, float_t)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextNative)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2c61bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawTextNative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawTextCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams, ::UnityEngine::UIElements::ITextHandle, float_t)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextCore)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x2c6200c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawTextCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawRectangle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawRectangle)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2c62634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawBorder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawBorder)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2c6338c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawImmediate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::System::Action, bool)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawImmediate)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2c6346c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawImmediate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.get_visualElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_visualElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c635e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_visualElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawVisualElementBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVisualElementBackground)> {
  constexpr static std::size_t size = 0xe08;
  constexpr static std::size_t addrs = 0x2c635f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawVisualElementBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawVisualElementBorder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVisualElementBorder)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x2c643f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawVisualElementBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.ApplyVisualElementClipping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ApplyVisualElementClipping)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2c64d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "ApplyVisualElementClipping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.AdjustSpriteWinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint16_t> (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::ArrayW<::UnityEngine::Vector2>, ::ArrayW<uint16_t>)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AdjustSpriteWinding)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2c65d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AdjustSpriteWinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawSprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawSprite)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x2c62d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.DrawVectorImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVectorImage)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x2c628d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawVectorImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Reset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2c66068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.ValidateMeshWriteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ValidateMeshWriteData)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x2c6614c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "ValidateMeshWriteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.GenerateStencilClipEntryForRoundedRectBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GenerateStencilClipEntryForRoundedRectBackground)> {
  constexpr static std::size_t size = 0xa1c;
  constexpr static std::size_t addrs = 0x2c6532c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "GenerateStencilClipEntryForRoundedRectBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter.GenerateStencilClipEntryForSVGBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::*)()>(&::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GenerateStencilClipEntryForSVGBackground)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2c64fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "GenerateStencilClipEntryForSVGBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::UIElements::IStylePainter
constexpr  ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::operator ::UnityEngine::UIElements::IStylePainter() const noexcept {
return ::UnityEngine::UIElements::IStylePainter(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_Owner(::UnityEngine::UIElements::UIR::RenderChain value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::RenderChain, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::RenderChain>(value));
}
constexpr ::UnityEngine::UIElements::UIR::RenderChain ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_Owner() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::RenderChain, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry> ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_Entries() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_Atlas(::UnityEngine::UIElements::AtlasBase value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::AtlasBase, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::AtlasBase>(value));
}
constexpr ::UnityEngine::UIElements::AtlasBase ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_Atlas() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::AtlasBase, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_VectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::VectorImageManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::VectorImageManager>(value));
}
constexpr ::UnityEngine::UIElements::UIR::VectorImageManager ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_VectorImageManager() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::VectorImageManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_CurrentEntry(::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry>(value));
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_CurrentEntry() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_ClosingInfo(::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo>(value));
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_ClosingInfo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_MaskDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_MaskDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_StencilRef(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_StencilRef() const {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_ClipRectID(::UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::BMPAlloc, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr ::UnityEngine::UIElements::UIR::BMPAlloc ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_ClipRectID() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::BMPAlloc, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_SVGBackgroundEntryIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_SVGBackgroundEntryIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_VertsPool(::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>>(value));
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex> ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_VertsPool() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_IndicesPool(::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>>(value));
}
constexpr ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t> ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_IndicesPool() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_MeshWriteDataPool(::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData>>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData> ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_MeshWriteDataPool() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::MeshWriteData>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_NextMeshWriteDataPoolItem(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_NextMeshWriteDataPoolItem() const {
return ::cordl_internals::getInstanceField<int32_t, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_AllocRawVertsIndicesDelegate(::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator>(value));
}
constexpr ::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_AllocRawVertsIndicesDelegate() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_AllocThroughDrawMeshDelegate(::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator>(value));
}
constexpr ::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_AllocThroughDrawMeshDelegate() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set_m_AllocThroughDrawGradientsDelegate(::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator>(value));
}
constexpr ::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get_m_AllocThroughDrawGradientsDelegate() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set__meshGenerationContext_k__BackingField(::UnityEngine::UIElements::MeshGenerationContext value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::MeshGenerationContext, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::MeshGenerationContext>(value));
}
constexpr ::UnityEngine::UIElements::MeshGenerationContext ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get__meshGenerationContext_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::MeshGenerationContext, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set__currentElement_k__BackingField(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get__currentElement_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set__totalVertices_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get__totalVertices_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set__totalIndices_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get__totalIndices_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x16c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__set__disposed_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::__get__disposed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UIElements::MeshWriteData ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GetPooledMeshWriteData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "GetPooledMeshWriteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::MeshWriteData ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocRawVertsIndices(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData> allocatorData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AllocRawVertsIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData, false>(const_cast<void*>(instance), ___internal_method, vertexCount, indexCount, allocatorData);
}
 ::UnityEngine::UIElements::MeshWriteData ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocThroughDrawMesh(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData> allocatorData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AllocThroughDrawMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData, false>(const_cast<void*>(instance), ___internal_method, vertexCount, indexCount, allocatorData);
}
 ::UnityEngine::UIElements::MeshWriteData ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AllocThroughDrawGradients(uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData> allocatorData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AllocThroughDrawGradients",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData, false>(const_cast<void*>(instance), ___internal_method, vertexCount, indexCount, allocatorData);
}
// Ctor Parameters [CppParam { name: "renderChain", ty: "::UnityEngine::UIElements::UIR::RenderChain", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::UIRStylePainter(::UnityEngine::UIElements::UIR::RenderChain renderChain)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UIRStylePainter>(renderChain))) {}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::_ctor(::UnityEngine::UIElements::UIR::RenderChain renderChain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, renderChain);
}
 ::UnityEngine::UIElements::MeshGenerationContext ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_meshGenerationContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_meshGenerationContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshGenerationContext, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_currentElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_currentElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_currentElement(::UnityEngine::UIElements::VisualElement value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "set_currentElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry> ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_entries()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_entries",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__Entry>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_closingInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_closingInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_totalVertices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_totalVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_totalVertices(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "set_totalVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_totalIndices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_totalIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_totalIndices(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "set_totalIndices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::set_disposed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Begin(::UnityEngine::UIElements::VisualElement ve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "Begin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::LandClipUnregisterMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChainCommand cmd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "LandClipUnregisterMeshDrawCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChainCommand>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cmd);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::LandClipRegisterMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, int32_t indexOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "LandClipRegisterMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices, indices, indexOffset);
}
 ::UnityEngine::UIElements::MeshWriteData ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AddGradientsEntry(int32_t vertexCount, int32_t indexCount, ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::Material material, ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AddGradientsEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextureId>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData, false>(const_cast<void*>(instance), ___internal_method, vertexCount, indexCount, texture, material, flags);
}
 ::UnityEngine::UIElements::MeshWriteData ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawMesh(int32_t vertexCount, int32_t indexCount, ::UnityEngine::Texture texture, ::UnityEngine::Material material, ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteData, false>(const_cast<void*>(instance), ___internal_method, vertexCount, indexCount, texture, material, flags);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawText(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, textParams, handle, pixelsPerPoint);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextNative(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawTextNative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, textParams, handle, pixelsPerPoint);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawTextCore(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawTextCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, textParams, handle, pixelsPerPoint);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawRectangle(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawRectangle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rectParams);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawBorder(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams borderParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, borderParams);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawImmediate(::System::Action callback, bool cullingEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawImmediate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, cullingEnabled);
}
 ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::get_visualElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "get_visualElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVisualElementBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawVisualElementBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVisualElementBorder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawVisualElementBorder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ApplyVisualElementClipping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "ApplyVisualElementClipping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint16_t> ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::AdjustSpriteWinding(::ArrayW<::UnityEngine::Vector2> vertices, ::ArrayW<uint16_t> indices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "AdjustSpriteWinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint16_t>, false>(const_cast<void*>(instance), ___internal_method, vertices, indices);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawSprite(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawSprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rectParams);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::DrawVectorImage(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "DrawVectorImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rectParams);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::ValidateMeshWriteData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "ValidateMeshWriteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GenerateStencilClipEntryForRoundedRectBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "GenerateStencilClipEntryForRoundedRectBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter::GenerateStencilClipEntryForSVGBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter>::get(),
                            "GenerateStencilClipEntryForSVGBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::*)(int32_t)>(&::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::*)()>(&::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>.Alloc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeSlice_1<uint16_t> (::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::*)(uint32_t)>(&::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::Alloc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>>::get(),
                            "Alloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>.SessionDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::*)()>(&::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::SessionDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>>::get(),
                            "SessionDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "maxPoolElemCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pool", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "excess", ty: "::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<uint16_t>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "takenFromPool", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(int32_t maxPoolElemCount, ::Unity::Collections::NativeArray_1<uint16_t> pool, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<uint16_t>> excess, uint32_t takenFromPool) noexcept : ::bs_hook::ValueTypeWrapper() {this->maxPoolElemCount = maxPoolElemCount;
this->pool = pool;
this->excess = excess;
this->takenFromPool = takenFromPool;
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::__set_maxPoolElemCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::__get_maxPoolElemCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::__set_pool(::Unity::Collections::NativeArray_1<uint16_t> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<uint16_t>, 0x8>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<uint16_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::__get_pool() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint16_t>, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::__set_excess(::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<uint16_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<uint16_t>>, 0x10>(this->__instance, std::forward<::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<uint16_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<uint16_t>> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::__get_excess() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<uint16_t>>, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::__set_takenFromPool(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::__get_takenFromPool() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
 void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::_ctor(int32_t maxPoolElems)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, maxPoolElems);
}
 void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::Unity::Collections::NativeSlice_1<uint16_t> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::Alloc(uint32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>>::get(),
                            "Alloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<uint16_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, count);
}
 void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>::SessionDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<uint16_t>>::get(),
                            "SessionDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::*)(int32_t)>(&::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::*)()>(&::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>.Alloc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> (::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::*)(uint32_t)>(&::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::Alloc)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "Alloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>.SessionDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::*)()>(&::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::SessionDone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "SessionDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "maxPoolElemCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pool", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "excess", ty: "::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "takenFromPool", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1(int32_t maxPoolElemCount, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> pool, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>> excess, uint32_t takenFromPool) noexcept : ::bs_hook::ValueTypeWrapper() {this->maxPoolElemCount = maxPoolElemCount;
this->pool = pool;
this->excess = excess;
this->takenFromPool = takenFromPool;
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::__set_maxPoolElemCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::__get_maxPoolElemCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::__set_pool(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>, 0x8>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::__get_pool() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::__set_excess(::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>, 0x10>(this->__instance, std::forward<::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::__get_excess() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex>>, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::__set_takenFromPool(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::__get_takenFromPool() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
 void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::_ctor(int32_t maxPoolElems)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, maxPoolElems);
}
 void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::Alloc(uint32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "Alloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, count);
}
 void ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>::SessionDone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__TempDataAlloc_1<::UnityEngine::UIElements::Vertex>>::get(),
                            "SessionDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
