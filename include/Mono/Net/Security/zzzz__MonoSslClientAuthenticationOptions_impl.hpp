#pragma once
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_impl.hpp"
#include "Mono/Net/Security/zzzz__MonoSslClientAuthenticationOptions_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Net/Security/zzzz__SslClientAuthenticationOptions_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.get_Options
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Security::SslClientAuthenticationOptions (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269263c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "get_Options",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ServerMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2692644;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x268f9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.set_CertificateRevocationCheckMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(System::Security::Cryptography::X509Certificates::X509RevocationMode)>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x269264c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.set_EncryptionPolicy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(System::Net::Security::EncryptionPolicy)>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2692668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.get_EnabledSslProtocols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Authentication::SslProtocols (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2692684;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.set_EnabledSslProtocols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(System::Security::Authentication::SslProtocols)>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26926a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.get_TargetHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::get_TargetHost)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26926bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.set_TargetHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(::StringW)>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::set_TargetHost)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26926d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ClientCertificateRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26926f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.set_ClientCertificateRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(bool)>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2692734;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ClientCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateCollection (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2692774;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.set_ClientCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(System::Security::Cryptography::X509Certificates::X509CertificateCollection)>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2692790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.get_ServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)()>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26927ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::MonoSslClientAuthenticationOptions.set_ServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MonoSslClientAuthenticationOptions::*)(System::Security::Cryptography::X509Certificates::X509Certificate)>(&Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26927ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Net::Security::MonoSslClientAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
constexpr void Mono::Net::Security::MonoSslClientAuthenticationOptions::__set__Options_k__BackingField(System::Net::Security::SslClientAuthenticationOptions value)  {
::cordl_internals::setInstanceField<System::Net::Security::SslClientAuthenticationOptions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Security::SslClientAuthenticationOptions>(value));
}
constexpr System::Net::Security::SslClientAuthenticationOptions Mono::Net::Security::MonoSslClientAuthenticationOptions::__get__Options_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::Security::SslClientAuthenticationOptions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::Security::SslClientAuthenticationOptions Mono::Net::Security::MonoSslClientAuthenticationOptions::get_Options()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "get_Options",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Security::SslClientAuthenticationOptions, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "get_ServerMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::Net::Security::MonoSslClientAuthenticationOptions Mono::Net::Security::MonoSslClientAuthenticationOptions::New_ctor()  {
Mono::Net::Security::MonoSslClientAuthenticationOptions o{THROW_UNLESS(::il2cpp_utils::New<Mono::Net::Security::MonoSslClientAuthenticationOptions>())};
return o;
}
 void Mono::Net::Security::MonoSslClientAuthenticationOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_CertificateRevocationCheckMode(System::Security::Cryptography::X509Certificates::X509RevocationMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "set_CertificateRevocationCheckMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509RevocationMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EncryptionPolicy(System::Net::Security::EncryptionPolicy value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "set_EncryptionPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::EncryptionPolicy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Security::Authentication::SslProtocols Mono::Net::Security::MonoSslClientAuthenticationOptions::get_EnabledSslProtocols()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "get_EnabledSslProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Authentication::SslProtocols, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_EnabledSslProtocols(System::Security::Authentication::SslProtocols value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "set_EnabledSslProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW Mono::Net::Security::MonoSslClientAuthenticationOptions::get_TargetHost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "get_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_TargetHost(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "set_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificateRequired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "get_ClientCertificateRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificateRequired(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "set_ClientCertificateRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Security::Cryptography::X509Certificates::X509CertificateCollection Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ClientCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ClientCertificates(System::Security::Cryptography::X509Certificates::X509CertificateCollection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "set_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Security::Cryptography::X509Certificates::X509Certificate Mono::Net::Security::MonoSslClientAuthenticationOptions::get_ServerCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "get_ServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Net::Security::MonoSslClientAuthenticationOptions::set_ServerCertificate(System::Security::Cryptography::X509Certificates::X509Certificate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::MonoSslClientAuthenticationOptions>::get(),
                            "set_ServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
