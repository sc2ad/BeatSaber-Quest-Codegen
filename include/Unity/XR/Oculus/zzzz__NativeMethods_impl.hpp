#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Unity/XR/Oculus/zzzz__NativeMethods_def.hpp"
#include "Unity/XR/Oculus/zzzz__Boundary_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Unity/XR/Oculus/zzzz__SystemHeadset_def.hpp"
// Ctor Parameters [CppParam { name: "sharedDepthBuffer", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dashSupport", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stereoRenderingMode", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorSpace", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lowOverheadMode", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "optimizeBufferDiscards", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "phaseSync", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "symmetricProjection", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "subsampledLayout", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lateLatching", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lateLatchingDebug", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableTrackingOriginStageMode", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spaceWarp", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthSubmission", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveatedRenderingMethod", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::Unity__XR__Oculus__NativeMethods__UserDefinedSettings(uint16_t sharedDepthBuffer, uint16_t dashSupport, uint16_t stereoRenderingMode, uint16_t colorSpace, uint16_t lowOverheadMode, uint16_t optimizeBufferDiscards, uint16_t phaseSync, uint16_t symmetricProjection, uint16_t subsampledLayout, uint16_t lateLatching, uint16_t lateLatchingDebug, uint16_t enableTrackingOriginStageMode, uint16_t spaceWarp, uint16_t depthSubmission, uint16_t foveatedRenderingMethod) noexcept : ::bs_hook::ValueTypeWrapper() {this->sharedDepthBuffer = sharedDepthBuffer;
this->dashSupport = dashSupport;
this->stereoRenderingMode = stereoRenderingMode;
this->colorSpace = colorSpace;
this->lowOverheadMode = lowOverheadMode;
this->optimizeBufferDiscards = optimizeBufferDiscards;
this->phaseSync = phaseSync;
this->symmetricProjection = symmetricProjection;
this->subsampledLayout = subsampledLayout;
this->lateLatching = lateLatching;
this->lateLatchingDebug = lateLatchingDebug;
this->enableTrackingOriginStageMode = enableTrackingOriginStageMode;
this->spaceWarp = spaceWarp;
this->depthSubmission = depthSubmission;
this->foveatedRenderingMethod = foveatedRenderingMethod;
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_sharedDepthBuffer(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_sharedDepthBuffer() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_dashSupport(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_dashSupport() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_stereoRenderingMode(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x4>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_stereoRenderingMode() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x4>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_colorSpace(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x6>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_colorSpace() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x6>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_lowOverheadMode(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x8>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_lowOverheadMode() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x8>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_optimizeBufferDiscards(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xa>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_optimizeBufferDiscards() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xa>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_phaseSync(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xc>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_phaseSync() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xc>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_symmetricProjection(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xe>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_symmetricProjection() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xe>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_subsampledLayout(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x10>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_subsampledLayout() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x10>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_lateLatching(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x12>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_lateLatching() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x12>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_lateLatchingDebug(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x14>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_lateLatchingDebug() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x14>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_enableTrackingOriginStageMode(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x16>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_enableTrackingOriginStageMode() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x16>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_spaceWarp(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x18>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_spaceWarp() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x18>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_depthSubmission(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x1a>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_depthSubmission() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x1a>(this->__instance);
}
constexpr void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__set_foveatedRenderingMethod(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x1c>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings::__get_foveatedRenderingMethod() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x1c>(this->__instance);
}
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetColorScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetColorScale)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2ae14ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetColorScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetColorOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetColorOffset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2ae1584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetColorOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetIsSupportedDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetIsSupportedDevice)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae1618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetIsSupportedDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.LoadOVRPlugin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::LoadOVRPlugin)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ae1688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "LoadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.UnloadOVRPlugin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::UnloadOVRPlugin)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ae1718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "UnloadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetUserDefinedSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetUserDefinedSettings)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ae177c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetUserDefinedSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetHasUserAuthorizedEyeTrackingPermission
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetHasUserAuthorizedEyeTrackingPermission)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae1808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetHasUserAuthorizedEyeTrackingPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetCPULevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetCPULevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae1884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetCPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetGPULevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetGPULevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae1900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetGPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetOVRPVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetOVRPVersion)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2ae197c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetOVRPVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.EnablePerfMetrics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::EnablePerfMetrics)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae19fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "EnablePerfMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.EnableAppMetrics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::EnableAppMetrics)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae1a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "EnableAppMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetDeveloperModeStrict
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetDeveloperModeStrict)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ae1af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetDeveloperModeStrict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetAppHasInputFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetAppHasInputFocus)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae1b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetAppHasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetBoundaryConfigured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetBoundaryConfigured)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae1be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetBoundaryConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetBoundaryDimensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType, ByRef<UnityEngine::Vector3>)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetBoundaryDimensions)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ae1c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetBoundaryDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetBoundaryVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetBoundaryVisible)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae1ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetBoundaryVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetBoundaryVisible)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae1d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetAppShouldQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetAppShouldQuit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae1dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetAppShouldQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetDisplayAvailableFrequencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::intptr_t, ByRef<int32_t>)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetDisplayAvailableFrequencies)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ae1e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetDisplayAvailableFrequencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetDisplayFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetDisplayFrequency)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ae1ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetDisplayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetDisplayFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<float_t>)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetDisplayFrequency)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ae1f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetDisplayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetSystemHeadsetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::XR::Oculus::SystemHeadset (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetSystemHeadsetType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ae1fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetSystemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetTiledMultiResSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetTiledMultiResSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae2040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetTiledMultiResSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetTiledMultiResLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae20b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetTiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetTiledMultiResLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ae212c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetTiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.SetTiledMultiResDynamic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetTiledMultiResDynamic)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae2194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetTiledMultiResDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetEyeTrackedFoveatedRenderingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetEyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae2210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetEyeTrackedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal.GetShouldRestartSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetShouldRestartSession)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ae2284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetShouldRestartSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetColorScale(float_t x, float_t y, float_t z, float_t w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetColorScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetColorOffset(float_t x, float_t y, float_t z, float_t w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetColorOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetIsSupportedDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetIsSupportedDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::LoadOVRPlugin(::StringW ovrpPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "LoadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ovrpPath);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::UnloadOVRPlugin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "UnloadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetUserDefinedSettings(Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetUserDefinedSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetHasUserAuthorizedEyeTrackingPermission(bool authorized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetHasUserAuthorizedEyeTrackingPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, authorized);
}
 int32_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetCPULevel(int32_t cpuLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetCPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cpuLevel);
}
 int32_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetGPULevel(int32_t gpuLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetGPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gpuLevel);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetOVRPVersion(::ArrayW<uint8_t> version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetOVRPVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, version);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::EnablePerfMetrics(bool enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "EnablePerfMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::EnableAppMetrics(bool enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "EnableAppMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetDeveloperModeStrict(bool active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetDeveloperModeStrict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, active);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetAppHasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetAppHasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetBoundaryConfigured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetBoundaryConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetBoundaryDimensions(Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType boundaryType, ByRef<UnityEngine::Vector3> dimensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetBoundaryDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boundaryType, dimensions);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetBoundaryVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetBoundaryVisible(bool boundaryVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boundaryVisible);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetAppShouldQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetAppShouldQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetDisplayAvailableFrequencies(::cordl_internals::intptr_t ptr, ByRef<int32_t> numFrequencies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetDisplayAvailableFrequencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ptr, numFrequencies);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetDisplayFrequency(float_t refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetDisplayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetDisplayFrequency(ByRef<float_t> refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetDisplayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
 Unity::XR::Oculus::SystemHeadset Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetSystemHeadsetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetSystemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::XR::Oculus::SystemHeadset, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetTiledMultiResSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetTiledMultiResSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetTiledMultiResLevel(int32_t level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetTiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, level);
}
 int32_t Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetTiledMultiResLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetTiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::SetTiledMultiResDynamic(bool isDynamic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "SetTiledMultiResDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isDynamic);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetEyeTrackedFoveatedRenderingSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetEyeTrackedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal::GetShouldRestartSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__Internal>::get(),
                            "GetShouldRestartSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetColorScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&Unity::XR::Oculus::NativeMethods::SetColorScale)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ade778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetColorScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetColorOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, float_t, float_t)>(&Unity::XR::Oculus::NativeMethods::SetColorOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ade77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetColorOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetIsSupportedDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetIsSupportedDevice)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2adf278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetIsSupportedDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.LoadOVRPlugin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Unity::XR::Oculus::NativeMethods::LoadOVRPlugin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2adfef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "LoadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.UnloadOVRPlugin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::NativeMethods::UnloadOVRPlugin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae1714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "UnloadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetUserDefinedSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings)>(&Unity::XR::Oculus::NativeMethods::SetUserDefinedSettings)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2adfa78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetUserDefinedSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetHasUserAuthorizedEyeTrackingPermission
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::SetHasUserAuthorizedEyeTrackingPermission)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2adfb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetHasUserAuthorizedEyeTrackingPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetCPULevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&Unity::XR::Oculus::NativeMethods::SetCPULevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae003c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetCPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetGPULevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&Unity::XR::Oculus::NativeMethods::SetGPULevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae0058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetGPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetOVRPVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>)>(&Unity::XR::Oculus::NativeMethods::GetOVRPVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae0374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetOVRPVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.EnablePerfMetrics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::EnablePerfMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae1170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "EnablePerfMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.EnableAppMetrics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::EnableAppMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae14e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "EnableAppMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetDeveloperModeStrict
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&Unity::XR::Oculus::NativeMethods::SetDeveloperModeStrict)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2adee10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetDeveloperModeStrict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetHasInputFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetHasInputFocus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2adec18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetHasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetBoundaryConfigured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetBoundaryConfigured)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2adecc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetBoundaryConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetBoundaryDimensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType, ByRef<UnityEngine::Vector3>)>(&Unity::XR::Oculus::NativeMethods::GetBoundaryDimensions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2adecd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetBoundaryDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetBoundaryVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetBoundaryVisible)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2adecd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetBoundaryVisible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::SetBoundaryVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2adece4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetAppShouldQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetAppShouldQuit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae1dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetAppShouldQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetDisplayAvailableFrequencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::intptr_t, ByRef<int32_t>)>(&Unity::XR::Oculus::NativeMethods::GetDisplayAvailableFrequencies)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae0214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetDisplayAvailableFrequencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetDisplayFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&Unity::XR::Oculus::NativeMethods::SetDisplayFrequency)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae021c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetDisplayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetDisplayFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<float_t>)>(&Unity::XR::Oculus::NativeMethods::GetDisplayFrequency)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae0224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetDisplayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetSystemHeadsetType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::XR::Oculus::SystemHeadset (*)()>(&Unity::XR::Oculus::NativeMethods::GetSystemHeadsetType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ade784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetSystemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetTiledMultiResSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetTiledMultiResSupported)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ade814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetTiledMultiResSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetTiledMultiResLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&Unity::XR::Oculus::NativeMethods::SetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ade818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetTiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetTiledMultiResLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&Unity::XR::Oculus::NativeMethods::GetTiledMultiResLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ade928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetTiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.SetTiledMultiResDynamic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::NativeMethods::SetTiledMultiResDynamic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ade8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetTiledMultiResDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetEyeTrackedFoveatedRenderingSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetEyeTrackedFoveatedRenderingSupported)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2adfb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetEyeTrackedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::XR::Oculus::NativeMethods.GetShouldRestartSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Unity::XR::Oculus::NativeMethods::GetShouldRestartSession)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae2280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetShouldRestartSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Unity::XR::Oculus::NativeMethods::SetColorScale(float_t x, float_t y, float_t z, float_t w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetColorScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
 void Unity::XR::Oculus::NativeMethods::SetColorOffset(float_t x, float_t y, float_t z, float_t w)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetColorOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, x, y, z, w);
}
 bool Unity::XR::Oculus::NativeMethods::GetIsSupportedDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetIsSupportedDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::NativeMethods::LoadOVRPlugin(::StringW ovrpPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "LoadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ovrpPath);
}
 void Unity::XR::Oculus::NativeMethods::UnloadOVRPlugin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "UnloadOVRPlugin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void Unity::XR::Oculus::NativeMethods::SetUserDefinedSettings(Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetUserDefinedSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::XR::Oculus::Unity__XR__Oculus__NativeMethods__UserDefinedSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings);
}
 void Unity::XR::Oculus::NativeMethods::SetHasUserAuthorizedEyeTrackingPermission(bool authorized)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetHasUserAuthorizedEyeTrackingPermission",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, authorized);
}
 int32_t Unity::XR::Oculus::NativeMethods::SetCPULevel(int32_t cpuLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetCPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cpuLevel);
}
 int32_t Unity::XR::Oculus::NativeMethods::SetGPULevel(int32_t gpuLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetGPULevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, gpuLevel);
}
 void Unity::XR::Oculus::NativeMethods::GetOVRPVersion(::ArrayW<uint8_t> version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetOVRPVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, version);
}
 void Unity::XR::Oculus::NativeMethods::EnablePerfMetrics(bool enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "EnablePerfMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
 void Unity::XR::Oculus::NativeMethods::EnableAppMetrics(bool enable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "EnableAppMetrics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enable);
}
 bool Unity::XR::Oculus::NativeMethods::SetDeveloperModeStrict(bool active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetDeveloperModeStrict",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, active);
}
 bool Unity::XR::Oculus::NativeMethods::GetHasInputFocus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetHasInputFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::NativeMethods::GetBoundaryConfigured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetBoundaryConfigured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::NativeMethods::GetBoundaryDimensions(Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType boundaryType, ByRef<UnityEngine::Vector3> dimensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetBoundaryDimensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::XR::Oculus::Unity__XR__Oculus__Boundary__BoundaryType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, boundaryType, dimensions);
}
 bool Unity::XR::Oculus::NativeMethods::GetBoundaryVisible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void Unity::XR::Oculus::NativeMethods::SetBoundaryVisible(bool boundaryVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetBoundaryVisible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, boundaryVisible);
}
 bool Unity::XR::Oculus::NativeMethods::GetAppShouldQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetAppShouldQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::NativeMethods::GetDisplayAvailableFrequencies(::cordl_internals::intptr_t ptr, ByRef<int32_t> numFrequencies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetDisplayAvailableFrequencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ptr, numFrequencies);
}
 bool Unity::XR::Oculus::NativeMethods::SetDisplayFrequency(float_t refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetDisplayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
 bool Unity::XR::Oculus::NativeMethods::GetDisplayFrequency(ByRef<float_t> refreshRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetDisplayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, refreshRate);
}
 Unity::XR::Oculus::SystemHeadset Unity::XR::Oculus::NativeMethods::GetSystemHeadsetType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetSystemHeadsetType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::XR::Oculus::SystemHeadset, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::NativeMethods::GetTiledMultiResSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetTiledMultiResSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void Unity::XR::Oculus::NativeMethods::SetTiledMultiResLevel(int32_t level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetTiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, level);
}
 int32_t Unity::XR::Oculus::NativeMethods::GetTiledMultiResLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetTiledMultiResLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void Unity::XR::Oculus::NativeMethods::SetTiledMultiResDynamic(bool isDynamic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "SetTiledMultiResDynamic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, isDynamic);
}
 bool Unity::XR::Oculus::NativeMethods::GetEyeTrackedFoveatedRenderingSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetEyeTrackedFoveatedRenderingSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 bool Unity::XR::Oculus::NativeMethods::GetShouldRestartSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::Oculus::NativeMethods>::get(),
                            "GetShouldRestartSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
