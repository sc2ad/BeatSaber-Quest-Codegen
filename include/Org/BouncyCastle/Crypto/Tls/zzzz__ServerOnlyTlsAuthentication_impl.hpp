#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ServerOnlyTlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication.NotifyServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::*)(Org::BouncyCastle::Crypto::Tls::Certificate)>(&Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::NotifyServerCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication.GetClientCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsCredentials (Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::*)(Org::BouncyCastle::Crypto::Tls::CertificateRequest)>(&Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::GetClientCredentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf08910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication>::get(),
                            "GetClientCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::CertificateRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::*)()>(&Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf08918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsAuthentication
constexpr  Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::operator Org::BouncyCastle::Crypto::Tls::TlsAuthentication() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsAuthentication(::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::NotifyServerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication>::get(),
                            "NotifyServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCertificate);
}
 Org::BouncyCastle::Crypto::Tls::TlsCredentials Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::GetClientCredentials(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication>::get(),
                            "GetClientCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::CertificateRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsCredentials, false>(const_cast<void*>(instance), ___internal_method, certificateRequest);
}
 Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::New_ctor()  {
Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication>())};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
