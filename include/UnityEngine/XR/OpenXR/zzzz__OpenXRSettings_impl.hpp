#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode::MultiPass{0};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode::SinglePassInstanced{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode::None{0};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode::Depth16Bit{1};
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode  UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode::Depth24Bit{2};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.get_featureCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ae4698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_featureCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.GetFeature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::Features::OpenXRFeature (UnityEngine::XR::OpenXR::OpenXRSettings::*)(System::Type)>(&UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ae46b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature> (UnityEngine::XR::OpenXR::OpenXRSettings::*)(System::Type)>(&UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2ae4740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::XR::OpenXR::OpenXRSettings::*)(System::Type, System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::OpenXRFeature>)>(&UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2ae48ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::OpenXRFeature>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature> (UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ae4a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.GetFeatures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::XR::OpenXR::OpenXRSettings::*)(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::OpenXRFeature>)>(&UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2ae4a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::OpenXRFeature>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.get_renderMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode (UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2ae4b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_renderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.set_renderMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRSettings::*)(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode)>(&UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2ae4c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "set_renderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.get_depthSubmissionMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode (UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2ae4dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_depthSubmissionMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.set_depthSubmissionMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRSettings::*)(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode)>(&UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2ae4f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "set_depthSubmissionMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.ApplyRenderSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ae507c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "ApplyRenderSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetRenderMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode)>(&UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae4d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Internal_SetRenderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetRenderMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode (*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ae4c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Internal_GetRenderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.Internal_SetDepthSubmissionMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode)>(&UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ae5000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Internal_SetDepthSubmissionMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.Internal_GetDepthSubmissionMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode (*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ae4eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Internal_GetDepthSubmissionMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ae5098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.ApplySettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ae50e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "ApplySettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::OpenXRSettings (*)(bool)>(&UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2ae5100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.get_ActiveBuildTargetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::OpenXRSettings (*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae51a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_ActiveBuildTargetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::OpenXRSettings (*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae51b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRSettings::*)()>(&UnityEngine::XR::OpenXR::OpenXRSettings::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ae51b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__set_features(::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature>>(value));
}
constexpr ::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature> UnityEngine::XR::OpenXR::OpenXRSettings::__get_features() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__set_m_renderMode(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode>(value));
}
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::__get_m_renderMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::XR::OpenXR::OpenXRSettings::__set_m_depthSubmissionMode(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode>(value));
}
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::__get_m_depthSubmissionMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::XR::OpenXR::OpenXRSettings::__set_s_RuntimeInstance(UnityEngine::XR::OpenXR::OpenXRSettings value)  {
::cordl_internals::setStaticField<UnityEngine::XR::OpenXR::OpenXRSettings, "s_RuntimeInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get>(std::forward<UnityEngine::XR::OpenXR::OpenXRSettings>(value));
}
 UnityEngine::XR::OpenXR::OpenXRSettings UnityEngine::XR::OpenXR::OpenXRSettings::__get_s_RuntimeInstance()  {
return ::cordl_internals::getStaticField<UnityEngine::XR::OpenXR::OpenXRSettings, "s_RuntimeInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get>();
}
 int32_t UnityEngine::XR::OpenXR::OpenXRSettings::get_featureCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_featureCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TFeature>
 TFeature UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                        "GetFeature",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TFeature, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::XR::OpenXR::Features::OpenXRFeature UnityEngine::XR::OpenXR::OpenXRSettings::GetFeature(System::Type featureType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::Features::OpenXRFeature, false>(const_cast<void*>(instance), ___internal_method, featureType);
}
template<typename TFeature>
 ::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                        "GetFeatures",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(System::Type featureType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature>, false>(const_cast<void*>(instance), ___internal_method, featureType);
}
template<typename TFeature>
 int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(System::Collections::Generic::List_1<TFeature> featuresOut)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                        "GetFeatures",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<TFeature>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFeature>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, featuresOut);
}
 int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(System::Type featureType, System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::OpenXRFeature> featuresOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::OpenXRFeature>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, featureType, featuresOut);
}
 ::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature> UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::XR::OpenXR::Features::OpenXRFeature>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::XR::OpenXR::OpenXRSettings::GetFeatures(System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::OpenXRFeature> featuresOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetFeatures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::XR::OpenXR::Features::OpenXRFeature>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, featuresOut);
}
 UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::get_renderMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_renderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRSettings::set_renderMode(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "set_renderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::get_depthSubmissionMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_depthSubmissionMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRSettings::set_depthSubmissionMode(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "set_depthSubmissionMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::XR::OpenXR::OpenXRSettings::ApplyRenderSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "ApplyRenderSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetRenderMode(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode renderMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Internal_SetRenderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderMode);
}
 UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetRenderMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Internal_GetRenderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__RenderMode, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRSettings::Internal_SetDepthSubmissionMode(UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode depthSubmissionMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Internal_SetDepthSubmissionMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, depthSubmissionMode);
}
 UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode UnityEngine::XR::OpenXR::OpenXRSettings::Internal_GetDepthSubmissionMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Internal_GetDepthSubmissionMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRSettings__DepthSubmissionMode, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRSettings::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRSettings::ApplySettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "ApplySettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::XR::OpenXR::OpenXRSettings UnityEngine::XR::OpenXR::OpenXRSettings::GetInstance(bool useActiveBuildTarget)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::OpenXRSettings, false>(nullptr, ___internal_method, useActiveBuildTarget);
}
 UnityEngine::XR::OpenXR::OpenXRSettings UnityEngine::XR::OpenXR::OpenXRSettings::get_ActiveBuildTargetInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_ActiveBuildTargetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::OpenXRSettings, false>(nullptr, ___internal_method);
}
 UnityEngine::XR::OpenXR::OpenXRSettings UnityEngine::XR::OpenXR::OpenXRSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::OpenXRSettings, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 UnityEngine::XR::OpenXR::OpenXRSettings::OpenXRSettings()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<OpenXRSettings>())) {}
 void UnityEngine::XR::OpenXR::OpenXRSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
