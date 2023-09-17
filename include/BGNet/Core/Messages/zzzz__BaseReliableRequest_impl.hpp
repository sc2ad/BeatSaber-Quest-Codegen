#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableRequest_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableRequest.get_requestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::BaseReliableRequest::*)()>(&BGNet::Core::Messages::BaseReliableRequest::get_requestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            "get_requestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableRequest.set_requestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableRequest::*)(uint32_t)>(&BGNet::Core::Messages::BaseReliableRequest::set_requestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            "set_requestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableRequest.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableRequest::*)(LiteNetLib::Utils::NetDataWriter)>(&BGNet::Core::Messages::BaseReliableRequest::Serialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdde510;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseReliableRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableRequest.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableRequest::*)(LiteNetLib::Utils::NetDataReader)>(&BGNet::Core::Messages::BaseReliableRequest::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdde668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseReliableRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableRequest.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableRequest::*)()>(&BGNet::Core::Messages::BaseReliableRequest::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseReliableRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableRequest.BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::IUnconnectedReliableRequest (BGNet::Core::Messages::BaseReliableRequest::*)(uint32_t)>(&BGNet::Core::Messages::BaseReliableRequest::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            "BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableRequest::*)()>(&BGNet::Core::Messages::BaseReliableRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr  BGNet::Core::Messages::BaseReliableRequest::operator BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableRequest(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::BaseReliableRequest::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::BaseReliableRequest::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::BaseReliableRequest::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseReliableRequest::__set__requestId_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BaseReliableRequest::__get__requestId_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint32_t BGNet::Core::Messages::BaseReliableRequest::get_requestId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            "get_requestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseReliableRequest::set_requestId(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            "set_requestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void BGNet::Core::Messages::BaseReliableRequest::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void BGNet::Core::Messages::BaseReliableRequest::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void BGNet::Core::Messages::BaseReliableRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BaseReliableRequest::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId(uint32_t requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            "BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::IUnconnectedReliableRequest, false>(const_cast<void*>(instance), ___internal_method, requestId);
}
// Ctor Parameters []
 BGNet::Core::Messages::BaseReliableRequest::BaseReliableRequest()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BaseReliableRequest>())) {}
 void BGNet::Core::Messages::BaseReliableRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
