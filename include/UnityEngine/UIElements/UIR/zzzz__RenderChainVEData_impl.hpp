#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainVEData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainTextEntry_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderDataDirtyTypes_def.hpp"
#include "UnityEngine/UIElements/UIR/Implementation/zzzz__ClipMethod_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureEntry_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChainVEData.get_lastClosingOrLastCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::RenderChainCommand (UnityEngine::UIElements::UIR::RenderChainVEData::*)()>(&UnityEngine::UIElements::UIR::RenderChainVEData::get_lastClosingOrLastCommand)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d1ac18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                            "get_lastClosingOrLastCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChainVEData.AllocatesID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::UIElements::UIR::BMPAlloc)>(&UnityEngine::UIElements::UIR::RenderChainVEData::AllocatesID)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d1ac30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                            "AllocatesID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::RenderChainVEData.InheritsID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::UIElements::UIR::BMPAlloc)>(&UnityEngine::UIElements::UIR::RenderChainVEData::InheritsID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d1ac64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                            "InheritsID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "prev", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "next", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "groupTransformAncestor", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "boneTransformAncestor", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "prevDirty", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "nextDirty", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "hierarchyDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dirtiedValues", ty: "UnityEngine::UIElements::UIR::RenderDataDirtyTypes", modifiers: "", def_value: Some("{}") }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: Some("csnull") }, CppParam { name: "lastCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: Some("csnull") }, CppParam { name: "firstClosingCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: Some("csnull") }, CppParam { name: "lastClosingCommand", ty: "UnityEngine::UIElements::UIR::RenderChainCommand", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isInChain", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isHierarchyHidden", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localFlipsWinding", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "localTransformScaleZero", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldFlipsWinding", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipMethod", ty: "UnityEngine::UIElements::UIR::Implementation::ClipMethod", modifiers: "", def_value: Some("{}") }, CppParam { name: "childrenStencilRef", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "childrenMaskDepth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "disableNudging", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "usesLegacyText", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "UnityEngine::UIElements::UIR::MeshHandle", modifiers: "", def_value: Some("csnull") }, CppParam { name: "closingData", ty: "UnityEngine::UIElements::UIR::MeshHandle", modifiers: "", def_value: Some("csnull") }, CppParam { name: "verticesSpace", ty: "UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "displacementUVStart", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "displacementUVEnd", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "clipRectID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "opacityID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "textCoreSettingsID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderLeftColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderTopColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderRightColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderBottomColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "tintColorID", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositeOpacity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevText", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "nextText", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "textEntries", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "textures", ty: "UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UIElements::UIR::RenderChainVEData::RenderChainVEData(UnityEngine::UIElements::VisualElement prev, UnityEngine::UIElements::VisualElement next, UnityEngine::UIElements::VisualElement groupTransformAncestor, UnityEngine::UIElements::VisualElement boneTransformAncestor, UnityEngine::UIElements::VisualElement prevDirty, UnityEngine::UIElements::VisualElement nextDirty, int32_t hierarchyDepth, UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtiedValues, uint32_t dirtyID, UnityEngine::UIElements::UIR::RenderChainCommand firstCommand, UnityEngine::UIElements::UIR::RenderChainCommand lastCommand, UnityEngine::UIElements::UIR::RenderChainCommand firstClosingCommand, UnityEngine::UIElements::UIR::RenderChainCommand lastClosingCommand, bool isInChain, bool isHierarchyHidden, bool localFlipsWinding, bool localTransformScaleZero, bool worldFlipsWinding, UnityEngine::UIElements::UIR::Implementation::ClipMethod clipMethod, int32_t childrenStencilRef, int32_t childrenMaskDepth, bool disableNudging, bool usesLegacyText, UnityEngine::UIElements::UIR::MeshHandle data, UnityEngine::UIElements::UIR::MeshHandle closingData, UnityEngine::Matrix4x4 verticesSpace, int32_t displacementUVStart, int32_t displacementUVEnd, UnityEngine::UIElements::UIR::BMPAlloc transformID, UnityEngine::UIElements::UIR::BMPAlloc clipRectID, UnityEngine::UIElements::UIR::BMPAlloc opacityID, UnityEngine::UIElements::UIR::BMPAlloc textCoreSettingsID, UnityEngine::UIElements::UIR::BMPAlloc backgroundColorID, UnityEngine::UIElements::UIR::BMPAlloc borderLeftColorID, UnityEngine::UIElements::UIR::BMPAlloc borderTopColorID, UnityEngine::UIElements::UIR::BMPAlloc borderRightColorID, UnityEngine::UIElements::UIR::BMPAlloc borderBottomColorID, UnityEngine::UIElements::UIR::BMPAlloc tintColorID, float_t compositeOpacity, UnityEngine::Color backgroundColor, UnityEngine::UIElements::VisualElement prevText, UnityEngine::UIElements::VisualElement nextText, System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry> textEntries, UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry> textures) noexcept : ::bs_hook::ValueTypeWrapper() {this->prev = prev;
this->next = next;
this->groupTransformAncestor = groupTransformAncestor;
this->boneTransformAncestor = boneTransformAncestor;
this->prevDirty = prevDirty;
this->nextDirty = nextDirty;
this->hierarchyDepth = hierarchyDepth;
this->dirtiedValues = dirtiedValues;
this->dirtyID = dirtyID;
this->firstCommand = firstCommand;
this->lastCommand = lastCommand;
this->firstClosingCommand = firstClosingCommand;
this->lastClosingCommand = lastClosingCommand;
this->isInChain = isInChain;
this->isHierarchyHidden = isHierarchyHidden;
this->localFlipsWinding = localFlipsWinding;
this->localTransformScaleZero = localTransformScaleZero;
this->worldFlipsWinding = worldFlipsWinding;
this->clipMethod = clipMethod;
this->childrenStencilRef = childrenStencilRef;
this->childrenMaskDepth = childrenMaskDepth;
this->disableNudging = disableNudging;
this->usesLegacyText = usesLegacyText;
this->data = data;
this->closingData = closingData;
this->verticesSpace = verticesSpace;
this->displacementUVStart = displacementUVStart;
this->displacementUVEnd = displacementUVEnd;
this->transformID = transformID;
this->clipRectID = clipRectID;
this->opacityID = opacityID;
this->textCoreSettingsID = textCoreSettingsID;
this->backgroundColorID = backgroundColorID;
this->borderLeftColorID = borderLeftColorID;
this->borderTopColorID = borderTopColorID;
this->borderRightColorID = borderRightColorID;
this->borderBottomColorID = borderBottomColorID;
this->tintColorID = tintColorID;
this->compositeOpacity = compositeOpacity;
this->backgroundColor = backgroundColor;
this->prevText = prevText;
this->nextText = nextText;
this->textEntries = textEntries;
this->textures = textures;
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_prev(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChainVEData::__get_prev() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_next(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChainVEData::__get_next() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_groupTransformAncestor(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x10>(this->__instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChainVEData::__get_groupTransformAncestor() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_boneTransformAncestor(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x18>(this->__instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChainVEData::__get_boneTransformAncestor() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_prevDirty(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x20>(this->__instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChainVEData::__get_prevDirty() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x20>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_nextDirty(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x28>(this->__instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChainVEData::__get_nextDirty() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x28>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_hierarchyDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChainVEData::__get_hierarchyDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_dirtiedValues(UnityEngine::UIElements::UIR::RenderDataDirtyTypes value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::RenderDataDirtyTypes, 0x34>(this->__instance, std::forward<UnityEngine::UIElements::UIR::RenderDataDirtyTypes>(value));
}
constexpr UnityEngine::UIElements::UIR::RenderDataDirtyTypes UnityEngine::UIElements::UIR::RenderChainVEData::__get_dirtiedValues() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::RenderDataDirtyTypes, 0x34>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_dirtyID(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x38>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::RenderChainVEData::__get_dirtyID() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x38>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_firstCommand(UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x40>(this->__instance, std::forward<UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::RenderChainVEData::__get_firstCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x40>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_lastCommand(UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x48>(this->__instance, std::forward<UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::RenderChainVEData::__get_lastCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x48>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_firstClosingCommand(UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x50>(this->__instance, std::forward<UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::RenderChainVEData::__get_firstClosingCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x50>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_lastClosingCommand(UnityEngine::UIElements::UIR::RenderChainCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x58>(this->__instance, std::forward<UnityEngine::UIElements::UIR::RenderChainCommand>(value));
}
constexpr UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::RenderChainVEData::__get_lastClosingCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::RenderChainCommand, 0x58>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_isInChain(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChainVEData::__get_isInChain() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_isHierarchyHidden(bool value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChainVEData::__get_isHierarchyHidden() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_localFlipsWinding(bool value)  {
::cordl_internals::setInstanceField<bool, 0x62>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChainVEData::__get_localFlipsWinding() const {
return ::cordl_internals::getInstanceField<bool, 0x62>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_localTransformScaleZero(bool value)  {
::cordl_internals::setInstanceField<bool, 0x63>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChainVEData::__get_localTransformScaleZero() const {
return ::cordl_internals::getInstanceField<bool, 0x63>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_worldFlipsWinding(bool value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChainVEData::__get_worldFlipsWinding() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_clipMethod(UnityEngine::UIElements::UIR::Implementation::ClipMethod value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Implementation::ClipMethod, 0x68>(this->__instance, std::forward<UnityEngine::UIElements::UIR::Implementation::ClipMethod>(value));
}
constexpr UnityEngine::UIElements::UIR::Implementation::ClipMethod UnityEngine::UIElements::UIR::RenderChainVEData::__get_clipMethod() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Implementation::ClipMethod, 0x68>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_childrenStencilRef(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChainVEData::__get_childrenStencilRef() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_childrenMaskDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChainVEData::__get_childrenMaskDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_disableNudging(bool value)  {
::cordl_internals::setInstanceField<bool, 0x74>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChainVEData::__get_disableNudging() const {
return ::cordl_internals::getInstanceField<bool, 0x74>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_usesLegacyText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x75>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::RenderChainVEData::__get_usesLegacyText() const {
return ::cordl_internals::getInstanceField<bool, 0x75>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_data(UnityEngine::UIElements::UIR::MeshHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::MeshHandle, 0x78>(this->__instance, std::forward<UnityEngine::UIElements::UIR::MeshHandle>(value));
}
constexpr UnityEngine::UIElements::UIR::MeshHandle UnityEngine::UIElements::UIR::RenderChainVEData::__get_data() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::MeshHandle, 0x78>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_closingData(UnityEngine::UIElements::UIR::MeshHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::MeshHandle, 0x80>(this->__instance, std::forward<UnityEngine::UIElements::UIR::MeshHandle>(value));
}
constexpr UnityEngine::UIElements::UIR::MeshHandle UnityEngine::UIElements::UIR::RenderChainVEData::__get_closingData() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::MeshHandle, 0x80>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_verticesSpace(UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Matrix4x4, 0x88>(this->__instance, std::forward<UnityEngine::Matrix4x4>(value));
}
constexpr UnityEngine::Matrix4x4 UnityEngine::UIElements::UIR::RenderChainVEData::__get_verticesSpace() const {
return ::cordl_internals::getInstanceField<UnityEngine::Matrix4x4, 0x88>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_displacementUVStart(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChainVEData::__get_displacementUVStart() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_displacementUVEnd(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xcc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::RenderChainVEData::__get_displacementUVEnd() const {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_transformID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xd0>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_transformID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xd0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_clipRectID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xd8>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_clipRectID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xd8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_opacityID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xe0>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_opacityID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xe0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_textCoreSettingsID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xe8>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_textCoreSettingsID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xe8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_backgroundColorID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xf0>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_backgroundColorID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xf0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_borderLeftColorID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xf8>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_borderLeftColorID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0xf8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_borderTopColorID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0x100>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_borderTopColorID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0x100>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_borderRightColorID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0x108>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_borderRightColorID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0x108>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_borderBottomColorID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0x110>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_borderBottomColorID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0x110>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_tintColorID(UnityEngine::UIElements::UIR::BMPAlloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0x118>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BMPAlloc>(value));
}
constexpr UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::RenderChainVEData::__get_tintColorID() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BMPAlloc, 0x118>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_compositeOpacity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x120>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UIR::RenderChainVEData::__get_compositeOpacity() const {
return ::cordl_internals::getInstanceField<float_t, 0x120>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_backgroundColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x124>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UIR::RenderChainVEData::__get_backgroundColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x124>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_prevText(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x138>(this->__instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChainVEData::__get_prevText() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x138>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_nextText(UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::VisualElement, 0x140>(this->__instance, std::forward<UnityEngine::UIElements::VisualElement>(value));
}
constexpr UnityEngine::UIElements::VisualElement UnityEngine::UIElements::UIR::RenderChainVEData::__get_nextText() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::VisualElement, 0x140>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_textEntries(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry>, 0x148>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry> UnityEngine::UIElements::UIR::RenderChainVEData::__get_textEntries() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::RenderChainTextEntry>, 0x148>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::RenderChainVEData::__set_textures(UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry>, 0x150>(this->__instance, std::forward<UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry>>(value));
}
constexpr UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry> UnityEngine::UIElements::UIR::RenderChainVEData::__get_textures() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::BasicNode_1<UnityEngine::UIElements::UIR::TextureEntry>, 0x150>(this->__instance);
}
 UnityEngine::UIElements::UIR::RenderChainCommand UnityEngine::UIElements::UIR::RenderChainVEData::get_lastClosingOrLastCommand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                            "get_lastClosingOrLastCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::RenderChainCommand, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::UIElements::UIR::RenderChainVEData::AllocatesID(UnityEngine::UIElements::UIR::BMPAlloc alloc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                            "AllocatesID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, alloc);
}
 bool UnityEngine::UIElements::UIR::RenderChainVEData::InheritsID(UnityEngine::UIElements::UIR::BMPAlloc alloc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::RenderChainVEData>::get(),
                            "InheritsID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, alloc);
}
