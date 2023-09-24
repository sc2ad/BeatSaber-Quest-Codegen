#pragma once
#include "LIV/SDK/Unity/zzzz__SDKRender_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_def.hpp"
#include "LIV/SDK/Unity/zzzz__LIV_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.GetClipPlaneMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material (LIV::SDK::Unity::SDKRender::*)(bool, bool, UnityEngine::Rendering::ColorWriteMask)>(&LIV::SDK::Unity::SDKRender::GetClipPlaneMaterial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x209d32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "GetClipPlaneMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::ColorWriteMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.GetGroundClipPlaneMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material (LIV::SDK::Unity::SDKRender::*)(bool, UnityEngine::Rendering::ColorWriteMask)>(&LIV::SDK::Unity::SDKRender::GetGroundClipPlaneMaterial)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x209d430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "GetGroundClipPlaneMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::ColorWriteMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_useDeferredRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_useDeferredRendering)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x209d4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_useDeferredRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_interlacedRendering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_interlacedRendering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x209d518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_interlacedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_canRenderBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_canRenderBackground)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x209d530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_canRenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_canRenderForeground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_canRenderForeground)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x209d5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_canRenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_canRenderOptimized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_canRenderOptimized)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x209d65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_canRenderOptimized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)(LIV::SDK::Unity::LIV)>(&LIV::SDK::Unity::SDKRender::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x209bac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::LIV>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.UpdateCameraSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::UpdateCameraSettings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x209deb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "UpdateCameraSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.Render
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::Render)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x209c188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.RenderBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::RenderBackground)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x209e81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "RenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.RenderForeground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::RenderForeground)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x209e934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "RenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.RenderOptimized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::RenderOptimized)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x209edf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "RenderOptimized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.CreateAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::CreateAssets)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x209d7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.DestroyAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::DestroyAssets)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x20a036c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "DestroyAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x209bc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_liv
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::LIV (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_liv)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a05e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_liv",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_outputFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKOutputFrame (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_outputFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20a05f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_outputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_inputFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKInputFrame (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_inputFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20a0600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_inputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_resolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKResolution (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a0610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_resolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_cameraInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_cameraInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20a0618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_cameraInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_cameraReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_cameraReference)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x209faa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_cameraReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_hmdCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_hmdCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20a0620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_hmdCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_stage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_stage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20a063c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_stage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_stageTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_stageTransform)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x20a0654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_stageTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_stageLocalToWorldMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_stageLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x20a0670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_stageLocalToWorldMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_localToWorldMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_localToWorldMatrix)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x209e0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_localToWorldMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_spectatorLayerMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_spectatorLayerMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x209e1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_spectatorLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_disableStandardAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_disableStandardAssets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x209f750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_disableStandardAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.get_canSetPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::get_canSetPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20a0768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_canSetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.SetPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LIV::SDK::Unity::SDKRender::*)(UnityEngine::Vector3, UnityEngine::Quaternion, float_t, bool)>(&LIV::SDK::Unity::SDKRender::SetPose)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x20a0788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.SetGroundPlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)(float_t, UnityEngine::Vector3, bool)>(&LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x20a0c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SetGroundPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.SetGroundPlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)(UnityEngine::Plane, bool)>(&LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x20a0dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SetGroundPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Plane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.SetGroundPlane
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)(UnityEngine::Transform, bool)>(&LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x20a0e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SetGroundPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.ReleaseBridgePoseControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::ReleaseBridgePoseControl)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x20a04f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "ReleaseBridgePoseControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.UpdateBridgeResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::UpdateBridgeResolution)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x209e41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "UpdateBridgeResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.UpdateBridgeInputFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::UpdateBridgeInputFrame)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x209df34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "UpdateBridgeInputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.InvokePreRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::InvokePreRender)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x209e7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePreRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.IvokePostRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::IvokePostRender)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x209f2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "IvokePostRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.InvokePreRenderBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::InvokePreRenderBackground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x209f53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePreRenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.InvokePostRenderBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::InvokePostRenderBackground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x209f690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePostRenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.InvokePreRenderForeground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::InvokePreRenderForeground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x209f964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePreRenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.InvokePostRenderForeground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::InvokePostRenderForeground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x209f99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePostRenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.CreateBackgroundTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::CreateBackgroundTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20a0ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateBackgroundTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.CreateForegroundTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::CreateForegroundTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20a1200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateForegroundTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.CreateOptimizedTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::CreateOptimizedTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20a1294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateOptimizedTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.CreateComplexClipPlaneTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::CreateComplexClipPlaneTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x20a1328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateComplexClipPlaneTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.UpdateTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)()>(&LIV::SDK::Unity::SDKRender::UpdateTextures)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x209e564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "UpdateTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKRender.SendTextureToBridge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LIV::SDK::Unity::SDKRender::*)(UnityEngine::RenderTexture, LIV::SDK::Unity::TEXTURE_ID)>(&LIV::SDK::Unity::SDKRender::SendTextureToBridge)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x209f574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SendTextureToBridge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::TEXTURE_ID>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  LIV::SDK::Unity::SDKRender::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__clipPlaneCommandBuffer(UnityEngine::Rendering::CommandBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CommandBuffer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CommandBuffer>(value));
}
constexpr UnityEngine::Rendering::CommandBuffer LIV::SDK::Unity::SDKRender::__get__clipPlaneCommandBuffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CommandBuffer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__combineAlphaCommandBuffer(UnityEngine::Rendering::CommandBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CommandBuffer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CommandBuffer>(value));
}
constexpr UnityEngine::Rendering::CommandBuffer LIV::SDK::Unity::SDKRender::__get__combineAlphaCommandBuffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CommandBuffer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__captureTextureCommandBuffer(UnityEngine::Rendering::CommandBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CommandBuffer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CommandBuffer>(value));
}
constexpr UnityEngine::Rendering::CommandBuffer LIV::SDK::Unity::SDKRender::__get__captureTextureCommandBuffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CommandBuffer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__applyTextureCommandBuffer(UnityEngine::Rendering::CommandBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CommandBuffer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CommandBuffer>(value));
}
constexpr UnityEngine::Rendering::CommandBuffer LIV::SDK::Unity::SDKRender::__get__applyTextureCommandBuffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CommandBuffer, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__optimizedRenderingCommandBuffer(UnityEngine::Rendering::CommandBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CommandBuffer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CommandBuffer>(value));
}
constexpr UnityEngine::Rendering::CommandBuffer LIV::SDK::Unity::SDKRender::__get__optimizedRenderingCommandBuffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CommandBuffer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__clipPlaneCameraEvent(UnityEngine::Rendering::CameraEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CameraEvent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CameraEvent>(value));
}
constexpr UnityEngine::Rendering::CameraEvent LIV::SDK::Unity::SDKRender::__get__clipPlaneCameraEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CameraEvent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__optimizedRenderingCameraEvent(UnityEngine::Rendering::CameraEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CameraEvent, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CameraEvent>(value));
}
constexpr UnityEngine::Rendering::CameraEvent LIV::SDK::Unity::SDKRender::__get__optimizedRenderingCameraEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CameraEvent, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__clipPlaneMesh(UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<UnityEngine::Mesh, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Mesh>(value));
}
constexpr UnityEngine::Mesh LIV::SDK::Unity::SDKRender::__get__clipPlaneMesh() const {
return ::cordl_internals::getInstanceField<UnityEngine::Mesh, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__clipPlaneSimpleMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material LIV::SDK::Unity::SDKRender::__get__clipPlaneSimpleMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__clipPlaneSimpleDebugMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material LIV::SDK::Unity::SDKRender::__get__clipPlaneSimpleDebugMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__clipPlaneComplexMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material LIV::SDK::Unity::SDKRender::__get__clipPlaneComplexMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__clipPlaneComplexDebugMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material LIV::SDK::Unity::SDKRender::__get__clipPlaneComplexDebugMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__writeOpaqueToAlphaMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material LIV::SDK::Unity::SDKRender::__get__writeOpaqueToAlphaMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__combineAlphaMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material LIV::SDK::Unity::SDKRender::__get__combineAlphaMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__writeMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material LIV::SDK::Unity::SDKRender::__get__writeMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__forceForwardRenderingMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material LIV::SDK::Unity::SDKRender::__get__forceForwardRenderingMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__backgroundRenderTexture(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture LIV::SDK::Unity::SDKRender::__get__backgroundRenderTexture() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__foregroundRenderTexture(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture LIV::SDK::Unity::SDKRender::__get__foregroundRenderTexture() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__optimizedRenderTexture(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture LIV::SDK::Unity::SDKRender::__get__optimizedRenderTexture() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__complexClipPlaneRenderTexture(UnityEngine::RenderTexture value)  {
::cordl_internals::setInstanceField<UnityEngine::RenderTexture, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RenderTexture>(value));
}
constexpr UnityEngine::RenderTexture LIV::SDK::Unity::SDKRender::__get__complexClipPlaneRenderTexture() const {
return ::cordl_internals::getInstanceField<UnityEngine::RenderTexture, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__liv(LIV::SDK::Unity::LIV value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::LIV, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LIV::SDK::Unity::LIV>(value));
}
constexpr LIV::SDK::Unity::LIV LIV::SDK::Unity::SDKRender::__get__liv() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::LIV, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__outputFrame(LIV::SDK::Unity::SDKOutputFrame value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKOutputFrame, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LIV::SDK::Unity::SDKOutputFrame>(value));
}
constexpr LIV::SDK::Unity::SDKOutputFrame LIV::SDK::Unity::SDKRender::__get__outputFrame() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKOutputFrame, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__inputFrame(LIV::SDK::Unity::SDKInputFrame value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKInputFrame, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LIV::SDK::Unity::SDKInputFrame>(value));
}
constexpr LIV::SDK::Unity::SDKInputFrame LIV::SDK::Unity::SDKRender::__get__inputFrame() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKInputFrame, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__resolution(LIV::SDK::Unity::SDKResolution value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKResolution, 0x2b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LIV::SDK::Unity::SDKResolution>(value));
}
constexpr LIV::SDK::Unity::SDKResolution LIV::SDK::Unity::SDKRender::__get__resolution() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKResolution, 0x2b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__cameraInstance(UnityEngine::Camera value)  {
::cordl_internals::setInstanceField<UnityEngine::Camera, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Camera>(value));
}
constexpr UnityEngine::Camera LIV::SDK::Unity::SDKRender::__get__cameraInstance() const {
return ::cordl_internals::getInstanceField<UnityEngine::Camera, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__requestedPose(LIV::SDK::Unity::SDKPose value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKPose, 0x2c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LIV::SDK::Unity::SDKPose>(value));
}
constexpr LIV::SDK::Unity::SDKPose LIV::SDK::Unity::SDKRender::__get__requestedPose() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKPose, 0x2c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LIV::SDK::Unity::SDKRender::__set__requestedPoseFrameIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x338>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LIV::SDK::Unity::SDKRender::__get__requestedPoseFrameIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x338>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Material LIV::SDK::Unity::SDKRender::GetClipPlaneMaterial(bool debugClipPlane, bool complexClipPlane, UnityEngine::Rendering::ColorWriteMask colorWriteMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "GetClipPlaneMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::ColorWriteMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method, debugClipPlane, complexClipPlane, colorWriteMask);
}
 UnityEngine::Material LIV::SDK::Unity::SDKRender::GetGroundClipPlaneMaterial(bool debugClipPlane, UnityEngine::Rendering::ColorWriteMask colorWriteMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "GetGroundClipPlaneMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::ColorWriteMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method, debugClipPlane, colorWriteMask);
}
 bool LIV::SDK::Unity::SDKRender::get_useDeferredRendering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_useDeferredRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool LIV::SDK::Unity::SDKRender::get_interlacedRendering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_interlacedRendering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool LIV::SDK::Unity::SDKRender::get_canRenderBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_canRenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool LIV::SDK::Unity::SDKRender::get_canRenderForeground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_canRenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool LIV::SDK::Unity::SDKRender::get_canRenderOptimized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_canRenderOptimized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 LIV::SDK::Unity::SDKRender LIV::SDK::Unity::SDKRender::New_ctor(LIV::SDK::Unity::LIV liv)  {
LIV::SDK::Unity::SDKRender o{THROW_UNLESS(::il2cpp_utils::New<LIV::SDK::Unity::SDKRender>(liv))};
return o;
}
 void LIV::SDK::Unity::SDKRender::_ctor(LIV::SDK::Unity::LIV liv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::LIV>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, liv);
}
 void LIV::SDK::Unity::SDKRender::UpdateCameraSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "UpdateCameraSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::Render()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "Render",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::RenderBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "RenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::RenderForeground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "RenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::RenderOptimized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "RenderOptimized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::CreateAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::DestroyAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "DestroyAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 LIV::SDK::Unity::LIV LIV::SDK::Unity::SDKRender::get_liv()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_liv",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::LIV, false>(const_cast<void*>(instance), ___internal_method);
}
 LIV::SDK::Unity::SDKOutputFrame LIV::SDK::Unity::SDKRender::get_outputFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_outputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKOutputFrame, false>(const_cast<void*>(instance), ___internal_method);
}
 LIV::SDK::Unity::SDKInputFrame LIV::SDK::Unity::SDKRender::get_inputFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_inputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKInputFrame, false>(const_cast<void*>(instance), ___internal_method);
}
 LIV::SDK::Unity::SDKResolution LIV::SDK::Unity::SDKRender::get_resolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_resolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKResolution, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Camera LIV::SDK::Unity::SDKRender::get_cameraInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_cameraInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Camera, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Camera LIV::SDK::Unity::SDKRender::get_cameraReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_cameraReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Camera, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Camera LIV::SDK::Unity::SDKRender::get_hmdCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_hmdCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Camera, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Transform LIV::SDK::Unity::SDKRender::get_stage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_stage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Transform LIV::SDK::Unity::SDKRender::get_stageTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_stageTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Matrix4x4 LIV::SDK::Unity::SDKRender::get_stageLocalToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_stageLocalToWorldMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Matrix4x4, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Matrix4x4 LIV::SDK::Unity::SDKRender::get_localToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_localToWorldMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Matrix4x4, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t LIV::SDK::Unity::SDKRender::get_spectatorLayerMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_spectatorLayerMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool LIV::SDK::Unity::SDKRender::get_disableStandardAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_disableStandardAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool LIV::SDK::Unity::SDKRender::get_canSetPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "get_canSetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param verticalFieldOfView: float_t (default: 60)
