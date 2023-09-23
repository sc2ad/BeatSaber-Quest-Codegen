#pragma once
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
//  Writing Method size for method: System::Net::Sockets::TcpClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2769d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(System::Net::Sockets::AddressFamily)>(&System::Net::Sockets::TcpClient::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2769d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(System::Net::Sockets::Socket)>(&System::Net::Sockets::TcpClient::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2769eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.get_Client
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::Socket (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::get_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2769ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "get_Client",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.set_Client
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(System::Net::Sockets::Socket)>(&System::Net::Sockets::TcpClient::set_Client)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2769efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "set_Client",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.get_Connected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::get_Connected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2769f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "get_Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(::StringW, int32_t)>(&System::Net::Sockets::TcpClient::Connect)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x2769f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.Connect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(System::Net::IPEndPoint)>(&System::Net::Sockets::TcpClient::Connect)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x276a5f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.BeginConnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (System::Net::Sockets::TcpClient::*)(::StringW, int32_t, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&System::Net::Sockets::TcpClient::BeginConnect)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x276a6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "BeginConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.EndConnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(System::IAsyncResult)>(&System::Net::Sockets::TcpClient::EndConnect)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x276a768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "EndConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.ConnectAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (System::Net::Sockets::TcpClient::*)(::StringW, int32_t)>(&System::Net::Sockets::TcpClient::ConnectAsync)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x276a7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "ConnectAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.GetStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Sockets::NetworkStream (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::GetStream)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x276a91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "GetStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::Close)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x276aa68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)(bool)>(&System::Net::Sockets::TcpClient::Dispose)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x276ab0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Sockets::TcpClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x276aca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x276acb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Sockets::TcpClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Sockets::TcpClient.initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::TcpClient::*)()>(&System::Net::Sockets::TcpClient::initialize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2769e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Net::Sockets::TcpClient::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::TcpClient::__set_m_ClientSocket(System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::Socket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::Socket>(value));
}
constexpr System::Net::Sockets::Socket System::Net::Sockets::TcpClient::__get_m_ClientSocket() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::Socket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::TcpClient::__set_m_Active(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::TcpClient::__get_m_Active() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::TcpClient::__set_m_DataStream(System::Net::Sockets::NetworkStream value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::NetworkStream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::NetworkStream>(value));
}
constexpr System::Net::Sockets::NetworkStream System::Net::Sockets::TcpClient::__get_m_DataStream() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::NetworkStream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::TcpClient::__set_m_Family(System::Net::Sockets::AddressFamily value)  {
::cordl_internals::setInstanceField<System::Net::Sockets::AddressFamily, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Sockets::AddressFamily>(value));
}
constexpr System::Net::Sockets::AddressFamily System::Net::Sockets::TcpClient::__get_m_Family() const {
return ::cordl_internals::getInstanceField<System::Net::Sockets::AddressFamily, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Sockets::TcpClient::__set_m_CleanedUp(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Sockets::TcpClient::__get_m_CleanedUp() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Net::Sockets::TcpClient::TcpClient()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TcpClient>())) {}
 void System::Net::Sockets::TcpClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "family", ty: "System::Net::Sockets::AddressFamily", modifiers: "", def_value: None }]
 System::Net::Sockets::TcpClient::TcpClient(System::Net::Sockets::AddressFamily family)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TcpClient>(family))) {}
 void System::Net::Sockets::TcpClient::_ctor(System::Net::Sockets::AddressFamily family)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::AddressFamily>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, family);
}
// Ctor Parameters [CppParam { name: "acceptedSocket", ty: "System::Net::Sockets::Socket", modifiers: "", def_value: None }]
 System::Net::Sockets::TcpClient::TcpClient(System::Net::Sockets::Socket acceptedSocket)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TcpClient>(acceptedSocket))) {}
 void System::Net::Sockets::TcpClient::_ctor(System::Net::Sockets::Socket acceptedSocket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, acceptedSocket);
}
 System::Net::Sockets::Socket System::Net::Sockets::TcpClient::get_Client()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "get_Client",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::Socket, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::TcpClient::set_Client(System::Net::Sockets::Socket value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "set_Client",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Sockets::Socket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool System::Net::Sockets::TcpClient::get_Connected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "get_Connected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::TcpClient::Connect(::StringW hostname, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hostname, port);
}
 void System::Net::Sockets::TcpClient::Connect(System::Net::IPEndPoint remoteEP)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Connect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEP);
}
 System::IAsyncResult System::Net::Sockets::TcpClient::BeginConnect(::StringW host, int32_t port, System::AsyncCallback requestCallback, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "BeginConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, host, port, requestCallback, state);
}
 void System::Net::Sockets::TcpClient::EndConnect(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "EndConnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncResult);
}
 System::Threading::Tasks::Task System::Net::Sockets::TcpClient::ConnectAsync(::StringW host, int32_t port)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "ConnectAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, host, port);
}
 System::Net::Sockets::NetworkStream System::Net::Sockets::TcpClient::GetStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "GetStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Sockets::NetworkStream, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::TcpClient::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::TcpClient::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void System::Net::Sockets::TcpClient::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::TcpClient::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Sockets::TcpClient::initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Sockets::TcpClient>::get(),
                            "initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
