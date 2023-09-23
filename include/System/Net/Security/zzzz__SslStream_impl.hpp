#pragma once
#include "System/Net/Security/zzzz__AuthenticatedStream_impl.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/Net/Security/zzzz__LocalCertificateSelectionCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::*)()>(&System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276d9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0._SetAndVerifySelectionCallback_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::*)(::StringW, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Security::Cryptography::X509Certificates::X509Certificate, ::ArrayW<::StringW>)>(&System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::_SetAndVerifySelectionCallback_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x276e1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0>::get(),
                            "<SetAndVerifySelectionCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::__set_callback(System::Net::Security::LocalCertificateSelectionCallback value)  {
::cordl_internals::setInstanceField<System::Net::Security::LocalCertificateSelectionCallback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Security::LocalCertificateSelectionCallback>(value));
}
constexpr System::Net::Security::LocalCertificateSelectionCallback System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::__get_callback() const {
return ::cordl_internals::getInstanceField<System::Net::Security::LocalCertificateSelectionCallback, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::__set___4__this(System::Net::Security::SslStream value)  {
::cordl_internals::setInstanceField<System::Net::Security::SslStream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Security::SslStream>(value));
}
constexpr System::Net::Security::SslStream System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<System::Net::Security::SslStream, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::System__Net__Security__SslStream____c__DisplayClass21_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Net__Security__SslStream____c__DisplayClass21_0>())) {}
 void System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0::_SetAndVerifySelectionCallback_b__0(::StringW t, System::Security::Cryptography::X509Certificates::X509CertificateCollection lc, System::Security::Cryptography::X509Certificates::X509Certificate rc, ::ArrayW<::StringW> ai)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::System__Net__Security__SslStream____c__DisplayClass21_0>::get(),
                            "<SetAndVerifySelectionCallback>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, t, lc, rc, ai);
}
//  Writing Method size for method: System::Net::Security::SslStream.get_Impl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::MobileAuthenticatedStream (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_Impl)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x276d4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_InternalTargetHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_InternalTargetHost)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x276d550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_InternalTargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.GetProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::MobileTlsProvider (*)()>(&System::Net::Security::SslStream::GetProvider)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x276d574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "GetProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(System::IO::Stream, bool, System::Net::Security::RemoteCertificateValidationCallback)>(&System::Net::Security::SslStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x276d5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(System::IO::Stream, bool, System::Net::Security::RemoteCertificateValidationCallback, System::Net::Security::LocalCertificateSelectionCallback)>(&System::Net::Security::SslStream::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x276d5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::LocalCertificateSelectionCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(System::IO::Stream, bool, Mono::Security::Interface::MonoTlsProvider, Mono::Security::Interface::MonoTlsSettings)>(&System::Net::Security::SslStream::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x276d8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.SetAndVerifyValidationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(System::Net::Security::RemoteCertificateValidationCallback)>(&System::Net::Security::SslStream::SetAndVerifyValidationCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x276d680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "SetAndVerifyValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.SetAndVerifySelectionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(System::Net::Security::LocalCertificateSelectionCallback)>(&System::Net::Security::SslStream::SetAndVerifySelectionCallback)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x276d760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "SetAndVerifySelectionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::LocalCertificateSelectionCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.AuthenticateAsClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(::StringW, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Security::Authentication::SslProtocols, bool)>(&System::Net::Security::SslStream::AuthenticateAsClient)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x276da04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.BeginAuthenticateAsClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Security::SslStream::*)(::StringW, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Security::Authentication::SslProtocols, bool, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Security::SslStream::BeginAuthenticateAsClient)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x276da58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.EndAuthenticateAsClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(System::IAsyncResult)>(&System::Net::Security::SslStream::EndAuthenticateAsClient)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x276dacc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.AuthenticateAsServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(System::Security::Cryptography::X509Certificates::X509Certificate, bool, System::Security::Authentication::SslProtocols, bool)>(&System::Net::Security::SslStream::AuthenticateAsServer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x276dad8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.AuthenticateAsClientAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Net::Security::SslStream::*)(::StringW, System::Security::Cryptography::X509Certificates::X509CertificateCollection, System::Security::Authentication::SslProtocols, bool)>(&System::Net::Security::SslStream::AuthenticateAsClientAsync)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x276db2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_IsAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x276db80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_LocalCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_LocalCertificate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x276dbac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_CanSeek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276dbd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_CanRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_CanRead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x276dbd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_CanTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x276dbf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_CanWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x276dc10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_ReadTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x276dc28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.set_ReadTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(int32_t)>(&System::Net::Security::SslStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x276dc54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_WriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x276dc90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.set_WriteTimeout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(int32_t)>(&System::Net::Security::SslStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x276dcbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_Length)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x276dcf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::get_Position)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x276dd20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(int64_t)>(&System::Net::Security::SslStream::set_Position)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x276dd48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.SetLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(int64_t)>(&System::Net::Security::SslStream::SetLength)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x276dda8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.Seek
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::Security::SslStream::*)(int64_t, System::IO::SeekOrigin)>(&System::Net::Security::SslStream::Seek)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x276dde4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.FlushAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Net::Security::SslStream::*)(System::Threading::CancellationToken)>(&System::Net::Security::SslStream::FlushAsync)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x276de44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x276de68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.CheckDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)()>(&System::Net::Security::SslStream::CheckDisposed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x276d4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(bool)>(&System::Net::Security::SslStream::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x276de8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Net::Security::SslStream::Read)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x276df38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&System::Net::Security::SslStream::Write)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x276df8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.ReadAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int32_t> (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::Net::Security::SslStream::ReadAsync)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x276dfe0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.WriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::Threading::CancellationToken)>(&System::Net::Security::SslStream::WriteAsync)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x276e03c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.BeginRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Security::SslStream::BeginRead)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x276e098;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.EndRead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Security::SslStream::*)(System::IAsyncResult)>(&System::Net::Security::SslStream::EndRead)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x276e104;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.BeginWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Security::SslStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Security::SslStream::BeginWrite)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x276e14c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Security::SslStream.EndWrite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Security::SslStream::*)(System::IAsyncResult)>(&System::Net::Security::SslStream::EndWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x276e1b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Security::SslStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::Security::SslStream::__set_provider(Mono::Net::Security::MobileTlsProvider value)  {
::cordl_internals::setInstanceField<Mono::Net::Security::MobileTlsProvider, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Net::Security::MobileTlsProvider>(value));
}
constexpr Mono::Net::Security::MobileTlsProvider System::Net::Security::SslStream::__get_provider() const {
return ::cordl_internals::getInstanceField<Mono::Net::Security::MobileTlsProvider, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslStream::__set_settings(Mono::Security::Interface::MonoTlsSettings value)  {
::cordl_internals::setInstanceField<Mono::Security::Interface::MonoTlsSettings, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Interface::MonoTlsSettings>(value));
}
constexpr Mono::Security::Interface::MonoTlsSettings System::Net::Security::SslStream::__get_settings() const {
return ::cordl_internals::getInstanceField<Mono::Security::Interface::MonoTlsSettings, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslStream::__set_validationCallback(System::Net::Security::RemoteCertificateValidationCallback value)  {
::cordl_internals::setInstanceField<System::Net::Security::RemoteCertificateValidationCallback, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Security::RemoteCertificateValidationCallback>(value));
}
constexpr System::Net::Security::RemoteCertificateValidationCallback System::Net::Security::SslStream::__get_validationCallback() const {
return ::cordl_internals::getInstanceField<System::Net::Security::RemoteCertificateValidationCallback, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslStream::__set_selectionCallback(System::Net::Security::LocalCertificateSelectionCallback value)  {
::cordl_internals::setInstanceField<System::Net::Security::LocalCertificateSelectionCallback, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Security::LocalCertificateSelectionCallback>(value));
}
constexpr System::Net::Security::LocalCertificateSelectionCallback System::Net::Security::SslStream::__get_selectionCallback() const {
return ::cordl_internals::getInstanceField<System::Net::Security::LocalCertificateSelectionCallback, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslStream::__set_impl(Mono::Net::Security::MobileAuthenticatedStream value)  {
::cordl_internals::setInstanceField<Mono::Net::Security::MobileAuthenticatedStream, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Net::Security::MobileAuthenticatedStream>(value));
}
constexpr Mono::Net::Security::MobileAuthenticatedStream System::Net::Security::SslStream::__get_impl() const {
return ::cordl_internals::getInstanceField<Mono::Net::Security::MobileAuthenticatedStream, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Security::SslStream::__set_explicitSettings(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Security::SslStream::__get_explicitSettings() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Mono::Net::Security::MobileAuthenticatedStream System::Net::Security::SslStream::get_Impl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_Impl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Net::Security::MobileAuthenticatedStream, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::Security::SslStream::get_InternalTargetHost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_InternalTargetHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::Net::Security::MobileTlsProvider System::Net::Security::SslStream::GetProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "GetProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Net::Security::MobileTlsProvider, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "userCertificateValidationCallback", ty: "System::Net::Security::RemoteCertificateValidationCallback", modifiers: "", def_value: None }]
 System::Net::Security::SslStream::SslStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback userCertificateValidationCallback)  : System::Net::Security::AuthenticatedStream(THROW_UNLESS(::il2cpp_utils::New<SslStream>(innerStream, leaveInnerStreamOpen, userCertificateValidationCallback))) {}
 void System::Net::Security::SslStream::_ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback userCertificateValidationCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, innerStream, leaveInnerStreamOpen, userCertificateValidationCallback);
}
// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "userCertificateValidationCallback", ty: "System::Net::Security::RemoteCertificateValidationCallback", modifiers: "", def_value: None }, CppParam { name: "userCertificateSelectionCallback", ty: "System::Net::Security::LocalCertificateSelectionCallback", modifiers: "", def_value: None }]
 System::Net::Security::SslStream::SslStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback userCertificateValidationCallback, System::Net::Security::LocalCertificateSelectionCallback userCertificateSelectionCallback)  : System::Net::Security::AuthenticatedStream(THROW_UNLESS(::il2cpp_utils::New<SslStream>(innerStream, leaveInnerStreamOpen, userCertificateValidationCallback, userCertificateSelectionCallback))) {}
 void System::Net::Security::SslStream::_ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback userCertificateValidationCallback, System::Net::Security::LocalCertificateSelectionCallback userCertificateSelectionCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::LocalCertificateSelectionCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, innerStream, leaveInnerStreamOpen, userCertificateValidationCallback, userCertificateSelectionCallback);
}
// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "Mono::Security::Interface::MonoTlsProvider", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "Mono::Security::Interface::MonoTlsSettings", modifiers: "", def_value: None }]
 System::Net::Security::SslStream::SslStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings)  : System::Net::Security::AuthenticatedStream(THROW_UNLESS(::il2cpp_utils::New<SslStream>(innerStream, leaveInnerStreamOpen, provider, settings))) {}
 void System::Net::Security::SslStream::_ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, innerStream, leaveInnerStreamOpen, provider, settings);
}
 void System::Net::Security::SslStream::SetAndVerifyValidationCallback(System::Net::Security::RemoteCertificateValidationCallback callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "SetAndVerifyValidationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void System::Net::Security::SslStream::SetAndVerifySelectionCallback(System::Net::Security::LocalCertificateSelectionCallback callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "SetAndVerifySelectionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::LocalCertificateSelectionCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void System::Net::Security::SslStream::AuthenticateAsClient(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "AuthenticateAsClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
}
 System::IAsyncResult System::Net::Security::SslStream::BeginAuthenticateAsClient(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation, System::AsyncCallback asyncCallback, ::bs_hook::Il2CppWrapperType asyncState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "BeginAuthenticateAsClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation, asyncCallback, asyncState);
}
 void System::Net::Security::SslStream::EndAuthenticateAsClient(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "EndAuthenticateAsClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 void System::Net::Security::SslStream::AuthenticateAsServer(System::Security::Cryptography::X509Certificates::X509Certificate serverCertificate, bool clientCertificateRequired, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "AuthenticateAsServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
}
 System::Threading::Tasks::Task System::Net::Security::SslStream::AuthenticateAsClientAsync(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "AuthenticateAsClientAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509CertificateCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Authentication::SslProtocols>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
}
 bool System::Net::Security::SslStream::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_IsAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate System::Net::Security::SslStream::get_LocalCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_LocalCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Security::SslStream::get_CanSeek()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_CanSeek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Security::SslStream::get_CanRead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_CanRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Security::SslStream::get_CanTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_CanTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Security::SslStream::get_CanWrite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_CanWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t System::Net::Security::SslStream::get_ReadTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_ReadTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Security::SslStream::set_ReadTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "set_ReadTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t System::Net::Security::SslStream::get_WriteTimeout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_WriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Security::SslStream::set_WriteTimeout(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "set_WriteTimeout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int64_t System::Net::Security::SslStream::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t System::Net::Security::SslStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Security::SslStream::set_Position(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Security::SslStream::SetLength(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "SetLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int64_t System::Net::Security::SslStream::Seek(int64_t offset, System::IO::SeekOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "Seek",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::SeekOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, offset, origin);
}
 System::Threading::Tasks::Task System::Net::Security::SslStream::FlushAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "FlushAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 void System::Net::Security::SslStream::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Security::SslStream::CheckDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Security::SslStream::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 int32_t System::Net::Security::SslStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 void System::Net::Security::SslStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 System::Threading::Tasks::Task_1<int32_t> System::Net::Security::SslStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "ReadAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 System::Threading::Tasks::Task System::Net::Security::SslStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "WriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, cancellationToken);
}
 System::IAsyncResult System::Net::Security::SslStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "BeginRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 int32_t System::Net::Security::SslStream::EndRead(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "EndRead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::IAsyncResult System::Net::Security::SslStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "BeginWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count, callback, state);
}
 void System::Net::Security::SslStream::EndWrite(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Security::SslStream>::get(),
                            "EndWrite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
