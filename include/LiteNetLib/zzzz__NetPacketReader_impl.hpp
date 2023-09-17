#pragma once
#include "LiteNetLib/Utils/zzzz__NetDataReader_impl.hpp"
namespace {
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetPacketReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketReader::*)(::LiteNetLib::NetManager, ::LiteNetLib::NetEvent)>(&::LiteNetLib::NetPacketReader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2088bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketReader.SetSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketReader::*)(::LiteNetLib::NetPacket)>(&::LiteNetLib::NetPacketReader::SetSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2088bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader>::get(),
                            "SetSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketReader.RecycleInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketReader::*)()>(&::LiteNetLib::NetPacketReader::RecycleInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2088cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader>::get(),
                            "RecycleInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketReader.Recycle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPacketReader::*)()>(&::LiteNetLib::NetPacketReader::Recycle)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2088f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader>::get(),
                            "Recycle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::LiteNetLib::NetPacketReader::__set__packet(::LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::NetPacket>(value));
}
constexpr ::LiteNetLib::NetPacket ::LiteNetLib::NetPacketReader::__get__packet() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetPacketReader::__set__manager(::LiteNetLib::NetManager value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::NetManager>(value));
}
constexpr ::LiteNetLib::NetManager ::LiteNetLib::NetPacketReader::__get__manager() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetManager, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::NetPacketReader::__set__evt(::LiteNetLib::NetEvent value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetEvent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::NetEvent>(value));
}
constexpr ::LiteNetLib::NetEvent ::LiteNetLib::NetPacketReader::__get__evt() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetEvent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "manager", ty: "::LiteNetLib::NetManager", modifiers: "", def_value: None }, CppParam { name: "evt", ty: "::LiteNetLib::NetEvent", modifiers: "", def_value: None }]
 ::LiteNetLib::NetPacketReader::NetPacketReader(::LiteNetLib::NetManager manager, ::LiteNetLib::NetEvent evt)  : ::LiteNetLib::Utils::NetDataReader(THROW_UNLESS(::il2cpp_utils::New<NetPacketReader>(manager, evt))) {}
 void ::LiteNetLib::NetPacketReader::_ctor(::LiteNetLib::NetManager manager, ::LiteNetLib::NetEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, manager, evt);
}
 void ::LiteNetLib::NetPacketReader::SetSource(::LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader>::get(),
                            "SetSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void ::LiteNetLib::NetPacketReader::RecycleInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader>::get(),
                            "RecycleInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::LiteNetLib::NetPacketReader::Recycle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPacketReader>::get(),
                            "Recycle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
