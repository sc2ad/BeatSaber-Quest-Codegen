#pragma once
namespace {
#include "LIV/SDK/Unity/zzzz__SDKUtils_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKRender_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "UnityEngine/zzzz__RenderingPath_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "LIV/SDK/Unity/zzzz__RENDERING_PIPELINE_def.hpp"
#include "UnityEngine/zzzz__RenderTextureReadWrite_def.hpp"
#include "LIV/SDK/Unity/zzzz__FEATURES_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTrackedSpace_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.CreateClipPlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Mesh, int32_t, int32_t, bool, float_t)>(&::LIV::SDK::Unity::SDKUtils::CreateClipPlane)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x209feb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "CreateClipPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetReadWriteFromColorSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureReadWrite (*)(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE)>(&::LIV::SDK::Unity::SDKUtils::GetReadWriteFromColorSpace)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20a3d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetReadWriteFromColorSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.get_GetDefaultColorSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE (*)()>(&::LIV::SDK::Unity::SDKUtils::get_GetDefaultColorSpace)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x20a3d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "get_GetDefaultColorSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetColorSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE (*)(::UnityEngine::RenderTexture)>(&::LIV::SDK::Unity::SDKUtils::GetColorSpace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x20a1420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetColorSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetRenderingPipeline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::RENDERING_PIPELINE (*)(::UnityEngine::RenderingPath)>(&::LIV::SDK::Unity::SDKUtils::GetRenderingPipeline)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20a3d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetRenderingPipeline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderingPath>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::TEXTURE_DEVICE (*)()>(&::LIV::SDK::Unity::SDKUtils::GetDevice)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x20a13bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.ContainsFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, uint64_t)>(&::LIV::SDK::Unity::SDKUtils::ContainsFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x209bee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "ContainsFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.SetFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, bool)>(&::LIV::SDK::Unity::SDKUtils::SetFlag)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x209af78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "SetFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetCameraPositionAndRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKPose, ::UnityEngine::Matrix4x4, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&::LIV::SDK::Unity::SDKUtils::GetCameraPositionAndRotation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x20a3d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetCameraPositionAndRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.CleanCameraBehaviours
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera, ::ArrayW<::StringW>)>(&::LIV::SDK::Unity::SDKUtils::CleanCameraBehaviours)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x209fb2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "CleanCameraBehaviours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.SetCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera, ::UnityEngine::Transform, ::LIV::SDK::Unity::SDKInputFrame, ::UnityEngine::Matrix4x4, int32_t)>(&::LIV::SDK::Unity::SDKUtils::SetCamera)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x209e1d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "SetCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKInputFrame>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.RotateQuaternionByMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Quaternion)>(&::LIV::SDK::Unity::SDKUtils::RotateQuaternionByMatrix)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x20a0a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "RotateQuaternionByMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.GetTrackedSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKTrackedSpace (*)(::UnityEngine::Transform)>(&::LIV::SDK::Unity::SDKUtils::GetTrackedSpace)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x20a3e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetTrackedSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.CreateTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::RenderTexture>, int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat)>(&::LIV::SDK::Unity::SDKUtils::CreateTexture)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x20a1090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "CreateTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTexture>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureFormat>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.DestroyTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::RenderTexture>)>(&::LIV::SDK::Unity::SDKUtils::DestroyTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20a0554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "DestroyTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTexture>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.ApplyUserSpaceTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKRender)>(&::LIV::SDK::Unity::SDKUtils::ApplyUserSpaceTransform)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x209e474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "ApplyUserSpaceTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKRender>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.CreateBridgeOutputFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKRender)>(&::LIV::SDK::Unity::SDKUtils::CreateBridgeOutputFrame)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x209f32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "CreateBridgeOutputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKRender>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.FeatureEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::LIV::SDK::Unity::FEATURES, ::LIV::SDK::Unity::FEATURES)>(&::LIV::SDK::Unity::SDKUtils::FeatureEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x209d524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "FeatureEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::FEATURES>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::FEATURES>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.DisableStandardAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera, ByRef<::ArrayW<::UnityEngine::MonoBehaviour>>, ByRef<::ArrayW<bool>>)>(&::LIV::SDK::Unity::SDKUtils::DisableStandardAssets)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x209f76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "DisableStandardAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::MonoBehaviour>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.RestoreStandardAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<::UnityEngine::MonoBehaviour>>, ByRef<::ArrayW<bool>>)>(&::LIV::SDK::Unity::SDKUtils::RestoreStandardAssets)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x209fa18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "RestoreStandardAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::MonoBehaviour>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKUtils.ForceForwardRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Camera, ::UnityEngine::Mesh, ::UnityEngine::Material)>(&::LIV::SDK::Unity::SDKUtils::ForceForwardRendering)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x20a4088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "ForceForwardRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::LIV::SDK::Unity::SDKUtils::CreateClipPlane(::UnityEngine::Mesh mesh, int32_t resX, int32_t resY, bool useQuads, float_t skirtLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "CreateClipPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mesh, resX, resY, useQuads, skirtLength);
}
 ::UnityEngine::RenderTextureReadWrite ::LIV::SDK::Unity::SDKUtils::GetReadWriteFromColorSpace(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetReadWriteFromColorSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureReadWrite, false>(nullptr, ___internal_method, colorSpace);
}
 ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE ::LIV::SDK::Unity::SDKUtils::get_GetDefaultColorSpace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "get_GetDefaultColorSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE, false>(nullptr, ___internal_method);
}
 ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE ::LIV::SDK::Unity::SDKUtils::GetColorSpace(::UnityEngine::RenderTexture renderTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetColorSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::TEXTURE_COLOR_SPACE, false>(nullptr, ___internal_method, renderTexture);
}
 ::LIV::SDK::Unity::RENDERING_PIPELINE ::LIV::SDK::Unity::SDKUtils::GetRenderingPipeline(::UnityEngine::RenderingPath renderingPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetRenderingPipeline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderingPath>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::RENDERING_PIPELINE, false>(nullptr, ___internal_method, renderingPath);
}
 ::LIV::SDK::Unity::TEXTURE_DEVICE ::LIV::SDK::Unity::SDKUtils::GetDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::TEXTURE_DEVICE, false>(nullptr, ___internal_method);
}
 bool ::LIV::SDK::Unity::SDKUtils::ContainsFlag(uint64_t flags, uint64_t flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "ContainsFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, flags, flag);
}
 uint64_t ::LIV::SDK::Unity::SDKUtils::SetFlag(uint64_t flags, uint64_t flag, bool enabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "SetFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, flags, flag, enabled);
}
 void ::LIV::SDK::Unity::SDKUtils::GetCameraPositionAndRotation(::LIV::SDK::Unity::SDKPose pose, ::UnityEngine::Matrix4x4 originLocalToWorldMatrix, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetCameraPositionAndRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pose, originLocalToWorldMatrix, position, rotation);
}
 void ::LIV::SDK::Unity::SDKUtils::CleanCameraBehaviours(::UnityEngine::Camera camera, ::ArrayW<::StringW> excludeBehaviours)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "CleanCameraBehaviours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, excludeBehaviours);
}
 void ::LIV::SDK::Unity::SDKUtils::SetCamera(::UnityEngine::Camera camera, ::UnityEngine::Transform cameraTransform, ::LIV::SDK::Unity::SDKInputFrame inputFrame, ::UnityEngine::Matrix4x4 originLocalToWorldMatrix, int32_t layerMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "SetCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKInputFrame>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, cameraTransform, inputFrame, originLocalToWorldMatrix, layerMask);
}
 ::UnityEngine::Quaternion ::LIV::SDK::Unity::SDKUtils::RotateQuaternionByMatrix(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Quaternion rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "RotateQuaternionByMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, matrix, rotation);
}
 ::LIV::SDK::Unity::SDKTrackedSpace ::LIV::SDK::Unity::SDKUtils::GetTrackedSpace(::UnityEngine::Transform transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "GetTrackedSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTrackedSpace, false>(nullptr, ___internal_method, transform);
}
template<typename T>
 bool ::LIV::SDK::Unity::SDKUtils::DestroyObject(ByRef<T> reference)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                        "DestroyObject",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reference);
}
template<typename T>
 bool ::LIV::SDK::Unity::SDKUtils::DisposeObject(ByRef<T> reference)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                        "DisposeObject",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, reference);
}
 bool ::LIV::SDK::Unity::SDKUtils::CreateTexture(ByRef<::UnityEngine::RenderTexture> renderTexture, int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "CreateTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTexture>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureFormat>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, renderTexture, width, height, depth, format);
}
 void ::LIV::SDK::Unity::SDKUtils::DestroyTexture(ByRef<::UnityEngine::RenderTexture> _renderTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "DestroyTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::RenderTexture>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _renderTexture);
}
 void ::LIV::SDK::Unity::SDKUtils::ApplyUserSpaceTransform(::LIV::SDK::Unity::SDKRender render)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "ApplyUserSpaceTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKRender>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, render);
}
 void ::LIV::SDK::Unity::SDKUtils::CreateBridgeOutputFrame(::LIV::SDK::Unity::SDKRender render)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "CreateBridgeOutputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKRender>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, render);
}
 bool ::LIV::SDK::Unity::SDKUtils::FeatureEnabled(::LIV::SDK::Unity::FEATURES features, ::LIV::SDK::Unity::FEATURES feature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "FeatureEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::FEATURES>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::FEATURES>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, features, feature);
}
 void ::LIV::SDK::Unity::SDKUtils::DisableStandardAssets(::UnityEngine::Camera cameraInstance, ByRef<::ArrayW<::UnityEngine::MonoBehaviour>> behaviours, ByRef<::ArrayW<bool>> wasBehaviourEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "DisableStandardAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::MonoBehaviour>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cameraInstance, behaviours, wasBehaviourEnabled);
}
 void ::LIV::SDK::Unity::SDKUtils::RestoreStandardAssets(ByRef<::ArrayW<::UnityEngine::MonoBehaviour>> behaviours, ByRef<::ArrayW<bool>> wasBehaviourEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "RestoreStandardAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::UnityEngine::MonoBehaviour>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, behaviours, wasBehaviourEnabled);
}
 void ::LIV::SDK::Unity::SDKUtils::ForceForwardRendering(::UnityEngine::Camera cameraInstance, ::UnityEngine::Mesh clipPlaneMesh, ::UnityEngine::Material forceForwardRenderingMaterial)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKUtils>::get(),
                            "ForceForwardRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cameraInstance, clipPlaneMesh, forceForwardRenderingMaterial);
}
} // end anonymous namespace
