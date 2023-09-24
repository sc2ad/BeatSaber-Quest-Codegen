#pragma once
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Attributes_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::X509::X509Attributes._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::X509::X509Attributes::*)()>(&Org::BouncyCastle::Asn1::X509::X509Attributes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1113184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::X509Attributes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Asn1::X509::X509Attributes::__set_RoleSyntax(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "RoleSyntax", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::X509Attributes>::get>(std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Asn1::X509::X509Attributes::__get_RoleSyntax()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Asn1::DerObjectIdentifier, "RoleSyntax", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::X509Attributes>::get>();
}
 Org::BouncyCastle::Asn1::X509::X509Attributes Org::BouncyCastle::Asn1::X509::X509Attributes::New_ctor()  {
Org::BouncyCastle::Asn1::X509::X509Attributes o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::X509::X509Attributes>())};
return o;
}
 void Org::BouncyCastle::Asn1::X509::X509Attributes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::X509::X509Attributes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
