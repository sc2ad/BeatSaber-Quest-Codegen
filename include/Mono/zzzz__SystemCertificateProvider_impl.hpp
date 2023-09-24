#pragma once
#include "Mono/zzzz__SystemCertificateProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "Mono/zzzz__CertificateImportFlags_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2Impl_def.hpp"
//  Writing Method size for method: Mono::SystemCertificateProvider.GetX509Pal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::X509PalImpl (*)()>(&Mono::SystemCertificateProvider::GetX509Pal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2684acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "GetX509Pal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemCertificateProvider.EnsureInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::SystemCertificateProvider::EnsureInitialized)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2684b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "EnsureInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemCertificateProvider.get_X509Pal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::X509PalImpl (Mono::SystemCertificateProvider::*)()>(&Mono::SystemCertificateProvider::get_X509Pal)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2684cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "get_X509Pal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemCertificateProvider.Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl (Mono::SystemCertificateProvider::*)(::ArrayW<uint8_t>, Mono::CertificateImportFlags)>(&Mono::SystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2684d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemCertificateProvider.Mono_ISystemCertificateProvider_Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl (Mono::SystemCertificateProvider::*)(::ArrayW<uint8_t>, Microsoft::Win32::SafeHandles::SafePasswordHandle, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, Mono::CertificateImportFlags)>(&Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2684f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Mono.ISystemCertificateProvider.Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemCertificateProvider.Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2Impl (Mono::SystemCertificateProvider::*)(::ArrayW<uint8_t>, Microsoft::Win32::SafeHandles::SafePasswordHandle, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, Mono::CertificateImportFlags)>(&Mono::SystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2684f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemCertificateProvider.Mono_ISystemCertificateProvider_Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl (Mono::SystemCertificateProvider::*)(System::Security::Cryptography::X509Certificates::X509Certificate, Mono::CertificateImportFlags)>(&Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26850a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Mono.ISystemCertificateProvider.Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemCertificateProvider.Import
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2Impl (Mono::SystemCertificateProvider::*)(System::Security::Cryptography::X509Certificates::X509Certificate, Mono::CertificateImportFlags)>(&Mono::SystemCertificateProvider::Import)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26850a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SystemCertificateProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SystemCertificateProvider::*)()>(&Mono::SystemCertificateProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26851bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Mono::ISystemCertificateProvider
constexpr  Mono::SystemCertificateProvider::operator Mono::ISystemCertificateProvider() const noexcept {
return Mono::ISystemCertificateProvider(::bs_hook::Il2CppWrapperType::instance);
}
 void Mono::SystemCertificateProvider::__set_initialized(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get>(std::forward<int32_t>(value));
}
 int32_t Mono::SystemCertificateProvider::__get_initialized()  {
return ::cordl_internals::getStaticField<int32_t, "initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get>();
}
 void Mono::SystemCertificateProvider::__set_x509pal(Mono::X509PalImpl value)  {
::cordl_internals::setStaticField<Mono::X509PalImpl, "x509pal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get>(std::forward<Mono::X509PalImpl>(value));
}
 Mono::X509PalImpl Mono::SystemCertificateProvider::__get_x509pal()  {
return ::cordl_internals::getStaticField<Mono::X509PalImpl, "x509pal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get>();
}
 void Mono::SystemCertificateProvider::__set_syncRoot(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "syncRoot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType Mono::SystemCertificateProvider::__get_syncRoot()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "syncRoot", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get>();
}
 Mono::X509PalImpl Mono::SystemCertificateProvider::GetX509Pal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "GetX509Pal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::X509PalImpl, false>(nullptr, ___internal_method);
}
 void Mono::SystemCertificateProvider::EnsureInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "EnsureInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 Mono::X509PalImpl Mono::SystemCertificateProvider::get_X509Pal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "get_X509Pal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::X509PalImpl, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param importFlags: Mono::CertificateImportFlags (default: 0)
 System::Security::Cryptography::X509Certificates::X509CertificateImpl Mono::SystemCertificateProvider::Import(::ArrayW<uint8_t> data, Mono::CertificateImportFlags importFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(const_cast<void*>(instance), ___internal_method, data, importFlags);
}
 System::Security::Cryptography::X509Certificates::X509CertificateImpl Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import(::ArrayW<uint8_t> data, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, Mono::CertificateImportFlags importFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Mono.ISystemCertificateProvider.Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(const_cast<void*>(instance), ___internal_method, data, password, keyStorageFlags, importFlags);
}
/// @param importFlags: Mono::CertificateImportFlags (default: 0)
 System::Security::Cryptography::X509Certificates::X509Certificate2Impl Mono::SystemCertificateProvider::Import(::ArrayW<uint8_t> data, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, Mono::CertificateImportFlags importFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate2Impl, false>(const_cast<void*>(instance), ___internal_method, data, password, keyStorageFlags, importFlags);
}
 System::Security::Cryptography::X509Certificates::X509CertificateImpl Mono::SystemCertificateProvider::Mono_ISystemCertificateProvider_Import(System::Security::Cryptography::X509Certificates::X509Certificate cert, Mono::CertificateImportFlags importFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Mono.ISystemCertificateProvider.Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(const_cast<void*>(instance), ___internal_method, cert, importFlags);
}
/// @param importFlags: Mono::CertificateImportFlags (default: 0)
 System::Security::Cryptography::X509Certificates::X509Certificate2Impl Mono::SystemCertificateProvider::Import(System::Security::Cryptography::X509Certificates::X509Certificate cert, Mono::CertificateImportFlags importFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            "Import",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::CertificateImportFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate2Impl, false>(const_cast<void*>(instance), ___internal_method, cert, importFlags);
}
 Mono::SystemCertificateProvider Mono::SystemCertificateProvider::New_ctor()  {
Mono::SystemCertificateProvider o{THROW_UNLESS(::il2cpp_utils::New<Mono::SystemCertificateProvider>())};
return o;
}
 void Mono::SystemCertificateProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SystemCertificateProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
