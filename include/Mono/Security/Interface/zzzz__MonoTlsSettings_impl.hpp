#pragma once
namespace {
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/Interface/zzzz__TlsProtocols_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Mono/Security/Interface/zzzz__ICertificateValidator_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoLocalCertificateSelectionCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoRemoteCertificateValidationCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__CipherSuiteCode_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_RemoteCertificateValidationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22957d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_RemoteCertificateValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_RemoteCertificateValidationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback)>(&::Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22957dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_RemoteCertificateValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_ClientCertificateSelectionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22957e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_ClientCertificateSelectionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_ClientCertificateSelectionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback)>(&::Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22957ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_ClientCertificateSelectionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_UseServicePointManagerCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22957f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_UseServicePointManagerCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_UseServicePointManagerCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Nullable_1<bool>)>(&::Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22957fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_UseServicePointManagerCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CallbackNeedsCertificateChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_CallbackNeedsCertificateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CertificateValidationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x229580c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_CertificateValidationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_CertificateValidationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Nullable_1<::System::DateTime>)>(&::Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_CertificateValidationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_TrustAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_TrustAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_TrustAnchors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection)>(&::Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_TrustAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_UserSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_UserSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_UserSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_UserSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::bs_hook::Il2CppWrapperType)>(&::Mono::Security::Interface::MonoTlsSettings::set_UserSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_UserSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CertificateSearchPaths
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_CertificateSearchPaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_CertificateSearchPaths
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<::StringW>)>(&::Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_CertificateSearchPaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_SendCloseNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_SendCloseNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_SendCloseNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(bool)>(&::Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2295858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_SendCloseNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_ClientCertificateIssuers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateIssuers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_ClientCertificateIssuers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_ClientCertificateIssuers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<::StringW>)>(&::Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateIssuers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229586c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_ClientCertificateIssuers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_DisallowUnauthenticatedCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_DisallowUnauthenticatedCertificateRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_DisallowUnauthenticatedCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_DisallowUnauthenticatedCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(bool)>(&::Mono::Security::Interface::MonoTlsSettings::set_DisallowUnauthenticatedCertificateRequest)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x229587c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_DisallowUnauthenticatedCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_EnabledProtocols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_EnabledProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_EnabledProtocols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>)>(&::Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_EnabledProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_EnabledCiphers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Mono::Security::Interface::CipherSuiteCode> (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2295898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_EnabledCiphers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.set_EnabledCiphers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::ArrayW<::Mono::Security::Interface::CipherSuiteCode>)>(&::Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22958a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_EnabledCiphers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Mono::Security::Interface::CipherSuiteCode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22958a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_DefaultSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings (*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22958bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_DefaultSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.CopyDefaultSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings (*)()>(&::Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2295950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "CopyDefaultSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.get_CertificateValidator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::ICertificateValidator (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22959c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_CertificateValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.CloneWithValidator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings (::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::ICertificateValidator)>(&::Mono::Security::Interface::MonoTlsSettings::CloneWithValidator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22959d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "CloneWithValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::ICertificateValidator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings (::Mono::Security::Interface::MonoTlsSettings::*)()>(&::Mono::Security::Interface::MonoTlsSettings::Clone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2295968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoTlsSettings::*)(::Mono::Security::Interface::MonoTlsSettings)>(&::Mono::Security::Interface::MonoTlsSettings::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2295a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__RemoteCertificateValidationCallback_k__BackingField(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback value)  {
::cordl_internals::setInstanceField<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback>(value));
}
constexpr ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback ::Mono::Security::Interface::MonoTlsSettings::__get__RemoteCertificateValidationCallback_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__ClientCertificateSelectionCallback_k__BackingField(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback value)  {
::cordl_internals::setInstanceField<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback>(value));
}
constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback ::Mono::Security::Interface::MonoTlsSettings::__get__ClientCertificateSelectionCallback_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__CertificateValidationTime_k__BackingField(::System::Nullable_1<::System::DateTime> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::System::DateTime>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<::System::DateTime>>(value));
}
constexpr ::System::Nullable_1<::System::DateTime> ::Mono::Security::Interface::MonoTlsSettings::__get__CertificateValidationTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::System::DateTime>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__TrustAnchors_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection ::Mono::Security::Interface::MonoTlsSettings::__get__TrustAnchors_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__UserSettings_k__BackingField(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::Mono::Security::Interface::MonoTlsSettings::__get__UserSettings_k__BackingField() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__CertificateSearchPaths_k__BackingField(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::Mono::Security::Interface::MonoTlsSettings::__get__CertificateSearchPaths_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__SendCloseNotify_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::Interface::MonoTlsSettings::__get__SendCloseNotify_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__ClientCertificateIssuers_k__BackingField(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::Mono::Security::Interface::MonoTlsSettings::__get__ClientCertificateIssuers_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__DisallowUnauthenticatedCertificateRequest_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::Interface::MonoTlsSettings::__get__DisallowUnauthenticatedCertificateRequest_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__EnabledProtocols_k__BackingField(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>>(value));
}
constexpr ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> ::Mono::Security::Interface::MonoTlsSettings::__get__EnabledProtocols_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set__EnabledCiphers_k__BackingField(::ArrayW<::Mono::Security::Interface::CipherSuiteCode> value)  {
::cordl_internals::setInstanceField<::ArrayW<::Mono::Security::Interface::CipherSuiteCode>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::Mono::Security::Interface::CipherSuiteCode>>(value));
}
constexpr ::ArrayW<::Mono::Security::Interface::CipherSuiteCode> ::Mono::Security::Interface::MonoTlsSettings::__get__EnabledCiphers_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Mono::Security::Interface::CipherSuiteCode>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set_cloned(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::Interface::MonoTlsSettings::__get_cloned() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set_checkCertName(bool value)  {
::cordl_internals::setInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::Interface::MonoTlsSettings::__get_checkCertName() const {
return ::cordl_internals::getInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set_checkCertRevocationStatus(bool value)  {
::cordl_internals::setInstanceField<bool, 0x72>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::Interface::MonoTlsSettings::__get_checkCertRevocationStatus() const {
return ::cordl_internals::getInstanceField<bool, 0x72>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set_useServicePointManagerCallback(::System::Nullable_1<bool> value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<bool>, 0x73>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Nullable_1<bool>>(value));
}
constexpr ::System::Nullable_1<bool> ::Mono::Security::Interface::MonoTlsSettings::__get_useServicePointManagerCallback() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<bool>, 0x73>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set_skipSystemValidators(bool value)  {
::cordl_internals::setInstanceField<bool, 0x75>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::Interface::MonoTlsSettings::__get_skipSystemValidators() const {
return ::cordl_internals::getInstanceField<bool, 0x75>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set_callbackNeedsChain(bool value)  {
::cordl_internals::setInstanceField<bool, 0x76>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Security::Interface::MonoTlsSettings::__get_callbackNeedsChain() const {
return ::cordl_internals::getInstanceField<bool, 0x76>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::MonoTlsSettings::__set_certificateValidator(::Mono::Security::Interface::ICertificateValidator value)  {
::cordl_internals::setInstanceField<::Mono::Security::Interface::ICertificateValidator, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::Interface::ICertificateValidator>(value));
}
constexpr ::Mono::Security::Interface::ICertificateValidator ::Mono::Security::Interface::MonoTlsSettings::__get_certificateValidator() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::ICertificateValidator, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Mono::Security::Interface::MonoTlsSettings::__set_defaultSettings(::Mono::Security::Interface::MonoTlsSettings value)  {
::cordl_internals::setStaticField<::Mono::Security::Interface::MonoTlsSettings, "defaultSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get>(std::forward<::Mono::Security::Interface::MonoTlsSettings>(value));
}
 ::Mono::Security::Interface::MonoTlsSettings ::Mono::Security::Interface::MonoTlsSettings::__get_defaultSettings()  {
return ::cordl_internals::getStaticField<::Mono::Security::Interface::MonoTlsSettings, "defaultSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get>();
}
 ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback ::Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_RemoteCertificateValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback(::Mono::Security::Interface::MonoRemoteCertificateValidationCallback value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_RemoteCertificateValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback ::Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_ClientCertificateSelectionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_ClientCertificateSelectionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Nullable_1<bool> ::Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_UseServicePointManagerCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback(::System::Nullable_1<bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_UseServicePointManagerCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_CallbackNeedsCertificateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Nullable_1<::System::DateTime> ::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_CertificateValidationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime(::System::Nullable_1<::System::DateTime> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_CertificateValidationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection ::Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_TrustAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors(::System::Security::Cryptography::X509Certificates::X509CertificateCollection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_TrustAnchors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::bs_hook::Il2CppWrapperType ::Mono::Security::Interface::MonoTlsSettings::get_UserSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_UserSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_UserSettings(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_UserSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::StringW> ::Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_CertificateSearchPaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths(::ArrayW<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_CertificateSearchPaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_SendCloseNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_SendCloseNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::StringW> ::Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateIssuers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_ClientCertificateIssuers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateIssuers(::ArrayW<::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_ClientCertificateIssuers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::Mono::Security::Interface::MonoTlsSettings::get_DisallowUnauthenticatedCertificateRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_DisallowUnauthenticatedCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_DisallowUnauthenticatedCertificateRequest(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_DisallowUnauthenticatedCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> ::Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_EnabledProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols(::System::Nullable_1<::Mono::Security::Interface::TlsProtocols> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_EnabledProtocols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Mono::Security::Interface::TlsProtocols>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::Mono::Security::Interface::CipherSuiteCode> ::Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_EnabledCiphers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Mono::Security::Interface::CipherSuiteCode>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers(::ArrayW<::Mono::Security::Interface::CipherSuiteCode> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "set_EnabledCiphers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Mono::Security::Interface::CipherSuiteCode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::Mono::Security::Interface::MonoTlsSettings::MonoTlsSettings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MonoTlsSettings>())) {}
 void ::Mono::Security::Interface::MonoTlsSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::Interface::MonoTlsSettings ::Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_DefaultSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings, false>(nullptr, ___internal_method);
}
 ::Mono::Security::Interface::MonoTlsSettings ::Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "CopyDefaultSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings, false>(nullptr, ___internal_method);
}
 ::Mono::Security::Interface::ICertificateValidator ::Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "get_CertificateValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::ICertificateValidator, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::Interface::MonoTlsSettings ::Mono::Security::Interface::MonoTlsSettings::CloneWithValidator(::Mono::Security::Interface::ICertificateValidator validator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "CloneWithValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::ICertificateValidator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings, false>(const_cast<void*>(instance), ___internal_method, validator);
}
 ::Mono::Security::Interface::MonoTlsSettings ::Mono::Security::Interface::MonoTlsSettings::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "other", ty: "::Mono::Security::Interface::MonoTlsSettings", modifiers: "", def_value: None }]
 ::Mono::Security::Interface::MonoTlsSettings::MonoTlsSettings(::Mono::Security::Interface::MonoTlsSettings other)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MonoTlsSettings>(other))) {}
 void ::Mono::Security::Interface::MonoTlsSettings::_ctor(::Mono::Security::Interface::MonoTlsSettings other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoTlsSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, other);
}
} // end anonymous namespace
