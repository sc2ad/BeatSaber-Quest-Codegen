#pragma once
#include "LiteNetLib/zzzz__IDeliveryEventListener_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
//  Writing Method size for method: LiteNetLib::IDeliveryEventListener.OnMessageDelivered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::IDeliveryEventListener::*)(LiteNetLib::NetPeer, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::IDeliveryEventListener::OnMessageDelivered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::IDeliveryEventListener),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::IDeliveryEventListener>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void LiteNetLib::IDeliveryEventListener::OnMessageDelivered(LiteNetLib::NetPeer peer, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::IDeliveryEventListener>::get(),
                            "OnMessageDelivered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, userData);
}
