#pragma once
#include "GlobalNamespace/zzzz__IUnconnectedMessageReceiver_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
namespace {
//  Writing Method size for method: GlobalNamespace::IUnconnectedMessageReceiver.ReceiveUnconnectedMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedMessageReceiver::*)(System::Net::IPEndPoint, LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::IUnconnectedMessageReceiver::ReceiveUnconnectedMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IUnconnectedMessageReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  GlobalNamespace::IUnconnectedMessageReceiver::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::IUnconnectedMessageReceiver::ReceiveUnconnectedMessage(System::Net::IPEndPoint endPoint, LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageReceiver>::get(),
                            "ReceiveUnconnectedMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, reader);
}
} // end anonymous namespace
