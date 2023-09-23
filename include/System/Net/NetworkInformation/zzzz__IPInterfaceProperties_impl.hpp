#pragma once
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformationCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::IPInterfaceProperties.get_UnicastAddresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::UnicastIPAddressInformationCollection (System::Net::NetworkInformation::IPInterfaceProperties::*)()>(&System::Net::NetworkInformation::IPInterfaceProperties::get_UnicastAddresses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::IPInterfaceProperties),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPInterfaceProperties>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::IPInterfaceProperties.get_GatewayAddresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::GatewayIPAddressInformationCollection (System::Net::NetworkInformation::IPInterfaceProperties::*)()>(&System::Net::NetworkInformation::IPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::IPInterfaceProperties),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPInterfaceProperties>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::IPInterfaceProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::IPInterfaceProperties::*)()>(&System::Net::NetworkInformation::IPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x285902c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPInterfaceProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Net::NetworkInformation::UnicastIPAddressInformationCollection System::Net::NetworkInformation::IPInterfaceProperties::get_UnicastAddresses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPInterfaceProperties>::get(),
                            "get_UnicastAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::UnicastIPAddressInformationCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Net::NetworkInformation::GatewayIPAddressInformationCollection System::Net::NetworkInformation::IPInterfaceProperties::get_GatewayAddresses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPInterfaceProperties>::get(),
                            "get_GatewayAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::GatewayIPAddressInformationCollection, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Net::NetworkInformation::IPInterfaceProperties::IPInterfaceProperties()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IPInterfaceProperties>())) {}
 void System::Net::NetworkInformation::IPInterfaceProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::IPInterfaceProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
