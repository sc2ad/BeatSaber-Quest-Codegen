#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsClientProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DatagramTransport_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientContextImpl_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::*)()>(&::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xeda434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_client(::Org::BouncyCastle::Crypto::Tls::TlsClient value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClient, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsClient>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClient ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_client() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClient, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_clientContext(::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_clientContext() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_tlsSession(::Org::BouncyCastle::Crypto::Tls::TlsSession value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSession, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsSession>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_tlsSession() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSession, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_sessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::SessionParameters, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::SessionParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_sessionParameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::SessionParameters, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_sessionParametersBuilder(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_sessionParametersBuilder() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__SessionParameters__Builder, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_offeredCipherSuites(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_offeredCipherSuites() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_clientExtensions(::System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IDictionary>(value));
}
constexpr ::System::Collections::IDictionary ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_clientExtensions() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_serverExtensions(::System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IDictionary>(value));
}
constexpr ::System::Collections::IDictionary ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_serverExtensions() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_selectedSessionID(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_selectedSessionID() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_resumedSession(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_resumedSession() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_secure_renegotiation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_secure_renegotiation() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_allowCertificateStatus(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_allowCertificateStatus() const {
return ::cordl_internals::getInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_expectSessionTicket(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_expectSessionTicket() const {
return ::cordl_internals::getInstanceField<bool, 0x5b>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_keyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_keyExchange() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_authentication(::Org::BouncyCastle::Crypto::Tls::TlsAuthentication value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_authentication() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_certificateStatus(::Org::BouncyCastle::Crypto::Tls::CertificateStatus value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateStatus, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::CertificateStatus>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateStatus ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_certificateStatus() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateStatus, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_certificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateRequest, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::CertificateRequest>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_certificateRequest() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::CertificateRequest, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__set_clientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCredentials, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsCredentials>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::__get_clientCredentials() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCredentials, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>())) {}
 void ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xed9d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsClient, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::Connect)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0xed9d34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.AbortClientHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::AbortClientHandshake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xeda590;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ClientHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::DtlsTransport (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ClientHandshake)> {
  constexpr static std::size_t size = 0x1390;
  constexpr static std::size_t addrs = 0xeda5e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.GenerateCertificateVerify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::Org::BouncyCastle::Crypto::Tls::DigitallySigned)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateCertificateVerify)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xedc3c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.GenerateClientHello
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::Org::BouncyCastle::Crypto::Tls::TlsClient)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientHello)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xedc444;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.GenerateClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xedca24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.InvalidateSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::InvalidateSession)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xedcb10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateRequest)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xedcbd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessCertificateStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateStatus)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xedcd20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessHelloVerifyRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessHelloVerifyRequest)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xedcde8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessNewSessionTicket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessNewSessionTicket)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xedcf74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xedd07c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerHello
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerHello)> {
  constexpr static std::size_t size = 0xca4;
  constexpr static std::size_t addrs = 0xedd2a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xeddf44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ProcessServerSupplementalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerSupplementalData)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xede03c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.ReportServerVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::*)(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ReportServerVersion)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xede138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol.PatchClientHelloWithCookie
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::PatchClientHelloWithCookie)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xedbf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "PatchClientHelloWithCookie",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "secureRandom", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::DtlsClientProtocol(::Org::BouncyCastle::Security::SecureRandom secureRandom)  : ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol(THROW_UNLESS(::il2cpp_utils::New<DtlsClientProtocol>(secureRandom))) {}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secureRandom);
}
 ::Org::BouncyCastle::Crypto::Tls::DtlsTransport ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::Connect(::Org::BouncyCastle::Crypto::Tls::TlsClient client, ::Org::BouncyCastle::Crypto::Tls::DatagramTransport transport)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsClient>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DatagramTransport>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport, false>(const_cast<void*>(instance), ___internal_method, client, transport);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::AbortClientHandshake(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer, uint8_t alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "AbortClientHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, recordLayer, alertDescription);
}
 ::Org::BouncyCastle::Crypto::Tls::DtlsTransport ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ClientHandshake(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ClientHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DtlsTransport, false>(const_cast<void*>(instance), ___internal_method, state, recordLayer);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateCertificateVerify(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::DigitallySigned certificateVerify)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "GenerateCertificateVerify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, state, certificateVerify);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientHello(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::TlsClient client)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "GenerateClientHello",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsClient>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, state, client);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::GenerateClientKeyExchange(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "GenerateClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::InvalidateSession(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "InvalidateSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateRequest(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ProcessCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessCertificateStatus(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ProcessCertificateStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessHelloVerifyRequest(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ProcessHelloVerifyRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessNewSessionTicket(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ProcessNewSessionTicket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 ::Org::BouncyCastle::Crypto::Tls::Certificate ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ProcessServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerHello(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ProcessServerHello",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerKeyExchange(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ProcessServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ProcessServerSupplementalData(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::ArrayW<uint8_t> body)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ProcessServerSupplementalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, body);
}
 void ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::ReportServerVersion(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState state, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion server_version)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "ReportServerVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__DtlsClientProtocol__ClientHandshakeState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, server_version);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol::PatchClientHelloWithCookie(::ArrayW<uint8_t> clientHelloBody, ::ArrayW<uint8_t> cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsClientProtocol>::get(),
                            "PatchClientHelloWithCookie",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, clientHelloBody, cookie);
}
} // end anonymous namespace
