#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__OVRMeshJobs_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/zzzz__BoneWeight_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::Execute)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2625d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Unity::Jobs::IJobParallelFor
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::operator ::Unity::Jobs::IJobParallelFor() const {
return ::Unity::Jobs::IJobParallelFor(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Normals", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "UV", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}") }, CppParam { name: "BoneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshVerticesPosition", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshNormals", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshUV", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshBoneWeights", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshBoneIndices", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Normals, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> UV, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> BoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> MeshVerticesPosition, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> MeshNormals, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> MeshUV, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> MeshBoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> MeshBoneIndices) noexcept : ::bs_hook::ValueTypeWrapper() {this->Vertices = Vertices;
this->Normals = Normals;
this->UV = UV;
this->BoneWeights = BoneWeights;
this->MeshVerticesPosition = MeshVerticesPosition;
this->MeshNormals = MeshNormals;
this->MeshUV = MeshUV;
this->MeshBoneWeights = MeshBoneWeights;
this->MeshBoneIndices = MeshBoneIndices;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__set_Vertices(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, 0x0>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__get_Vertices() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__set_Normals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, 0x10>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__get_Normals() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__set_UV(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>, 0x20>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__get_UV() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__set_BoneWeights(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>, 0x30>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__get_BoneWeights() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__set_MeshVerticesPosition(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>, 0x40>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__get_MeshVerticesPosition() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__set_MeshNormals(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>, 0x50>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__get_MeshNormals() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>, 0x50>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__set_MeshUV(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>, 0x60>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__get_MeshUV() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>, 0x60>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__set_MeshBoneWeights(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>, 0x70>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__get_MeshBoneWeights() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>, 0x70>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__set_MeshBoneIndices(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>, 0x80>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::__get_MeshBoneIndices() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>, 0x80>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob::Execute(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::*)(int32_t)>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::Execute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2625efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Unity::Jobs::IJobParallelFor
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::operator ::Unity::Jobs::IJobParallelFor() const {
return ::Unity::Jobs::IJobParallelFor(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshIndices", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "NumIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob(::Unity::Collections::NativeArray_1<uint32_t> Triangles, ::Unity::Collections::NativeArray_1<int16_t> MeshIndices, int32_t NumIndices) noexcept : ::bs_hook::ValueTypeWrapper() {this->Triangles = Triangles;
this->MeshIndices = MeshIndices;
this->NumIndices = NumIndices;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::__set_Triangles(::Unity::Collections::NativeArray_1<uint32_t> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<uint32_t>, 0x0>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<uint32_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::__get_Triangles() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<uint32_t>, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::__set_MeshIndices(::Unity::Collections::NativeArray_1<int16_t> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<int16_t>, 0x10>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<int16_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<int16_t> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::__get_MeshIndices() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<int16_t>, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::__set_NumIndices(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::__get_NumIndices() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob::Execute(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
//  Writing Method size for method: ::GlobalNamespace::OVRMeshJobs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRMeshJobs::*)()>(&::GlobalNamespace::OVRMeshJobs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2625d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::OVRMeshJobs::OVRMeshJobs()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OVRMeshJobs>())) {}
 void ::GlobalNamespace::OVRMeshJobs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRMeshJobs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::*)(::ArrayW<int16_t>, int32_t)>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<int16_t> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->UnityNativeArray = UnityNativeArray;
this->_handle = _handle;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::__set_UnityNativeArray(::Unity::Collections::NativeArray_1<int16_t> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<int16_t>, 0x0>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<int16_t>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<int16_t> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::__get_UnityNativeArray() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<int16_t>, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::__set__handle(::System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::__get__handle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::_ctor(::ArrayW<int16_t> ovrArray, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ovrArray, length);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::*)(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>, int32_t)>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->UnityNativeArray = UnityNativeArray;
this->_handle = _handle;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::__set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>, 0x0>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::__get_UnityNativeArray() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::__set__handle(::System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::__get__handle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::_ctor(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> ovrArray, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ovrArray, length);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::*)(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>, int32_t)>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->UnityNativeArray = UnityNativeArray;
this->_handle = _handle;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::__set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>, 0x0>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::__get_UnityNativeArray() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::__set__handle(::System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::__get__handle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::_ctor(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> ovrArray, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ovrArray, length);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::*)(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>, int32_t)>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->UnityNativeArray = UnityNativeArray;
this->_handle = _handle;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::__set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>, 0x0>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::__get_UnityNativeArray() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::__set__handle(::System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::__get__handle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::_ctor(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> ovrArray, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ovrArray, length);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::*)(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>, int32_t)>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::*)()>(&::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->UnityNativeArray = UnityNativeArray;
this->_handle = _handle;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::__set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> value)  {
::cordl_internals::setInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>, 0x0>(this->__instance, std::forward<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>>(value));
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::__get_UnityNativeArray() const {
return ::cordl_internals::getInstanceField<::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::__set__handle(::System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance, std::forward<::System::Runtime::InteropServices::GCHandle>(value));
}
constexpr ::System::Runtime::InteropServices::GCHandle ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::__get__handle() const {
return ::cordl_internals::getInstanceField<::System::Runtime::InteropServices::GCHandle, 0x8>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::_ctor(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> ovrArray, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ovrArray, length);
}
 void ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
