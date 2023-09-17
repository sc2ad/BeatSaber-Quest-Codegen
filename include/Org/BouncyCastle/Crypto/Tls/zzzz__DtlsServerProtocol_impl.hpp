#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsServerProtocol_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NewSessionTicket_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DatagramTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContextImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::*)()>(&::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf03a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_server(::Org::BouncyCastle::Crypto::Tls::TlsServer value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsServer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsServer>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_server() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsServer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_serverContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_serverContext() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSession, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsSession>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_tlsSession() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSession, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::SessionParameters, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::SessionParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_sessionParameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::SessionParameters, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_sessionParametersBuilder() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_offeredCipherSuites(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_offeredCipherSuites() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_offeredCompressionMethods(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_offeredCompressionMethods() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_clientExtensions(::System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IDictionary>(value));
}
constexpr ::System::Collections::IDictionary ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_clientExtensions() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_serverExtensions(::System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IDictionary>(value));
}
constexpr ::System::Collections::IDictionary ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_serverExtensions() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_resumedSession(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_resumedSession() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_secure_renegotiation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_secure_renegotiation() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_allowCertificateStatus(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_allowCertificateStatus() const {
return ::cordl_internals::getInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_expectSessionTicket(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_expectSessionTicket() const {
return ::cordl_internals::getInstanceField<bool, 0x5b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_keyExchange() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_serverCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCredentials, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsCredentials>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_serverCredentials() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCredentials, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateRequest, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::CertificateRequest>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_certificateRequest() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateRequest, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_clientCertificateType(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int16_t>(value));
}
constexpr int16_t ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_clientCertificateType() const {
return ::cordl_internals::getInstanceField<int16_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__set_clientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::Certificate, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::Certificate>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::__get_clientCertificate() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::Certificate, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>())) {}
 void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xee2190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.get_VerifyRequests
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::get_VerifyRequests)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xee219c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.set_VerifyRequests
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(bool)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::set_VerifyRequests)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xee21a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.Accept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsServer, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::Accept)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0xee21b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.AbortServerHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::AbortServerHandshake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xee273c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ServerHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ServerHandshake)> {
  constexpr static std::size_t size = 0xe18;
  constexpr static std::size_t addrs = 0xee278c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.InvalidateSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::InvalidateSession)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xee35a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.GenerateCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::Org::BouncyCastle::Crypto::Tls::CertificateRequest)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateRequest)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xee3668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.GenerateCertificateStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::Org::BouncyCastle::Crypto::Tls::CertificateStatus)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateStatus)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xee36ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.GenerateNewSessionTicket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateNewSessionTicket)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xee3770;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.GenerateServerHello
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateServerHello)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0xee37f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.NotifyClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::Org::BouncyCastle::Crypto::Tls::Certificate)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::NotifyClientCertificate)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xee3f58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientCertificate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xee423c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessCertificateVerify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessCertificateVerify)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0xee4304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessClientHello
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientHello)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0xee481c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xee4ecc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ProcessClientSupplementalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientSupplementalData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xee4fc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol.ExpectCertificateVerifyMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState)>(&::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ExpectCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x1078;
  constexpr static std::size_t addrs = 0xee50c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::__set_mVerifyRequests(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::__get_mVerifyRequests() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "secureRandom", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::DtlsServerProtocol(::Org::BouncyCastle::Security::SecureRandom secureRandom)  : ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol(THROW_UNLESS(::il2cpp_utils::New<DtlsServerProtocol>(secureRandom))) {}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secureRandom);
}
 bool ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::get_VerifyRequests()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "get_VerifyRequests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::set_VerifyRequests(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "set_VerifyRequests",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::Org::BouncyCastle::Crypto::Tls::DtlsTransport ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::Accept(::Org::BouncyCastle::Crypto::Tls::TlsServer server, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport transport)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsServer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DatagramTransport>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport, false>(const_cast<void*>(instance), ___internal_method, server, transport);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::AbortServerHandshake(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer, uint8_t alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "AbortServerHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, recordLayer, alertDescription);
}
 ::Org::BouncyCastle::Crypto::Tls::DtlsTransport ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ServerHandshake(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "ServerHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport, false>(const_cast<void*>(instance), ___internal_method, state, recordLayer);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::InvalidateSession(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "InvalidateSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "GenerateCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, state, certificateRequest);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateCertificateStatus(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::CertificateStatus certificateStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "GenerateCertificateStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, state, certificateStatus);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket newSessionTicket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "GenerateNewSessionTicket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, state, newSessionTicket);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::GenerateServerHello(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "GenerateServerHello",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "NotifyClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, clientCertificate);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "ProcessClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessCertificateVerify(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body, ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash prepareFinishHash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "ProcessCertificateVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body, prepareFinishHash);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientHello(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "ProcessClientHello",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "ProcessClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ProcessClientSupplementalData(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "ProcessClientSupplementalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 bool ::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol::ExpectCertificateVerifyMessage(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsServerProtocol>::get(),
                            "ExpectCertificateVerifyMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsServerProtocol__ServerHandshakeState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, state);
}
} // end anonymous namespace
