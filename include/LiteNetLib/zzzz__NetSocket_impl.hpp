#pragma once
namespace {
#include "LiteNetLib/zzzz__NetSocket_def.hpp"
#include "LiteNetLib/zzzz__INetSocketListener_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetSocket.get_LocalPort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::get_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209173c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "get_LocalPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.set_LocalPort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(int32_t)>(&::LiteNetLib::NetSocket::set_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2091744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "set_LocalPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.get_Ttl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::get_Ttl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x209174c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "get_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.set_Ttl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(int16_t)>(&::LiteNetLib::NetSocket::set_Ttl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2088140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "set_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(::LiteNetLib::INetSocketListener)>(&::LiteNetLib::NetSocket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2089a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INetSocketListener>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.IsActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::IsActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2091830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.ReceiveLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(::bs_hook::Il2CppWrapperType)>(&::LiteNetLib::NetSocket::ReceiveLogic)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x2091848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "ReceiveLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.Bind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)(::System::Net::IPAddress, ::System::Net::IPAddress, int32_t, bool, bool, ::System::Threading::ThreadPriority)>(&::LiteNetLib::NetSocket::Bind)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x208d6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPriority>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.BindSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)(::System::Net::Sockets::Socket, ::System::Net::IPEndPoint, bool)>(&::LiteNetLib::NetSocket::BindSocket)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x2091dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "BindSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.SendBroadcast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&::LiteNetLib::NetSocket::SendBroadcast)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x208e070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "SendBroadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.SendTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetSocket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::IPEndPoint, ByRef<::System::Net::Sockets::SocketError>)>(&::LiteNetLib::NetSocket::SendTo)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x208815c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "SendTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(bool)>(&::LiteNetLib::NetSocket::Close)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x208ef08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::LiteNetLib::NetSocket::__set__udpSocketv4(::System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::Socket>(value));
}
constexpr ::System::Net::Sockets::Socket ::LiteNetLib::NetSocket::__get__udpSocketv4() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetSocket::__set__udpSocketv6(::System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::Socket>(value));
}
constexpr ::System::Net::Sockets::Socket ::LiteNetLib::NetSocket::__get__udpSocketv6() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetSocket::__set__threadv4(::System::Threading::Thread value)  {
::cordl_internals::setInstanceField<::System::Threading::Thread, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Thread>(value));
}
constexpr ::System::Threading::Thread ::LiteNetLib::NetSocket::__get__threadv4() const {
return ::cordl_internals::getInstanceField<::System::Threading::Thread, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetSocket::__set__threadv6(::System::Threading::Thread value)  {
::cordl_internals::setInstanceField<::System::Threading::Thread, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::Thread>(value));
}
constexpr ::System::Threading::Thread ::LiteNetLib::NetSocket::__get__threadv6() const {
return ::cordl_internals::getInstanceField<::System::Threading::Thread, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetSocket::__set__listener(::LiteNetLib::INetSocketListener value)  {
::cordl_internals::setInstanceField<::LiteNetLib::INetSocketListener, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::INetSocketListener>(value));
}
constexpr ::LiteNetLib::INetSocketListener ::LiteNetLib::NetSocket::__get__listener() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::INetSocketListener, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::LiteNetLib::NetSocket::__set_MulticastAddressV6(::System::Net::IPAddress value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress, "MulticastAddressV6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get>(std::forward<::System::Net::IPAddress>(value));
}
 ::System::Net::IPAddress ::LiteNetLib::NetSocket::__get_MulticastAddressV6()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress, "MulticastAddressV6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get>();
}
 void ::LiteNetLib::NetSocket::__set_IPv6Support(bool value)  {
::cordl_internals::setStaticField<bool, "IPv6Support", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get>(std::forward<bool>(value));
}
 bool ::LiteNetLib::NetSocket::__get_IPv6Support()  {
return ::cordl_internals::getStaticField<bool, "IPv6Support", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get>();
}
constexpr void ::LiteNetLib::NetSocket::__set__LocalPort_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::NetSocket::__get__LocalPort_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetSocket::__set_IsRunning(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::LiteNetLib::NetSocket::__get_IsRunning() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::LiteNetLib::NetSocket::get_LocalPort()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "get_LocalPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::LiteNetLib::NetSocket::set_LocalPort(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "set_LocalPort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int16_t ::LiteNetLib::NetSocket::get_Ttl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "get_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::LiteNetLib::NetSocket::set_Ttl(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "set_Ttl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "listener", ty: "::LiteNetLib::INetSocketListener", modifiers: "", def_value: None }]
 ::LiteNetLib::NetSocket::NetSocket(::LiteNetLib::INetSocketListener listener)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NetSocket>(listener))) {}
 void ::LiteNetLib::NetSocket::_ctor(::LiteNetLib::INetSocketListener listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INetSocketListener>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, listener);
}
 bool ::LiteNetLib::NetSocket::IsActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::LiteNetLib::NetSocket::ReceiveLogic(::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "ReceiveLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
/// @param priority: ::System::Threading::ThreadPriority (default: 2)
 bool ::LiteNetLib::NetSocket::Bind(::System::Net::IPAddress addressIPv4, ::System::Net::IPAddress addressIPv6, int32_t port, bool reuseAddress, bool ipv6, ::System::Threading::ThreadPriority priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "Bind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPriority>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, addressIPv4, addressIPv6, port, reuseAddress, ipv6, priority);
}
 bool ::LiteNetLib::NetSocket::BindSocket(::System::Net::Sockets::Socket socket, ::System::Net::IPEndPoint ep, bool reuseAddress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "BindSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, socket, ep, reuseAddress);
}
 bool ::LiteNetLib::NetSocket::SendBroadcast(::ArrayW<uint8_t> data, int32_t offset, int32_t size, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "SendBroadcast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, data, offset, size, port);
}
 int32_t ::LiteNetLib::NetSocket::SendTo(::ArrayW<uint8_t> data, int32_t offset, int32_t size, ::System::Net::IPEndPoint remoteEndPoint, ByRef<::System::Net::Sockets::SocketError> errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "SendTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, data, offset, size, remoteEndPoint, errorCode);
}
 void ::LiteNetLib::NetSocket::Close(bool suspend)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, suspend);
}
} // end anonymous namespace
