#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedMultipartMessage_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::IUnconnectedMultipartMessage.get_multipartMessageId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::IUnconnectedMultipartMessage::*)()>(&BGNet::Core::Messages::IUnconnectedMultipartMessage::get_multipartMessageId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::IUnconnectedMultipartMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::IUnconnectedMultipartMessage.get_offset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BGNet::Core::Messages::IUnconnectedMultipartMessage::*)()>(&BGNet::Core::Messages::IUnconnectedMultipartMessage::get_offset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::IUnconnectedMultipartMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::IUnconnectedMultipartMessage.get_length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BGNet::Core::Messages::IUnconnectedMultipartMessage::*)()>(&BGNet::Core::Messages::IUnconnectedMultipartMessage::get_length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::IUnconnectedMultipartMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::IUnconnectedMultipartMessage.get_totalLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BGNet::Core::Messages::IUnconnectedMultipartMessage::*)()>(&BGNet::Core::Messages::IUnconnectedMultipartMessage::get_totalLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::IUnconnectedMultipartMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::IUnconnectedMultipartMessage.get_data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::IUnconnectedMultipartMessage::*)()>(&BGNet::Core::Messages::IUnconnectedMultipartMessage::get_data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::IUnconnectedMultipartMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr  BGNet::Core::Messages::IUnconnectedMultipartMessage::operator BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableRequest(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::IUnconnectedMultipartMessage::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::IUnconnectedMultipartMessage::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::IUnconnectedMultipartMessage::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
 uint32_t BGNet::Core::Messages::IUnconnectedMultipartMessage::get_multipartMessageId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                            "get_multipartMessageId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BGNet::Core::Messages::IUnconnectedMultipartMessage::get_offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                            "get_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BGNet::Core::Messages::IUnconnectedMultipartMessage::get_length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BGNet::Core::Messages::IUnconnectedMultipartMessage::get_totalLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                            "get_totalLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> BGNet::Core::Messages::IUnconnectedMultipartMessage::get_data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
