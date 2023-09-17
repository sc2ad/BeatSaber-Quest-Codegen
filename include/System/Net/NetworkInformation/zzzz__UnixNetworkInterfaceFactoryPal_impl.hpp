#pragma once
namespace {
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceFactoryPal_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceFactory (*)()>(&::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal::Create)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x285dc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::System::Net::NetworkInformation::NetworkInterfaceFactory ::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::NetworkInterfaceFactory, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
