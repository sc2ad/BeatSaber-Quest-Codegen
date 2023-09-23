#pragma once
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Net/Security/zzzz__LocalCertSelectionCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__ValidationResult_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "Mono/Security/Interface/zzzz__ICertificateValidator_def.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
//  Writing Method size for method: Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0::*)()>(&Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268ec68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0._GetValidationCallback_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0::*)(::bs_hook::Il2CppWrapperType, System::Security::Cryptography::X509Certificates::X509Certificate, System::Security::Cryptography::X509Certificates::X509Chain, System::Net::Security::SslPolicyErrors)>(&Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0::_GetValidationCallback_b__0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x268f36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0>::get(),
                            "<GetValidationCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0::__set_settings(Mono::Security::Interface::MonoTlsSettings value)  {
::cordl_internals::setInstanceField<Mono::Security::Interface::MonoTlsSettings, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Interface::MonoTlsSettings>(value));
}
constexpr Mono::Security::Interface::MonoTlsSettings Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0::__get_settings() const {
return ::cordl_internals::getInstanceField<Mono::Security::Interface::MonoTlsSettings, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0>())) {}
 void Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0::_GetValidationCallback_b__0(::bs_hook::Il2CppWrapperType s, System::Security::Cryptography::X509Certificates::X509Certificate c, System::Security::Cryptography::X509Certificates::X509Chain ch, System::Net::Security::SslPolicyErrors e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0>::get(),
                            "<GetValidationCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, s, c, ch, e);
}
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.GetInternalValidator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::ChainValidationHelper (*)(System::Net::Security::SslStream, Mono::Net::Security::MobileTlsProvider, Mono::Security::Interface::MonoTlsSettings)>(&Mono::Net::Security::ChainValidationHelper::GetInternalValidator)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x268e5cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "GetInternalValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileTlsProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::ChainValidationHelper (*)(Mono::Net::Security::MobileTlsProvider, ByRef<Mono::Security::Interface::MonoTlsSettings>, Mono::Net::Security::MonoTlsStream)>(&Mono::Net::Security::ChainValidationHelper::Create)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x268e920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileTlsProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Security::Interface::MonoTlsSettings>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MonoTlsStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::ChainValidationHelper::*)(System::Net::Security::SslStream, Mono::Net::Security::MobileTlsProvider, Mono::Security::Interface::MonoTlsSettings, bool, Mono::Net::Security::MonoTlsStream)>(&Mono::Net::Security::ChainValidationHelper::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x268e6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileTlsProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MonoTlsStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.GetValidationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::ServerCertValidationCallback (*)(Mono::Security::Interface::MonoTlsSettings)>(&Mono::Net::Security::ChainValidationHelper::GetValidationCallback)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x268eac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "GetValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.DefaultSelectionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (*)(::StringW, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Security::Cryptography::X509Certificates::X509Certificate, ::ArrayW<::StringW>)>(&Mono::Net::Security::ChainValidationHelper::DefaultSelectionCallback)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x268ec70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "DefaultSelectionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.get_Settings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::MonoTlsSettings (Mono::Net::Security::ChainValidationHelper::*)()>(&Mono::Net::Security::ChainValidationHelper::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268ecac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "get_Settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.SelectClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::ChainValidationHelper::*)(::StringW, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Security::Cryptography::X509Certificates::X509Certificate, ::ArrayW<::StringW>, ByRef<System::Security::Cryptography::X509Certificates::X509Certificate>)>(&Mono::Net::Security::ChainValidationHelper::SelectClientCertificate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x268ecb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "SelectClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Security::Cryptography::X509Certificates::X509Certificate>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.ValidateCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ValidationResult (Mono::Net::Security::ChainValidationHelper::*)(::StringW, bool, System::Security::Cryptography::X509Certificates::X509Certificate, System::Security::Cryptography::X509Certificates::X509Chain)>(&Mono::Net::Security::ChainValidationHelper::ValidateCertificate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x268ecf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "ValidateCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.ValidateChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ValidationResult (Mono::Net::Security::ChainValidationHelper::*)(::StringW, bool, System::Security::Cryptography::X509Certificates::X509Certificate, System::Security::Cryptography::X509Certificates::X509Chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Net::Security::SslPolicyErrors)>(&Mono::Net::Security::ChainValidationHelper::ValidateChain)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x268edc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "ValidateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.ValidateChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Interface::ValidationResult (Mono::Net::Security::ChainValidationHelper::*)(::StringW, bool, System::Security::Cryptography::X509Certificates::X509Certificate, ByRef<System::Security::Cryptography::X509Certificates::X509Chain>, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Net::Security::SslPolicyErrors)>(&Mono::Net::Security::ChainValidationHelper::ValidateChain)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x268eea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "ValidateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Security::Cryptography::X509Certificates::X509Chain>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Net::Security::ChainValidationHelper.InvokeCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::ChainValidationHelper::*)(System::Security::Cryptography::X509Certificates::X509Certificate, System::Security::Cryptography::X509Certificates::X509Chain, System::Net::Security::SslPolicyErrors)>(&Mono::Net::Security::ChainValidationHelper::InvokeCallback)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x268f2b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Mono::Security::Interface::ICertificateValidator
constexpr  Mono::Net::Security::ChainValidationHelper::operator Mono::Security::Interface::ICertificateValidator() const noexcept {
return Mono::Security::Interface::ICertificateValidator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Net::Security::ChainValidationHelper::__set_owner(System::WeakReference_1<System::Net::Security::SslStream> value)  {
::cordl_internals::setInstanceField<System::WeakReference_1<System::Net::Security::SslStream>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::WeakReference_1<System::Net::Security::SslStream>>(value));
}
constexpr System::WeakReference_1<System::Net::Security::SslStream> Mono::Net::Security::ChainValidationHelper::__get_owner() const {
return ::cordl_internals::getInstanceField<System::WeakReference_1<System::Net::Security::SslStream>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Net::Security::ChainValidationHelper::__set_settings(Mono::Security::Interface::MonoTlsSettings value)  {
::cordl_internals::setInstanceField<Mono::Security::Interface::MonoTlsSettings, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Interface::MonoTlsSettings>(value));
}
constexpr Mono::Security::Interface::MonoTlsSettings Mono::Net::Security::ChainValidationHelper::__get_settings() const {
return ::cordl_internals::getInstanceField<Mono::Security::Interface::MonoTlsSettings, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Net::Security::ChainValidationHelper::__set_provider(Mono::Net::Security::MobileTlsProvider value)  {
::cordl_internals::setInstanceField<Mono::Net::Security::MobileTlsProvider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Net::Security::MobileTlsProvider>(value));
}
constexpr Mono::Net::Security::MobileTlsProvider Mono::Net::Security::ChainValidationHelper::__get_provider() const {
return ::cordl_internals::getInstanceField<Mono::Net::Security::MobileTlsProvider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Net::Security::ChainValidationHelper::__set_certValidationCallback(System::Net::ServerCertValidationCallback value)  {
::cordl_internals::setInstanceField<System::Net::ServerCertValidationCallback, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::ServerCertValidationCallback>(value));
}
constexpr System::Net::ServerCertValidationCallback Mono::Net::Security::ChainValidationHelper::__get_certValidationCallback() const {
return ::cordl_internals::getInstanceField<System::Net::ServerCertValidationCallback, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Net::Security::ChainValidationHelper::__set_certSelectionCallback(System::Net::Security::LocalCertSelectionCallback value)  {
::cordl_internals::setInstanceField<System::Net::Security::LocalCertSelectionCallback, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Security::LocalCertSelectionCallback>(value));
}
constexpr System::Net::Security::LocalCertSelectionCallback Mono::Net::Security::ChainValidationHelper::__get_certSelectionCallback() const {
return ::cordl_internals::getInstanceField<System::Net::Security::LocalCertSelectionCallback, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Net::Security::ChainValidationHelper::__set_tlsStream(Mono::Net::Security::MonoTlsStream value)  {
::cordl_internals::setInstanceField<Mono::Net::Security::MonoTlsStream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Net::Security::MonoTlsStream>(value));
}
constexpr Mono::Net::Security::MonoTlsStream Mono::Net::Security::ChainValidationHelper::__get_tlsStream() const {
return ::cordl_internals::getInstanceField<Mono::Net::Security::MonoTlsStream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Net::Security::ChainValidationHelper::__set_request(System::Net::HttpWebRequest value)  {
::cordl_internals::setInstanceField<System::Net::HttpWebRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpWebRequest>(value));
}
constexpr System::Net::HttpWebRequest Mono::Net::Security::ChainValidationHelper::__get_request() const {
return ::cordl_internals::getInstanceField<System::Net::HttpWebRequest, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Mono::Net::Security::ChainValidationHelper Mono::Net::Security::ChainValidationHelper::GetInternalValidator(System::Net::Security::SslStream owner, Mono::Net::Security::MobileTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "GetInternalValidator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileTlsProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Net::Security::ChainValidationHelper, false>(nullptr, ___internal_method, owner, provider, settings);
}
 Mono::Net::Security::ChainValidationHelper Mono::Net::Security::ChainValidationHelper::Create(Mono::Net::Security::MobileTlsProvider provider, ByRef<Mono::Security::Interface::MonoTlsSettings> settings, Mono::Net::Security::MonoTlsStream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileTlsProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::Security::Interface::MonoTlsSettings>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MonoTlsStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Net::Security::ChainValidationHelper, false>(nullptr, ___internal_method, provider, settings, stream);
}
// Ctor Parameters [CppParam { name: "owner", ty: "System::Net::Security::SslStream", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "Mono::Net::Security::MobileTlsProvider", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "Mono::Security::Interface::MonoTlsSettings", modifiers: "", def_value: None }, CppParam { name: "cloneSettings", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "Mono::Net::Security::MonoTlsStream", modifiers: "", def_value: None }]
 Mono::Net::Security::ChainValidationHelper::ChainValidationHelper(System::Net::Security::SslStream owner, Mono::Net::Security::MobileTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings, bool cloneSettings, Mono::Net::Security::MonoTlsStream stream)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ChainValidationHelper>(owner, provider, settings, cloneSettings, stream))) {}
 void Mono::Net::Security::ChainValidationHelper::_ctor(System::Net::Security::SslStream owner, Mono::Net::Security::MobileTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings, bool cloneSettings, Mono::Net::Security::MonoTlsStream stream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileTlsProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MonoTlsStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, owner, provider, settings, cloneSettings, stream);
}
 System::Net::ServerCertValidationCallback Mono::Net::Security::ChainValidationHelper::GetValidationCallback(Mono::Security::Interface::MonoTlsSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "GetValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::ServerCertValidationCallback, false>(nullptr, ___internal_method, settings);
}
 System::Security::Cryptography::X509Certificates::X509Certificate Mono::Net::Security::ChainValidationHelper::DefaultSelectionCallback(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "DefaultSelectionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(nullptr, ___internal_method, targetHost, localCertificates, remoteCertificate, acceptableIssuers);
}
 Mono::Security::Interface::MonoTlsSettings Mono::Net::Security::ChainValidationHelper::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "get_Settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::Interface::MonoTlsSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Net::Security::ChainValidationHelper::SelectClientCertificate(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers, ByRef<System::Security::Cryptography::X509Certificates::X509Certificate> clientCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "SelectClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Security::Cryptography::X509Certificates::X509Certificate>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, targetHost, localCertificates, remoteCertificate, acceptableIssuers, clientCertificate);
}
 Mono::Security::Interface::ValidationResult Mono::Net::Security::ChainValidationHelper::ValidateCertificate(::StringW host, bool serverMode, System::Security::Cryptography::X509Certificates::X509Certificate leaf, System::Security::Cryptography::X509Certificates::X509Chain chain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "ValidateCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::Interface::ValidationResult, false>(const_cast<void*>(instance), ___internal_method, host, serverMode, leaf, chain);
}
 Mono::Security::Interface::ValidationResult Mono::Net::Security::ChainValidationHelper::ValidateChain(::StringW host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate leaf, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection certs, System::Net::Security::SslPolicyErrors errors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "ValidateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::Interface::ValidationResult, false>(const_cast<void*>(instance), ___internal_method, host, server, leaf, chain, certs, errors);
}
 Mono::Security::Interface::ValidationResult Mono::Net::Security::ChainValidationHelper::ValidateChain(::StringW host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate leaf, ByRef<System::Security::Cryptography::X509Certificates::X509Chain> chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection certs, System::Net::Security::SslPolicyErrors errors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "ValidateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Security::Cryptography::X509Certificates::X509Chain>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::Interface::ValidationResult, false>(const_cast<void*>(instance), ___internal_method, host, server, leaf, chain, certs, errors);
}
 bool Mono::Net::Security::ChainValidationHelper::InvokeCallback(System::Security::Cryptography::X509Certificates::X509Certificate leaf, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Net::Security::SslPolicyErrors errors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Net::Security::ChainValidationHelper>::get(),
                            "InvokeCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Chain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslPolicyErrors>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, leaf, chain, errors);
}
