#pragma once
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixIPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__AixNetworkInterface_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::AixIPInterfaceProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::AixIPInterfaceProperties::*)(System::Net::NetworkInformation::AixNetworkInterface, System::Collections::Generic::List_1<System::Net::IPAddress>, int32_t)>(&System::Net::NetworkInformation::AixIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2859984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixIPInterfaceProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixNetworkInterface>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Net::IPAddress>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixIPInterfaceProperties.ParseRouteInfo_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::ArrayW<::StringW>>)>(&System::Net::NetworkInformation::AixIPInterfaceProperties::ParseRouteInfo_icall)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2859a30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixIPInterfaceProperties>::get(),
                            "ParseRouteInfo_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::AixIPInterfaceProperties.get_GatewayAddresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::GatewayIPAddressInformationCollection (System::Net::NetworkInformation::AixIPInterfaceProperties::*)()>(&System::Net::NetworkInformation::AixIPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2859a74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::AixIPInterfaceProperties),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixIPInterfaceProperties>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::NetworkInformation::AixIPInterfaceProperties::__set__mtu(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::NetworkInformation::AixIPInterfaceProperties::__get__mtu() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::NetworkInformation::AixIPInterfaceProperties System::Net::NetworkInformation::AixIPInterfaceProperties::New_ctor(System::Net::NetworkInformation::AixNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses, int32_t mtu)  {
System::Net::NetworkInformation::AixIPInterfaceProperties o{THROW_UNLESS(::il2cpp_utils::New<System::Net::NetworkInformation::AixIPInterfaceProperties>(iface, addresses, mtu))};
return o;
}
 void System::Net::NetworkInformation::AixIPInterfaceProperties::_ctor(System::Net::NetworkInformation::AixNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses, int32_t mtu)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixIPInterfaceProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::AixNetworkInterface>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Net::IPAddress>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iface, addresses, mtu);
}
 bool System::Net::NetworkInformation::AixIPInterfaceProperties::ParseRouteInfo_icall(::StringW iface, ByRef<::ArrayW<::StringW>> gw_addr_list)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixIPInterfaceProperties>::get(),
                            "ParseRouteInfo_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, iface, gw_addr_list);
}
 System::Net::NetworkInformation::GatewayIPAddressInformationCollection System::Net::NetworkInformation::AixIPInterfaceProperties::get_GatewayAddresses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::AixIPInterfaceProperties>::get(),
                            "get_GatewayAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::GatewayIPAddressInformationCollection, false>(const_cast<void*>(instance), ___internal_method);
}
