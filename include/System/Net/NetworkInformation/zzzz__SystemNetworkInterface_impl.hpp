#pragma once
#include "System/Net/NetworkInformation/zzzz__SystemNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::SystemNetworkInterface.GetNetworkInterfaces
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Net::NetworkInformation::NetworkInterface> (*)()>(&System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x28590f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::SystemNetworkInterface>::get(),
                            "GetNetworkInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Net::NetworkInformation::SystemNetworkInterface::__set_nif(System::Net::NetworkInformation::NetworkInterfaceFactory value)  {
::cordl_internals::setStaticField<System::Net::NetworkInformation::NetworkInterfaceFactory, "nif", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::SystemNetworkInterface>::get>(std::forward<System::Net::NetworkInformation::NetworkInterfaceFactory>(value));
}
 System::Net::NetworkInformation::NetworkInterfaceFactory System::Net::NetworkInformation::SystemNetworkInterface::__get_nif()  {
return ::cordl_internals::getStaticField<System::Net::NetworkInformation::NetworkInterfaceFactory, "nif", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::SystemNetworkInterface>::get>();
}
 ::ArrayW<System::Net::NetworkInformation::NetworkInterface> System::Net::NetworkInformation::SystemNetworkInterface::GetNetworkInterfaces()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::SystemNetworkInterface>::get(),
                            "GetNetworkInterfaces",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Net::NetworkInformation::NetworkInterface>, false>(nullptr, ___internal_method);
}
