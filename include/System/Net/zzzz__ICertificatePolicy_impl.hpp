#pragma once
#include "System/Net/zzzz__ICertificatePolicy_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
//  Writing Method size for method: System::Net::ICertificatePolicy.CheckValidationResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ICertificatePolicy::*)(System::Net::ServicePoint, System::Security::Cryptography::X509Certificates::X509Certificate, System::Net::WebRequest, int32_t)>(&System::Net::ICertificatePolicy::CheckValidationResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::ICertificatePolicy),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ICertificatePolicy>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 bool System::Net::ICertificatePolicy::CheckValidationResult(System::Net::ServicePoint srvPoint, System::Security::Cryptography::X509Certificates::X509Certificate certificate, System::Net::WebRequest request, int32_t certificateProblem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::ICertificatePolicy>::get(),
                            "CheckValidationResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ServicePoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, srvPoint, certificate, request, certificateProblem);
}
