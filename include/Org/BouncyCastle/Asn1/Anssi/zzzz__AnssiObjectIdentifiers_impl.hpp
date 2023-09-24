#pragma once
#include "Org/BouncyCastle/Asn1/Anssi/zzzz__AnssiObjectIdentifiers_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::*)()>(&Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd5944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::__set_FRP256v1(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "FRP256v1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::__get_FRP256v1()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "FRP256v1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers>::get>();
}
 Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::New_ctor()  {
Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers>())};
return o;
}
 void Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Anssi::AnssiObjectIdentifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
