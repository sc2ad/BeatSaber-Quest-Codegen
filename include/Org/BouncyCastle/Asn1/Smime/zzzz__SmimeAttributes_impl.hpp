#pragma once
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeAttributes_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Smime::SmimeAttributes._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Smime::SmimeAttributes::*)()>(&Org::BouncyCastle::Asn1::Smime::SmimeAttributes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfe61a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Smime::SmimeAttributes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Asn1::Smime::SmimeAttributes::__set_SmimeCapabilities(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "SmimeCapabilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Smime::SmimeAttributes>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Asn1::Smime::SmimeAttributes::__get_SmimeCapabilities()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "SmimeCapabilities", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Smime::SmimeAttributes>::get>();
}
 void Org::BouncyCastle::Asn1::Smime::SmimeAttributes::__set_EncrypKeyPref(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "EncrypKeyPref", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Smime::SmimeAttributes>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Asn1::Smime::SmimeAttributes::__get_EncrypKeyPref()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "EncrypKeyPref", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Smime::SmimeAttributes>::get>();
}
// Ctor Parameters []
 Org::BouncyCastle::Asn1::Smime::SmimeAttributes::SmimeAttributes()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SmimeAttributes>())) {}
 void Org::BouncyCastle::Asn1::Smime::SmimeAttributes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Smime::SmimeAttributes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
