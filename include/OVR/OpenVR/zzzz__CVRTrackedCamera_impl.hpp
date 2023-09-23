#pragma once
#include "OVR/OpenVR/zzzz__CVRTrackedCamera_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameType_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRTrackedCamera_def.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraError_def.hpp"
#include "OVR/OpenVR/zzzz__CameraVideoStreamFrameHeader_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRTrackedCamera::*)(::cordl_internals::intptr_t)>(&OVR::OpenVR::CVRTrackedCamera::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2664708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.GetCameraErrorNameFromEnum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRTrackedCamera::*)(OVR::OpenVR::EVRTrackedCameraError)>(&OVR::OpenVR::CVRTrackedCamera::GetCameraErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x266481c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetCameraErrorNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.HasCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, ByRef<bool>)>(&OVR::OpenVR::CVRTrackedCamera::HasCamera)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26648a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "HasCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.GetCameraFrameSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>)>(&OVR::OpenVR::CVRTrackedCamera::GetCameraFrameSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26648c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetCameraFrameSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.GetCameraIntrinsics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<OVR::OpenVR::HmdVector2_t>, ByRef<OVR::OpenVR::HmdVector2_t>)>(&OVR::OpenVR::CVRTrackedCamera::GetCameraIntrinsics)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26648f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetCameraIntrinsics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdVector2_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.GetCameraProjection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, OVR::OpenVR::EVRTrackedCameraFrameType, float_t, float_t, ByRef<OVR::OpenVR::HmdMatrix44_t>)>(&OVR::OpenVR::CVRTrackedCamera::GetCameraProjection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x266491c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetCameraProjection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix44_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.AcquireVideoStreamingService
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, ByRef<uint64_t>)>(&OVR::OpenVR::CVRTrackedCamera::AcquireVideoStreamingService)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2664940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "AcquireVideoStreamingService",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.ReleaseVideoStreamingService
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t)>(&OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamingService)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "ReleaseVideoStreamingService",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.GetVideoStreamFrameBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, OVR::OpenVR::EVRTrackedCameraFrameType, ::cordl_internals::intptr_t, uint32_t, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(&OVR::OpenVR::CVRTrackedCamera::GetVideoStreamFrameBuffer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x266498c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetVideoStreamFrameBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.GetVideoStreamTextureSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint32_t, OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<OVR::OpenVR::VRTextureBounds_t>, ByRef<uint32_t>, ByRef<uint32_t>)>(&OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26649b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetVideoStreamTextureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.GetVideoStreamTextureD3D11
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, OVR::OpenVR::EVRTrackedCameraFrameType, ::cordl_internals::intptr_t, ByRef<::cordl_internals::intptr_t>, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(&OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureD3D11)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26649dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetVideoStreamTextureD3D11",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.GetVideoStreamTextureGL
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, OVR::OpenVR::EVRTrackedCameraFrameType, ByRef<uint32_t>, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t>, uint32_t)>(&OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureGL)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2664a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetVideoStreamTextureGL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::CVRTrackedCamera.ReleaseVideoStreamTextureGL
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::CVRTrackedCamera::*)(uint64_t, uint32_t)>(&OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamTextureGL)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2664a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "ReleaseVideoStreamTextureGL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void OVR::OpenVR::CVRTrackedCamera::__set_FnTable(OVR::OpenVR::IVRTrackedCamera value)  {
::cordl_internals::setInstanceField<OVR::OpenVR::IVRTrackedCamera, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVR::OpenVR::IVRTrackedCamera>(value));
}
constexpr OVR::OpenVR::IVRTrackedCamera OVR::OpenVR::CVRTrackedCamera::__get_FnTable() const {
return ::cordl_internals::getInstanceField<OVR::OpenVR::IVRTrackedCamera, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 OVR::OpenVR::CVRTrackedCamera::CVRTrackedCamera(::cordl_internals::intptr_t pInterface)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CVRTrackedCamera>(pInterface))) {}
 void OVR::OpenVR::CVRTrackedCamera::_ctor(::cordl_internals::intptr_t pInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pInterface);
}
 ::StringW OVR::OpenVR::CVRTrackedCamera::GetCameraErrorNameFromEnum(OVR::OpenVR::EVRTrackedCameraError eCameraError)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetCameraErrorNameFromEnum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, eCameraError);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::HasCamera(uint32_t nDeviceIndex, ByRef<bool> pHasCamera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "HasCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, nDeviceIndex, pHasCamera);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetCameraFrameSize(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight, ByRef<uint32_t> pnFrameBufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetCameraFrameSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetCameraIntrinsics(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<OVR::OpenVR::HmdVector2_t> pFocalLength, ByRef<OVR::OpenVR::HmdVector2_t> pCenter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetCameraIntrinsics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdVector2_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdVector2_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, nDeviceIndex, eFrameType, pFocalLength, pCenter);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetCameraProjection(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, float_t flZNear, float_t flZFar, ByRef<OVR::OpenVR::HmdMatrix44_t> pProjection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetCameraProjection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::HmdMatrix44_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::AcquireVideoStreamingService(uint32_t nDeviceIndex, ByRef<uint64_t> pHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "AcquireVideoStreamingService",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, nDeviceIndex, pHandle);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamingService(uint64_t hTrackedCamera)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "ReleaseVideoStreamingService",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, hTrackedCamera);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::cordl_internals::intptr_t pFrameBuffer, uint32_t nFrameBufferSize, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetVideoStreamFrameBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureSize(uint32_t nDeviceIndex, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetVideoStreamTextureSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ::cordl_internals::intptr_t pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t> ppD3D11ShaderResourceView, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetVideoStreamTextureD3D11",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::GetVideoStreamTextureGL(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, ByRef<uint32_t> pglTextureId, ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint32_t nFrameHeaderSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "GetVideoStreamTextureGL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::EVRTrackedCameraFrameType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::CameraVideoStreamFrameHeader_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
}
 OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::CVRTrackedCamera::ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint32_t glTextureId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::CVRTrackedCamera>::get(),
                            "ReleaseVideoStreamTextureGL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVR::OpenVR::EVRTrackedCameraError, false>(const_cast<void*>(instance), ___internal_method, hTrackedCamera, glTextureId);
}
