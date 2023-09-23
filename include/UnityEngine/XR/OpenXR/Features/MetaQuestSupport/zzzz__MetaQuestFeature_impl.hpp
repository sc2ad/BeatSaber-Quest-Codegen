#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/zzzz__MetaQuestFeature_def.hpp"
// Ctor Parameters [CppParam { name: "visibleName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "manifestName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice(::StringW visibleName, ::StringW manifestName, bool enabled, bool active) noexcept : ::bs_hook::ValueTypeWrapper() {this->visibleName = visibleName;
this->manifestName = manifestName;
this->enabled = enabled;
this->active = active;
}
constexpr void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice::__set_visibleName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice::__get_visibleName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice::__set_manifestName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice::__get_manifestName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice::__set_enabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice::__get_enabled() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice::__set_active(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice::__get_active() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->__instance);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::*)()>(&UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b04fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::MetaQuestFeature()  : UnityEngine::XR::OpenXR::Features::OpenXRFeature(THROW_UNLESS(::il2cpp_utils::New<MetaQuestFeature>())) {}
 void UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
