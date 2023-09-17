#pragma once
namespace {
#include "LiteNetLib/zzzz__NetConnectRequestPacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetConnectRequestPacket::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, ::LiteNetLib::Utils::NetDataReader)>(&::LiteNetLib::NetConnectRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x208f880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket.GetProtocolId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::LiteNetLib::NetPacket)>(&::LiteNetLib::NetConnectRequestPacket::GetProtocolId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x208c454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket>::get(),
                            "GetProtocolId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket.FromData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetConnectRequestPacket (*)(::LiteNetLib::NetPacket)>(&::LiteNetLib::NetConnectRequestPacket::FromData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x208c560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket>::get(),
                            "FromData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetConnectRequestPacket.Make
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPacket (*)(::LiteNetLib::Utils::NetDataWriter, ::System::Net::SocketAddress, int64_t)>(&::LiteNetLib::NetConnectRequestPacket::Make)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x208f904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket>::get(),
                            "Make",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::LiteNetLib::NetConnectRequestPacket::__set_ConnectionTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::LiteNetLib::NetConnectRequestPacket::__get_ConnectionTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetConnectRequestPacket::__set_ConnectionNumber(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::LiteNetLib::NetConnectRequestPacket::__get_ConnectionNumber() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetConnectRequestPacket::__set_TargetAddress(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::LiteNetLib::NetConnectRequestPacket::__get_TargetAddress() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetConnectRequestPacket::__set_Data(::LiteNetLib::Utils::NetDataReader value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetDataReader, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::Utils::NetDataReader>(value));
}
constexpr ::LiteNetLib::Utils::NetDataReader ::LiteNetLib::NetConnectRequestPacket::__get_Data() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataReader, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "connectionTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "connectionNumber", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "targetAddress", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::LiteNetLib::Utils::NetDataReader", modifiers: "", def_value: None }]
 ::LiteNetLib::NetConnectRequestPacket::NetConnectRequestPacket(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t> targetAddress, ::LiteNetLib::Utils::NetDataReader data)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NetConnectRequestPacket>(connectionTime, connectionNumber, targetAddress, data))) {}
 void ::LiteNetLib::NetConnectRequestPacket::_ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t> targetAddress, ::LiteNetLib::Utils::NetDataReader data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionTime, connectionNumber, targetAddress, data);
}
 int32_t ::LiteNetLib::NetConnectRequestPacket::GetProtocolId(::LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket>::get(),
                            "GetProtocolId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, packet);
}
 ::LiteNetLib::NetConnectRequestPacket ::LiteNetLib::NetConnectRequestPacket::FromData(::LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket>::get(),
                            "FromData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetConnectRequestPacket, false>(nullptr, ___internal_method, packet);
}
 ::LiteNetLib::NetPacket ::LiteNetLib::NetConnectRequestPacket::Make(::LiteNetLib::Utils::NetDataWriter connectData, ::System::Net::SocketAddress addressBytes, int64_t connectId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConnectRequestPacket>::get(),
                            "Make",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPacket, false>(nullptr, ___internal_method, connectData, addressBytes, connectId);
}
} // end anonymous namespace
