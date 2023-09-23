#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDisplay_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "UpFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DownFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LeftFov", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RightFov", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov::GlobalNamespace__OVRDisplay__EyeFov(float_t UpFov, float_t DownFov, float_t LeftFov, float_t RightFov) noexcept : ::bs_hook::ValueTypeWrapper() {this->UpFov = UpFov;
this->DownFov = DownFov;
this->LeftFov = LeftFov;
this->RightFov = RightFov;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov::__set_UpFov(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov::__get_UpFov() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov::__set_DownFov(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov::__get_DownFov() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov::__set_LeftFov(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov::__get_LeftFov() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov::__set_RightFov(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov::__get_RightFov() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
// Ctor Parameters [CppParam { name: "resolution", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "fov", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "fullFov", ty: "GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc::GlobalNamespace__OVRDisplay__EyeRenderDesc(UnityEngine::Vector2 resolution, UnityEngine::Vector2 fov, GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov fullFov) noexcept : ::bs_hook::ValueTypeWrapper() {this->resolution = resolution;
this->fov = fov;
this->fullFov = fullFov;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc::__set_resolution(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x0>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc::__get_resolution() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc::__set_fov(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x8>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc::__get_fov() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc::__set_fullFov(GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov, 0x10>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc::__get_fullFov() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeFov, 0x10>(this->__instance);
}
// Ctor Parameters [CppParam { name: "render", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeWarp", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "postPresent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderError", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeWarpError", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::GlobalNamespace__OVRDisplay__LatencyData(float_t render, float_t timeWarp, float_t postPresent, float_t renderError, float_t timeWarpError) noexcept : ::bs_hook::ValueTypeWrapper() {this->render = render;
this->timeWarp = timeWarp;
this->postPresent = postPresent;
this->renderError = renderError;
this->timeWarpError = timeWarpError;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__set_render(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__get_render() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__set_timeWarp(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__get_timeWarp() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__set_postPresent(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__get_postPresent() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__set_renderError(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__get_renderError() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__set_timeWarpError(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData::__get_timeWarpError() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::OVRDisplay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25ae5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::Update)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x25ae668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.add_RecenteredPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(System::Action)>(&GlobalNamespace::OVRDisplay::add_RecenteredPose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25ae7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "add_RecenteredPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.remove_RecenteredPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(System::Action)>(&GlobalNamespace::OVRDisplay::remove_RecenteredPose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25ae888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "remove_RecenteredPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.RecenterPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::RecenterPose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25ae924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "RecenterPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.get_acceleration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_acceleration)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25ae99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_acceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.get_angularAcceleration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_angularAcceleration)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25aeac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_angularAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.get_velocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_velocity)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25aebe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.get_angularVelocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_angularVelocity)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25aed08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_angularVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.GetEyeRenderDesc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc (GlobalNamespace::OVRDisplay::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::OVRDisplay::GetEyeRenderDesc)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25aee2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "GetEyeRenderDesc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.get_latency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_latency)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x25aee64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_latency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.get_appFramerate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_appFramerate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25af034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_appFramerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.get_recommendedMSAALevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_recommendedMSAALevel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x25af0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_recommendedMSAALevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.get_displayFrequenciesAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t> (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25af120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_displayFrequenciesAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.get_displayFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::get_displayFrequency)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x25af170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_displayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.set_displayFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(float_t)>(&GlobalNamespace::OVRDisplay::set_displayFrequency)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25af1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "set_displayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.UpdateTextures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)()>(&GlobalNamespace::OVRDisplay::UpdateTextures)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25ae648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "UpdateTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRDisplay.ConfigureEyeDesc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDisplay::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::OVRDisplay::ConfigureEyeDesc)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x25af220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "ConfigureEyeDesc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRDisplay::__set_needsConfigureTexture(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRDisplay::__get_needsConfigureTexture() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRDisplay::__set_eyeDescs(::ArrayW<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc> GlobalNamespace::OVRDisplay::__get_eyeDescs() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRDisplay::__set_recenterRequested(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRDisplay::__get_recenterRequested() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRDisplay::__set_recenterRequestedFrameCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRDisplay::__get_recenterRequestedFrameCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRDisplay::__set_localTrackingSpaceRecenterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRDisplay::__get_localTrackingSpaceRecenterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRDisplay::__set_RecenteredPose(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::OVRDisplay::__get_RecenteredPose() const {
return ::cordl_internals::getInstanceField<System::Action, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::OVRDisplay::OVRDisplay()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OVRDisplay>())) {}
 void GlobalNamespace::OVRDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRDisplay::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRDisplay::add_RecenteredPose(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "add_RecenteredPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVRDisplay::remove_RecenteredPose(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "remove_RecenteredPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVRDisplay::RecenterPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "RecenterPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_acceleration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_acceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_angularAcceleration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_angularAcceleration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 GlobalNamespace::OVRDisplay::get_angularVelocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_angularVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc GlobalNamespace::OVRDisplay::GetEyeRenderDesc(UnityEngine::XR::XRNode eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "GetEyeRenderDesc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRDisplay__EyeRenderDesc, false>(const_cast<void*>(instance), ___internal_method, eye);
}
 GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData GlobalNamespace::OVRDisplay::get_latency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_latency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRDisplay__LatencyData, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::OVRDisplay::get_appFramerate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_appFramerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::OVRDisplay::get_recommendedMSAALevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_recommendedMSAALevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<float_t> GlobalNamespace::OVRDisplay::get_displayFrequenciesAvailable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_displayFrequenciesAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::OVRDisplay::get_displayFrequency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "get_displayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRDisplay::set_displayFrequency(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "set_displayFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::OVRDisplay::UpdateTextures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "UpdateTextures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRDisplay::ConfigureEyeDesc(UnityEngine::XR::XRNode eye)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRDisplay>::get(),
                            "ConfigureEyeDesc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eye);
}
