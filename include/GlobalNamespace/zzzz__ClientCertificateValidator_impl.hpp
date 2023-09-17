#pragma once
namespace {
#include "GlobalNamespace/zzzz__ClientCertificateValidator_def.hpp"
#include "GlobalNamespace/zzzz__DnsEndPoint_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ClientCertificateValidator.ValidateCertificateChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ClientCertificateValidator::*)(::GlobalNamespace::DnsEndPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2, ::ArrayW<::ArrayW<uint8_t>>)>(&::GlobalNamespace::ClientCertificateValidator::ValidateCertificateChain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xd9d68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClientCertificateValidator>::get(),
                            "ValidateCertificateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DnsEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientCertificateValidator.ValidateCertificateChainInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ClientCertificateValidator::*)(::GlobalNamespace::DnsEndPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2, ::ArrayW<::ArrayW<uint8_t>>)>(&::GlobalNamespace::ClientCertificateValidator::ValidateCertificateChainInternal)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xd9d690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClientCertificateValidator>::get(),
                            "ValidateCertificateChainInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DnsEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientCertificateValidator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ClientCertificateValidator::*)()>(&::GlobalNamespace::ClientCertificateValidator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9d858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClientCertificateValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::ICertificateValidator
constexpr  ::GlobalNamespace::ClientCertificateValidator::operator ::GlobalNamespace::ICertificateValidator() const noexcept {
return ::GlobalNamespace::ICertificateValidator(::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::ClientCertificateValidator::ValidateCertificateChain(::GlobalNamespace::DnsEndPoint endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClientCertificateValidator>::get(),
                            "ValidateCertificateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DnsEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, certificate, certificateChain);
}
 void ::GlobalNamespace::ClientCertificateValidator::ValidateCertificateChainInternal(::GlobalNamespace::DnsEndPoint endPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClientCertificateValidator>::get(),
                            "ValidateCertificateChainInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DnsEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, certificate, certificateChain);
}
// Ctor Parameters []
 ::GlobalNamespace::ClientCertificateValidator::ClientCertificateValidator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ClientCertificateValidator>())) {}
 void ::GlobalNamespace::ClientCertificateValidator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ClientCertificateValidator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
