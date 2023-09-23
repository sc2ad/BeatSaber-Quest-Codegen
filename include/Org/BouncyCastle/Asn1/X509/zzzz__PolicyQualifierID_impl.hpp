#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__PolicyQualifierID_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::PolicyQualifierID._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::PolicyQualifierID::*)(::StringW)>(&Org::BouncyCastle::Asn1::X509::PolicyQualifierID::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x110a9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::PolicyQualifierID>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Asn1::X509::PolicyQualifierID::__set_IdQtCps(Org::BouncyCastle::Asn1::X509::PolicyQualifierID value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::X509::PolicyQualifierID, "IdQtCps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::PolicyQualifierID>::get>(std::forward<Org::BouncyCastle::Asn1::X509::PolicyQualifierID>(value));
}
 Org::BouncyCastle::Asn1::X509::PolicyQualifierID Org::BouncyCastle::Asn1::X509::PolicyQualifierID::__get_IdQtCps()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::X509::PolicyQualifierID, "IdQtCps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::PolicyQualifierID>::get>();
}
 void Org::BouncyCastle::Asn1::X509::PolicyQualifierID::__set_IdQtUnotice(Org::BouncyCastle::Asn1::X509::PolicyQualifierID value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::X509::PolicyQualifierID, "IdQtUnotice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::PolicyQualifierID>::get>(std::forward<Org::BouncyCastle::Asn1::X509::PolicyQualifierID>(value));
}
 Org::BouncyCastle::Asn1::X509::PolicyQualifierID Org::BouncyCastle::Asn1::X509::PolicyQualifierID::__get_IdQtUnotice()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::X509::PolicyQualifierID, "IdQtUnotice", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::PolicyQualifierID>::get>();
}
// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::X509::PolicyQualifierID::PolicyQualifierID(::StringW id)  : Org::BouncyCastle::Asn1::DerObjectIdentifier(THROW_UNLESS(::il2cpp_utils::New<PolicyQualifierID>(id))) {}
 void Org::BouncyCastle::Asn1::X509::PolicyQualifierID::_ctor(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::PolicyQualifierID>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id);
}
