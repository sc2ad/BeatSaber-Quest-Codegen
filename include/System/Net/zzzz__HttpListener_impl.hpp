#pragma once
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
#include "System/Net/zzzz__HttpListenerPrefixCollection_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ExtendedProtectionPolicy_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/Net/zzzz__ServiceNameStore_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemeSelector_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
//  Writing Method size for method: System::Net::HttpListener.LoadCertificateAndKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate (System::Net::HttpListener::*)(System::Net::IPAddress, int32_t)>(&System::Net::HttpListener::LoadCertificateAndKey)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x282e330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "LoadCertificateAndKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.CreateSslStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Security::SslStream (System::Net::HttpListener::*)(System::IO::Stream, bool, System::Net::Security::RemoteCertificateValidationCallback)>(&System::Net::HttpListener::CreateSslStream)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2832714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "CreateSslStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2835658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.get_AuthenticationSchemes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::AuthenticationSchemes (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_AuthenticationSchemes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2835894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_AuthenticationSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.get_AuthenticationSchemeSelectorDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::AuthenticationSchemeSelector (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_AuthenticationSchemeSelectorDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x283589c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_AuthenticationSchemeSelectorDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.get_IgnoreWriteExceptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_IgnoreWriteExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28358a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_IgnoreWriteExceptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.get_IsListening
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_IsListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28358ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_IsListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.get_Prefixes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerPrefixCollection (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_Prefixes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2831580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_Prefixes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.get_Realm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpListener::*)()>(&System::Net::HttpListener::get_Realm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2835934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_Realm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x283593c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(bool)>(&System::Net::HttpListener::Close)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2835970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(bool)>(&System::Net::HttpListener::Cleanup)> {
  constexpr static std::size_t size = 0xa90;
  constexpr static std::size_t addrs = 0x28359e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.BeginGetContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::HttpListener::*)(System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::HttpListener::BeginGetContext)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2836474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "BeginGetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.EndGetContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerContext (System::Net::HttpListener::*)(System::IAsyncResult)>(&System::Net::HttpListener::EndGetContext)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x28367ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "EndGetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.SelectAuthenticationScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::AuthenticationSchemes (System::Net::HttpListener::*)(System::Net::HttpListenerContext)>(&System::Net::HttpListener::SelectAuthenticationScheme)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2836ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "SelectAuthenticationScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.GetContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerContext (System::Net::HttpListener::*)()>(&System::Net::HttpListener::GetContext)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2836c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "GetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2836d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::Stop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2836dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2836de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.CheckDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)()>(&System::Net::HttpListener::CheckDisposed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28358b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.GetContextFromQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListenerContext (System::Net::HttpListener::*)()>(&System::Net::HttpListener::GetContextFromQueue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2836728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "GetContextFromQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.RegisterContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(System::Net::HttpListenerContext)>(&System::Net::HttpListener::RegisterContext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x2833c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "RegisterContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.UnregisterContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(System::Net::HttpListenerContext)>(&System::Net::HttpListener::UnregisterContext)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x282f6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "UnregisterContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.AddConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(System::Net::HttpConnection)>(&System::Net::HttpListener::AddConnection)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2833c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "AddConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::HttpListener.RemoveConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpListener::*)(System::Net::HttpConnection)>(&System::Net::HttpListener::RemoveConnection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2833ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpConnection>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Net::HttpListener::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_tlsProvider(Mono::Security::Interface::MonoTlsProvider value)  {
::cordl_internals::setInstanceField<Mono::Security::Interface::MonoTlsProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Interface::MonoTlsProvider>(value));
}
constexpr Mono::Security::Interface::MonoTlsProvider System::Net::HttpListener::__get_tlsProvider() const {
return ::cordl_internals::getInstanceField<Mono::Security::Interface::MonoTlsProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_tlsSettings(Mono::Security::Interface::MonoTlsSettings value)  {
::cordl_internals::setInstanceField<Mono::Security::Interface::MonoTlsSettings, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Interface::MonoTlsSettings>(value));
}
constexpr Mono::Security::Interface::MonoTlsSettings System::Net::HttpListener::__get_tlsSettings() const {
return ::cordl_internals::getInstanceField<Mono::Security::Interface::MonoTlsSettings, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_certificate(System::Security::Cryptography::X509Certificates::X509Certificate value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate System::Net::HttpListener::__get_certificate() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_auth_schemes(System::Net::AuthenticationSchemes value)  {
::cordl_internals::setInstanceField<System::Net::AuthenticationSchemes, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::AuthenticationSchemes>(value));
}
constexpr System::Net::AuthenticationSchemes System::Net::HttpListener::__get_auth_schemes() const {
return ::cordl_internals::getInstanceField<System::Net::AuthenticationSchemes, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_prefixes(System::Net::HttpListenerPrefixCollection value)  {
::cordl_internals::setInstanceField<System::Net::HttpListenerPrefixCollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpListenerPrefixCollection>(value));
}
constexpr System::Net::HttpListenerPrefixCollection System::Net::HttpListener::__get_prefixes() const {
return ::cordl_internals::getInstanceField<System::Net::HttpListenerPrefixCollection, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_auth_selector(System::Net::AuthenticationSchemeSelector value)  {
::cordl_internals::setInstanceField<System::Net::AuthenticationSchemeSelector, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::AuthenticationSchemeSelector>(value));
}
constexpr System::Net::AuthenticationSchemeSelector System::Net::HttpListener::__get_auth_selector() const {
return ::cordl_internals::getInstanceField<System::Net::AuthenticationSchemeSelector, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_realm(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::HttpListener::__get_realm() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_ignore_write_exceptions(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::HttpListener::__get_ignore_write_exceptions() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_listening(bool value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::HttpListener::__get_listening() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::HttpListener::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set__internalLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Net::HttpListener::__get__internalLock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_registry(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Net::HttpListener::__get_registry() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_ctx_queue(System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<System::Collections::ArrayList, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ArrayList>(value));
}
constexpr System::Collections::ArrayList System::Net::HttpListener::__get_ctx_queue() const {
return ::cordl_internals::getInstanceField<System::Collections::ArrayList, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_wait_queue(System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<System::Collections::ArrayList, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ArrayList>(value));
}
constexpr System::Collections::ArrayList System::Net::HttpListener::__get_wait_queue() const {
return ::cordl_internals::getInstanceField<System::Collections::ArrayList, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_connections(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Net::HttpListener::__get_connections() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_defaultServiceNames(System::Net::ServiceNameStore value)  {
::cordl_internals::setInstanceField<System::Net::ServiceNameStore, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::ServiceNameStore>(value));
}
constexpr System::Net::ServiceNameStore System::Net::HttpListener::__get_defaultServiceNames() const {
return ::cordl_internals::getInstanceField<System::Net::ServiceNameStore, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::HttpListener::__set_extendedProtectionPolicy(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy value)  {
::cordl_internals::setInstanceField<System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy>(value));
}
constexpr System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy System::Net::HttpListener::__get_extendedProtectionPolicy() const {
return ::cordl_internals::getInstanceField<System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Security::Cryptography::X509Certificates::X509Certificate System::Net::HttpListener::LoadCertificateAndKey(System::Net::IPAddress addr, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "LoadCertificateAndKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate, false>(const_cast<void*>(instance), ___internal_method, addr, port);
}
 System::Net::Security::SslStream System::Net::HttpListener::CreateSslStream(System::IO::Stream innerStream, bool ownsStream, System::Net::Security::RemoteCertificateValidationCallback callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "CreateSslStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::RemoteCertificateValidationCallback>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Security::SslStream, false>(const_cast<void*>(instance), ___internal_method, innerStream, ownsStream, callback);
}
// Ctor Parameters []
 System::Net::HttpListener::HttpListener()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HttpListener>())) {}
 void System::Net::HttpListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::AuthenticationSchemes System::Net::HttpListener::get_AuthenticationSchemes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_AuthenticationSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::AuthenticationSchemes, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::AuthenticationSchemeSelector System::Net::HttpListener::get_AuthenticationSchemeSelectorDelegate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_AuthenticationSchemeSelectorDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::AuthenticationSchemeSelector, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::HttpListener::get_IgnoreWriteExceptions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_IgnoreWriteExceptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::HttpListener::get_IsListening()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_IsListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::HttpListenerPrefixCollection System::Net::HttpListener::get_Prefixes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_Prefixes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpListenerPrefixCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::HttpListener::get_Realm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "get_Realm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListener::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListener::Close(bool force)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, force);
}
 void System::Net::HttpListener::Cleanup(bool close_existing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, close_existing);
}
 System::IAsyncResult System::Net::HttpListener::BeginGetContext(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "BeginGetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 System::Net::HttpListenerContext System::Net::HttpListener::EndGetContext(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "EndGetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpListenerContext, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::Net::AuthenticationSchemes System::Net::HttpListener::SelectAuthenticationScheme(System::Net::HttpListenerContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "SelectAuthenticationScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::AuthenticationSchemes, false>(const_cast<void*>(instance), ___internal_method, context);
}
 System::Net::HttpListenerContext System::Net::HttpListener::GetContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "GetContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpListenerContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListener::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListener::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListener::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListener::CheckDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "CheckDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::HttpListenerContext System::Net::HttpListener::GetContextFromQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "GetContextFromQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpListenerContext, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::HttpListener::RegisterContext(System::Net::HttpListenerContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "RegisterContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void System::Net::HttpListener::UnregisterContext(System::Net::HttpListenerContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "UnregisterContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void System::Net::HttpListener::AddConnection(System::Net::HttpConnection cnc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "AddConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cnc);
}
 void System::Net::HttpListener::RemoveConnection(System::Net::HttpConnection cnc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::HttpListener>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cnc);
}
