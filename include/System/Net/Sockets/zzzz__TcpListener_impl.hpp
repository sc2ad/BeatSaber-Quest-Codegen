#pragma once
namespace {
#include "System/Net/Sockets/zzzz__TcpListener_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::TcpListener._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)(::System::Net::IPAddress, int32_t)>(&::System::Net::Sockets::TcpListener::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x276ad50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.get_LocalEndpoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPoint (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::get_LocalEndpoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x276aef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "get_LocalEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276af20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)(int32_t)>(&::System::Net::Sockets::TcpListener::Start)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x276af28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::TcpListener::*)()>(&::System::Net::Sockets::TcpListener::Stop)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x276b0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.BeginAcceptTcpClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::System::Net::Sockets::TcpListener::*)(::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::System::Net::Sockets::TcpListener::BeginAcceptTcpClient)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x276b178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "BeginAcceptTcpClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::TcpListener.EndAcceptTcpClient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::TcpClient (::System::Net::Sockets::TcpListener::*)(::System::IAsyncResult)>(&::System::Net::Sockets::TcpListener::EndAcceptTcpClient)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x276b22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "EndAcceptTcpClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::Sockets::TcpListener::__set_m_ServerSocketEP(::System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<::System::Net::IPEndPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::IPEndPoint>(value));
}
constexpr ::System::Net::IPEndPoint ::System::Net::Sockets::TcpListener::__get_m_ServerSocketEP() const {
return ::cordl_internals::getInstanceField<::System::Net::IPEndPoint, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::TcpListener::__set_m_ServerSocket(::System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::Socket>(value));
}
constexpr ::System::Net::Sockets::Socket ::System::Net::Sockets::TcpListener::__get_m_ServerSocket() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::TcpListener::__set_m_Active(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::Sockets::TcpListener::__get_m_Active() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::TcpListener::__set_m_ExclusiveAddressUse(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::Sockets::TcpListener::__get_m_ExclusiveAddressUse() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "localaddr", ty: "::System::Net::IPAddress", modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Net::Sockets::TcpListener::TcpListener(::System::Net::IPAddress localaddr, int32_t port)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TcpListener>(localaddr, port))) {}
 void ::System::Net::Sockets::TcpListener::_ctor(::System::Net::IPAddress localaddr, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, localaddr, port);
}
 ::System::Net::EndPoint ::System::Net::Sockets::TcpListener::get_LocalEndpoint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "get_LocalEndpoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::TcpListener::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::TcpListener::Start(int32_t backlog)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, backlog);
}
 void ::System::Net::Sockets::TcpListener::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::IAsyncResult ::System::Net::Sockets::TcpListener::BeginAcceptTcpClient(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "BeginAcceptTcpClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, callback, state);
}
 ::System::Net::Sockets::TcpClient ::System::Net::Sockets::TcpListener::EndAcceptTcpClient(::System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::TcpListener>::get(),
                            "EndAcceptTcpClient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::TcpClient, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
} // end anonymous namespace
