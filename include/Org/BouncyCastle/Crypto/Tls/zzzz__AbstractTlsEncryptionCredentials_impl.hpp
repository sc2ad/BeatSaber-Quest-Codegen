#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsEncryptionCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEncryptionCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials.DecryptPreMasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::DecryptPreMasterSecret)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecc3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials
constexpr  ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::operator ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials() const noexcept {
return ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr  ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept {
return ::Org::BouncyCastle::Crypto::Tls::TlsCredentials(::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::DecryptPreMasterSecret(::ArrayW<uint8_t> encryptedPreMasterSecret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials>::get(),
                            "DecryptPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, encryptedPreMasterSecret);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::AbstractTlsEncryptionCredentials()  : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials(THROW_UNLESS(::il2cpp_utils::New<AbstractTlsEncryptionCredentials>())) {}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
