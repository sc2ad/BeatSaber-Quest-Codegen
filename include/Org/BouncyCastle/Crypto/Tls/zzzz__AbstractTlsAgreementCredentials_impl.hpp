#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsAgreementCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAgreementCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials.GenerateAgreement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::GenerateAgreement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecb1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials
constexpr  Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::operator Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr  Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::operator Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCredentials(::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::GenerateAgreement(Org::BouncyCastle::Crypto::AsymmetricKeyParameter peerPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials>::get(),
                            "GenerateAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, peerPublicKey);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::AbstractTlsAgreementCredentials()  : Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials(THROW_UNLESS(::il2cpp_utils::New<AbstractTlsAgreementCredentials>())) {}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