/// @param useLocalSpace: bool (default: false)
 bool LIV::SDK::Unity::SDKRender::SetPose(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, float_t verticalFieldOfView, bool useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SetPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, position, rotation, verticalFieldOfView, useLocalSpace);
}
/// @param useLocalSpace: bool (default: false)
 void LIV::SDK::Unity::SDKRender::SetGroundPlane(float_t distance, UnityEngine::Vector3 normal, bool useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SetGroundPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, distance, normal, useLocalSpace);
}
/// @param useLocalSpace: bool (default: false)
 void LIV::SDK::Unity::SDKRender::SetGroundPlane(UnityEngine::Plane plane, bool useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SetGroundPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Plane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, plane, useLocalSpace);
}
/// @param useLocalSpace: bool (default: false)
 void LIV::SDK::Unity::SDKRender::SetGroundPlane(UnityEngine::Transform transform, bool useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SetGroundPlane",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transform, useLocalSpace);
}
 void LIV::SDK::Unity::SDKRender::ReleaseBridgePoseControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "ReleaseBridgePoseControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::UpdateBridgeResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "UpdateBridgeResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::UpdateBridgeInputFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "UpdateBridgeInputFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::InvokePreRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePreRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::IvokePostRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "IvokePostRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::InvokePreRenderBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePreRenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::InvokePostRenderBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePostRenderBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::InvokePreRenderForeground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePreRenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::InvokePostRenderForeground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "InvokePostRenderForeground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::CreateBackgroundTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateBackgroundTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::CreateForegroundTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateForegroundTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::CreateOptimizedTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateOptimizedTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::CreateComplexClipPlaneTexture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "CreateComplexClipPlaneTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::UpdateTextures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "UpdateTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LIV::SDK::Unity::SDKRender::SendTextureToBridge(UnityEngine::RenderTexture texture, LIV::SDK::Unity::TEXTURE_ID id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKRender>::get(),
                            "SendTextureToBridge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RenderTexture>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LIV::SDK::Unity::TEXTURE_ID>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, texture, id);
}
