#pragma once
namespace {
#include "GlobalNamespace/zzzz__NodePoseSyncStateDeltaNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateDeltaSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable> (*)()>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdccaa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.get_baseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_baseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdccae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "get_baseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.set_baseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(::GlobalNamespace::SyncStateId)>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_baseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdccaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "set_baseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.get_timeOffsetMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_timeOffsetMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdccaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "get_timeOffsetMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.set_timeOffsetMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(int32_t)>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_timeOffsetMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdccb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "set_timeOffsetMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.get_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_delta)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdccb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.set_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(::GlobalNamespace::NodePoseSyncState)>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_delta)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xdccb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "set_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter)>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xdccb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataReader)>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdccbfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Release)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xdccc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(&::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdccd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr  ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::operator ::LiteNetLib::Utils::INetSerializable() const noexcept {
return ::LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr  ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::operator ::GlobalNamespace::IPoolablePacket() const noexcept {
return ::GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>
constexpr  ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>() const noexcept {
return ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__set__delta(::GlobalNamespace::NodePoseSyncState value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NodePoseSyncState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NodePoseSyncState>(value));
}
constexpr ::GlobalNamespace::NodePoseSyncState ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__get__delta() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NodePoseSyncState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__set__baseId_k__BackingField(::GlobalNamespace::SyncStateId value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SyncStateId, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::SyncStateId>(value));
}
constexpr ::GlobalNamespace::SyncStateId ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__get__baseId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SyncStateId, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__set__timeOffsetMs_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__get__timeOffsetMs_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable> ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>, false>(nullptr, ___internal_method);
}
 ::GlobalNamespace::SyncStateId ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_baseId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "get_baseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_baseId(::GlobalNamespace::SyncStateId value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "set_baseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_timeOffsetMs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "get_timeOffsetMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_timeOffsetMs(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "set_timeOffsetMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::GlobalNamespace::NodePoseSyncState ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_delta(::GlobalNamespace::NodePoseSyncState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "set_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::NodePoseSyncStateDeltaNetSerializable()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NodePoseSyncStateDeltaNetSerializable>())) {}
 void ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
