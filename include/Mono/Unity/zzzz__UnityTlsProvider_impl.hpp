#pragma once
#include "Mono/Net/Security/zzzz__MobileTlsProvider_impl.hpp"
#include "Mono/Unity/zzzz__UnityTlsProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Unity::UnityTlsProvider::*)()>(&Mono::Unity::UnityTlsProvider::get_Name)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x268b228;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.get_ID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Guid (Mono::Unity::UnityTlsProvider::*)()>(&Mono::Unity::UnityTlsProvider::get_ID)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x268b268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.get_SupportsSslStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsProvider::*)()>(&Mono::Unity::UnityTlsProvider::get_SupportsSslStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268b2c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.get_SupportsMonoExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsProvider::*)()>(&Mono::Unity::UnityTlsProvider::get_SupportsMonoExtensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268b2c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.get_SupportsConnectionInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsProvider::*)()>(&Mono::Unity::UnityTlsProvider::get_SupportsConnectionInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268b2d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.get_SupportsCleanShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsProvider::*)()>(&Mono::Unity::UnityTlsProvider::get_SupportsCleanShutdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268b2d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.get_SupportedProtocols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Authentication::SslProtocols (Mono::Unity::UnityTlsProvider::*)()>(&Mono::Unity::UnityTlsProvider::get_SupportedProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268b2e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.CreateSslStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::MobileAuthenticatedStream (Mono::Unity::UnityTlsProvider::*)(System::Net::Security::SslStream, System::IO::Stream, bool, Mono::Security::Interface::MonoTlsSettings)>(&Mono::Unity::UnityTlsProvider::CreateSslStream)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x268b2e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.x509verify_callback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result (*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, void*)>(&Mono::Unity::UnityTlsProvider::x509verify_callback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x268b1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "x509verify_callback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider.ValidateCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsProvider::*)(Mono::Net::Security::ChainValidationHelper, ::StringW, bool, System::Security::Cryptography::X509Certificates::X509CertificateCollection, bool, ByRef<System::Security::Cryptography::X509Certificates::X509Chain>, ByRef<System::Net::Security::SslPolicyErrors>, ByRef<int32_t>)>(&Mono::Unity::UnityTlsProvider::ValidateCertificate)> {
  constexpr static std::size_t size = 0x978;
  constexpr static std::size_t addrs = 0x268b40c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsProvider::*)()>(&Mono::Unity::UnityTlsProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268bd84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::StringW Mono::Unity::UnityTlsProvider::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Guid Mono::Unity::UnityTlsProvider::get_ID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "get_ID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Guid, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Unity::UnityTlsProvider::get_SupportsSslStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "get_SupportsSslStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Unity::UnityTlsProvider::get_SupportsMonoExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "get_SupportsMonoExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Unity::UnityTlsProvider::get_SupportsConnectionInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "get_SupportsConnectionInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Unity::UnityTlsProvider::get_SupportsCleanShutdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "get_SupportsCleanShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Authentication::SslProtocols Mono::Unity::UnityTlsProvider::get_SupportedProtocols()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "get_SupportedProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Authentication::SslProtocols, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::Net::Security::MobileAuthenticatedStream Mono::Unity::UnityTlsProvider::CreateSslStream(System::Net::Security::SslStream sslStream, System::IO::Stream innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "CreateSslStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Net::Security::MobileAuthenticatedStream, false>(const_cast<void*>(instance), ___internal_method, sslStream, innerStream, leaveInnerStreamOpen, settings);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Mono::Unity::UnityTlsProvider::x509verify_callback(void* userData, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref cert, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result result, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "x509verify_callback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, false>(nullptr, ___internal_method, userData, cert, result, errorState);
}
 bool Mono::Unity::UnityTlsProvider::ValidateCertificate(Mono::Net::Security::ChainValidationHelper validator, ::StringW targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection certificates, bool wantsChain, ByRef<System::Security::Cryptography::X509Certificates::X509Chain> chain, ByRef<System::Net::Security::SslPolicyErrors> errors, ByRef<int32_t> status11)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            "ValidateCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::ChainValidationHelper>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Security::Cryptography::X509Certificates::X509Chain>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Security::SslPolicyErrors>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11);
}
 Mono::Unity::UnityTlsProvider Mono::Unity::UnityTlsProvider::New_ctor()  {
Mono::Unity::UnityTlsProvider o{THROW_UNLESS(::il2cpp_utils::New<Mono::Unity::UnityTlsProvider>())};
return o;
}
 void Mono::Unity::UnityTlsProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
