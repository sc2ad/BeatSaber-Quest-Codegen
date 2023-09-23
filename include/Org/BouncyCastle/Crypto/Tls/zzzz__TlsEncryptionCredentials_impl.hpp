#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials.DecryptPreMasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials::DecryptPreMasterSecret)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr  Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials::operator Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCredentials(::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials::DecryptPreMasterSecret(::ArrayW<uint8_t> encryptedPreMasterSecret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials>::get(),
                            "DecryptPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, encryptedPreMasterSecret);
}
