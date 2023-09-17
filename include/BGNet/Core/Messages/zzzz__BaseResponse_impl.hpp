#pragma once
#include "BGNet/Core/Messages/zzzz__BaseResponse_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::BaseResponse.get_responseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::BaseResponse::*)()>(&BGNet::Core::Messages::BaseResponse::get_responseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "get_responseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseResponse.set_responseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseResponse::*)(uint32_t)>(&BGNet::Core::Messages::BaseResponse::set_responseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "set_responseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseResponse.get_resultCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (BGNet::Core::Messages::BaseResponse::*)()>(&BGNet::Core::Messages::BaseResponse::get_resultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde824;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseResponse.get_resultCodeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BGNet::Core::Messages::BaseResponse::*)()>(&BGNet::Core::Messages::BaseResponse::get_resultCodeString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdde82c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseResponse.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseResponse::*)(LiteNetLib::Utils::NetDataWriter)>(&BGNet::Core::Messages::BaseResponse::Serialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdde86c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseResponse.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseResponse::*)(LiteNetLib::Utils::NetDataReader)>(&BGNet::Core::Messages::BaseResponse::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdde890;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseResponse.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseResponse::*)()>(&BGNet::Core::Messages::BaseResponse::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseResponse.BGNet_Core_Messages_IUnconnectedResponse_WithResponseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::IUnconnectedResponse (BGNet::Core::Messages::BaseResponse::*)(uint32_t)>(&BGNet::Core::Messages::BaseResponse::BGNet_Core_Messages_IUnconnectedResponse_WithResponseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "BGNet.Core.Messages.IUnconnectedResponse.WithResponseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseResponse::*)()>(&BGNet::Core::Messages::BaseResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr  BGNet::Core::Messages::BaseResponse::operator BGNet::Core::Messages::IUnconnectedResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedResponse(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::BaseResponse::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::BaseResponse::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::BaseResponse::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseResponse::__set__responseId_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BaseResponse::__get__responseId_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 uint32_t BGNet::Core::Messages::BaseResponse::get_responseId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "get_responseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseResponse::set_responseId(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "set_responseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 uint8_t BGNet::Core::Messages::BaseResponse::get_resultCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "get_resultCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW BGNet::Core::Messages::BaseResponse::get_resultCodeString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "get_resultCodeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseResponse::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void BGNet::Core::Messages::BaseResponse::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void BGNet::Core::Messages::BaseResponse::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 BGNet::Core::Messages::IUnconnectedResponse BGNet::Core::Messages::BaseResponse::BGNet_Core_Messages_IUnconnectedResponse_WithResponseId(uint32_t responseId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            "BGNet.Core.Messages.IUnconnectedResponse.WithResponseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::IUnconnectedResponse, false>(const_cast<void*>(instance), ___internal_method, responseId);
}
// Ctor Parameters []
 BGNet::Core::Messages::BaseResponse::BaseResponse()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BaseResponse>())) {}
 void BGNet::Core::Messages::BaseResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
