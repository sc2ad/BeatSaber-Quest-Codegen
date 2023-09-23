#pragma once
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2ImplUnix_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2ImplMono_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509KeyStorageFlags_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImplCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateImpl_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafePasswordHandle_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x27eac1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(Mono::Security::X509::X509Certificate)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27eac2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27eac5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::ArrayW<uint8_t>, Microsoft::Win32::SafeHandles::SafePasswordHandle, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x27ead00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImpl (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Clone)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x27eaeb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_Cert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Cert)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27eaf20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "get_Cert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.GetRawCertData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRawCertData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27eaf3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_HasPrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_HasPrivateKey)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27eaf74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_PrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::AsymmetricAlgorithm (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PrivateKey)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x27eaf98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.set_PrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(System::Security::Cryptography::AsymmetricAlgorithm)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::set_PrivateKey)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x27eb3c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.GetRSAPrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::RSA (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRSAPrivateKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27eb558;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.GetDSAPrivateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::DSA (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetDSAPrivateKey)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27eb5e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.ImportPkcs12
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::ArrayW<uint8_t>, Microsoft::Win32::SafeHandles::SafePasswordHandle)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27eae5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "ImportPkcs12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.ImportPkcs12
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(::ArrayW<uint8_t>, ::StringW)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x27eb670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "ImportPkcs12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Verify)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27ebf88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_IntermediateCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509CertificateImplCollection (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IntermediateCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ec0c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono.get_MonoCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate (System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::*)()>(&System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_MonoCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ec0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "get_MonoCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__set_intermediateCerts(System::Security::Cryptography::X509Certificates::X509CertificateImplCollection value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509CertificateImplCollection, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509CertificateImplCollection>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509CertificateImplCollection System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__get_intermediateCerts() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509CertificateImplCollection, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__set__cert(Mono::Security::X509::X509Certificate value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509Certificate, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509Certificate>(value));
}
constexpr Mono::Security::X509::X509Certificate System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__get__cert() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509Certificate, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__set_empty_error(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "empty_error", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__get_empty_error()  {
return ::cordl_internals::getStaticField<::StringW, "empty_error", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get>();
}
 void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__set_signedData(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "signedData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::__get_signedData()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "signedData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get>();
}
 bool System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "get_IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "cert", ty: "Mono::Security::X509::X509Certificate", modifiers: "", def_value: None }]
 System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::X509Certificate2ImplMono(Mono::Security::X509::X509Certificate cert)  : System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix(THROW_UNLESS(::il2cpp_utils::New<X509Certificate2ImplMono>(cert))) {}
 void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor(Mono::Security::X509::X509Certificate cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cert);
}
// Ctor Parameters [CppParam { name: "other", ty: "System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono", modifiers: "", def_value: None }]
 System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::X509Certificate2ImplMono(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono other)  : System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix(THROW_UNLESS(::il2cpp_utils::New<X509Certificate2ImplMono>(other))) {}
 void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor(System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "rawData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "Microsoft::Win32::SafeHandles::SafePasswordHandle", modifiers: "", def_value: None }, CppParam { name: "keyStorageFlags", ty: "System::Security::Cryptography::X509Certificates::X509KeyStorageFlags", modifiers: "", def_value: None }]
 System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::X509Certificate2ImplMono(::ArrayW<uint8_t> rawData, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)  : System::Security::Cryptography::X509Certificates::X509Certificate2ImplUnix(THROW_UNLESS(::il2cpp_utils::New<X509Certificate2ImplMono>(rawData, password, keyStorageFlags))) {}
 void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::_ctor(::ArrayW<uint8_t> rawData, Microsoft::Win32::SafeHandles::SafePasswordHandle password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509KeyStorageFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rawData, password, keyStorageFlags);
}
 System::Security::Cryptography::X509Certificates::X509CertificateImpl System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateImpl, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::Security::X509::X509Certificate System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_Cert()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "get_Cert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRawCertData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "GetRawCertData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_HasPrivateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "get_HasPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::AsymmetricAlgorithm System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_PrivateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "get_PrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::AsymmetricAlgorithm, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::set_PrivateKey(System::Security::Cryptography::AsymmetricAlgorithm value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "set_PrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Security::Cryptography::RSA System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetRSAPrivateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "GetRSAPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::RSA, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::DSA System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::GetDSAPrivateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "GetDSAPrivateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::DSA, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::Security::X509::X509Certificate System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12(::ArrayW<uint8_t> rawData, Microsoft::Win32::SafeHandles::SafePasswordHandle password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "ImportPkcs12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafePasswordHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, rawData, password);
}
 Mono::Security::X509::X509Certificate System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::ImportPkcs12(::ArrayW<uint8_t> rawData, ::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "ImportPkcs12",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, rawData, password);
}
 bool System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::Verify(System::Security::Cryptography::X509Certificates::X509Certificate2 thisCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, thisCertificate);
}
 System::Security::Cryptography::X509Certificates::X509CertificateImplCollection System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_IntermediateCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "get_IntermediateCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509CertificateImplCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::Security::X509::X509Certificate System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono::get_MonoCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509Certificate2ImplMono>::get(),
                            "get_MonoCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
