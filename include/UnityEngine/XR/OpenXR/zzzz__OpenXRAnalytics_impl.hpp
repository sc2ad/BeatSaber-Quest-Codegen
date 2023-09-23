#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_def.hpp"
// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "runtime", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "runtime_version", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "plugin_version", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "api_version", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "available_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "enabled_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "enabled_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "failed_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent(bool success, ::StringW runtime, ::StringW runtime_version, ::StringW plugin_version, ::StringW api_version, ::ArrayW<::StringW> available_extensions, ::ArrayW<::StringW> enabled_extensions, ::ArrayW<::StringW> enabled_features, ::ArrayW<::StringW> failed_features) noexcept : ::bs_hook::ValueTypeWrapper() {this->success = success;
this->runtime = runtime;
this->runtime_version = runtime_version;
this->plugin_version = plugin_version;
this->api_version = api_version;
this->available_extensions = available_extensions;
this->enabled_extensions = enabled_extensions;
this->enabled_features = enabled_features;
this->failed_features = failed_features;
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__set_success(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__get_success() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__set_runtime(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__get_runtime() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__set_runtime_version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__get_runtime_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__set_plugin_version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__get_plugin_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__set_api_version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__get_api_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__set_available_extensions(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x28>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__get_available_extensions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x28>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__set_enabled_extensions(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x30>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__get_enabled_extensions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x30>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__set_enabled_features(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x38>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__get_enabled_features() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x38>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__set_failed_features(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x40>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::XR::OpenXR::UnityEngine__XR__OpenXR__OpenXRAnalytics__InitializeEvent::__get_failed_features() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x40>(this->__instance);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRAnalytics.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::OpenXR::OpenXRAnalytics::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae5218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRAnalytics>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRAnalytics.SendInitializeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::XR::OpenXR::OpenXRAnalytics::SendInitializeEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae5220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRAnalytics>::get(),
                            "SendInitializeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::XR::OpenXR::OpenXRAnalytics::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRAnalytics>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 void UnityEngine::XR::OpenXR::OpenXRAnalytics::SendInitializeEvent(bool success)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRAnalytics>::get(),
                            "SendInitializeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, success);
}
