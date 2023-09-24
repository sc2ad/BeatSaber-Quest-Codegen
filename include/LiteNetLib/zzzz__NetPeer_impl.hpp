#pragma once
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetStatistics_def.hpp"
#include "LiteNetLib/zzzz__NetConnectRequestPacket_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "LiteNetLib/zzzz__DisconnectResult_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "LiteNetLib/zzzz__ConnectRequestResult_def.hpp"
#include "LiteNetLib/zzzz__ShutdownResult_def.hpp"
#include "LiteNetLib/zzzz__ConnectionState_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetConnectAcceptPacket_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__NetPacketPool_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: LiteNetLib::LiteNetLib__NetPeer__IncomingFragments._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::*)()>(&LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2090dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NetPeer__IncomingFragments>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::__set_Fragments(::ArrayW<LiteNetLib::NetPacket> value)  {
::cordl_internals::setInstanceField<::ArrayW<LiteNetLib::NetPacket>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<LiteNetLib::NetPacket>>(value));
}
constexpr ::ArrayW<LiteNetLib::NetPacket> LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::__get_Fragments() const {
return ::cordl_internals::getInstanceField<::ArrayW<LiteNetLib::NetPacket>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::__set_ReceivedCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::__get_ReceivedCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::__set_TotalSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::__get_TotalSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::__set_ChannelId(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::__get_ChannelId() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::LiteNetLib__NetPeer__IncomingFragments LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::New_ctor()  {
LiteNetLib::LiteNetLib__NetPeer__IncomingFragments o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::LiteNetLib__NetPeer__IncomingFragments>())};
return o;
}
 void LiteNetLib::LiteNetLib__NetPeer__IncomingFragments::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::LiteNetLib__NetPeer__IncomingFragments>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: LiteNetLib::NetPeer.get_ConnectionNum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::get_ConnectionNum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208fb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_ConnectionNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.set_ConnectionNum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(uint8_t)>(&LiteNetLib::NetPeer::set_ConnectionNum)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x208fb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "set_ConnectionNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.get_ConnectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::ConnectionState (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::get_ConnectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208fb9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_ConnectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.get_ConnectTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::get_ConnectTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208fba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_ConnectTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.get_Ping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::get_Ping)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x208fbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_Ping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.get_Mtu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::get_Mtu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208fbc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_Mtu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.get_RemoteTimeDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::get_RemoteTimeDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208fbc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_RemoteTimeDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.get_RemoteUtcTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::get_RemoteUtcTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x208fbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_RemoteUtcTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.get_TimeSinceLastPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::get_TimeSinceLastPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208fc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_TimeSinceLastPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.get_ResendDelay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::get_ResendDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208fc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_ResendDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::NetManager, System::Net::IPEndPoint, int32_t)>(&LiteNetLib::NetPeer::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x208bb2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.SetMtu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(int32_t)>(&LiteNetLib::NetPeer::SetMtu)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x208fc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SetMtu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.GetPacketsCountInReliableQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (LiteNetLib::NetPeer::*)(uint8_t, bool)>(&LiteNetLib::NetPeer::GetPacketsCountInReliableQueue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x208fd1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "GetPacketsCountInReliableQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.CreateChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::BaseChannel (LiteNetLib::NetPeer::*)(uint8_t)>(&LiteNetLib::NetPeer::CreateChannel)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x208fdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "CreateChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::NetManager, System::Net::IPEndPoint, int32_t, uint8_t, LiteNetLib::Utils::NetDataWriter)>(&LiteNetLib::NetPeer::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x208eb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::NetManager, System::Net::IPEndPoint, int32_t, int64_t, uint8_t)>(&LiteNetLib::NetPeer::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x208be68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Reject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&LiteNetLib::NetPeer::Reject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x208be4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.ProcessConnectAccept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::NetPeer::*)(LiteNetLib::NetConnectAcceptPacket)>(&LiteNetLib::NetPeer::ProcessConnectAccept)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x208c8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessConnectAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetConnectAcceptPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.GetMaxSinglePacketSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (LiteNetLib::NetPeer::*)(LiteNetLib::DeliveryMethod)>(&LiteNetLib::NetPeer::GetMaxSinglePacketSize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2090170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "GetMaxSinglePacketSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.SendWithDeliveryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, uint8_t, LiteNetLib::DeliveryMethod, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::NetPeer::SendWithDeliveryEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x20901e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendWithDeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.SendWithDeliveryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, uint8_t, LiteNetLib::DeliveryMethod, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::NetPeer::SendWithDeliveryEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2090720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendWithDeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.SendWithDeliveryEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::Utils::NetDataWriter, uint8_t, LiteNetLib::DeliveryMethod, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::NetPeer::SendWithDeliveryEvent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2090784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendWithDeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, LiteNetLib::DeliveryMethod)>(&LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2090810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::Utils::NetDataWriter, LiteNetLib::DeliveryMethod)>(&LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2090838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, LiteNetLib::DeliveryMethod)>(&LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2090868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, uint8_t, LiteNetLib::DeliveryMethod)>(&LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2090878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::Utils::NetDataWriter, uint8_t, LiteNetLib::DeliveryMethod)>(&LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x20908a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, uint8_t, LiteNetLib::DeliveryMethod)>(&LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x208d2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.SendInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, uint8_t, LiteNetLib::DeliveryMethod, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::NetPeer::SendInternal)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x2090268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>)>(&LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20908d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::Utils::NetDataWriter)>(&LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x20908f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2090918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2090960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.ProcessDisconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::DisconnectResult (LiteNetLib::NetPeer::*)(LiteNetLib::NetPacket)>(&LiteNetLib::NetPeer::ProcessDisconnect)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x208c70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Shutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::ShutdownResult (LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&LiteNetLib::NetPeer::Shutdown)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x208a424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Shutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.UpdateRoundTripTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(int32_t)>(&LiteNetLib::NetPeer::UpdateRoundTripTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20909a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "UpdateRoundTripTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.AddReliablePacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::DeliveryMethod, LiteNetLib::NetPacket)>(&LiteNetLib::NetPeer::AddReliablePacket)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x20909e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "AddReliablePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.ProcessMtuPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::NetPacket)>(&LiteNetLib::NetPeer::ProcessMtuPacket)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x2090dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessMtuPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.UpdateMtuLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(int32_t)>(&LiteNetLib::NetPeer::UpdateMtuLogic)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x20911b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "UpdateMtuLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.ProcessConnectRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::ConnectRequestResult (LiteNetLib::NetPeer::*)(LiteNetLib::NetConnectRequestPacket)>(&LiteNetLib::NetPeer::ProcessConnectRequest)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x208c1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessConnectRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetConnectRequestPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.ProcessPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::NetPacket)>(&LiteNetLib::NetPeer::ProcessPacket)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x208c940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.SendMerged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::SendMerged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2091420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendMerged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.SendUserData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::NetPacket)>(&LiteNetLib::NetPeer::SendUserData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x20914c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendUserData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)()>(&LiteNetLib::NetPeer::Flush)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x208e3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(int32_t)>(&LiteNetLib::NetPeer::Update)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x208ae54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetPeer.RecycleAndDeliver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetPeer::*)(LiteNetLib::NetPacket)>(&LiteNetLib::NetPeer::RecycleAndDeliver)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x20915dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "RecycleAndDeliver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::NetPeer::__set__rtt(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__rtt() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__avgRtt(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__avgRtt() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__rttCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__rttCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__resendDelay(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t LiteNetLib::NetPeer::__get__resendDelay() const {
return ::cordl_internals::getInstanceField<double_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__pingSendTimer(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__pingSendTimer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__rttResetTimer(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__rttResetTimer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__pingTimer(System::Diagnostics::Stopwatch value)  {
::cordl_internals::setInstanceField<System::Diagnostics::Stopwatch, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Diagnostics::Stopwatch>(value));
}
constexpr System::Diagnostics::Stopwatch LiteNetLib::NetPeer::__get__pingTimer() const {
return ::cordl_internals::getInstanceField<System::Diagnostics::Stopwatch, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__timeSinceLastPacket(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__timeSinceLastPacket() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__remoteDelta(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t LiteNetLib::NetPeer::__get__remoteDelta() const {
return ::cordl_internals::getInstanceField<int64_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__packetPool(LiteNetLib::NetPacketPool value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacketPool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacketPool>(value));
}
constexpr LiteNetLib::NetPacketPool LiteNetLib::NetPeer::__get__packetPool() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacketPool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__flushLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType LiteNetLib::NetPeer::__get__flushLock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__sendLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType LiteNetLib::NetPeer::__get__sendLock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__shutdownLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType LiteNetLib::NetPeer::__get__shutdownLock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set_NextPeer(LiteNetLib::NetPeer value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPeer, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPeer>(value));
}
constexpr LiteNetLib::NetPeer LiteNetLib::NetPeer::__get_NextPeer() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPeer, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set_PrevPeer(LiteNetLib::NetPeer value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPeer, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPeer>(value));
}
constexpr LiteNetLib::NetPeer LiteNetLib::NetPeer::__get_PrevPeer() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPeer, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__unreliableChannel(System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Queue_1<LiteNetLib::NetPacket>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Queue_1<LiteNetLib::NetPacket>>(value));
}
constexpr System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> LiteNetLib::NetPeer::__get__unreliableChannel() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Queue_1<LiteNetLib::NetPacket>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__channels(::ArrayW<LiteNetLib::BaseChannel> value)  {
::cordl_internals::setInstanceField<::ArrayW<LiteNetLib::BaseChannel>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<LiteNetLib::BaseChannel>>(value));
}
constexpr ::ArrayW<LiteNetLib::BaseChannel> LiteNetLib::NetPeer::__get__channels() const {
return ::cordl_internals::getInstanceField<::ArrayW<LiteNetLib::BaseChannel>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__headChannel(LiteNetLib::BaseChannel value)  {
::cordl_internals::setInstanceField<LiteNetLib::BaseChannel, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::BaseChannel>(value));
}
constexpr LiteNetLib::BaseChannel LiteNetLib::NetPeer::__get__headChannel() const {
return ::cordl_internals::getInstanceField<LiteNetLib::BaseChannel, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__mtu(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__mtu() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__mtuIdx(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__mtuIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__finishMtu(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool LiteNetLib::NetPeer::__get__finishMtu() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__mtuCheckTimer(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__mtuCheckTimer() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__mtuCheckAttempts(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__mtuCheckAttempts() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__mtuMutex(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType LiteNetLib::NetPeer::__get__mtuMutex() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__fragmentId(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t LiteNetLib::NetPeer::__get__fragmentId() const {
return ::cordl_internals::getInstanceField<uint16_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__holdedFragments(System::Collections::Generic::Dictionary_2<uint16_t,LiteNetLib::LiteNetLib__NetPeer__IncomingFragments> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<uint16_t,LiteNetLib::LiteNetLib__NetPeer__IncomingFragments>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<uint16_t,LiteNetLib::LiteNetLib__NetPeer__IncomingFragments>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<uint16_t,LiteNetLib::LiteNetLib__NetPeer__IncomingFragments> LiteNetLib::NetPeer::__get__holdedFragments() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<uint16_t,LiteNetLib::LiteNetLib__NetPeer__IncomingFragments>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__deliveredFramgnets(System::Collections::Generic::Dictionary_2<uint16_t,uint16_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<uint16_t,uint16_t>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<uint16_t,uint16_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<uint16_t,uint16_t> LiteNetLib::NetPeer::__get__deliveredFramgnets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<uint16_t,uint16_t>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__mergeData(LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacket, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacket>(value));
}
constexpr LiteNetLib::NetPacket LiteNetLib::NetPeer::__get__mergeData() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacket, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__mergePos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__mergePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__mergeCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__mergeCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__connectAttempts(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__connectAttempts() const {
return ::cordl_internals::getInstanceField<int32_t, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__connectTimer(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__connectTimer() const {
return ::cordl_internals::getInstanceField<int32_t, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__connectTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t LiteNetLib::NetPeer::__get__connectTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__connectNum(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t LiteNetLib::NetPeer::__get__connectNum() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__connectionState(LiteNetLib::ConnectionState value)  {
::cordl_internals::setInstanceField<LiteNetLib::ConnectionState, 0xe9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::ConnectionState>(value));
}
constexpr LiteNetLib::ConnectionState LiteNetLib::NetPeer::__get__connectionState() const {
return ::cordl_internals::getInstanceField<LiteNetLib::ConnectionState, 0xe9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__shutdownPacket(LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacket, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacket>(value));
}
constexpr LiteNetLib::NetPacket LiteNetLib::NetPeer::__get__shutdownPacket() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacket, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__shutdownTimer(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get__shutdownTimer() const {
return ::cordl_internals::getInstanceField<int32_t, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__pingPacket(LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacket, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacket>(value));
}
constexpr LiteNetLib::NetPacket LiteNetLib::NetPeer::__get__pingPacket() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacket, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__pongPacket(LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacket, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacket>(value));
}
constexpr LiteNetLib::NetPacket LiteNetLib::NetPeer::__get__pongPacket() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacket, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__connectRequestPacket(LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacket, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacket>(value));
}
constexpr LiteNetLib::NetPacket LiteNetLib::NetPeer::__get__connectRequestPacket() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacket, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set__connectAcceptPacket(LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacket, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacket>(value));
}
constexpr LiteNetLib::NetPacket LiteNetLib::NetPeer::__get__connectAcceptPacket() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacket, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set_EndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint LiteNetLib::NetPeer::__get_EndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set_NetManager(LiteNetLib::NetManager value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetManager, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetManager>(value));
}
constexpr LiteNetLib::NetManager LiteNetLib::NetPeer::__get_NetManager() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetManager, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set_Id(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::NetPeer::__get_Id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set_Tag(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType LiteNetLib::NetPeer::__get_Tag() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetPeer::__set_Statistics(LiteNetLib::NetStatistics value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetStatistics, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetStatistics>(value));
}
constexpr LiteNetLib::NetStatistics LiteNetLib::NetPeer::__get_Statistics() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetStatistics, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint8_t LiteNetLib::NetPeer::get_ConnectionNum()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_ConnectionNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::NetPeer::set_ConnectionNum(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "set_ConnectionNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 LiteNetLib::ConnectionState LiteNetLib::NetPeer::get_ConnectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_ConnectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::ConnectionState, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t LiteNetLib::NetPeer::get_ConnectTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_ConnectTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t LiteNetLib::NetPeer::get_Ping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_Ping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t LiteNetLib::NetPeer::get_Mtu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_Mtu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t LiteNetLib::NetPeer::get_RemoteTimeDelta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_RemoteTimeDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::DateTime LiteNetLib::NetPeer::get_RemoteUtcTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_RemoteUtcTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t LiteNetLib::NetPeer::get_TimeSinceLastPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_TimeSinceLastPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t LiteNetLib::NetPeer::get_ResendDelay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "get_ResendDelay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 LiteNetLib::NetPeer LiteNetLib::NetPeer::New_ctor(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id)  {
LiteNetLib::NetPeer o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::NetPeer>(netManager, remoteEndPoint, id))};
return o;
}
 void LiteNetLib::NetPeer::_ctor(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, netManager, remoteEndPoint, id);
}
 void LiteNetLib::NetPeer::SetMtu(int32_t mtuIdx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SetMtu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mtuIdx);
}
 int32_t LiteNetLib::NetPeer::GetPacketsCountInReliableQueue(uint8_t channelNumber, bool ordered)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "GetPacketsCountInReliableQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, channelNumber, ordered);
}
 LiteNetLib::BaseChannel LiteNetLib::NetPeer::CreateChannel(uint8_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "CreateChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::BaseChannel, false>(const_cast<void*>(instance), ___internal_method, idx);
}
 LiteNetLib::NetPeer LiteNetLib::NetPeer::New_ctor(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id, uint8_t connectNum, LiteNetLib::Utils::NetDataWriter connectData)  {
LiteNetLib::NetPeer o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::NetPeer>(netManager, remoteEndPoint, id, connectNum, connectData))};
return o;
}
 void LiteNetLib::NetPeer::_ctor(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id, uint8_t connectNum, LiteNetLib::Utils::NetDataWriter connectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, netManager, remoteEndPoint, id, connectNum, connectData);
}
 LiteNetLib::NetPeer LiteNetLib::NetPeer::New_ctor(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum)  {
LiteNetLib::NetPeer o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::NetPeer>(netManager, remoteEndPoint, id, connectId, connectNum))};
return o;
}
 void LiteNetLib::NetPeer::_ctor(LiteNetLib::NetManager netManager, System::Net::IPEndPoint remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, netManager, remoteEndPoint, id, connectId, connectNum);
}
 void LiteNetLib::NetPeer::Reject(int64_t connectionId, uint8_t connectionNumber, ::ArrayW<uint8_t> data, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionId, connectionNumber, data, start, length);
}
 bool LiteNetLib::NetPeer::ProcessConnectAccept(LiteNetLib::NetConnectAcceptPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessConnectAccept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetConnectAcceptPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 int32_t LiteNetLib::NetPeer::GetMaxSinglePacketSize(LiteNetLib::DeliveryMethod options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "GetMaxSinglePacketSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, options);
}
 void LiteNetLib::NetPeer::SendWithDeliveryEvent(::ArrayW<uint8_t> data, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendWithDeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, channelNumber, deliveryMethod, userData);
}
 void LiteNetLib::NetPeer::SendWithDeliveryEvent(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendWithDeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, start, length, channelNumber, deliveryMethod, userData);
}
 void LiteNetLib::NetPeer::SendWithDeliveryEvent(LiteNetLib::Utils::NetDataWriter dataWriter, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendWithDeliveryEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataWriter, channelNumber, deliveryMethod, userData);
}
 void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t> data, LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, deliveryMethod);
}
 void LiteNetLib::NetPeer::Send(LiteNetLib::Utils::NetDataWriter dataWriter, LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataWriter, deliveryMethod);
}
 void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t> data, int32_t start, int32_t length, LiteNetLib::DeliveryMethod options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, start, length, options);
}
 void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t> data, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, channelNumber, deliveryMethod);
}
 void LiteNetLib::NetPeer::Send(LiteNetLib::Utils::NetDataWriter dataWriter, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataWriter, channelNumber, deliveryMethod);
}
 void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, start, length, channelNumber, deliveryMethod);
}
 void LiteNetLib::NetPeer::SendInternal(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, LiteNetLib::DeliveryMethod deliveryMethod, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, start, length, channelNumber, deliveryMethod, userData);
}
 void LiteNetLib::NetPeer::Disconnect(::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 void LiteNetLib::NetPeer::Disconnect(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void LiteNetLib::NetPeer::Disconnect(::ArrayW<uint8_t> data, int32_t start, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, start, count);
}
 void LiteNetLib::NetPeer::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 LiteNetLib::DisconnectResult LiteNetLib::NetPeer::ProcessDisconnect(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessDisconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::DisconnectResult, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 LiteNetLib::ShutdownResult LiteNetLib::NetPeer::Shutdown(::ArrayW<uint8_t> data, int32_t start, int32_t length, bool force)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Shutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::ShutdownResult, false>(const_cast<void*>(instance), ___internal_method, data, start, length, force);
}
 void LiteNetLib::NetPeer::UpdateRoundTripTime(int32_t roundTripTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "UpdateRoundTripTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, roundTripTime);
}
 void LiteNetLib::NetPeer::AddReliablePacket(LiteNetLib::DeliveryMethod method, LiteNetLib::NetPacket p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "AddReliablePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, method, p);
}
 void LiteNetLib::NetPeer::ProcessMtuPacket(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessMtuPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void LiteNetLib::NetPeer::UpdateMtuLogic(int32_t deltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "UpdateMtuLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deltaTime);
}
 LiteNetLib::ConnectRequestResult LiteNetLib::NetPeer::ProcessConnectRequest(LiteNetLib::NetConnectRequestPacket connRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessConnectRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetConnectRequestPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::ConnectRequestResult, false>(const_cast<void*>(instance), ___internal_method, connRequest);
}
 void LiteNetLib::NetPeer::ProcessPacket(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void LiteNetLib::NetPeer::SendMerged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendMerged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::NetPeer::SendUserData(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "SendUserData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void LiteNetLib::NetPeer::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::NetPeer::Update(int32_t deltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deltaTime);
}
 void LiteNetLib::NetPeer::RecycleAndDeliver(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetPeer>::get(),
                            "RecycleAndDeliver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
