#pragma once
#include "Mono/Unity/zzzz__UnityTlsConversions_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
//  Writing Method size for method: Mono::Unity::UnityTlsConversions.GetMinProtocol
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol (*)(System::Security::Authentication::SslProtocols)>(&Mono::Unity::UnityTlsConversions::GetMinProtocol)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2688f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "GetMinProtocol",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsConversions.GetMaxProtocol
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol (*)(System::Security::Authentication::SslProtocols)>(&Mono::Unity::UnityTlsConversions::GetMaxProtocol)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2688f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "GetMaxProtocol",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsConversions.ConvertProtocolVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::TlsProtocols (*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol)>(&Mono::Unity::UnityTlsConversions::ConvertProtocolVersion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2689c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "ConvertProtocolVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsConversions.VerifyResultToAlertDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::AlertDescription (*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, Mono::Security::Interface::AlertDescription)>(&Mono::Unity::UnityTlsConversions::VerifyResultToAlertDescription)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2686280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "VerifyResultToAlertDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::AlertDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsConversions.VerifyResultToPolicyErrror
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Security::SslPolicyErrors (*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result)>(&Mono::Unity::UnityTlsConversions::VerifyResultToPolicyErrror)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x268b154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "VerifyResultToPolicyErrror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsConversions.VerifyResultToChainStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result)>(&Mono::Unity::UnityTlsConversions::VerifyResultToChainStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x268b184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "VerifyResultToChainStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result>::get()}
                        )));
    return ___internal_method;
  }
};
 Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol Mono::Unity::UnityTlsConversions::GetMinProtocol(System::Security::Authentication::SslProtocols protocols)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "GetMinProtocol",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol, false>(nullptr, ___internal_method, protocols);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol Mono::Unity::UnityTlsConversions::GetMaxProtocol(System::Security::Authentication::SslProtocols protocols)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "GetMaxProtocol",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol, false>(nullptr, ___internal_method, protocols);
}
 Mono::Security::Interface::TlsProtocols Mono::Unity::UnityTlsConversions::ConvertProtocolVersion(Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol protocol)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "ConvertProtocolVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_protocol>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::Interface::TlsProtocols, false>(nullptr, ___internal_method, protocol);
}
/// @param defaultAlert: Mono::Security::Interface::AlertDescription (default: 80u)
 Mono::Security::Interface::AlertDescription Mono::Unity::UnityTlsConversions::VerifyResultToAlertDescription(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result verifyResult, Mono::Security::Interface::AlertDescription defaultAlert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "VerifyResultToAlertDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::AlertDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::Interface::AlertDescription, false>(nullptr, ___internal_method, verifyResult, defaultAlert);
}
 System::Net::Security::SslPolicyErrors Mono::Unity::UnityTlsConversions::VerifyResultToPolicyErrror(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result verifyResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "VerifyResultToPolicyErrror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Security::SslPolicyErrors, false>(nullptr, ___internal_method, verifyResult);
}
 System::Security::Cryptography::X509Certificates::X509ChainStatusFlags Mono::Unity::UnityTlsConversions::VerifyResultToChainStatus(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result verifyResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsConversions>::get(),
                            "VerifyResultToChainStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, false>(nullptr, ___internal_method, verifyResult);
}
