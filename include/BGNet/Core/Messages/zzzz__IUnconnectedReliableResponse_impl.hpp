#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::IUnconnectedReliableResponse.WithRequestAndResponseId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::IUnconnectedReliableResponse (BGNet::Core::Messages::IUnconnectedReliableResponse::*)(uint32_t, uint32_t)>(&BGNet::Core::Messages::IUnconnectedReliableResponse::WithRequestAndResponseId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::IUnconnectedReliableResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr  BGNet::Core::Messages::IUnconnectedReliableResponse::operator BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableRequest(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::IUnconnectedReliableResponse::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::IUnconnectedReliableResponse::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::IUnconnectedReliableResponse::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr  BGNet::Core::Messages::IUnconnectedReliableResponse::operator BGNet::Core::Messages::IUnconnectedResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedResponse(::bs_hook::Il2CppWrapperType::instance);
}
 BGNet::Core::Messages::IUnconnectedReliableResponse BGNet::Core::Messages::IUnconnectedReliableResponse::WithRequestAndResponseId(uint32_t requestId, uint32_t responseId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(),
                            "WithRequestAndResponseId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::IUnconnectedReliableResponse, false>(const_cast<void*>(instance), ___internal_method, requestId, responseId);
}
} // end anonymous namespace
