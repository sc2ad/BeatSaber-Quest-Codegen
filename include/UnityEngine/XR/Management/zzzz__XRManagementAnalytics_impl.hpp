#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_def.hpp"
// Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "assigned_loaders", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent(::StringW buildGuid, ::StringW buildTarget, ::StringW buildTargetGroup, ::ArrayW<::StringW> assigned_loaders) noexcept : ::bs_hook::ValueTypeWrapper() {this->buildGuid = buildGuid;
this->buildTarget = buildTarget;
this->buildTargetGroup = buildTargetGroup;
this->assigned_loaders = assigned_loaders;
}
constexpr void UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent::__set_buildGuid(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent::__get_buildGuid() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent::__set_buildTarget(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent::__get_buildTarget() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent::__set_buildTargetGroup(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent::__get_buildTargetGroup() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent::__set_assigned_loaders(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagementAnalytics__BuildEvent::__get_assigned_loaders() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->__instance);
}
//  Writing Method size for method: UnityEngine::XR::Management::XRManagementAnalytics.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::Management::XRManagementAnalytics::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2addc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRManagementAnalytics>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::XR::Management::XRManagementAnalytics::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::Management::XRManagementAnalytics>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
