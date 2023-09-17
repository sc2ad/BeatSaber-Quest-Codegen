#pragma once
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_impl.hpp"
namespace {
#include "Mono/Net/Security/zzzz__MonoSslServerAuthenticationOptions_def.hpp"
#include "System/Net/Security/zzzz__SslServerAuthenticationOptions_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_Options
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::SslServerAuthenticationOptions (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269282c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "get_Options",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_ServerMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ServerMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2692834;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x268fcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_CertificateRevocationCheckMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509RevocationMode)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x269283c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_EncryptionPolicy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(::System::Net::Security::EncryptionPolicy)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2692858;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_EnabledSslProtocols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::SslProtocols (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2692874;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_EnabledSslProtocols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(::System::Security::Authentication::SslProtocols)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2692890;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_ClientCertificateRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26928ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_ClientCertificateRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(bool)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26928c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_TargetHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_TargetHost)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26928e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_TargetHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(::StringW)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_TargetHost)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2692928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_ServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2692968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_ServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509Certificate)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2692984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.get_ClientCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)()>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26929a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MonoSslServerAuthenticationOptions.set_ClientCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MonoSslServerAuthenticationOptions::*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection)>(&::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ClientCertificates)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26929e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MonoSslServerAuthenticationOptions),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
constexpr void ::Mono::Net::Security::MonoSslServerAuthenticationOptions::__set__Options_k__BackingField(::System::Net::Security::SslServerAuthenticationOptions value)  {
::cordl_internals::setInstanceField<::System::Net::Security::SslServerAuthenticationOptions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Security::SslServerAuthenticationOptions>(value));
}
constexpr ::System::Net::Security::SslServerAuthenticationOptions ::Mono::Net::Security::MonoSslServerAuthenticationOptions::__get__Options_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Security::SslServerAuthenticationOptions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::Security::SslServerAuthenticationOptions ::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_Options()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "get_Options",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslServerAuthenticationOptions, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ServerMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "get_ServerMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::Mono::Net::Security::MonoSslServerAuthenticationOptions::MonoSslServerAuthenticationOptions()  : ::Mono::Net::Security::MonoSslAuthenticationOptions(THROW_UNLESS(::il2cpp_utils::New<MonoSslServerAuthenticationOptions>())) {}
 void ::Mono::Net::Security::MonoSslServerAuthenticationOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_CertificateRevocationCheckMode(::System::Security::Cryptography::X509Certificates::X509RevocationMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "set_CertificateRevocationCheckMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509RevocationMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "set_EncryptionPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::EncryptionPolicy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Security::Authentication::SslProtocols ::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_EnabledSslProtocols()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "get_EnabledSslProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::SslProtocols, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_EnabledSslProtocols(::System::Security::Authentication::SslProtocols value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "set_EnabledSslProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Authentication::SslProtocols>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ClientCertificateRequired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "get_ClientCertificateRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ClientCertificateRequired(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "set_ClientCertificateRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW ::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_TargetHost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "get_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_TargetHost(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "set_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Security::Cryptography::X509Certificates::X509Certificate ::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ServerCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "get_ServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "set_ServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection ::Mono::Net::Security::MonoSslServerAuthenticationOptions::get_ClientCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MonoSslServerAuthenticationOptions::set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MonoSslServerAuthenticationOptions>::get(),
                            "set_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
