#pragma once
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__FreeBSDNetworkInterfaceAPI_def.hpp"
//  Writing Method size for method: System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::*)()>(&System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x285b2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::New_ctor()  {
System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI o{THROW_UNLESS(::il2cpp_utils::New<System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI>())};
return o;
}
 void System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
