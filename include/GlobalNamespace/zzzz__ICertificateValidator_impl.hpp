#pragma once
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "GlobalNamespace/zzzz__DnsEndPoint_def.hpp"
//  Writing Method size for method: GlobalNamespace::ICertificateValidator.ValidateCertificateChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ICertificateValidator::*)(GlobalNamespace::DnsEndPoint, System::Security::Cryptography::X509Certificates::X509Certificate2, ::ArrayW<::ArrayW<uint8_t>>)>(&GlobalNamespace::ICertificateValidator::ValidateCertificateChain)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ICertificateValidator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ICertificateValidator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::ICertificateValidator::ValidateCertificateChain(GlobalNamespace::DnsEndPoint endPoint, System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ICertificateValidator>::get(),
                            "ValidateCertificateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DnsEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, certificate, certificateChain);
}
