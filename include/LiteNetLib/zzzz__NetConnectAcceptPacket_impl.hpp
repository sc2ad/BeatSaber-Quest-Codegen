#pragma once
#include "LiteNetLib/zzzz__NetConnectAcceptPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
//  Writing Method size for method: LiteNetLib::NetConnectAcceptPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetConnectAcceptPacket::*)(int64_t, uint8_t, bool)>(&LiteNetLib::NetConnectAcceptPacket::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x208fa4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetConnectAcceptPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetConnectAcceptPacket.FromData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetConnectAcceptPacket (*)(LiteNetLib::NetPacket)>(&LiteNetLib::NetConnectAcceptPacket::FromData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x208c7d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetConnectAcceptPacket>::get(),
                            "FromData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::NetConnectAcceptPacket.Make
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetPacket (*)(int64_t, uint8_t, bool)>(&LiteNetLib::NetConnectAcceptPacket::Make)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x208fa8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetConnectAcceptPacket>::get(),
                            "Make",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::NetConnectAcceptPacket::__set_ConnectionId(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t LiteNetLib::NetConnectAcceptPacket::__get_ConnectionId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetConnectAcceptPacket::__set_ConnectionNumber(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t LiteNetLib::NetConnectAcceptPacket::__get_ConnectionNumber() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::NetConnectAcceptPacket::__set_IsReusedPeer(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool LiteNetLib::NetConnectAcceptPacket::__get_IsReusedPeer() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "connectionId", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "connectionNumber", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "isReusedPeer", ty: "bool", modifiers: "", def_value: None }]
 LiteNetLib::NetConnectAcceptPacket::NetConnectAcceptPacket(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NetConnectAcceptPacket>(connectionId, connectionNumber, isReusedPeer))) {}
 void LiteNetLib::NetConnectAcceptPacket::_ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetConnectAcceptPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionId, connectionNumber, isReusedPeer);
}
 LiteNetLib::NetConnectAcceptPacket LiteNetLib::NetConnectAcceptPacket::FromData(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetConnectAcceptPacket>::get(),
                            "FromData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::NetConnectAcceptPacket, false>(nullptr, ___internal_method, packet);
}
 LiteNetLib::NetPacket LiteNetLib::NetConnectAcceptPacket::Make(int64_t connectId, uint8_t connectNum, bool reusedPeer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::NetConnectAcceptPacket>::get(),
                            "Make",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::NetPacket, false>(nullptr, ___internal_method, connectId, connectNum, reusedPeer);
}
