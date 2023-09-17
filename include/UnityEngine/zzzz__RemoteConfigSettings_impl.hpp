#pragma once
#include "UnityEngine/zzzz__RemoteConfigSettings_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
namespace {
//  Writing Method size for method: UnityEngine::RemoteConfigSettings.RemoteConfigSettingsUpdated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::RemoteConfigSettings, bool)>(&UnityEngine::RemoteConfigSettings::RemoteConfigSettingsUpdated)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d424b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteConfigSettings>::get(),
                            "RemoteConfigSettingsUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RemoteConfigSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::RemoteConfigSettings::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::RemoteConfigSettings::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::RemoteConfigSettings::__set_Updated(System::Action_1<bool> value)  {
::cordl_internals::setInstanceField<System::Action_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<bool>>(value));
}
constexpr System::Action_1<bool> UnityEngine::RemoteConfigSettings::__get_Updated() const {
return ::cordl_internals::getInstanceField<System::Action_1<bool>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine::RemoteConfigSettings rcs, bool wasLastUpdatedFromServer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RemoteConfigSettings>::get(),
                            "RemoteConfigSettingsUpdated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RemoteConfigSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rcs, wasLastUpdatedFromServer);
}
} // end anonymous namespace
