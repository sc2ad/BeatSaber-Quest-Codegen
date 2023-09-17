#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateResponse_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::IUnconnectedAuthenticateResponse.get_isAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::IUnconnectedAuthenticateResponse::*)()>(&BGNet::Core::Messages::IUnconnectedAuthenticateResponse::get_isAuthenticated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::IUnconnectedAuthenticateResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedAuthenticateResponse>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableResponse
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator BGNet::Core::Messages::IUnconnectedReliableResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableResponse(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableRequest(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateResponse::operator BGNet::Core::Messages::IUnconnectedResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedResponse(::bs_hook::Il2CppWrapperType::instance);
}
 bool BGNet::Core::Messages::IUnconnectedAuthenticateResponse::get_isAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::IUnconnectedAuthenticateResponse>::get(),
                            "get_isAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
