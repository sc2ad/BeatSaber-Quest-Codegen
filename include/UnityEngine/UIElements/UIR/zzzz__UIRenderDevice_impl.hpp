#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawBufferRange_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChainCommand_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureSlotManager_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshHandle_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Transform3x4_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Utility_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Page_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__DrawParams_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allocTime", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshHandle", ty: "UnityEngine::UIElements::UIR::MeshHandle", modifiers: "", def_value: Some("csnull") }, CppParam { name: "permAllocVerts", ty: "UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "permAllocIndices", ty: "UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "permPage", ty: "UnityEngine::UIElements::UIR::Page", modifiers: "", def_value: Some("csnull") }, CppParam { name: "copyBackIndices", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate(uint32_t id, uint32_t allocTime, UnityEngine::UIElements::UIR::MeshHandle meshHandle, UnityEngine::UIElements::UIR::Alloc permAllocVerts, UnityEngine::UIElements::UIR::Alloc permAllocIndices, UnityEngine::UIElements::UIR::Page permPage, bool copyBackIndices) noexcept : ::bs_hook::ValueTypeWrapper() {this->id = id;
this->allocTime = allocTime;
this->meshHandle = meshHandle;
this->permAllocVerts = permAllocVerts;
this->permAllocIndices = permAllocIndices;
this->permPage = permPage;
this->copyBackIndices = copyBackIndices;
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__set_id(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__get_id() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__set_allocTime(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__get_allocTime() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__set_meshHandle(UnityEngine::UIElements::UIR::MeshHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::MeshHandle, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::UIR::MeshHandle>(value));
}
constexpr UnityEngine::UIElements::UIR::MeshHandle UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__get_meshHandle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::MeshHandle, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__set_permAllocVerts(UnityEngine::UIElements::UIR::Alloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x10>(this->__instance, std::forward<UnityEngine::UIElements::UIR::Alloc>(value));
}
constexpr UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__get_permAllocVerts() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__set_permAllocIndices(UnityEngine::UIElements::UIR::Alloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x28>(this->__instance, std::forward<UnityEngine::UIElements::UIR::Alloc>(value));
}
constexpr UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__get_permAllocIndices() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x28>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__set_permPage(UnityEngine::UIElements::UIR::Page value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Page, 0x40>(this->__instance, std::forward<UnityEngine::UIElements::UIR::Page>(value));
}
constexpr UnityEngine::UIElements::UIR::Page UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__get_permPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Page, 0x40>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__set_copyBackIndices(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate::__get_copyBackIndices() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->__instance);
}
// Ctor Parameters [CppParam { name: "alloc", ty: "UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: Some("{}") }, CppParam { name: "page", ty: "UnityEngine::UIElements::UIR::Page", modifiers: "", def_value: Some("csnull") }, CppParam { name: "vertices", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree(UnityEngine::UIElements::UIR::Alloc alloc, UnityEngine::UIElements::UIR::Page page, bool vertices) noexcept : ::bs_hook::ValueTypeWrapper() {this->alloc = alloc;
this->page = page;
this->vertices = vertices;
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree::__set_alloc(UnityEngine::UIElements::UIR::Alloc value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x0>(this->__instance, std::forward<UnityEngine::UIElements::UIR::Alloc>(value));
}
constexpr UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree::__get_alloc() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Alloc, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree::__set_page(UnityEngine::UIElements::UIR::Page value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Page, 0x18>(this->__instance, std::forward<UnityEngine::UIElements::UIR::Page>(value));
}
constexpr UnityEngine::UIElements::UIR::Page UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree::__get_page() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Page, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree::__set_vertices(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree::__get_vertices() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree::*)()>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c56b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "page", ty: "UnityEngine::UIElements::UIR::Page", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree(uint32_t handle, UnityEngine::UIElements::UIR::Page page) noexcept : ::bs_hook::ValueTypeWrapper() {this->handle = handle;
this->page = page;
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree::__set_handle(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree::__get_handle() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree::__set_page(UnityEngine::UIElements::UIR::Page value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Page, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::UIR::Page>(value));
}
constexpr UnityEngine::UIElements::UIR::Page UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree::__get_page() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Page, 0x8>(this->__instance);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
// Ctor Parameters [CppParam { name: "stateMatProps", ty: "UnityEngine::MaterialPropertyBlock", modifiers: "", def_value: Some("csnull") }, CppParam { name: "defaultMat", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "curState", ty: "UnityEngine::UIElements::UIR::State", modifiers: "", def_value: Some("{}") }, CppParam { name: "curPage", ty: "UnityEngine::UIElements::UIR::Page", modifiers: "", def_value: Some("csnull") }, CppParam { name: "mustApplyMaterial", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mustApplyCommonBlock", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mustApplyStateBlock", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "mustApplyStencil", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState(UnityEngine::MaterialPropertyBlock stateMatProps, UnityEngine::Material defaultMat, UnityEngine::UIElements::UIR::State curState, UnityEngine::UIElements::UIR::Page curPage, bool mustApplyMaterial, bool mustApplyCommonBlock, bool mustApplyStateBlock, bool mustApplyStencil) noexcept : ::bs_hook::ValueTypeWrapper() {this->stateMatProps = stateMatProps;
this->defaultMat = defaultMat;
this->curState = curState;
this->curPage = curPage;
this->mustApplyMaterial = mustApplyMaterial;
this->mustApplyCommonBlock = mustApplyCommonBlock;
this->mustApplyStateBlock = mustApplyStateBlock;
this->mustApplyStencil = mustApplyStencil;
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__set_stateMatProps(UnityEngine::MaterialPropertyBlock value)  {
::cordl_internals::setInstanceField<UnityEngine::MaterialPropertyBlock, 0x0>(this->__instance, std::forward<UnityEngine::MaterialPropertyBlock>(value));
}
constexpr UnityEngine::MaterialPropertyBlock UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__get_stateMatProps() const {
return ::cordl_internals::getInstanceField<UnityEngine::MaterialPropertyBlock, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__set_defaultMat(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x8>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__get_defaultMat() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__set_curState(UnityEngine::UIElements::UIR::State value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::State, 0x10>(this->__instance, std::forward<UnityEngine::UIElements::UIR::State>(value));
}
constexpr UnityEngine::UIElements::UIR::State UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__get_curState() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::State, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__set_curPage(UnityEngine::UIElements::UIR::Page value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Page, 0x30>(this->__instance, std::forward<UnityEngine::UIElements::UIR::Page>(value));
}
constexpr UnityEngine::UIElements::UIR::Page UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__get_curPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Page, 0x30>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__set_mustApplyMaterial(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__get_mustApplyMaterial() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__set_mustApplyCommonBlock(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__get_mustApplyCommonBlock() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__set_mustApplyStateBlock(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__get_mustApplyStateBlock() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__set_mustApplyStencil(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3b>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState::__get_mustApplyStencil() const {
return ::cordl_internals::getInstanceField<bool, 0x3b>(this->__instance);
}
// Ctor Parameters [CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalIndices", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawCommandCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialSetCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawRangeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawRangeCallCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "immediateDraws", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stencilRefChanges", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics(int32_t currentFrameIndex, uint32_t totalIndices, uint32_t commandCount, uint32_t drawCommandCount, uint32_t materialSetCount, uint32_t drawRangeCount, uint32_t drawRangeCallCount, uint32_t immediateDraws, uint32_t stencilRefChanges) noexcept : ::bs_hook::ValueTypeWrapper() {this->currentFrameIndex = currentFrameIndex;
this->totalIndices = totalIndices;
this->commandCount = commandCount;
this->drawCommandCount = drawCommandCount;
this->materialSetCount = materialSetCount;
this->drawRangeCount = drawRangeCount;
this->drawRangeCallCount = drawRangeCallCount;
this->immediateDraws = immediateDraws;
this->stencilRefChanges = stencilRefChanges;
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__set_currentFrameIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__get_currentFrameIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__set_totalIndices(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__get_totalIndices() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__set_commandCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__get_commandCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__set_drawCommandCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__get_drawCommandCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__set_materialSetCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__get_materialSetCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__set_drawRangeCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__get_drawRangeCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__set_drawRangeCallCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__get_drawRangeCallCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__set_immediateDraws(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__get_immediateDraws() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__set_stencilRefChanges(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics::__get_stencilRefChanges() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::*)()>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5c308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c.__ctor_b__53_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::MeshHandle (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::*)()>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__ctor_b__53_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c5c310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get(),
                            "<.ctor>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c.__ctor_b__53_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::*)(UnityEngine::UIElements::UIR::MeshHandle)>(&UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__ctor_b__53_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5c368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get(),
                            "<.ctor>b__53_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__set___9(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c value)  {
::cordl_internals::setStaticField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get>(std::forward<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>(value));
}
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get>();
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__set___9__53_0(System::Func_1<UnityEngine::UIElements::UIR::MeshHandle> value)  {
::cordl_internals::setStaticField<System::Func_1<UnityEngine::UIElements::UIR::MeshHandle>, "<>9__53_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get>(std::forward<System::Func_1<UnityEngine::UIElements::UIR::MeshHandle>>(value));
}
 System::Func_1<UnityEngine::UIElements::UIR::MeshHandle> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__get___9__53_0()  {
return ::cordl_internals::getStaticField<System::Func_1<UnityEngine::UIElements::UIR::MeshHandle>, "<>9__53_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get>();
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__set___9__53_1(System::Action_1<UnityEngine::UIElements::UIR::MeshHandle> value)  {
::cordl_internals::setStaticField<System::Action_1<UnityEngine::UIElements::UIR::MeshHandle>, "<>9__53_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get>(std::forward<System::Action_1<UnityEngine::UIElements::UIR::MeshHandle>>(value));
}
 System::Action_1<UnityEngine::UIElements::UIR::MeshHandle> UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__get___9__53_1()  {
return ::cordl_internals::getStaticField<System::Action_1<UnityEngine::UIElements::UIR::MeshHandle>, "<>9__53_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get>();
}
// Ctor Parameters []
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::UnityEngine__UIElements__UIR__UIRenderDevice____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__UIElements__UIR__UIRenderDevice____c>())) {}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UIElements::UIR::MeshHandle UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__ctor_b__53_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get(),
                            "<.ctor>b__53_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::MeshHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c::__ctor_b__53_1(UnityEngine::UIElements::UIR::MeshHandle mh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice____c>::get(),
                            "<.ctor>b__53_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mh);
}
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.get_maxVerticesPerPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::get_maxVerticesPerPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c55090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_maxVerticesPerPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.get_breakBatches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::get_breakBatches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c55098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_breakBatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.set_breakBatches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(bool)>(&UnityEngine::UIElements::UIR::UIRenderDevice::set_breakBatches)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c550a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "set_breakBatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(uint32_t, uint32_t)>(&UnityEngine::UIElements::UIR::UIRenderDevice::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c55464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(uint32_t, uint32_t, bool)>(&UnityEngine::UIElements::UIR::UIRenderDevice::_ctor)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x2c5546c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.get_defaultShaderInfoTexFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::get_defaultShaderInfoTexFloat)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x2c55b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_defaultShaderInfoTexFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.get_defaultShaderInfoTexARGB8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Texture2D (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::get_defaultShaderInfoTexARGB8)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2c55f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_defaultShaderInfoTexARGB8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.get_vertexTexturingIsAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::get_vertexTexturingIsAvailable)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2c561d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_vertexTexturingIsAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.get_shaderModelIs35
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::get_shaderModelIs35)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2c563b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_shaderModelIs35",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.InitVertexDeclaration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::InitVertexDeclaration)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2c5659c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "InitVertexDeclaration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.CompleteCreation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::CompleteCreation)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2c56804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "CompleteCreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.get_fullyCreated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::get_fullyCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c569a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_fullyCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.get_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c569b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.set_disposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(bool)>(&UnityEngine::UIElements::UIR::UIRenderDevice::set_disposed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c569c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c569cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(bool)>(&UnityEngine::UIElements::UIR::UIRenderDevice::Dispose)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2c56a38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UIR::UIRenderDevice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.Allocate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::MeshHandle (UnityEngine::UIElements::UIR::UIRenderDevice::*)(uint32_t, uint32_t, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>, ByRef<Unity::Collections::NativeSlice_1<uint16_t>>, ByRef<uint16_t>)>(&UnityEngine::UIElements::UIR::UIRenderDevice::Allocate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c56f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(UnityEngine::UIElements::UIR::MeshHandle, uint32_t, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>)>(&UnityEngine::UIElements::UIR::UIRenderDevice::Update)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2c57640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(UnityEngine::UIElements::UIR::MeshHandle, uint32_t, uint32_t, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>, ByRef<Unity::Collections::NativeSlice_1<uint16_t>>, ByRef<uint16_t>)>(&UnityEngine::UIElements::UIR::UIRenderDevice::Update)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2c57f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.TryAllocFromPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::UIRenderDevice::*)(UnityEngine::UIElements::UIR::Page, uint32_t, uint32_t, ByRef<UnityEngine::UIElements::UIR::Alloc>, ByRef<UnityEngine::UIElements::UIR::Alloc>, bool)>(&UnityEngine::UIElements::UIR::UIRenderDevice::TryAllocFromPage)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c58094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "TryAllocFromPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::Page>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::Alloc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::Alloc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.Allocate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(UnityEngine::UIElements::UIR::MeshHandle, uint32_t, uint32_t, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>, ByRef<Unity::Collections::NativeSlice_1<uint16_t>>, bool)>(&UnityEngine::UIElements::UIR::UIRenderDevice::Allocate)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x2c5700c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.UpdateAfterGPUUsedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(UnityEngine::UIElements::UIR::MeshHandle, uint32_t, uint32_t, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>, ByRef<Unity::Collections::NativeSlice_1<uint16_t>>, ByRef<uint16_t>, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>, bool)>(&UnityEngine::UIElements::UIR::UIRenderDevice::UpdateAfterGPUUsedData)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x2c57808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "UpdateAfterGPUUsedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.Free
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(UnityEngine::UIElements::UIR::MeshHandle)>(&UnityEngine::UIElements::UIR::UIRenderDevice::Free)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0x2c584ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Free",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.GetClipSpaceParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::GetClipSpaceParams)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2c58d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "GetClipSpaceParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.OnFrameRenderingBegin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::OnFrameRenderingBegin)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c58e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "OnFrameRenderingBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.ApplyDrawCommandState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(UnityEngine::UIElements::UIR::RenderChainCommand, int32_t, UnityEngine::Material, bool, bool, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState>)>(&UnityEngine::UIElements::UIR::UIRenderDevice::ApplyDrawCommandState)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2c59858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "ApplyDrawCommandState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.ApplyBatchState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState>, bool)>(&UnityEngine::UIElements::UIR::UIRenderDevice::ApplyBatchState)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2c59a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "ApplyBatchState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.EvaluateChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(UnityEngine::UIElements::UIR::RenderChainCommand, UnityEngine::Material, UnityEngine::Material, UnityEngine::Texture, UnityEngine::Texture, float_t, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>, Unity::Collections::NativeSlice_1<UnityEngine::Vector4>, UnityEngine::MaterialPropertyBlock, bool, ByRef<System::Exception>)>(&UnityEngine::UIElements::UIR::UIRenderDevice::EvaluateChain)> {
  constexpr static std::size_t size = 0x1118;
  constexpr static std::size_t addrs = 0x2c59c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "EvaluateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeSlice_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MaterialPropertyBlock>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Exception>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.UpdateFenceValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::UpdateFenceValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c5bce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "UpdateFenceValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.KickRanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(void*, ByRef<int32_t>, ByRef<int32_t>, int32_t, UnityEngine::UIElements::UIR::Page)>(&UnityEngine::UIElements::UIR::UIRenderDevice::KickRanges)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x2c5aee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "KickRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::Page>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.WaitOnCpuFence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)(uint32_t)>(&UnityEngine::UIElements::UIR::UIRenderDevice::WaitOnCpuFence)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c5bdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "WaitOnCpuFence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.AdvanceFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::AdvanceFrame)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x2c58ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "AdvanceFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.PruneUnusedPages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::PruneUnusedPages)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2c5be3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "PruneUnusedPages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.PrepareForGfxDeviceRecreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::PrepareForGfxDeviceRecreate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2c5bf84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "PrepareForGfxDeviceRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.WrapUpGfxDeviceRecreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::WrapUpGfxDeviceRecreate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c5c10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "WrapUpGfxDeviceRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.FlushAllPendingDeviceDisposes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::FlushAllPendingDeviceDisposes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c5c16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "FlushAllPendingDeviceDisposes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.GatherDrawStatistics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics (UnityEngine::UIElements::UIR::UIRenderDevice::*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::GatherDrawStatistics)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c5c1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "GatherDrawStatistics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.ProcessDeviceFreeQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::ProcessDeviceFreeQueue)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2c56bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "ProcessDeviceFreeQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.OnEngineUpdateGlobal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::OnEngineUpdateGlobal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c5c1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "OnEngineUpdateGlobal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::UIRenderDevice.OnFlushPendingResources
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::UIRenderDevice::OnFlushPendingResources)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c5c248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "OnFlushPendingResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::UIElements::UIR::UIRenderDevice::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_MockDevice(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_MockDevice() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_DefaultStencilState(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_DefaultStencilState() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_VertexDecl(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_VertexDecl() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_FirstPage(UnityEngine::UIElements::UIR::Page value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::Page, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::Page>(value));
}
constexpr UnityEngine::UIElements::UIR::Page UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_FirstPage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::Page, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_NextPageVertexCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_NextPageVertexCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_LargeMeshVertexCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_LargeMeshVertexCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_IndexToVertexCountRatio(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_IndexToVertexCountRatio() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_DeferredFrees(System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree>>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree>>>(value));
}
constexpr System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree>> UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_DeferredFrees() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToFree>>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_Updates(System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>>>(value));
}
constexpr System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>> UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_Updates() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_Fences(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_Fences() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_StandardMatProps(UnityEngine::MaterialPropertyBlock value)  {
::cordl_internals::setInstanceField<UnityEngine::MaterialPropertyBlock, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MaterialPropertyBlock>(value));
}
constexpr UnityEngine::MaterialPropertyBlock UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_StandardMatProps() const {
return ::cordl_internals::getInstanceField<UnityEngine::MaterialPropertyBlock, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_FrameIndex(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_FrameIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_NextUpdateID(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_NextUpdateID() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_DrawStats(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics>(value));
}
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_DrawStats() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_MeshHandles(UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::MeshHandle> value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::MeshHandle>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::MeshHandle>>(value));
}
constexpr UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::MeshHandle> UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_MeshHandles() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::MeshHandle>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_DrawParams(UnityEngine::UIElements::UIR::DrawParams value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::DrawParams, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::DrawParams>(value));
}
constexpr UnityEngine::UIElements::UIR::DrawParams UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_DrawParams() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::DrawParams, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_TextureSlotManager(UnityEngine::UIElements::UIR::TextureSlotManager value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UIR::TextureSlotManager, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::UIR::TextureSlotManager>(value));
}
constexpr UnityEngine::UIElements::UIR::TextureSlotManager UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_TextureSlotManager() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UIR::TextureSlotManager, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_DeviceFreeQueue(System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>, "m_DeviceFreeQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>>(value));
}
 System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree> UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_DeviceFreeQueue()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::LinkedList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DeviceToFree>, "m_DeviceFreeQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_ActiveDeviceCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "m_ActiveDeviceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_ActiveDeviceCount()  {
return ::cordl_internals::getStaticField<int32_t, "m_ActiveDeviceCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_SubscribedToNotifications(bool value)  {
::cordl_internals::setStaticField<bool, "m_SubscribedToNotifications", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<bool>(value));
}
 bool UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_SubscribedToNotifications()  {
return ::cordl_internals::getStaticField<bool, "m_SubscribedToNotifications", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_m_SynchronousFree(bool value)  {
::cordl_internals::setStaticField<bool, "m_SynchronousFree", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<bool>(value));
}
 bool UnityEngine::UIElements::UIR::UIRenderDevice::__get_m_SynchronousFree()  {
return ::cordl_internals::getStaticField<bool, "m_SynchronousFree", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_FontTexPropID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_FontTexPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_FontTexPropID()  {
return ::cordl_internals::getStaticField<int32_t, "s_FontTexPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_FontTexSDFScaleID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_FontTexSDFScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_FontTexSDFScaleID()  {
return ::cordl_internals::getStaticField<int32_t, "s_FontTexSDFScaleID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_GradientSettingsTexID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_GradientSettingsTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_GradientSettingsTexID()  {
return ::cordl_internals::getStaticField<int32_t, "s_GradientSettingsTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_ShaderInfoTexID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_ShaderInfoTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_ShaderInfoTexID()  {
return ::cordl_internals::getStaticField<int32_t, "s_ShaderInfoTexID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_TransformsPropID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_TransformsPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_TransformsPropID()  {
return ::cordl_internals::getStaticField<int32_t, "s_TransformsPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_ClipRectsPropID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_ClipRectsPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_ClipRectsPropID()  {
return ::cordl_internals::getStaticField<int32_t, "s_ClipRectsPropID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_ClipSpaceParamsID(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_ClipSpaceParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_ClipSpaceParamsID()  {
return ::cordl_internals::getStaticField<int32_t, "s_ClipSpaceParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_MarkerAllocate(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerAllocate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_MarkerAllocate()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerAllocate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_MarkerFree(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerFree", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_MarkerFree()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerFree", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_MarkerAdvanceFrame(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerAdvanceFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_MarkerAdvanceFrame()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerAdvanceFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_MarkerFence(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerFence", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_MarkerFence()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerFence", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_MarkerBeforeDraw(Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerBeforeDraw", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<Unity::Profiling::ProfilerMarker>(value));
}
 Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_MarkerBeforeDraw()  {
return ::cordl_internals::getStaticField<Unity::Profiling::ProfilerMarker, "s_MarkerBeforeDraw", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_VertexTexturingIsAvailable(System::Nullable_1<bool> value)  {
::cordl_internals::setStaticField<System::Nullable_1<bool>, "s_VertexTexturingIsAvailable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<System::Nullable_1<bool>>(value));
}
 System::Nullable_1<bool> UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_VertexTexturingIsAvailable()  {
return ::cordl_internals::getStaticField<System::Nullable_1<bool>, "s_VertexTexturingIsAvailable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_ShaderModelIs35(System::Nullable_1<bool> value)  {
::cordl_internals::setStaticField<System::Nullable_1<bool>, "s_ShaderModelIs35", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<System::Nullable_1<bool>>(value));
}
 System::Nullable_1<bool> UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_ShaderModelIs35()  {
return ::cordl_internals::getStaticField<System::Nullable_1<bool>, "s_ShaderModelIs35", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set__maxVerticesPerPage_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::UIElements::UIR::UIRenderDevice::__get__maxVerticesPerPage_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set__breakBatches_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::UIRenderDevice::__get__breakBatches_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_DefaultShaderInfoTexFloat(UnityEngine::Texture2D value)  {
::cordl_internals::setStaticField<UnityEngine::Texture2D, "s_DefaultShaderInfoTexFloat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<UnityEngine::Texture2D>(value));
}
 UnityEngine::Texture2D UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_DefaultShaderInfoTexFloat()  {
return ::cordl_internals::getStaticField<UnityEngine::Texture2D, "s_DefaultShaderInfoTexFloat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::__set_s_DefaultShaderInfoTexARGB8(UnityEngine::Texture2D value)  {
::cordl_internals::setStaticField<UnityEngine::Texture2D, "s_DefaultShaderInfoTexARGB8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>(std::forward<UnityEngine::Texture2D>(value));
}
 UnityEngine::Texture2D UnityEngine::UIElements::UIR::UIRenderDevice::__get_s_DefaultShaderInfoTexARGB8()  {
return ::cordl_internals::getStaticField<UnityEngine::Texture2D, "s_DefaultShaderInfoTexARGB8", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get>();
}
constexpr void UnityEngine::UIElements::UIR::UIRenderDevice::__set__disposed_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xad>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::UIR::UIRenderDevice::__get__disposed_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xad>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint32_t UnityEngine::UIElements::UIR::UIRenderDevice::get_maxVerticesPerPage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_maxVerticesPerPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UIR::UIRenderDevice::get_breakBatches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_breakBatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::set_breakBatches(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "set_breakBatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "initialVertexCapacity", ty: "uint32_t", modifiers: "", def_value: Some("0u") }, CppParam { name: "initialIndexCapacity", ty: "uint32_t", modifiers: "", def_value: Some("0u") }]
 UnityEngine::UIElements::UIR::UIRenderDevice::UIRenderDevice(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UIRenderDevice>(initialVertexCapacity, initialIndexCapacity))) {}
/// @param initialVertexCapacity: uint32_t (default: 0u)
/// @param initialIndexCapacity: uint32_t (default: 0u)
 void UnityEngine::UIElements::UIR::UIRenderDevice::_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialVertexCapacity, initialIndexCapacity);
}
// Ctor Parameters [CppParam { name: "initialVertexCapacity", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "initialIndexCapacity", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "mockDevice", ty: "bool", modifiers: "", def_value: None }]
 UnityEngine::UIElements::UIR::UIRenderDevice::UIRenderDevice(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UIRenderDevice>(initialVertexCapacity, initialIndexCapacity, mockDevice))) {}
 void UnityEngine::UIElements::UIR::UIRenderDevice::_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialVertexCapacity, initialIndexCapacity, mockDevice);
}
 UnityEngine::Texture2D UnityEngine::UIElements::UIR::UIRenderDevice::get_defaultShaderInfoTexFloat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_defaultShaderInfoTexFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Texture2D, false>(nullptr, ___internal_method);
}
 UnityEngine::Texture2D UnityEngine::UIElements::UIR::UIRenderDevice::get_defaultShaderInfoTexARGB8()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_defaultShaderInfoTexARGB8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Texture2D, false>(nullptr, ___internal_method);
}
 bool UnityEngine::UIElements::UIR::UIRenderDevice::get_vertexTexturingIsAvailable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_vertexTexturingIsAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool UnityEngine::UIElements::UIR::UIRenderDevice::get_shaderModelIs35()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_shaderModelIs35",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::InitVertexDeclaration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "InitVertexDeclaration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::CompleteCreation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "CompleteCreation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UIR::UIRenderDevice::get_fullyCreated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_fullyCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UIElements::UIR::UIRenderDevice::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "get_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::set_disposed(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "set_disposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 UnityEngine::UIElements::UIR::MeshHandle UnityEngine::UIElements::UIR::UIRenderDevice::Allocate(uint32_t vertexCount, uint32_t indexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData, ByRef<Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::MeshHandle, false>(const_cast<void*>(instance), ___internal_method, vertexCount, indexCount, vertexData, indexData, indexOffset);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::Update(UnityEngine::UIElements::UIR::MeshHandle mesh, uint32_t vertexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mesh, vertexCount, vertexData);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::Update(UnityEngine::UIElements::UIR::MeshHandle mesh, uint32_t vertexCount, uint32_t indexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData, ByRef<Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mesh, vertexCount, indexCount, vertexData, indexData, indexOffset);
}
 bool UnityEngine::UIElements::UIR::UIRenderDevice::TryAllocFromPage(UnityEngine::UIElements::UIR::Page page, uint32_t vertexCount, uint32_t indexCount, ByRef<UnityEngine::UIElements::UIR::Alloc> va, ByRef<UnityEngine::UIElements::UIR::Alloc> ia, bool shortLived)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "TryAllocFromPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::Page>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::Alloc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::Alloc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, page, vertexCount, indexCount, va, ia, shortLived);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::Allocate(UnityEngine::UIElements::UIR::MeshHandle meshHandle, uint32_t vertexCount, uint32_t indexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData, ByRef<Unity::Collections::NativeSlice_1<uint16_t>> indexData, bool shortLived)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, meshHandle, vertexCount, indexCount, vertexData, indexData, shortLived);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::UpdateAfterGPUUsedData(UnityEngine::UIElements::UIR::MeshHandle mesh, uint32_t vertexCount, uint32_t indexCount, ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> vertexData, ByRef<Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate> allocToUpdate, bool copyBackIndices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "UpdateAfterGPUUsedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeSlice_1<uint16_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__AllocToUpdate>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mesh, vertexCount, indexCount, vertexData, indexData, indexOffset, allocToUpdate, copyBackIndices);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::Free(UnityEngine::UIElements::UIR::MeshHandle mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "Free",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::MeshHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mesh);
}
 UnityEngine::Vector4 UnityEngine::UIElements::UIR::UIRenderDevice::GetClipSpaceParams()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "GetClipSpaceParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::OnFrameRenderingBegin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "OnFrameRenderingBegin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 Unity::Collections::NativeSlice_1<T> UnityEngine::UIElements::UIR::UIRenderDevice::PtrToSlice(void* p, int32_t count)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                        "PtrToSlice",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Unity::Collections::NativeSlice_1<T>, false>(nullptr, ___internal_method, p, count);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::ApplyDrawCommandState(UnityEngine::UIElements::UIR::RenderChainCommand cmd, int32_t textureSlot, UnityEngine::Material newMat, bool newMatDiffers, bool newFontDiffers, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState> st)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "ApplyDrawCommandState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cmd, textureSlot, newMat, newMatDiffers, newFontDiffers, st);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::ApplyBatchState(ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState> st, bool allowMaterialChange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "ApplyBatchState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__EvaluationState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, st, allowMaterialChange);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::EvaluateChain(UnityEngine::UIElements::UIR::RenderChainCommand head, UnityEngine::Material initialMat, UnityEngine::Material defaultMat, UnityEngine::Texture gradientSettings, UnityEngine::Texture shaderInfo, float_t pixelsPerPoint, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> transforms, Unity::Collections::NativeSlice_1<UnityEngine::Vector4> clipRects, UnityEngine::MaterialPropertyBlock stateMatProps, bool allowMaterialChange, ByRef<System::Exception> immediateException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "EvaluateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::RenderChainCommand>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeSlice_1<UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MaterialPropertyBlock>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Exception>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, head, initialMat, defaultMat, gradientSettings, shaderInfo, pixelsPerPoint, transforms, clipRects, stateMatProps, allowMaterialChange, immediateException);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::UpdateFenceValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "UpdateFenceValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::KickRanges(void* ranges, ByRef<int32_t> rangesReady, ByRef<int32_t> rangesStart, int32_t rangesCount, UnityEngine::UIElements::UIR::Page curPage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "KickRanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::Page>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ranges, rangesReady, rangesStart, rangesCount, curPage);
}
template<typename I,typename T>
 void UnityEngine::UIElements::UIR::UIRenderDevice::DrawRanges(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<I> ib, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<T> vb, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> ranges)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                        "DrawRanges",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<I>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<I>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Utility__GPUBuffer_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<I>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ib, vb, ranges);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::WaitOnCpuFence(uint32_t fence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "WaitOnCpuFence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fence);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::AdvanceFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "AdvanceFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::PruneUnusedPages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "PruneUnusedPages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::PrepareForGfxDeviceRecreate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "PrepareForGfxDeviceRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::WrapUpGfxDeviceRecreate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "WrapUpGfxDeviceRecreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::FlushAllPendingDeviceDisposes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "FlushAllPendingDeviceDisposes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics UnityEngine::UIElements::UIR::UIRenderDevice::GatherDrawStatistics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "GatherDrawStatistics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__UIRenderDevice__DrawStatistics, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::ProcessDeviceFreeQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "ProcessDeviceFreeQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::OnEngineUpdateGlobal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "OnEngineUpdateGlobal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void UnityEngine::UIElements::UIR::UIRenderDevice::OnFlushPendingResources()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::UIRenderDevice>::get(),
                            "OnFlushPendingResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
