#pragma once
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
//  Writing Method size for method: GlobalNamespace::RemoteProcedureCall.get_syncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::RemoteProcedureCall::*)()>(&GlobalNamespace::RemoteProcedureCall::get_syncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc72d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RemoteProcedureCall.set_syncTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(float_t)>(&GlobalNamespace::RemoteProcedureCall::set_syncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc72e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "set_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RemoteProcedureCall.SerializeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(LiteNetLib::Utils::NetDataWriter, uint32_t)>(&GlobalNamespace::RemoteProcedureCall::SerializeData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdc72e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::RemoteProcedureCall),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RemoteProcedureCall.DeserializeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(LiteNetLib::Utils::NetDataReader, uint32_t)>(&GlobalNamespace::RemoteProcedureCall::DeserializeData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdc72ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::RemoteProcedureCall),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RemoteProcedureCall.LiteNetLib_Utils_INetSerializable_Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdc72f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "LiteNetLib.Utils.INetSerializable.Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RemoteProcedureCall.LiteNetLib_Utils_INetSerializable_Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdc7338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "LiteNetLib.Utils.INetSerializable.Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RemoteProcedureCall.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)()>(&GlobalNamespace::RemoteProcedureCall::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdc7380;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::RemoteProcedureCall),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RemoteProcedureCall.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IRemoteProcedureCall (GlobalNamespace::RemoteProcedureCall::*)(float_t)>(&GlobalNamespace::RemoteProcedureCall::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc7480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RemoteProcedureCall._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RemoteProcedureCall::*)()>(&GlobalNamespace::RemoteProcedureCall::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdbc190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IRemoteProcedureCall
constexpr  GlobalNamespace::RemoteProcedureCall::operator GlobalNamespace::IRemoteProcedureCall() const noexcept {
return GlobalNamespace::IRemoteProcedureCall(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GlobalNamespace::RemoteProcedureCall::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GlobalNamespace::RemoteProcedureCall::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RemoteProcedureCall::__set__syncTime_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::RemoteProcedureCall::__get__syncTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::RemoteProcedureCall::get_syncTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "get_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RemoteProcedureCall::set_syncTime(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "set_syncTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::RemoteProcedureCall::SerializeData(LiteNetLib::Utils::NetDataWriter writer, uint32_t protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "SerializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, protocolVersion);
}
 void GlobalNamespace::RemoteProcedureCall::DeserializeData(LiteNetLib::Utils::NetDataReader reader, uint32_t protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "DeserializeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, protocolVersion);
}
 void GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "LiteNetLib.Utils.INetSerializable.Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::RemoteProcedureCall::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "LiteNetLib.Utils.INetSerializable.Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GlobalNamespace::RemoteProcedureCall::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IRemoteProcedureCall GlobalNamespace::RemoteProcedureCall::Init(float_t syncTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IRemoteProcedureCall, false>(const_cast<void*>(instance), ___internal_method, syncTime);
}
 GlobalNamespace::RemoteProcedureCall GlobalNamespace::RemoteProcedureCall::New_ctor()  {
GlobalNamespace::RemoteProcedureCall o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::RemoteProcedureCall>())};
return o;
}
 void GlobalNamespace::RemoteProcedureCall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RemoteProcedureCall>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Int32Enum (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::*)(System::Int32Enum)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::__set__v(System::Int32Enum value)  {
::cordl_internals::setInstanceField<System::Int32Enum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Int32Enum>(value));
}
constexpr System::Int32Enum GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::__get__v() const {
return ::cordl_internals::getInstanceField<System::Int32Enum, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Int32Enum GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Set(System::Int32Enum v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Int32Enum>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::*)(GlobalNamespace::SongPackMask)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::__set__v(GlobalNamespace::SongPackMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPackMask>(value));
}
constexpr GlobalNamespace::SongPackMask GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::__get__v() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMask, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SongPackMask GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SongPackMask, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Set(GlobalNamespace::SongPackMask v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SongPackMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<GlobalNamespace::SongPackMask>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::*)(UnityEngine::Quaternion)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::__set__v(UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<UnityEngine::Quaternion, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Quaternion>(value));
}
constexpr UnityEngine::Quaternion GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::__get__v() const {
return ::cordl_internals::getInstanceField<UnityEngine::Quaternion, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Quaternion GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Set(UnityEngine::Quaternion v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Quaternion>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::__set__v(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::__get__v() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Set(T v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::*)(UnityEngine::Vector4)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::__set__v(UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector4, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector4>(value));
}
constexpr UnityEngine::Vector4 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::__get__v() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector4, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector4 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Set(UnityEngine::Vector4 v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector4>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::__set__v(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::__get__v() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Set(T v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::*)(UnityEngine::Vector3)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::__set__v(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::__get__v() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Vector3 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Set(UnityEngine::Vector3 v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<UnityEngine::Vector3>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::*)(float_t)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::__set__v(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::__get__v() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Set(float_t v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::get_hasValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::*)(bool)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Set)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::*)()>(&GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::__set__v(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::__get__v() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Set(bool v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::__set__v(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::__get__v() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Set(T v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::__set__v(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::__get__v() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 T GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Set(T v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, v);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::New_ctor()  {
GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RemoteProcedureCall__TypeWrapper_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
