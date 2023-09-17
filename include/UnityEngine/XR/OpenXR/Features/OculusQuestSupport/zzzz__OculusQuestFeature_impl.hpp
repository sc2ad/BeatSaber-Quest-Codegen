#pragma once
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
namespace {
#include "UnityEngine/XR/OpenXR/Features/OculusQuestSupport/zzzz__OculusQuestFeature_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::*)()>(&::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b064fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__set_targetQuest(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__get_targetQuest() const {
return ::cordl_internals::getInstanceField<bool, 0x4e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__set_targetQuest2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4f>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::__get_targetQuest2() const {
return ::cordl_internals::getInstanceField<bool, 0x4f>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::OculusQuestFeature()  : ::UnityEngine::XR::OpenXR::Features::OpenXRFeature(THROW_UNLESS(::il2cpp_utils::New<OculusQuestFeature>())) {}
 void ::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::OculusQuestSupport::OculusQuestFeature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
