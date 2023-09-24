#pragma once
#include "System/Net/Security/zzzz__SslServerAuthenticationOptions_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509RevocationMode_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: System::Net::Security::SslServerAuthenticationOptions.get_ClientCertificateRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslServerAuthenticationOptions::*)()>(&System::Net::Security::SslServerAuthenticationOptions::get_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276cc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "get_ClientCertificateRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslServerAuthenticationOptions.set_ClientCertificateRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslServerAuthenticationOptions::*)(bool)>(&System::Net::Security::SslServerAuthenticationOptions::set_ClientCertificateRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x276cc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_ClientCertificateRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslServerAuthenticationOptions.get_ServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (System::Net::Security::SslServerAuthenticationOptions::*)()>(&System::Net::Security::SslServerAuthenticationOptions::get_ServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276cc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "get_ServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslServerAuthenticationOptions.set_ServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslServerAuthenticationOptions::*)(System::Security::Cryptography::X509Certificates::X509Certificate)>(&System::Net::Security::SslServerAuthenticationOptions::set_ServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276cc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_ServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslServerAuthenticationOptions.get_EnabledSslProtocols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Authentication::SslProtocols (System::Net::Security::SslServerAuthenticationOptions::*)()>(&System::Net::Security::SslServerAuthenticationOptions::get_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276cc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "get_EnabledSslProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslServerAuthenticationOptions.set_EnabledSslProtocols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslServerAuthenticationOptions::*)(System::Security::Authentication::SslProtocols)>(&System::Net::Security::SslServerAuthenticationOptions::set_EnabledSslProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276cc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_EnabledSslProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslServerAuthenticationOptions.set_CertificateRevocationCheckMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslServerAuthenticationOptions::*)(System::Security::Cryptography::X509Certificates::X509RevocationMode)>(&System::Net::Security::SslServerAuthenticationOptions::set_CertificateRevocationCheckMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x276cca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_CertificateRevocationCheckMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509RevocationMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslServerAuthenticationOptions.set_EncryptionPolicy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslServerAuthenticationOptions::*)(System::Net::Security::EncryptionPolicy)>(&System::Net::Security::SslServerAuthenticationOptions::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x276cd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_EncryptionPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::EncryptionPolicy>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslServerAuthenticationOptions._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslServerAuthenticationOptions::*)()>(&System::Net::Security::SslServerAuthenticationOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x276cde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__checkCertificateRevocation(System::Security::Cryptography::X509Certificates::X509RevocationMode value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509RevocationMode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509RevocationMode>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509RevocationMode System::Net::Security::SslServerAuthenticationOptions::__get__checkCertificateRevocation() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509RevocationMode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__enabledSslProtocols(System::Security::Authentication::SslProtocols value)  {
::cordl_internals::setInstanceField<System::Security::Authentication::SslProtocols, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Authentication::SslProtocols>(value));
}
constexpr System::Security::Authentication::SslProtocols System::Net::Security::SslServerAuthenticationOptions::__get__enabledSslProtocols() const {
return ::cordl_internals::getInstanceField<System::Security::Authentication::SslProtocols, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__encryptionPolicy(System::Net::Security::EncryptionPolicy value)  {
::cordl_internals::setInstanceField<System::Net::Security::EncryptionPolicy, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Security::EncryptionPolicy>(value));
}
constexpr System::Net::Security::EncryptionPolicy System::Net::Security::SslServerAuthenticationOptions::__get__encryptionPolicy() const {
return ::cordl_internals::getInstanceField<System::Net::Security::EncryptionPolicy, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__allowRenegotiation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Security::SslServerAuthenticationOptions::__get__allowRenegotiation() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__ClientCertificateRequired_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Security::SslServerAuthenticationOptions::__get__ClientCertificateRequired_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslServerAuthenticationOptions::__set__ServerCertificate_k__BackingField(System::Security::Cryptography::X509Certificates::X509Certificate value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate System::Net::Security::SslServerAuthenticationOptions::__get__ServerCertificate_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool System::Net::Security::SslServerAuthenticationOptions::get_ClientCertificateRequired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "get_ClientCertificateRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Security::SslServerAuthenticationOptions::set_ClientCertificateRequired(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_ClientCertificateRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Security::Cryptography::X509Certificates::X509Certificate System::Net::Security::SslServerAuthenticationOptions::get_ServerCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "get_ServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Security::SslServerAuthenticationOptions::set_ServerCertificate(System::Security::Cryptography::X509Certificates::X509Certificate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_ServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Security::Authentication::SslProtocols System::Net::Security::SslServerAuthenticationOptions::get_EnabledSslProtocols()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "get_EnabledSslProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Authentication::SslProtocols, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Security::SslServerAuthenticationOptions::set_EnabledSslProtocols(System::Security::Authentication::SslProtocols value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_EnabledSslProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Security::SslServerAuthenticationOptions::set_CertificateRevocationCheckMode(System::Security::Cryptography::X509Certificates::X509RevocationMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_CertificateRevocationCheckMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509RevocationMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Security::SslServerAuthenticationOptions::set_EncryptionPolicy(System::Net::Security::EncryptionPolicy value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            "set_EncryptionPolicy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::EncryptionPolicy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::Security::SslServerAuthenticationOptions System::Net::Security::SslServerAuthenticationOptions::New_ctor()  {
System::Net::Security::SslServerAuthenticationOptions o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Security::SslServerAuthenticationOptions>())};
return o;
}
 void System::Net::Security::SslServerAuthenticationOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslServerAuthenticationOptions>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
