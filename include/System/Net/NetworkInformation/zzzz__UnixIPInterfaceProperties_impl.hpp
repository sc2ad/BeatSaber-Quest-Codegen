#pragma once
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformationCollection_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::UnixIPInterfaceProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::UnixIPInterfaceProperties::*)(System::Net::NetworkInformation::UnixNetworkInterface, System::Collections::Generic::List_1<System::Net::IPAddress>)>(&System::Net::NetworkInformation::UnixIPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2859a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPInterfaceProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::UnixNetworkInterface>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Net::IPAddress>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::NetworkInformation::UnixIPInterfaceProperties.get_UnicastAddresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::NetworkInformation::UnicastIPAddressInformationCollection (System::Net::NetworkInformation::UnixIPInterfaceProperties::*)()>(&System::Net::NetworkInformation::UnixIPInterfaceProperties::get_UnicastAddresses)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x285e1ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::NetworkInformation::UnixIPInterfaceProperties),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPInterfaceProperties>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void System::Net::NetworkInformation::UnixIPInterfaceProperties::__set_iface(System::Net::NetworkInformation::UnixNetworkInterface value)  {
::cordl_internals::setInstanceField<System::Net::NetworkInformation::UnixNetworkInterface, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::NetworkInformation::UnixNetworkInterface>(value));
}
constexpr System::Net::NetworkInformation::UnixNetworkInterface System::Net::NetworkInformation::UnixIPInterfaceProperties::__get_iface() const {
return ::cordl_internals::getInstanceField<System::Net::NetworkInformation::UnixNetworkInterface, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::NetworkInformation::UnixIPInterfaceProperties::__set_addresses(System::Collections::Generic::List_1<System::Net::IPAddress> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Net::IPAddress>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Net::IPAddress>>(value));
}
constexpr System::Collections::Generic::List_1<System::Net::IPAddress> System::Net::NetworkInformation::UnixIPInterfaceProperties::__get_addresses() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Net::IPAddress>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Net::NetworkInformation::UnixIPInterfaceProperties::__set_ns(System::Text::RegularExpressions::Regex value)  {
::cordl_internals::setStaticField<System::Text::RegularExpressions::Regex, "ns", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPInterfaceProperties>::get>(std::forward<System::Text::RegularExpressions::Regex>(value));
}
 System::Text::RegularExpressions::Regex System::Net::NetworkInformation::UnixIPInterfaceProperties::__get_ns()  {
return ::cordl_internals::getStaticField<System::Text::RegularExpressions::Regex, "ns", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPInterfaceProperties>::get>();
}
 void System::Net::NetworkInformation::UnixIPInterfaceProperties::__set_search(System::Text::RegularExpressions::Regex value)  {
::cordl_internals::setStaticField<System::Text::RegularExpressions::Regex, "search", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPInterfaceProperties>::get>(std::forward<System::Text::RegularExpressions::Regex>(value));
}
 System::Text::RegularExpressions::Regex System::Net::NetworkInformation::UnixIPInterfaceProperties::__get_search()  {
return ::cordl_internals::getStaticField<System::Text::RegularExpressions::Regex, "search", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPInterfaceProperties>::get>();
}
// Ctor Parameters [CppParam { name: "iface", ty: "System::Net::NetworkInformation::UnixNetworkInterface", modifiers: "", def_value: None }, CppParam { name: "addresses", ty: "System::Collections::Generic::List_1<System::Net::IPAddress>", modifiers: "", def_value: None }]
 System::Net::NetworkInformation::UnixIPInterfaceProperties::UnixIPInterfaceProperties(System::Net::NetworkInformation::UnixNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses)  : System::Net::NetworkInformation::IPInterfaceProperties(THROW_UNLESS(::il2cpp_utils::New<UnixIPInterfaceProperties>(iface, addresses))) {}
 void System::Net::NetworkInformation::UnixIPInterfaceProperties::_ctor(System::Net::NetworkInformation::UnixNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPInterfaceProperties>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::NetworkInformation::UnixNetworkInterface>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Net::IPAddress>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iface, addresses);
}
 System::Net::NetworkInformation::UnicastIPAddressInformationCollection System::Net::NetworkInformation::UnixIPInterfaceProperties::get_UnicastAddresses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::UnixIPInterfaceProperties>::get(),
                            "get_UnicastAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::NetworkInformation::UnicastIPAddressInformationCollection, false>(const_cast<void*>(instance), ___internal_method);
}
