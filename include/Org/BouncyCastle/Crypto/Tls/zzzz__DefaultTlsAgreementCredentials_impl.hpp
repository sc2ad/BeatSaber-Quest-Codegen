#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsAgreementCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsAgreementCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::*)(Org::BouncyCastle::Crypto::Tls::Certificate, Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::_ctor)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xed3ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials.get_Certificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::Certificate (Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::*)()>(&Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xed3e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials.GenerateAgreement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::GenerateAgreement)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xed3e7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__set_mCertificate(Org::BouncyCastle::Crypto::Tls::Certificate value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::Certificate, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::Certificate>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::Certificate Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mCertificate() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::Certificate, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__set_mPrivateKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>(value));
}
constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mPrivateKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__set_mBasicAgreement(Org::BouncyCastle::Crypto::IBasicAgreement value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IBasicAgreement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IBasicAgreement>(value));
}
constexpr Org::BouncyCastle::Crypto::IBasicAgreement Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mBasicAgreement() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IBasicAgreement, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__set_mTruncateAgreement(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::__get_mTruncateAgreement() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::New_ctor(Org::BouncyCastle::Crypto::Tls::Certificate certificate, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey)  {
Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials>(certificate, privateKey))};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::_ctor(Org::BouncyCastle::Crypto::Tls::Certificate certificate, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificate, privateKey);
}
 Org::BouncyCastle::Crypto::Tls::Certificate Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::get_Certificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials>::get(),
                            "get_Certificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials::GenerateAgreement(Org::BouncyCastle::Crypto::AsymmetricKeyParameter peerPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials>::get(),
                            "GenerateAgreement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, peerPublicKey);
}
