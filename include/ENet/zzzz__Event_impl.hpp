#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "ENet/zzzz__Event_def.hpp"
#include "ENet/zzzz__ENetEvent_def.hpp"
#include "ENet/zzzz__Packet_def.hpp"
#include "ENet/zzzz__Peer_def.hpp"
#include "ENet/zzzz__EventType_def.hpp"
//  Writing Method size for method: ::ENet::Event.get_NativeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::ENetEvent (::ENet::Event::*)()>(&::ENet::Event::get_NativeData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x207d4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_NativeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.set_NativeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ENet::Event::*)(::ENet::ENetEvent)>(&::ENet::Event::set_NativeData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x207d4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "set_NativeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ENet::Event::*)(::ENet::ENetEvent)>(&::ENet::Event::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x207d4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::EventType (::ENet::Event::*)()>(&::ENet::Event::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x207d500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Peer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Peer (::ENet::Event::*)()>(&::ENet::Event::get_Peer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x207d508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_Peer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_ChannelID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::ENet::Event::*)()>(&::ENet::Event::get_ChannelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x207d5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_ChannelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::ENet::Event::*)()>(&::ENet::Event::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x207d5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Packet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Packet (::ENet::Event::*)()>(&::ENet::Event::get_Packet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x207d5c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_Packet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "nativeEvent", ty: "::ENet::ENetEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::Event::Event(::ENet::ENetEvent nativeEvent) noexcept : ::bs_hook::ValueTypeWrapper() {this->nativeEvent = nativeEvent;
}
constexpr void ::ENet::Event::__set_nativeEvent(::ENet::ENetEvent value)  {
::cordl_internals::setInstanceField<::ENet::ENetEvent, 0x0>(this->__instance, std::forward<::ENet::ENetEvent>(value));
}
constexpr ::ENet::ENetEvent ::ENet::Event::__get_nativeEvent() const {
return ::cordl_internals::getInstanceField<::ENet::ENetEvent, 0x0>(this->__instance);
}
 ::ENet::ENetEvent ::ENet::Event::get_NativeData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_NativeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ENet::ENetEvent, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::ENet::Event::set_NativeData(::ENet::ENetEvent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "set_NativeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::ENet::Event::_ctor(::ENet::ENetEvent event)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, event);
}
 ::ENet::EventType ::ENet::Event::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ENet::EventType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::ENet::Peer ::ENet::Event::get_Peer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_Peer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ENet::Peer, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint8_t ::ENet::Event::get_ChannelID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_ChannelID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint32_t ::ENet::Event::get_Data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_Data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::ENet::Packet ::ENet::Event::get_Packet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(),
                            "get_Packet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ENet::Packet, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
