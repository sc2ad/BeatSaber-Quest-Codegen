#pragma once
namespace {
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsContext::*)(::Mono::Net::Security::MobileAuthenticatedStream, ::Mono::Net::Security::MonoSslAuthenticationOptions)>(&::Mono::Net::Security::MobileTlsContext::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2688df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_Parent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_Parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2692544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_Parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_Settings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_Settings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2689780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_Settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_IsAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_IsServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_IsServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269254c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_IsServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_TargetHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_TargetHost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2692554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_ServerName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_ServerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269255c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_ServerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_AskForClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_AskForClientCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2692564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_AskForClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_ClientCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269256c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.StartHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::StartHandshake)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.ProcessHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::ProcessHandshake)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.FinishHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::FinishHandshake)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_LocalServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_LocalServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2692574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_LocalServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.set_LocalServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsContext::*)(::System::Security::Cryptography::X509Certificates::X509Certificate)>(&::Mono::Net::Security::MobileTlsContext::set_LocalServerCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x269257c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "set_LocalServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_LocalClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_LocalClientCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.get_RemoteCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2 (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::get_RemoteCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,bool> (::Mono::Net::Security::MobileTlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::MobileTlsContext::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int32_t,bool> (::Mono::Net::Security::MobileTlsContext::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mono::Net::Security::MobileTlsContext::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.Shutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::Shutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.PendingRenegotiation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::PendingRenegotiation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.ValidateCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::MobileTlsContext::*)(::System::Security::Cryptography::X509Certificates::X509Certificate2, ::System::Security::Cryptography::X509Certificates::X509Chain)>(&::Mono::Net::Security::MobileTlsContext::ValidateCertificate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2689b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "ValidateCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.SelectClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate (::Mono::Net::Security::MobileTlsContext::*)(::ArrayW<::StringW>)>(&::Mono::Net::Security::MobileTlsContext::SelectClientCertificate)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x268ac50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "SelectClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.Renegotiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::Renegotiate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x26907c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsContext::*)(bool)>(&::Mono::Net::Security::MobileTlsContext::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2692584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::MobileTlsContext.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::MobileTlsContext::*)()>(&::Mono::Net::Security::MobileTlsContext::Finalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2692588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Net::Security::MobileTlsContext),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::Mono::Net::Security::MobileTlsContext::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set_certificateValidator(::Mono::Net::Security::ChainValidationHelper value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::ChainValidationHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::ChainValidationHelper>(value));
}
constexpr ::Mono::Net::Security::ChainValidationHelper ::Mono::Net::Security::MobileTlsContext::__get_certificateValidator() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::ChainValidationHelper, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set__Options_k__BackingField(::Mono::Net::Security::MonoSslAuthenticationOptions value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MonoSslAuthenticationOptions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::MonoSslAuthenticationOptions>(value));
}
constexpr ::Mono::Net::Security::MonoSslAuthenticationOptions ::Mono::Net::Security::MobileTlsContext::__get__Options_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MonoSslAuthenticationOptions, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set__Parent_k__BackingField(::Mono::Net::Security::MobileAuthenticatedStream value)  {
::cordl_internals::setInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Net::Security::MobileAuthenticatedStream>(value));
}
constexpr ::Mono::Net::Security::MobileAuthenticatedStream ::Mono::Net::Security::MobileTlsContext::__get__Parent_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Mono::Net::Security::MobileAuthenticatedStream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set__IsServer_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Net::Security::MobileTlsContext::__get__IsServer_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set__TargetHost_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Net::Security::MobileTlsContext::__get__TargetHost_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set__ServerName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Net::Security::MobileTlsContext::__get__ServerName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set__AskForClientCertificate_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Mono::Net::Security::MobileTlsContext::__get__AskForClientCertificate_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set__EnabledProtocols_k__BackingField(::System::Security::Authentication::SslProtocols value)  {
::cordl_internals::setInstanceField<::System::Security::Authentication::SslProtocols, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Authentication::SslProtocols>(value));
}
constexpr ::System::Security::Authentication::SslProtocols ::Mono::Net::Security::MobileTlsContext::__get__EnabledProtocols_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Security::Authentication::SslProtocols, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set__ClientCertificates_k__BackingField(::System::Security::Cryptography::X509Certificates::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Cryptography::X509Certificates::X509CertificateCollection>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509CertificateCollection ::Mono::Net::Security::MobileTlsContext::__get__ClientCertificates_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Net::Security::MobileTlsContext::__set__LocalServerCertificate_k__BackingField(::System::Security::Cryptography::X509Certificates::X509Certificate value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Cryptography::X509Certificates::X509Certificate>(value));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate ::Mono::Net::Security::MobileTlsContext::__get__LocalServerCertificate_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::X509Certificates::X509Certificate, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "parent", ty: "::Mono::Net::Security::MobileAuthenticatedStream", modifiers: "", def_value: None }, CppParam { name: "options", ty: "::Mono::Net::Security::MonoSslAuthenticationOptions", modifiers: "", def_value: None }]
 ::Mono::Net::Security::MobileTlsContext::MobileTlsContext(::Mono::Net::Security::MobileAuthenticatedStream parent, ::Mono::Net::Security::MonoSslAuthenticationOptions options)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MobileTlsContext>(parent, options))) {}
 void ::Mono::Net::Security::MobileTlsContext::_ctor(::Mono::Net::Security::MobileAuthenticatedStream parent, ::Mono::Net::Security::MonoSslAuthenticationOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent, options);
}
 ::Mono::Net::Security::MobileAuthenticatedStream ::Mono::Net::Security::MobileTlsContext::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_Parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::MobileAuthenticatedStream, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::Interface::MonoTlsSettings ::Mono::Net::Security::MobileTlsContext::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_Settings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MobileTlsContext::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_IsAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MobileTlsContext::get_IsServer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_IsServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Mono::Net::Security::MobileTlsContext::get_TargetHost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_TargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Mono::Net::Security::MobileTlsContext::get_ServerName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_ServerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MobileTlsContext::get_AskForClientCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_AskForClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::X509Certificates::X509CertificateCollection ::Mono::Net::Security::MobileTlsContext::get_ClientCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_ClientCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileTlsContext::StartHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "StartHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MobileTlsContext::ProcessHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "ProcessHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileTlsContext::FinishHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "FinishHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::X509Certificates::X509Certificate ::Mono::Net::Security::MobileTlsContext::get_LocalServerCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_LocalServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileTlsContext::set_LocalServerCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "set_LocalServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Security::Cryptography::X509Certificates::X509Certificate ::Mono::Net::Security::MobileTlsContext::get_LocalClientCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_LocalClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Security::Cryptography::X509Certificates::X509Certificate2 ::Mono::Net::Security::MobileTlsContext::get_RemoteCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "get_RemoteCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::ValueTuple_2<int32_t,bool> ::Mono::Net::Security::MobileTlsContext::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,bool>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 ::System::ValueTuple_2<int32_t,bool> ::Mono::Net::Security::MobileTlsContext::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,bool>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void ::Mono::Net::Security::MobileTlsContext::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "Shutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MobileTlsContext::PendingRenegotiation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "PendingRenegotiation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Net::Security::MobileTlsContext::ValidateCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2 leaf, ::System::Security::Cryptography::X509Certificates::X509Chain chain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "ValidateCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, leaf, chain);
}
 ::System::Security::Cryptography::X509Certificates::X509Certificate ::Mono::Net::Security::MobileTlsContext::SelectClientCertificate(::ArrayW<::StringW> acceptableIssuers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "SelectClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, acceptableIssuers);
}
 void ::Mono::Net::Security::MobileTlsContext::Renegotiate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "Renegotiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileTlsContext::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Net::Security::MobileTlsContext::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void ::Mono::Net::Security::MobileTlsContext::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::MobileTlsContext>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
