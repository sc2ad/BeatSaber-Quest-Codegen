#pragma once
#include "System/Net/zzzz__EndPointListener_def.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__ListenerPrefix_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: System::Net::EndPointListener._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Net::HttpListener, System::Net::IPAddress, int32_t, bool)>(&System::Net::EndPointListener::_ctor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x282e0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.get_Listener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListener (System::Net::EndPointListener::*)()>(&System::Net::EndPointListener::get_Listener)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x282e884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "get_Listener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.Accept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::Socket, System::Net::Sockets::SocketAsyncEventArgs, ByRef<System::Net::Sockets::Socket>)>(&System::Net::EndPointListener::Accept)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x282e73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::Socket>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.ProcessAccept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::EndPointListener::ProcessAccept)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x282e88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "ProcessAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.OnAccept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, System::Net::Sockets::SocketAsyncEventArgs)>(&System::Net::EndPointListener::OnAccept)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x282eee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "OnAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.RemoveConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Net::HttpConnection)>(&System::Net::EndPointListener::RemoveConnection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x282eee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.BindContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::EndPointListener::*)(System::Net::HttpListenerContext)>(&System::Net::EndPointListener::BindContext)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x282efe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "BindContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.UnbindContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Net::HttpListenerContext)>(&System::Net::EndPointListener::UnbindContext)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x282f68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "UnbindContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.SearchListener
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListener (System::Net::EndPointListener::*)(System::Uri, ByRef<System::Net::ListenerPrefix>)>(&System::Net::EndPointListener::SearchListener)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x282f03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "SearchListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::ListenerPrefix>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.MatchFromList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpListener (System::Net::EndPointListener::*)(::StringW, ::StringW, System::Collections::ArrayList, ByRef<System::Net::ListenerPrefix>)>(&System::Net::EndPointListener::MatchFromList)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x282f880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "MatchFromList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ArrayList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::ListenerPrefix>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.AddSpecial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Collections::ArrayList, System::Net::ListenerPrefix)>(&System::Net::EndPointListener::AddSpecial)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x282fbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "AddSpecial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ArrayList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ListenerPrefix>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.RemoveSpecial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::EndPointListener::*)(System::Collections::ArrayList, System::Net::ListenerPrefix)>(&System::Net::EndPointListener::RemoveSpecial)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x282ff18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "RemoveSpecial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ArrayList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ListenerPrefix>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.CheckIfRemove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)()>(&System::Net::EndPointListener::CheckIfRemove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2830008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "CheckIfRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)()>(&System::Net::EndPointListener::Close)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2830334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.AddPrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Net::ListenerPrefix, System::Net::HttpListener)>(&System::Net::EndPointListener::AddPrefix)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x2830854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "AddPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ListenerPrefix>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListener>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::EndPointListener.RemovePrefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndPointListener::*)(System::Net::ListenerPrefix, System::Net::HttpListener)>(&System::Net::EndPointListener::RemovePrefix)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2830bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "RemovePrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ListenerPrefix>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListener>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::EndPointListener::__set_listener(System::Net::HttpListener value)  {
::cordl_internals::setInstanceField<System::Net::HttpListener, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpListener>(value));
}
constexpr System::Net::HttpListener System::Net::EndPointListener::__get_listener() const {
return ::cordl_internals::getInstanceField<System::Net::HttpListener, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::EndPointListener::__set_endpoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint System::Net::EndPointListener::__get_endpoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::EndPointListener::__set_sock(System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::Socket, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::Socket>(value));
}
constexpr System::Net::Sockets::Socket System::Net::EndPointListener::__get_sock() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::Socket, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::EndPointListener::__set_prefixes(System::Collections::Hashtable value)  {
::cordl_internals::setInstanceField<System::Collections::Hashtable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Hashtable>(value));
}
constexpr System::Collections::Hashtable System::Net::EndPointListener::__get_prefixes() const {
return ::cordl_internals::getInstanceField<System::Collections::Hashtable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::EndPointListener::__set_unhandled(System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<System::Collections::ArrayList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ArrayList>(value));
}
constexpr System::Collections::ArrayList System::Net::EndPointListener::__get_unhandled() const {
return ::cordl_internals::getInstanceField<System::Collections::ArrayList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::EndPointListener::__set_all(System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<System::Collections::ArrayList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ArrayList>(value));
}
constexpr System::Collections::ArrayList System::Net::EndPointListener::__get_all() const {
return ::cordl_internals::getInstanceField<System::Collections::ArrayList, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::EndPointListener::__set_cert(System::Security::Cryptography::X509Certificates::X509Certificate value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate System::Net::EndPointListener::__get_cert() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::EndPointListener::__set_secure(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::EndPointListener::__get_secure() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::EndPointListener::__set_unregistered(System::Collections::Generic::Dictionary_2<System::Net::HttpConnection,System::Net::HttpConnection> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<System::Net::HttpConnection,System::Net::HttpConnection>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<System::Net::HttpConnection,System::Net::HttpConnection>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<System::Net::HttpConnection,System::Net::HttpConnection> System::Net::EndPointListener::__get_unregistered() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<System::Net::HttpConnection,System::Net::HttpConnection>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::EndPointListener System::Net::EndPointListener::New_ctor(System::Net::HttpListener listener, System::Net::IPAddress addr, int32_t port, bool secure)  {
System::Net::EndPointListener o{THROW_UNLESS(::il2cpp_utils::New<System::Net::EndPointListener>(listener, addr, port, secure))};
return o;
}
 void System::Net::EndPointListener::_ctor(System::Net::HttpListener listener, System::Net::IPAddress addr, int32_t port, bool secure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListener>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, listener, addr, port, secure);
}
 System::Net::HttpListener System::Net::EndPointListener::get_Listener()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "get_Listener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpListener, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::EndPointListener::Accept(System::Net::Sockets::Socket socket, System::Net::Sockets::SocketAsyncEventArgs e, ByRef<System::Net::Sockets::Socket> accepted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Sockets::Socket>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, e, accepted);
}
 void System::Net::EndPointListener::ProcessAccept(System::Net::Sockets::SocketAsyncEventArgs args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "ProcessAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, args);
}
 void System::Net::EndPointListener::OnAccept(::bs_hook::Il2CppWrapperType sender, System::Net::Sockets::SocketAsyncEventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "OnAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, e);
}
 void System::Net::EndPointListener::RemoveConnection(System::Net::HttpConnection conn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "RemoveConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, conn);
}
 bool System::Net::EndPointListener::BindContext(System::Net::HttpListenerContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "BindContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void System::Net::EndPointListener::UnbindContext(System::Net::HttpListenerContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "UnbindContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListenerContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 System::Net::HttpListener System::Net::EndPointListener::SearchListener(System::Uri uri, ByRef<System::Net::ListenerPrefix> prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "SearchListener",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::ListenerPrefix>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpListener, false>(const_cast<void*>(instance), ___internal_method, uri, prefix);
}
 System::Net::HttpListener System::Net::EndPointListener::MatchFromList(::StringW host, ::StringW path, System::Collections::ArrayList list, ByRef<System::Net::ListenerPrefix> prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "MatchFromList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ArrayList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::ListenerPrefix>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpListener, false>(const_cast<void*>(instance), ___internal_method, host, path, list, prefix);
}
 void System::Net::EndPointListener::AddSpecial(System::Collections::ArrayList coll, System::Net::ListenerPrefix prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "AddSpecial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ArrayList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ListenerPrefix>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, coll, prefix);
}
 bool System::Net::EndPointListener::RemoveSpecial(System::Collections::ArrayList coll, System::Net::ListenerPrefix prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "RemoveSpecial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ArrayList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ListenerPrefix>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, coll, prefix);
}
 void System::Net::EndPointListener::CheckIfRemove()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "CheckIfRemove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::EndPointListener::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::EndPointListener::AddPrefix(System::Net::ListenerPrefix prefix, System::Net::HttpListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "AddPrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ListenerPrefix>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, listener);
}
 void System::Net::EndPointListener::RemovePrefix(System::Net::ListenerPrefix prefix, System::Net::HttpListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::EndPointListener>::get(),
                            "RemovePrefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::ListenerPrefix>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefix, listener);
}
