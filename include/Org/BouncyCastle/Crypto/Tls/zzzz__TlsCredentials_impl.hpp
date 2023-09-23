#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsCredentials.get_Certificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::Certificate (Org::BouncyCastle::Crypto::Tls::TlsCredentials::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsCredentials::get_Certificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Crypto::Tls::Certificate Org::BouncyCastle::Crypto::Tls::TlsCredentials::get_Certificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get(),
                            "get_Certificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
