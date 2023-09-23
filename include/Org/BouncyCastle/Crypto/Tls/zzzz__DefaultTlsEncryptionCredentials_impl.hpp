#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsEncryptionCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::*)(Org::BouncyCastle::Crypto::Tls::TlsContext, Org::BouncyCastle::Crypto::Tls::Certificate, Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::_ctor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xed5ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials.get_Certificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::Certificate (Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::*)()>(&Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xed6114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials.DecryptPreMasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::DecryptPreMasterSecret)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xed611c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__set_mContext(Org::BouncyCastle::Crypto::Tls::TlsContext value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsContext>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsContext Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__get_mContext() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__set_mCertificate(Org::BouncyCastle::Crypto::Tls::Certificate value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::Certificate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::Certificate>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::Certificate Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__get_mCertificate() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::Certificate, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__set_mPrivateKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>(value));
}
constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::__get_mPrivateKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "context", ty: "Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "certificate", ty: "Org::BouncyCastle::Crypto::Tls::Certificate", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::DefaultTlsEncryptionCredentials(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::Certificate certificate, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey)  : Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials(THROW_UNLESS(::il2cpp_utils::New<DefaultTlsEncryptionCredentials>(context, certificate, privateKey))) {}
 void Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::Certificate certificate, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, certificate, privateKey);
}
 Org::BouncyCastle::Crypto::Tls::Certificate Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::get_Certificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials>::get(),
                            "get_Certificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials::DecryptPreMasterSecret(::ArrayW<uint8_t> encryptedPreMasterSecret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials>::get(),
                            "DecryptPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, encryptedPreMasterSecret);
}
