#pragma once
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_impl.hpp"
namespace {
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsProvider.CreateSslStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream (::Mono::Net::Security::MobileTlsProvider::*)(::System::Net::Security::SslStream, ::System::IO::Stream, bool, ::Mono::Security::Interface::MonoTlsSettings)>(&::Mono::Net::Security::MobileTlsProvider::CreateSslStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsProvider.ValidateCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileTlsProvider::*)(::Mono::Net::Security::ChainValidationHelper, ::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection, bool, ByRef<::System::Security::Cryptography::X509Certificates::X509Chain>, ByRef<::System::Net::Security::SslPolicyErrors>, ByRef<int32_t>)>(&::Mono::Net::Security::MobileTlsProvider::ValidateCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsProvider::*)()>(&::Mono::Net::Security::MobileTlsProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268bd8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::Mono::Net::Security::MobileAuthenticatedStream ::Mono::Net::Security::MobileTlsProvider::CreateSslStream(::System::Net::Security::SslStream sslStream, ::System::IO::Stream innerStream, bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider>::get(),
                            "CreateSslStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileAuthenticatedStream, false>(const_cast<void*>(instance), ___internal_method, sslStream, innerStream, leaveInnerStreamOpen, settings);
}
 bool ::Mono::Net::Security::MobileTlsProvider::ValidateCertificate(::Mono::Net::Security::ChainValidationHelper validator, ::StringW targetHost, bool serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection certificates, bool wantsChain, ByRef<::System::Security::Cryptography::X509Certificates::X509Chain> chain, ByRef<::System::Net::Security::SslPolicyErrors> errors, ByRef<int32_t> status11)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider>::get(),
                            "ValidateCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::ChainValidationHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Security::Cryptography::X509Certificates::X509Chain>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Security::SslPolicyErrors>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11);
}
// Ctor Parameters []
 ::Mono::Net::Security::MobileTlsProvider::MobileTlsProvider()  : ::Mono::Security::Interface::MonoTlsProvider(THROW_UNLESS(::il2cpp_utils::New<MobileTlsProvider>())) {}
 void ::Mono::Net::Security::MobileTlsProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
