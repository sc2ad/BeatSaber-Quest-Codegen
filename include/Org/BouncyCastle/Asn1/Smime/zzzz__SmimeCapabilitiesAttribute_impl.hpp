#pragma once
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeCapabilitiesAttribute_def.hpp"
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeCapabilityVector_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::*)(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector)>(&::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xfe7464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "capabilities", ty: "::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::SmimeCapabilitiesAttribute(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector capabilities)  : ::Org::BouncyCastle::Asn1::X509::AttributeX509(THROW_UNLESS(::il2cpp_utils::New<SmimeCapabilitiesAttribute>(capabilities))) {}
 void ::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute::_ctor(::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector capabilities)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilitiesAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Smime::SmimeCapabilityVector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, capabilities);
}
} // end anonymous namespace
