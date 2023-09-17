#pragma once
namespace {
#include "LiteNetLib/zzzz__INetSocketListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
//  Writing Method size for method: ::LiteNetLib::INetSocketListener.OnMessageReceived
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::INetSocketListener::*)(::ArrayW<uint8_t>, int32_t, ::System::Net::Sockets::SocketError, ::System::Net::IPEndPoint)>(&::LiteNetLib::INetSocketListener::OnMessageReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LiteNetLib::INetSocketListener),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetSocketListener>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::LiteNetLib::INetSocketListener::OnMessageReceived(::ArrayW<uint8_t> data, int32_t length, ::System::Net::Sockets::SocketError errorCode, ::System::Net::IPEndPoint remoteEndPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetSocketListener>::get(),
                            "OnMessageReceived",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, length, errorCode, remoteEndPoint);
}
} // end anonymous namespace
