#pragma once
namespace {
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "Mono/zzzz__CertificateImportFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
//  Writing Method size for method: ::Mono::ISystemCertificateProvider.Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl (::Mono::ISystemCertificateProvider::*)(::ArrayW<uint8_t>, ::Mono::CertificateImportFlags)>(&::Mono::ISystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::ISystemCertificateProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::ISystemCertificateProvider.Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl (::Mono::ISystemCertificateProvider::*)(::ArrayW<uint8_t>, ::Microsoft::Win32::SafeHandles::SafePasswordHandle, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, ::Mono::CertificateImportFlags)>(&::Mono::ISystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::ISystemCertificateProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::ISystemCertificateProvider.Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateImpl (::Mono::ISystemCertificateProvider::*)(::System::Security::Cryptography::X509Certificates::X509Certificate, ::Mono::CertificateImportFlags)>(&::Mono::ISystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::ISystemCertificateProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @param importFlags: ::Mono::CertificateImportFlags (default: 0)
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl ::Mono::ISystemCertificateProvider::Import(::ArrayW<uint8_t> data, ::Mono::CertificateImportFlags importFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(const_cast<void*>(instance), ___internal_method, data, importFlags);
}
/// @param importFlags: ::Mono::CertificateImportFlags (default: 0)
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl ::Mono::ISystemCertificateProvider::Import(::ArrayW<uint8_t> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::Mono::CertificateImportFlags importFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafePasswordHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(const_cast<void*>(instance), ___internal_method, data, password, keyStorageFlags, importFlags);
}
/// @param importFlags: ::Mono::CertificateImportFlags (default: 0)
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl ::Mono::ISystemCertificateProvider::Import(::System::Security::Cryptography::X509Certificates::X509Certificate cert, ::Mono::CertificateImportFlags importFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemCertificateProvider>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::CertificateImportFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(const_cast<void*>(instance), ___internal_method, cert, importFlags);
}
} // end anonymous namespace
