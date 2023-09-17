#pragma once
namespace {
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequestResult_def.hpp"
#include "LiteNetLib/zzzz__NetConnectRequestPacket_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.get_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::ConnectionRequestResult (::LiteNetLib::ConnectionRequest::*)()>(&::LiteNetLib::ConnectionRequest::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2084a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.set_Result
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::LiteNetLib::ConnectionRequestResult)>(&::LiteNetLib::ConnectionRequest::set_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2084a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequestResult>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.TryActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::ConnectionRequest::*)()>(&::LiteNetLib::ConnectionRequest::TryActivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2084a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "TryActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.UpdateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::LiteNetLib::NetConnectRequestPacket)>(&::LiteNetLib::ConnectionRequest::UpdateRequest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2084a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "UpdateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectRequestPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(int64_t, uint8_t, ::LiteNetLib::Utils::NetDataReader, ::System::Net::IPEndPoint, ::LiteNetLib::NetManager)>(&::LiteNetLib::ConnectionRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2084a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.AcceptIfKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer (::LiteNetLib::ConnectionRequest::*)(::StringW)>(&::LiteNetLib::ConnectionRequest::AcceptIfKey)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2084af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "AcceptIfKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Accept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer (::LiteNetLib::ConnectionRequest::*)()>(&::LiteNetLib::ConnectionRequest::Accept)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x208519c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2085200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2085288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.RejectForce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::ConnectionRequest::RejectForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2085290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "RejectForce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.RejectForce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)()>(&::LiteNetLib::ConnectionRequest::RejectForce)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2085298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "RejectForce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.RejectForce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::ConnectionRequest::RejectForce)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20852ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "RejectForce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.RejectForce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::LiteNetLib::Utils::NetDataWriter)>(&::LiteNetLib::ConnectionRequest::RejectForce)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x20852cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "RejectForce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)()>(&::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20852f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2085308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::LiteNetLib::Utils::NetDataWriter)>(&::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2085328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::LiteNetLib::ConnectionRequest::__set__listener(::LiteNetLib::NetManager value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::NetManager>(value));
}
constexpr ::LiteNetLib::NetManager ::LiteNetLib::ConnectionRequest::__get__listener() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ConnectionRequest::__set__used(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::ConnectionRequest::__get__used() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ConnectionRequest::__set_Data(::LiteNetLib::Utils::NetDataReader value)  {
::cordl_internals::setInstanceField<::LiteNetLib::Utils::NetDataReader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::Utils::NetDataReader>(value));
}
constexpr ::LiteNetLib::Utils::NetDataReader ::LiteNetLib::ConnectionRequest::__get_Data() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::Utils::NetDataReader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ConnectionRequest::__set__Result_k__BackingField(::LiteNetLib::ConnectionRequestResult value)  {
::cordl_internals::setInstanceField<::LiteNetLib::ConnectionRequestResult, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::ConnectionRequestResult>(value));
}
constexpr ::LiteNetLib::ConnectionRequestResult ::LiteNetLib::ConnectionRequest::__get__Result_k__BackingField() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::ConnectionRequestResult, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ConnectionRequest::__set_ConnectionTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::LiteNetLib::ConnectionRequest::__get_ConnectionTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ConnectionRequest::__set_ConnectionNumber(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::LiteNetLib::ConnectionRequest::__get_ConnectionNumber() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ConnectionRequest::__set_RemoteEndPoint(::System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<::System::Net::IPEndPoint, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::IPEndPoint>(value));
}
constexpr ::System::Net::IPEndPoint ::LiteNetLib::ConnectionRequest::__get_RemoteEndPoint() const {
return ::cordl_internals::getInstanceField<::System::Net::IPEndPoint, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::LiteNetLib::ConnectionRequestResult ::LiteNetLib::ConnectionRequest::get_Result()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "get_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::ConnectionRequestResult, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::LiteNetLib::ConnectionRequest::set_Result(::LiteNetLib::ConnectionRequestResult value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "set_Result",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequestResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::LiteNetLib::ConnectionRequest::TryActivate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "TryActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::LiteNetLib::ConnectionRequest::UpdateRequest(::LiteNetLib::NetConnectRequestPacket connRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "UpdateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectRequestPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connRequest);
}
// Ctor Parameters [CppParam { name: "connectionId", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "connectionNumber", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "netDataReader", ty: "::LiteNetLib::Utils::NetDataReader", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "listener", ty: "::LiteNetLib::NetManager", modifiers: "", def_value: None }]
 ::LiteNetLib::ConnectionRequest::ConnectionRequest(int64_t connectionId, uint8_t connectionNumber, ::LiteNetLib::Utils::NetDataReader netDataReader, ::System::Net::IPEndPoint endPoint, ::LiteNetLib::NetManager listener)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConnectionRequest>(connectionId, connectionNumber, netDataReader, endPoint, listener))) {}
 void ::LiteNetLib::ConnectionRequest::_ctor(int64_t connectionId, uint8_t connectionNumber, ::LiteNetLib::Utils::NetDataReader netDataReader, ::System::Net::IPEndPoint endPoint, ::LiteNetLib::NetManager listener)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionId, connectionNumber, netDataReader, endPoint, listener);
}
 ::LiteNetLib::NetPeer ::LiteNetLib::ConnectionRequest::AcceptIfKey(::StringW key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "AcceptIfKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer, false>(const_cast<void*>(instance), ___internal_method, key);
}
 ::LiteNetLib::NetPeer ::LiteNetLib::ConnectionRequest::Accept()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::LiteNetLib::ConnectionRequest::Reject(::ArrayW<uint8_t> rejectData, int32_t start, int32_t length, bool force)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rejectData, start, length, force);
}
 void ::LiteNetLib::ConnectionRequest::Reject(::ArrayW<uint8_t> rejectData, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rejectData, start, length);
}
 void ::LiteNetLib::ConnectionRequest::RejectForce(::ArrayW<uint8_t> rejectData, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "RejectForce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rejectData, start, length);
}
 void ::LiteNetLib::ConnectionRequest::RejectForce()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "RejectForce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::LiteNetLib::ConnectionRequest::RejectForce(::ArrayW<uint8_t> rejectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "RejectForce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rejectData);
}
 void ::LiteNetLib::ConnectionRequest::RejectForce(::LiteNetLib::Utils::NetDataWriter rejectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "RejectForce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rejectData);
}
 void ::LiteNetLib::ConnectionRequest::Reject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::LiteNetLib::ConnectionRequest::Reject(::ArrayW<uint8_t> rejectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rejectData);
}
 void ::LiteNetLib::ConnectionRequest::Reject(::LiteNetLib::Utils::NetDataWriter rejectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest>::get(),
                            "Reject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rejectData);
}
} // end anonymous namespace
