#pragma once
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Ocsp::CertificateStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Ocsp::CertificateStatus::*)()>(&Org::BouncyCastle::Ocsp::CertificateStatus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10133d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::CertificateStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Ocsp::CertificateStatus::__set_Good(Org::BouncyCastle::Ocsp::CertificateStatus value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Ocsp::CertificateStatus, "Good", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::CertificateStatus>::get>(std::forward<Org::BouncyCastle::Ocsp::CertificateStatus>(value));
}
 Org::BouncyCastle::Ocsp::CertificateStatus Org::BouncyCastle::Ocsp::CertificateStatus::__get_Good()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Ocsp::CertificateStatus, "Good", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::CertificateStatus>::get>();
}
// Ctor Parameters []
 Org::BouncyCastle::Ocsp::CertificateStatus::CertificateStatus()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CertificateStatus>())) {}
 void Org::BouncyCastle::Ocsp::CertificateStatus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Ocsp::CertificateStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
