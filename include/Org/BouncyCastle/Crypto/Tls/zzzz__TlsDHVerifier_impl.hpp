#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsDHVerifier.Accept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::TlsDHVerifier::*)(Org::BouncyCastle::Crypto::Parameters::DHParameters)>(&Org::BouncyCastle::Crypto::Tls::TlsDHVerifier::Accept)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsDHVerifier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDHVerifier>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 bool Org::BouncyCastle::Crypto::Tls::TlsDHVerifier::Accept(Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsDHVerifier>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, dhParameters);
}
