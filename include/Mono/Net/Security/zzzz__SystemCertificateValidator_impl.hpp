#pragma once
#include "Mono/Net/Security/zzzz__SystemCertificateValidator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyUsageFlags_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
//  Writing Method size for method: Mono::Net::Security::SystemCertificateValidator.NeedsChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Security::Interface::MonoTlsSettings)>(&Mono::Net::Security::SystemCertificateValidator::NeedsChain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268f364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::SystemCertificateValidator>::get(),
                            "NeedsChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
    return ___internal_method;
  }
};
 void Mono::Net::Security::SystemCertificateValidator::__set_is_macosx(bool value)  {
::cordl_internals::setStaticField<bool, "is_macosx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::SystemCertificateValidator>::get>(std::forward<bool>(value));
}
 bool Mono::Net::Security::SystemCertificateValidator::__get_is_macosx()  {
return ::cordl_internals::getStaticField<bool, "is_macosx", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::SystemCertificateValidator>::get>();
}
 void Mono::Net::Security::SystemCertificateValidator::__set_s_flags(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value)  {
::cordl_internals::setStaticField<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "s_flags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::SystemCertificateValidator>::get>(std::forward<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags>(value));
}
 System::Security::Cryptography::X509Certificates::X509KeyUsageFlags Mono::Net::Security::SystemCertificateValidator::__get_s_flags()  {
return ::cordl_internals::getStaticField<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "s_flags", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::SystemCertificateValidator>::get>();
}
 bool Mono::Net::Security::SystemCertificateValidator::NeedsChain(Mono::Security::Interface::MonoTlsSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::SystemCertificateValidator>::get(),
                            "NeedsChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, settings);
}
