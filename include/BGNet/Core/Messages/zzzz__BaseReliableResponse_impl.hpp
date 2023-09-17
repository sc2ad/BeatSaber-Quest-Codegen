#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.get_requestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::BaseReliableResponse::*)()>(&BGNet::Core::Messages::BaseReliableResponse::get_requestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "get_requestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.set_requestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t)>(&BGNet::Core::Messages::BaseReliableResponse::set_requestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "set_requestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.get_responseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::BaseReliableResponse::*)()>(&BGNet::Core::Messages::BaseReliableResponse::get_responseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "get_responseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.set_responseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t)>(&BGNet::Core::Messages::BaseReliableResponse::set_responseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "set_responseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.get_resultCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (BGNet::Core::Messages::BaseReliableResponse::*)()>(&BGNet::Core::Messages::BaseReliableResponse::get_resultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde728;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseReliableResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.get_resultCodeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BGNet::Core::Messages::BaseReliableResponse::*)()>(&BGNet::Core::Messages::BaseReliableResponse::get_resultCodeString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdde730;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseReliableResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableResponse::*)(LiteNetLib::Utils::NetDataWriter)>(&BGNet::Core::Messages::BaseReliableResponse::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdde770;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseReliableResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableResponse::*)(LiteNetLib::Utils::NetDataReader)>(&BGNet::Core::Messages::BaseReliableResponse::Deserialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xdde7b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseReliableResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableResponse::*)()>(&BGNet::Core::Messages::BaseReliableResponse::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseReliableResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::IUnconnectedReliableRequest (BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t)>(&BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.BGNet_Core_Messages_IUnconnectedResponse_WithResponseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::IUnconnectedResponse (BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t)>(&BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedResponse_WithResponseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "BGNet.Core.Messages.IUnconnectedResponse.WithResponseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse.BGNet_Core_Messages_IUnconnectedReliableResponse_WithRequestAndResponseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::IUnconnectedReliableResponse (BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t, uint32_t)>(&BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedReliableResponse_WithRequestAndResponseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "BGNet.Core.Messages.IUnconnectedReliableResponse.WithRequestAndResponseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseReliableResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableResponse::*)()>(&BGNet::Core::Messages::BaseReliableResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableResponse
constexpr  BGNet::Core::Messages::BaseReliableResponse::operator BGNet::Core::Messages::IUnconnectedReliableResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableResponse(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr  BGNet::Core::Messages::BaseReliableResponse::operator BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableRequest(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::BaseReliableResponse::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::BaseReliableResponse::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::BaseReliableResponse::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr  BGNet::Core::Messages::BaseReliableResponse::operator BGNet::Core::Messages::IUnconnectedResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedResponse(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseReliableResponse::__set__requestId_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BaseReliableResponse::__get__requestId_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseReliableResponse::__set__responseId_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BaseReliableResponse::__get__responseId_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint32_t BGNet::Core::Messages::BaseReliableResponse::get_requestId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "get_requestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseReliableResponse::set_requestId(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "set_requestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 uint32_t BGNet::Core::Messages::BaseReliableResponse::get_responseId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "get_responseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseReliableResponse::set_responseId(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "set_responseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 uint8_t BGNet::Core::Messages::BaseReliableResponse::get_resultCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "get_resultCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW BGNet::Core::Messages::BaseReliableResponse::get_resultCodeString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "get_resultCodeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseReliableResponse::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void BGNet::Core::Messages::BaseReliableResponse::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void BGNet::Core::Messages::BaseReliableResponse::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId(uint32_t requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::IUnconnectedReliableRequest, false>(const_cast<void*>(instance), ___internal_method, requestId);
}
 BGNet::Core::Messages::IUnconnectedResponse BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedResponse_WithResponseId(uint32_t responseId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "BGNet.Core.Messages.IUnconnectedResponse.WithResponseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::IUnconnectedResponse, false>(const_cast<void*>(instance), ___internal_method, responseId);
}
 BGNet::Core::Messages::IUnconnectedReliableResponse BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedReliableResponse_WithRequestAndResponseId(uint32_t requestId, uint32_t responseId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            "BGNet.Core.Messages.IUnconnectedReliableResponse.WithRequestAndResponseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::IUnconnectedReliableResponse, false>(const_cast<void*>(instance), ___internal_method, requestId, responseId);
}
// Ctor Parameters []
 BGNet::Core::Messages::BaseReliableResponse::BaseReliableResponse()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BaseReliableResponse>())) {}
 void BGNet::Core::Messages::BaseReliableResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseReliableResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
