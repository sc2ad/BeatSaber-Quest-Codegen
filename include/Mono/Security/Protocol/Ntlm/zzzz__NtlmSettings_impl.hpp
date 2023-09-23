#pragma once
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmSettings_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::NtlmSettings.get_DefaultAuthLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Protocol::Ntlm::NtlmAuthLevel (*)()>(&Mono::Security::Protocol::Ntlm::NtlmSettings::get_DefaultAuthLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2293d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::NtlmSettings>::get(),
                            "get_DefaultAuthLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Mono::Security::Protocol::Ntlm::NtlmSettings::__set_defaultAuthLevel(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value)  {
::cordl_internals::setStaticField<Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "defaultAuthLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::NtlmSettings>::get>(std::forward<Mono::Security::Protocol::Ntlm::NtlmAuthLevel>(value));
}
 Mono::Security::Protocol::Ntlm::NtlmAuthLevel Mono::Security::Protocol::Ntlm::NtlmSettings::__get_defaultAuthLevel()  {
return ::cordl_internals::getStaticField<Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "defaultAuthLevel", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::NtlmSettings>::get>();
}
 Mono::Security::Protocol::Ntlm::NtlmAuthLevel Mono::Security::Protocol::Ntlm::NtlmSettings::get_DefaultAuthLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::NtlmSettings>::get(),
                            "get_DefaultAuthLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::Protocol::Ntlm::NtlmAuthLevel, false>(nullptr, ___internal_method);
}
