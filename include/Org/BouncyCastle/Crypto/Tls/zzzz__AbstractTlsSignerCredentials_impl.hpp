#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials.GenerateCertificateSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::GenerateCertificateSignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials.get_SignatureAndHashAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm (Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::get_SignatureAndHashAlgorithm)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xecd870;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecd8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials
constexpr  Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::operator Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr  Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::operator Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCredentials(::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::GenerateCertificateSignature(::ArrayW<uint8_t> hash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials>::get(),
                            "GenerateCertificateSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, hash);
}
 Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::get_SignatureAndHashAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials>::get(),
                            "get_SignatureAndHashAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::New_ctor()  {
Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials>())};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
