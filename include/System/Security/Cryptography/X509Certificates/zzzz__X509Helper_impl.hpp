#pragma once
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Helper_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Helper.get_CertificateProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::ISystemCertificateProvider (*)()>(&System::Security::Cryptography::X509Certificates::X509Helper::get_CertificateProvider)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x230afb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "get_CertificateProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Helper.InitFromCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl (*)(System::Security::Cryptography::X509Certificates::X509Certificate)>(&System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x230b080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "InitFromCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Helper.InitFromCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl (*)(System::Security::Cryptography::X509Certificates::X509CertificateImpl)>(&System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x230b130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "InitFromCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateImpl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Helper.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Security::Cryptography::X509Certificates::X509CertificateImpl)>(&System::Security::Cryptography::X509Certificates::X509Helper::IsValid)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x230b144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateImpl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Helper.ThrowIfContextInvalid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::X509CertificateImpl)>(&System::Security::Cryptography::X509Certificates::X509Helper::ThrowIfContextInvalid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x230b158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "ThrowIfContextInvalid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateImpl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Helper.GetInvalidContextException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)()>(&System::Security::Cryptography::X509Certificates::X509Helper::GetInvalidContextException)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x230ac00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "GetInvalidContextException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Helper.Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::X509Certificates::X509Helper::Import)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x230b198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Helper.Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl (*)(::ArrayW<uint8_t>, Microsoft::Win32::SafeHandles::SafePasswordHandle, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Helper::Import)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x230b244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get()}
                        )));
    return ___internal_method;
  }
};
 Mono::ISystemCertificateProvider System::Security::Cryptography::X509Certificates::X509Helper::get_CertificateProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "get_CertificateProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::ISystemCertificateProvider, false>(nullptr, ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509CertificateImpl System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate(System::Security::Cryptography::X509Certificates::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "InitFromCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(nullptr, ___internal_method, cert);
}
 System::Security::Cryptography::X509Certificates::X509CertificateImpl System::Security::Cryptography::X509Certificates::X509Helper::InitFromCertificate(System::Security::Cryptography::X509Certificates::X509CertificateImpl impl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "InitFromCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateImpl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(nullptr, ___internal_method, impl);
}
 bool System::Security::Cryptography::X509Certificates::X509Helper::IsValid(System::Security::Cryptography::X509Certificates::X509CertificateImpl impl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateImpl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, impl);
}
 void System::Security::Cryptography::X509Certificates::X509Helper::ThrowIfContextInvalid(System::Security::Cryptography::X509Certificates::X509CertificateImpl impl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "ThrowIfContextInvalid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateImpl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, impl);
}
 System::Exception System::Security::Cryptography::X509Certificates::X509Helper::GetInvalidContextException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "GetInvalidContextException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509CertificateImpl System::Security::Cryptography::X509Certificates::X509Helper::Import(::ArrayW<uint8_t> rawData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(nullptr, ___internal_method, rawData);
}
 System::Security::Cryptography::X509Certificates::X509CertificateImpl System::Security::Cryptography::X509Certificates::X509Helper::Import(::ArrayW<uint8_t> rawData, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Helper>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(nullptr, ___internal_method, rawData, password, keyStorageFlags);
}
