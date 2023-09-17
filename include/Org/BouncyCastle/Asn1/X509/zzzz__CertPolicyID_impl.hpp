#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/X509/zzzz__CertPolicyID_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::CertPolicyID._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::CertPolicyID::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::CertPolicyID::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1100824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertPolicyID>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::X509::CertPolicyID::CertPolicyID(::StringW id)  : ::Org::BouncyCastle::Asn1::DerObjectIdentifier(THROW_UNLESS(::il2cpp_utils::New<CertPolicyID>(id))) {}
 void ::Org::BouncyCastle::Asn1::X509::CertPolicyID::_ctor(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::CertPolicyID>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id);
}
} // end anonymous namespace
