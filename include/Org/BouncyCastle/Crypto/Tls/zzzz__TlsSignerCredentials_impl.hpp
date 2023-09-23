#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials.GenerateCertificateSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials::GenerateCertificateSignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials.get_SignatureAndHashAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm (Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials::get_SignatureAndHashAlgorithm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr  Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials::operator Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCredentials(::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials::GenerateCertificateSignature(::ArrayW<uint8_t> hash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials>::get(),
                            "GenerateCertificateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, hash);
}
 Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials::get_SignatureAndHashAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials>::get(),
                            "get_SignatureAndHashAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, false>(const_cast<void*>(instance), ___internal_method);
}
