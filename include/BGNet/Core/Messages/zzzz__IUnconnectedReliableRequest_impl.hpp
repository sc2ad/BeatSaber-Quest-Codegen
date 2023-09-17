#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::IUnconnectedReliableRequest.get_requestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::IUnconnectedReliableRequest::*)()>(&BGNet::Core::Messages::IUnconnectedReliableRequest::get_requestId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::IUnconnectedReliableRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::IUnconnectedReliableRequest.WithRequestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::IUnconnectedReliableRequest (BGNet::Core::Messages::IUnconnectedReliableRequest::*)(uint32_t)>(&BGNet::Core::Messages::IUnconnectedReliableRequest::WithRequestId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::IUnconnectedReliableRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::IUnconnectedReliableRequest::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::IUnconnectedReliableRequest::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::IUnconnectedReliableRequest::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
 uint32_t BGNet::Core::Messages::IUnconnectedReliableRequest::get_requestId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(),
                            "get_requestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::IUnconnectedReliableRequest::WithRequestId(uint32_t requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(),
                            "WithRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::IUnconnectedReliableRequest, false>(const_cast<void*>(instance), ___internal_method, requestId);
}
} // end anonymous namespace
