#pragma once
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformation_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__SystemGatewayIPAddressInformation_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressCollection_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::SystemGatewayIPAddressInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::SystemGatewayIPAddressInformation::*)(System::Net::IPAddress)>(&System::Net::NetworkInformation::SystemGatewayIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x28592f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::SystemGatewayIPAddressInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::SystemGatewayIPAddressInformation.ToGatewayIpAddressInformationCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::GatewayIPAddressInformationCollection (*)(System::Net::NetworkInformation::IPAddressCollection)>(&System::Net::NetworkInformation::SystemGatewayIPAddressInformation::ToGatewayIpAddressInformationCollection)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x2859320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::SystemGatewayIPAddressInformation>::get(),
                            "ToGatewayIpAddressInformationCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::IPAddressCollection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::NetworkInformation::SystemGatewayIPAddressInformation::__set_address(System::Net::IPAddress value)  {
::cordl_internals::setInstanceField<System::Net::IPAddress, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPAddress>(value));
}
constexpr System::Net::IPAddress System::Net::NetworkInformation::SystemGatewayIPAddressInformation::__get_address() const {
return ::cordl_internals::getInstanceField<System::Net::IPAddress, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::NetworkInformation::SystemGatewayIPAddressInformation System::Net::NetworkInformation::SystemGatewayIPAddressInformation::New_ctor(System::Net::IPAddress address)  {
System::Net::NetworkInformation::SystemGatewayIPAddressInformation o{THROW_UNLESS(::il2cpp_utils::New<System::Net::NetworkInformation::SystemGatewayIPAddressInformation>(address))};
return o;
}
 void System::Net::NetworkInformation::SystemGatewayIPAddressInformation::_ctor(System::Net::IPAddress address)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::SystemGatewayIPAddressInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPAddress>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, address);
}
 System::Net::NetworkInformation::GatewayIPAddressInformationCollection System::Net::NetworkInformation::SystemGatewayIPAddressInformation::ToGatewayIpAddressInformationCollection(System::Net::NetworkInformation::IPAddressCollection addresses)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::SystemGatewayIPAddressInformation>::get(),
                            "ToGatewayIpAddressInformationCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::IPAddressCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::GatewayIPAddressInformationCollection, false>(nullptr, ___internal_method, addresses);
}
