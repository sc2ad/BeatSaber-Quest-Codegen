#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchVisibility_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: UnityEngine::Rendering::BatchCullingContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::BatchCullingContext::*)(Unity::Collections::NativeArray_1<UnityEngine::Plane>, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>, Unity::Collections::NativeArray_1<int32_t>, Unity::Collections::NativeArray_1<int32_t>, UnityEngine::Rendering::LODParameters, UnityEngine::Matrix4x4, float_t)>(&UnityEngine::Rendering::BatchCullingContext::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b76a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::BatchCullingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::Plane>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LODParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "cullingPlanes", ty: "Unity::Collections::NativeArray_1<UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchVisibility", ty: "Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleIndices", ty: "Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleIndicesY", ty: "Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodParameters", ty: "UnityEngine::Rendering::LODParameters", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMatrix", ty: "UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::BatchCullingContext::BatchCullingContext(Unity::Collections::NativeArray_1<UnityEngine::Plane> cullingPlanes, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> batchVisibility, Unity::Collections::NativeArray_1<int32_t> visibleIndices, Unity::Collections::NativeArray_1<int32_t> visibleIndicesY, UnityEngine::Rendering::LODParameters lodParameters, UnityEngine::Matrix4x4 cullingMatrix, float_t nearPlane) noexcept : ::bs_hook::ValueTypeWrapper() {this->cullingPlanes = cullingPlanes;
this->batchVisibility = batchVisibility;
this->visibleIndices = visibleIndices;
this->visibleIndicesY = visibleIndicesY;
this->lodParameters = lodParameters;
this->cullingMatrix = cullingMatrix;
this->nearPlane = nearPlane;
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_cullingPlanes(Unity::Collections::NativeArray_1<UnityEngine::Plane> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Plane>, 0x0>(this->__instance, std::forward<Unity::Collections::NativeArray_1<UnityEngine::Plane>>(value));
}
constexpr Unity::Collections::NativeArray_1<UnityEngine::Plane> UnityEngine::Rendering::BatchCullingContext::__get_cullingPlanes() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Plane>, 0x0>(this->__instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_batchVisibility(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>, 0x10>(this->__instance, std::forward<Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>>(value));
}
constexpr Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> UnityEngine::Rendering::BatchCullingContext::__get_batchVisibility() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>, 0x10>(this->__instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_visibleIndices(Unity::Collections::NativeArray_1<int32_t> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<int32_t>, 0x20>(this->__instance, std::forward<Unity::Collections::NativeArray_1<int32_t>>(value));
}
constexpr Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::BatchCullingContext::__get_visibleIndices() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<int32_t>, 0x20>(this->__instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_visibleIndicesY(Unity::Collections::NativeArray_1<int32_t> value)  {
::cordl_internals::setInstanceField<Unity::Collections::NativeArray_1<int32_t>, 0x30>(this->__instance, std::forward<Unity::Collections::NativeArray_1<int32_t>>(value));
}
constexpr Unity::Collections::NativeArray_1<int32_t> UnityEngine::Rendering::BatchCullingContext::__get_visibleIndicesY() const {
return ::cordl_internals::getInstanceField<Unity::Collections::NativeArray_1<int32_t>, 0x30>(this->__instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_lodParameters(UnityEngine::Rendering::LODParameters value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::LODParameters, 0x40>(this->__instance, std::forward<UnityEngine::Rendering::LODParameters>(value));
}
constexpr UnityEngine::Rendering::LODParameters UnityEngine::Rendering::BatchCullingContext::__get_lodParameters() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::LODParameters, 0x40>(this->__instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_cullingMatrix(UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Matrix4x4, 0x5c>(this->__instance, std::forward<UnityEngine::Matrix4x4>(value));
}
constexpr UnityEngine::Matrix4x4 UnityEngine::Rendering::BatchCullingContext::__get_cullingMatrix() const {
return ::cordl_internals::getInstanceField<UnityEngine::Matrix4x4, 0x5c>(this->__instance);
}
constexpr void UnityEngine::Rendering::BatchCullingContext::__set_nearPlane(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::Rendering::BatchCullingContext::__get_nearPlane() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this->__instance);
}
 void UnityEngine::Rendering::BatchCullingContext::_ctor(Unity::Collections::NativeArray_1<UnityEngine::Plane> inCullingPlanes, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> inOutBatchVisibility, Unity::Collections::NativeArray_1<int32_t> outVisibleIndices, Unity::Collections::NativeArray_1<int32_t> outVisibleIndicesY, UnityEngine::Rendering::LODParameters inLodParameters, UnityEngine::Matrix4x4 inCullingMatrix, float_t inNearPlane)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::BatchCullingContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::Plane>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Collections::NativeArray_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LODParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, inCullingPlanes, inOutBatchVisibility, outVisibleIndices, outVisibleIndicesY, inLodParameters, inCullingMatrix, inNearPlane);
}
