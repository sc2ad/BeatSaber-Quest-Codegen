#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
namespace {
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/Net/Sockets/zzzz__TransmitFileOptions_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__IPPacketInformation_def.hpp"
#include "System/Net/Sockets/zzzz__SendPacketsElement_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_AcceptSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276bdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_AcceptSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_AcceptSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::Socket)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276bdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_AcceptSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_BytesTransferred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_BytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_BytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_BytesTransferred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(int32_t)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_BytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_LastOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncOperation)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_LastOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_RemoteEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::EndPoint)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_RemoteEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_RemoteEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_SendPacketsSendSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(int32_t)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_SendPacketsSendSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_SocketError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketError (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_SocketError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_SocketError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_SocketError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_SocketError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_SocketError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_SocketFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_SocketFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_SocketFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_UserToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_UserToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_UserToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_UserToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::bs_hook::Il2CppWrapperType)>(&::System::Net::Sockets::SocketAsyncEventArgs::set_UserToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276be4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_UserToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.add_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs>)>(&::System::Net::Sockets::SocketAsyncEventArgs::add_Completed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x276be54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.remove_Completed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs>)>(&::System::Net::Sockets::SocketAsyncEventArgs::remove_Completed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x276bf04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x276bfb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(bool)>(&::System::Net::Sockets::SocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x276c054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::Finalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x276c0e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Sockets::SocketAsyncEventArgs),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(bool)>(&::System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x276c0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x276c104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetBytesTransferred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(int32_t)>(&::System::Net::Sockets::SocketAsyncEventArgs::SetBytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2768ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "SetBytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_CurrentSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_CurrentSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276c168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_CurrentSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetCurrentSocket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::Socket)>(&::System::Net::Sockets::SocketAsyncEventArgs::SetCurrentSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276c170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "SetCurrentSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetLastOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncOperation)>(&::System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x276c178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "SetLastOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Complete_internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::Complete_internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x276c240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "Complete_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncEventArgs)>(&::System::Net::Sockets::SocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x276c268;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Sockets::SocketAsyncEventArgs),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_MemoryBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Memory_1<uint8_t> (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_MemoryBuffer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x276c290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_MemoryBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_Offset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276c29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_Offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276c2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_BufferList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_BufferList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x276c2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_BufferList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Memory_1<uint8_t>)>(&::System::Net::Sockets::SocketAsyncEventArgs::SetBuffer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x276c2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "SetBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Net::Sockets::SocketAsyncEventArgs::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::Sockets::SocketAsyncEventArgs::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set_in_progress(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::SocketAsyncEventArgs::__get_in_progress() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set_remote_ep(::System::Net::EndPoint value)  {
::cordl_internals::setInstanceField<::System::Net::EndPoint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::EndPoint>(value));
}
constexpr ::System::Net::EndPoint ::System::Net::Sockets::SocketAsyncEventArgs::__get_remote_ep() const {
return ::cordl_internals::getInstanceField<::System::Net::EndPoint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set_current_socket(::System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::Socket>(value));
}
constexpr ::System::Net::Sockets::Socket ::System::Net::Sockets::SocketAsyncEventArgs::__get_current_socket() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set_socket_async_result(::System::Net::Sockets::SocketAsyncResult value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketAsyncResult, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::SocketAsyncResult>(value));
}
constexpr ::System::Net::Sockets::SocketAsyncResult ::System::Net::Sockets::SocketAsyncEventArgs::__get_socket_async_result() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketAsyncResult, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__ConnectByNameError_k__BackingField(::System::Exception value)  {
::cordl_internals::setInstanceField<::System::Exception, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Exception>(value));
}
constexpr ::System::Exception ::System::Net::Sockets::SocketAsyncEventArgs::__get__ConnectByNameError_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Exception, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__AcceptSocket_k__BackingField(::System::Net::Sockets::Socket value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::Socket, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::Socket>(value));
}
constexpr ::System::Net::Sockets::Socket ::System::Net::Sockets::SocketAsyncEventArgs::__get__AcceptSocket_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::Socket, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__BytesTransferred_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::SocketAsyncEventArgs::__get__BytesTransferred_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__DisconnectReuseSocket_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::Sockets::SocketAsyncEventArgs::__get__DisconnectReuseSocket_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__LastOperation_k__BackingField(::System::Net::Sockets::SocketAsyncOperation value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketAsyncOperation, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::SocketAsyncOperation>(value));
}
constexpr ::System::Net::Sockets::SocketAsyncOperation ::System::Net::Sockets::SocketAsyncEventArgs::__get__LastOperation_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketAsyncOperation, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__ReceiveMessageFromPacketInfo_k__BackingField(::System::Net::Sockets::IPPacketInformation value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::IPPacketInformation, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::IPPacketInformation>(value));
}
constexpr ::System::Net::Sockets::IPPacketInformation ::System::Net::Sockets::SocketAsyncEventArgs::__get__ReceiveMessageFromPacketInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::IPPacketInformation, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__SendPacketsElements_k__BackingField(::ArrayW<::System::Net::Sockets::SendPacketsElement> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Net::Sockets::SendPacketsElement>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Net::Sockets::SendPacketsElement>>(value));
}
constexpr ::ArrayW<::System::Net::Sockets::SendPacketsElement> ::System::Net::Sockets::SocketAsyncEventArgs::__get__SendPacketsElements_k__BackingField() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Net::Sockets::SendPacketsElement>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__SendPacketsFlags_k__BackingField(::System::Net::Sockets::TransmitFileOptions value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::TransmitFileOptions, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::TransmitFileOptions>(value));
}
constexpr ::System::Net::Sockets::TransmitFileOptions ::System::Net::Sockets::SocketAsyncEventArgs::__get__SendPacketsFlags_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::TransmitFileOptions, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__SendPacketsSendSize_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::SocketAsyncEventArgs::__get__SendPacketsSendSize_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__SocketError_k__BackingField(::System::Net::Sockets::SocketError value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketError, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::SocketError>(value));
}
constexpr ::System::Net::Sockets::SocketError ::System::Net::Sockets::SocketAsyncEventArgs::__get__SocketError_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketError, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__SocketFlags_k__BackingField(::System::Net::Sockets::SocketFlags value)  {
::cordl_internals::setInstanceField<::System::Net::Sockets::SocketFlags, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Sockets::SocketFlags>(value));
}
constexpr ::System::Net::Sockets::SocketFlags ::System::Net::Sockets::SocketAsyncEventArgs::__get__SocketFlags_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Sockets::SocketFlags, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__UserToken_k__BackingField(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::Net::Sockets::SocketAsyncEventArgs::__get__UserToken_k__BackingField() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> value)  {
::cordl_internals::setInstanceField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs>>(value));
}
constexpr ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> ::System::Net::Sockets::SocketAsyncEventArgs::__get_Completed() const {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__buffer(::System::Memory_1<uint8_t> value)  {
::cordl_internals::setInstanceField<::System::Memory_1<uint8_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Memory_1<uint8_t>>(value));
}
constexpr ::System::Memory_1<uint8_t> ::System::Net::Sockets::SocketAsyncEventArgs::__get__buffer() const {
return ::cordl_internals::getInstanceField<::System::Memory_1<uint8_t>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__offset(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::SocketAsyncEventArgs::__get__offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::SocketAsyncEventArgs::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__bufferIsExplicitArray(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::Sockets::SocketAsyncEventArgs::__get__bufferIsExplicitArray() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__bufferList(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>>(value));
}
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> ::System::Net::Sockets::SocketAsyncEventArgs::__get__bufferList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Sockets::SocketAsyncEventArgs::__set__bufferListInternal(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>> ::System::Net::Sockets::SocketAsyncEventArgs::__get__bufferListInternal() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Net::Sockets::Socket ::System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_AcceptSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket(::System::Net::Sockets::Socket value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_AcceptSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::System::Net::Sockets::SocketAsyncEventArgs::get_BytesTransferred()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_BytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_BytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation(::System::Net::Sockets::SocketAsyncOperation value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_LastOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::set_RemoteEndPoint(::System::Net::EndPoint value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_RemoteEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_SendPacketsSendSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::Sockets::SocketError ::System::Net::Sockets::SocketAsyncEventArgs::get_SocketError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_SocketError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketError, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::set_SocketError(::System::Net::Sockets::SocketError value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_SocketError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::set_SocketFlags(::System::Net::Sockets::SocketFlags value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_SocketFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::bs_hook::Il2CppWrapperType ::System::Net::Sockets::SocketAsyncEventArgs::get_UserToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_UserToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::set_UserToken(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "set_UserToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::add_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "add_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::remove_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "remove_Completed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::System::Net::Sockets::SocketAsyncEventArgs::SocketAsyncEventArgs()  : ::System::EventArgs(THROW_UNLESS(::il2cpp_utils::New<SocketAsyncEventArgs>())) {}
 void ::System::Net::Sockets::SocketAsyncEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "flowExecutionContext", ty: "bool", modifiers: "", def_value: None }]
 ::System::Net::Sockets::SocketAsyncEventArgs::SocketAsyncEventArgs(bool flowExecutionContext)  : ::System::EventArgs(THROW_UNLESS(::il2cpp_utils::New<SocketAsyncEventArgs>(flowExecutionContext))) {}
 void ::System::Net::Sockets::SocketAsyncEventArgs::_ctor(bool flowExecutionContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flowExecutionContext);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::SetBytesTransferred(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "SetBytesTransferred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::Sockets::Socket ::System::Net::Sockets::SocketAsyncEventArgs::get_CurrentSocket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_CurrentSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::SetCurrentSocket(::System::Net::Sockets::Socket socket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "SetCurrentSocket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, socket);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation(::System::Net::Sockets::SocketAsyncOperation op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "SetLastOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::Complete_internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "Complete_internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
 ::System::Memory_1<uint8_t> ::System::Net::Sockets::SocketAsyncEventArgs::get_MemoryBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_MemoryBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Memory_1<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Net::Sockets::SocketAsyncEventArgs::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_Offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::Net::Sockets::SocketAsyncEventArgs::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>> ::System::Net::Sockets::SocketAsyncEventArgs::get_BufferList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "get_BufferList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Sockets::SocketAsyncEventArgs::SetBuffer(::System::Memory_1<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs>::get(),
                            "SetBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer);
}
} // end anonymous namespace
