#pragma once
#include "Mono/Net/Security/zzzz__MobileTlsContext_impl.hpp"
#include "Mono/Unity/zzzz__UnityTlsContext_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsConnectionInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: Mono::Unity::UnityTlsContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)(Mono::Net::Security::MobileAuthenticatedStream, Mono::Net::Security::MonoSslAuthenticationOptions)>(&Mono::Unity::UnityTlsContext::_ctor)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x26886e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MonoSslAuthenticationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.ExtractNativeKeyAndChainFromManagedCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::X509Certificate, void*, ByRef<void*>, ByRef<void*>)>(&Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2688fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "ExtractNativeKeyAndChainFromManagedCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.get_IsAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26892e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.get_LocalClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::get_LocalClientCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26892e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.get_RemoteCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2 (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::get_RemoteCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26892f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ValueTuple_2<int32_t,bool> (Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Mono::Unity::UnityTlsContext::Read)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x26892f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ValueTuple_2<int32_t,bool> (Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Mono::Unity::UnityTlsContext::Write)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x26894a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.Renegotiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::Renegotiate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2689640;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.PendingRenegotiation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::PendingRenegotiation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2689680;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.Shutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::Shutdown)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2689688;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)(bool)>(&Mono::Unity::UnityTlsContext::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x268979c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.StartHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::StartHandshake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2689814;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.ProcessHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::ProcessHandshake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2689994;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.FinishHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)()>(&Mono::Unity::UnityTlsContext::FinishHandshake)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2689b58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.WriteCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(void*, void*, ::cordl_internals::intptr_t, void*)>(&Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x26883e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.WriteCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (Mono::Unity::UnityTlsContext::*)(void*, ::cordl_internals::intptr_t, void*)>(&Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2689ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.ReadCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(void*, void*, ::cordl_internals::intptr_t, void*)>(&Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x26884a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.ReadCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (Mono::Unity::UnityTlsContext::*)(void*, ::cordl_internals::intptr_t, void*)>(&Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x268a0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.VerifyCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result (*)(void*, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, void*)>(&Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2688570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "VerifyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.VerifyCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result (Mono::Unity::UnityTlsContext::*)(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref, void*)>(&Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x268a4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "VerifyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.CertificateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, void*, void*, ::cordl_internals::intptr_t, void*, ::cordl_internals::intptr_t, void*, void*, void*)>(&Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2688620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "CertificateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsContext.CertificateCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsContext::*)(void*, void*, ::cordl_internals::intptr_t, void*, ::cordl_internals::intptr_t, void*, void*, void*)>(&Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x268a984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "CertificateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Unity::UnityTlsContext::__set_tlsContext(void* value)  {
::cordl_internals::setInstanceField<void*, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* Mono::Unity::UnityTlsContext::__get_tlsContext() const {
return ::cordl_internals::getInstanceField<void*, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_requestedClientCertChain(void* value)  {
::cordl_internals::setInstanceField<void*, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* Mono::Unity::UnityTlsContext::__get_requestedClientCertChain() const {
return ::cordl_internals::getInstanceField<void*, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_requestedClientKey(void* value)  {
::cordl_internals::setInstanceField<void*, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<void*>(value));
}
constexpr void* Mono::Unity::UnityTlsContext::__get_requestedClientKey() const {
return ::cordl_internals::getInstanceField<void*, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_readCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback Mono::Unity::UnityTlsContext::__get_readCallback() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_read_callback, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_writeCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback Mono::Unity::UnityTlsContext::__get_writeCallback() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_write_callback, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_certificateCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback Mono::Unity::UnityTlsContext::__get_certificateCallback() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_certificate_callback, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_verifyCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback value)  {
::cordl_internals::setInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback>(value));
}
constexpr Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback Mono::Unity::UnityTlsContext::__get_verifyCallback() const {
return ::cordl_internals::getInstanceField<Mono::Unity::Mono__Unity__UnityTls__unitytls_tlsctx_x509verify_callback, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_localClientCertificate(System::Security::Cryptography::X509Certificates::X509Certificate value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate Mono::Unity::UnityTlsContext::__get_localClientCertificate() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_remoteCertificate(System::Security::Cryptography::X509Certificates::X509Certificate2 value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate2>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate2 Mono::Unity::UnityTlsContext::__get_remoteCertificate() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_connectioninfo(Mono::Security::Interface::MonoTlsConnectionInfo value)  {
::cordl_internals::setInstanceField<Mono::Security::Interface::MonoTlsConnectionInfo, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Interface::MonoTlsConnectionInfo>(value));
}
constexpr Mono::Security::Interface::MonoTlsConnectionInfo Mono::Unity::UnityTlsContext::__get_connectioninfo() const {
return ::cordl_internals::getInstanceField<Mono::Security::Interface::MonoTlsConnectionInfo, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_isAuthenticated(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Mono::Unity::UnityTlsContext::__get_isAuthenticated() const {
return ::cordl_internals::getInstanceField<bool, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_hasContext(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Mono::Unity::UnityTlsContext::__get_hasContext() const {
return ::cordl_internals::getInstanceField<bool, 0xa9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_closedGraceful(bool value)  {
::cordl_internals::setInstanceField<bool, 0xaa>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Mono::Unity::UnityTlsContext::__get_closedGraceful() const {
return ::cordl_internals::getInstanceField<bool, 0xaa>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_writeBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Unity::UnityTlsContext::__get_writeBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_readBuffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Unity::UnityTlsContext::__get_readBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_handle(System::Runtime::InteropServices::GCHandle value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::GCHandle, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::GCHandle>(value));
}
constexpr System::Runtime::InteropServices::GCHandle Mono::Unity::UnityTlsContext::__get_handle() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::GCHandle, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Unity::UnityTlsContext::__set_lastException(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Exception>(value));
}
constexpr System::Exception Mono::Unity::UnityTlsContext::__get_lastException() const {
return ::cordl_internals::getInstanceField<System::Exception, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Mono::Unity::UnityTlsContext Mono::Unity::UnityTlsContext::New_ctor(Mono::Net::Security::MobileAuthenticatedStream parent, Mono::Net::Security::MonoSslAuthenticationOptions options)  {
Mono::Unity::UnityTlsContext o{THROW_UNLESS(::il2cpp_utils::New<Mono::Unity::UnityTlsContext>(parent, options))};
return o;
}
 void Mono::Unity::UnityTlsContext::_ctor(Mono::Net::Security::MobileAuthenticatedStream parent, Mono::Net::Security::MonoSslAuthenticationOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MonoSslAuthenticationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, options);
}
 void Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(System::Security::Cryptography::X509Certificates::X509Certificate cert, void* errorState, ByRef<void*> nativeCertChain, ByRef<void*> nativeKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "ExtractNativeKeyAndChainFromManagedCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cert, errorState, nativeCertChain, nativeKey);
}
 bool Mono::Unity::UnityTlsContext::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "get_IsAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate Mono::Unity::UnityTlsContext::get_LocalClientCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "get_LocalClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate2 Mono::Unity::UnityTlsContext::get_RemoteCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "get_RemoteCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate2, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ValueTuple_2<int32_t,bool> Mono::Unity::UnityTlsContext::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<int32_t,bool>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::ValueTuple_2<int32_t,bool> Mono::Unity::UnityTlsContext::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<int32_t,bool>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void Mono::Unity::UnityTlsContext::Renegotiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "Renegotiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Unity::UnityTlsContext::PendingRenegotiation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "PendingRenegotiation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Unity::UnityTlsContext::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "Shutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Unity::UnityTlsContext::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void Mono::Unity::UnityTlsContext::StartHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "StartHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Unity::UnityTlsContext::ProcessHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "ProcessHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Unity::UnityTlsContext::FinishHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "FinishHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t Mono::Unity::UnityTlsContext::WriteCallback(void* userData, void* data, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, userData, data, bufferLen, errorState);
}
 ::cordl_internals::intptr_t Mono::Unity::UnityTlsContext::WriteCallback(void* data, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "WriteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, data, bufferLen, errorState);
}
 ::cordl_internals::intptr_t Mono::Unity::UnityTlsContext::ReadCallback(void* userData, void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, userData, buffer, bufferLen, errorState);
}
 ::cordl_internals::intptr_t Mono::Unity::UnityTlsContext::ReadCallback(void* buffer, ::cordl_internals::intptr_t bufferLen, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "ReadCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(instance), ___internal_method, buffer, bufferLen, errorState);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(void* userData, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "VerifyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, false>(nullptr, ___internal_method, userData, chain, errorState);
}
 Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref chain, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "VerifyCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509list_ref>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result, false>(const_cast<void*>(instance), ___internal_method, chain, errorState);
}
 void Mono::Unity::UnityTlsContext::CertificateCallback(void* userData, void* ctx, void* cn, ::cordl_internals::intptr_t cnLen, void* caList, ::cordl_internals::intptr_t caListLen, void* chain, void* key, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "CertificateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
 void Mono::Unity::UnityTlsContext::CertificateCallback(void* ctx, void* cn, ::cordl_internals::intptr_t cnLen, void* caList, ::cordl_internals::intptr_t caListLen, void* chain, void* key, void* errorState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsContext>::get(),
                            "CertificateCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
